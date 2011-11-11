<?php
/**
 * @file
 * join_us.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function join_us_user_default_permissions() {
  $permissions = array();

  // Exported permission: create members content
  $permissions['create members content'] = array(
    'name' => 'create members content',
    'roles' => array(),
  );

  // Exported permission: delete any members content
  $permissions['delete any members content'] = array(
    'name' => 'delete any members content',
    'roles' => array(),
  );

  // Exported permission: delete own members content
  $permissions['delete own members content'] = array(
    'name' => 'delete own members content',
    'roles' => array(),
  );

  // Exported permission: edit any members content
  $permissions['edit any members content'] = array(
    'name' => 'edit any members content',
    'roles' => array(),
  );

  // Exported permission: edit own members content
  $permissions['edit own members content'] = array(
    'name' => 'edit own members content',
    'roles' => array(),
  );

  return $permissions;
}
