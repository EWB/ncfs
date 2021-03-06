<?php
/**
 * @file
 * base_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_event_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function base_event_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function base_event_node_info() {
  $items = array(
    'event_base' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create an event - includes all-day and repeating options.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
