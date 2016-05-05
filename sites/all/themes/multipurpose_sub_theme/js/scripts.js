jQuery(document).ready(function($) {
  $('body').dblclick(function(){
    alert('Stop clicking so much!');
  });

  $('li.leaf').addClass('animated');
  $('li.animated').click(function() {
    $(this).addClass('shake');
  })
});
