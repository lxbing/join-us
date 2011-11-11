<?php
/**
 * @file
 * join_us.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function join_us_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function join_us_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function join_us_node_info() {
  $items = array(
    'members' => array(
      'name' => t('成员介绍'),
      'base' => 'node_content',
      'description' => t('关于我们协会成员的一些简单介绍。'),
      'has_title' => '1',
      'title_label' => t('成员'),
      'help' => '',
    ),
  );
  return $items;
}
