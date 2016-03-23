<?php
/**
 * @file
 */

function _node_json_service_retrieve_node($site_api, $nid, $page = '') {
  $node = node_load($nid);
  if (empty($page)) {
    return $node;
  }
  else {
    return drupal_json_output($node);
  }
}