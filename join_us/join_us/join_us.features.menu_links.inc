<?php
/**
 * @file
 * join_us.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function join_us_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:http://yuxieswufe/aboutus
  $menu_links['main-menu:http://yuxieswufe/aboutus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://yuxieswufe/aboutus',
    'router_path' => '',
    'link_title' => '关于羽协',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('关于羽协');


  return $menu_links;
}
