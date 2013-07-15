<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  
  <?php if (!$page && $title): ?>
  <header>

   
  </header>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?> 

  <div<?php print $content_attributes; ?>>
  <div class="grid-7 alpha">
  
      <br /><h2>
 <?php  
   print render($content['field_h1']);
   show($content['body']);?>
      </h2>
  </div>
<div class="grid-7 alpha"> 
  <?php print render($Video_player);?>
</div>
<div class="grid-4 omega">
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_article_video']);
      hide($content['field_article_still']);
      hide($content['field_h1']);	
  print render($content);
?>
</div>
  </div>
  <div style="padding-left:10%;padding-right:10%;padding-top:1em">
<?php

?>
</div>
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>