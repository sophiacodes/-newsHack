/*! newshack 2013-10-18 */
!function(){var a={dev:"http://localhost:8888",prod:"http://localhost:8888"},b="prod",c=a[b];!window.bbcNewsResponsive,el=document.getElementById("newshack"),el.className="ns__clearfix",config={paths:{js:c+"/newshack/www/js/module",lib:c+"/newshack/www/js/lib",bootstrap:c+"/newshack/www/js/bootstrap"}},"dev"!==b&&(config.paths.js=c+"/newshack/www/js/compiled/desktop",console.log(config.paths.js)),require(config,["dev"!==b?"js/ns_all":"js/app"],function(){require(["js/app"],function(a){new a})})}();