<!DOCTYPE html>
<html>
<head>
      <title>tool</title>
      <link rel="stylesheet" href="style.allcss">
      <style>
        @keyframes box {
        
                  0%{
                       left:200px;
                       top:50px;
                       background:red
                  
                  
                         }
              
                  40%{
                       top:100px;
                       left:30px;
                       background:black;
                  
                  
                          }
                  70%{
                        top:500px;
                        left:50px;
                        backgrond:teal;
                  
                  
                  
                        }
                  
                  100%{
                  top:100px;
                  left:50px;
                  backgrond:grey;
                  
                  
                  
                  }
                  }
                    
                       
          .dat{
                  position:relative;
                  animation-name:box;
                  animation-iteration-count:infinite;
                  animation-duration:3s;
                  width:200px;
                  height:200px;
                  background:black;
                 
                          
                          
                          }
                          
                          
                    
        
        
        
        
        
                             
        
        
        
        
        
        
        
        
        
  
      
      
      
      </style>
      <script>
        function zap(){
        
                  var cat=document.getElementById("cat")
                  var wap=document.getElementById("wap")
                  
                  
                  if(cat.style.display=="block"){
                  
                         cat.style.display="inline";
                         wap.style.display="block";
                  
                                                }
        
                 else{
                        cat.style.display="block";
                         wap.style.display="inline";
               
                         }
        
        
                            }
      
      
      
      
      
      
      
      
      
      
      </script>
      
      </head>
      <body>
      
      <div class="dat" id="wap">
      </div>
      <button id="cat"  onclick="zap()">click</button>
      
      
      
      </body>
      </html>
