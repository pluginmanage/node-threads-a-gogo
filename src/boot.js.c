
static const char* kBoot_js= "\n(function boot0(version,global){version='0.1.8';global=(function(){return this})();if(global.process){process.versions.threads_a_gogo=version;if(!global.setImmediate){global.setImmediate=function setImmediate(f){process.nextTick(f)};}}\nfunction boot(that,CHUNK,_on,_ntq,global){that=this;function nextTick(cb){_ntq.push(cb);return that;}\nCHUNK=8192;function dispatchNextTicks(len,i){if(_ntq.length){len=_ntq.length>CHUNK?CHUNK:_ntq.length;i=0;try{do{_ntq[i++]()}while(i<len);that._ntq=_ntq=_ntq.splice(i);}\ncatch(e){that._ntq=_ntq=_ntq.splice(i);throw e;}}\nreturn _ntq.length;}\nfunction load(path,cb){that.eval(require('fs').readFileSync(path,'utf8'),cb);return that;}\nfunction on(event,f,q){(q=_on[event])?q.push(f):(_on[event]=[f]);return that;}\nfunction once(event,f,q){(q=_on[event])?0:(q=_on[event]=[]);q.once?q.once.push(f):(q.once=[f]);return that;}\nfunction removeAllListeners(event){event?delete _on[event]:(that._on=_on={});return that;}\nfunction dispatchEvents(evento,argumentos){var q=_on[evento];if(q){if(q.once){while(q.once.length){q.once.shift().apply(that,argumentos);}}\nq.forEach(function(v,i,o){v.apply(that,argumentos)});}}\nglobal=(function(){return this})();if(global.process){that.on=on;that.once=once;that._on=_on={};that.load=load;that.removeAllListeners=removeAllListeners;that.version=version;return dispatchEvents;}\nelse{thread=that;that.on=on;that.once=once;that._on=_on={};that._ntq=_ntq=[];that.nextTick=global.setImmediate=nextTick;that.removeAllListeners=removeAllListeners;that.version=version;return{dev:dispatchEvents,dnt:dispatchNextTicks};}}\nreturn boot;})()\n";
