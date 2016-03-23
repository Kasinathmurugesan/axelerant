<?php
/**
 * @file
 */

function _json_node_retrieve_node($site_api, $nid, $page = '') {
  $node = node_load($nid);
  if (empty($page)) {
    return $node;
  }
  else {
    return drupal_json_output($node);
  }
}