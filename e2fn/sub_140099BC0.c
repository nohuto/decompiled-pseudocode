void __fastcall sub_140099BC0(__int64 a1, __int64 a2)
{
  PVOID v4; // rbx
  PVOID v5; // r14
  PVOID v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(PVOID); // rax
  __int64 (__fastcall *v9)(PVOID); // rax
  PVOID v10; // rbx
  PVOID v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(PVOID); // rax
  __int64 (__fastcall *v14)(PVOID); // rax
  PVOID v15; // rbx
  PVOID v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall **v18)(PVOID); // rax
  __int64 (__fastcall *v19)(PVOID); // rax
  PVOID v20; // rbx
  PVOID v21; // rdx
  __int64 v22; // rbx
  __int64 (__fastcall **v23)(PVOID); // rax
  __int64 (__fastcall *v24)(PVOID); // rax
  PVOID v25; // rbx
  PVOID v26; // rdx
  __int64 v27; // rbx
  __int64 (__fastcall **v28)(PVOID); // rax
  __int64 (__fastcall *v29)(PVOID); // rax
  PVOID v30; // rbx
  PVOID v31; // rdx
  __int64 v32; // rbx
  __int64 (__fastcall **v33)(PVOID); // rax
  __int64 (__fastcall *v34)(PVOID); // rax
  PVOID v35; // rbx
  PVOID v36; // rdx
  __int64 v37; // rbx
  __int64 (__fastcall **v38)(PVOID); // rax
  __int64 (__fastcall *v39)(PVOID); // rax
  PVOID v40; // rbx
  PVOID v41; // rdx
  __int64 v42; // rbx
  __int64 (__fastcall **v43)(PVOID); // rax
  __int64 (__fastcall *v44)(PVOID); // rax
  PVOID v45; // rbx
  PVOID v46; // rdx
  __int64 v47; // rbx
  __int64 (__fastcall **v48)(PVOID); // rax
  __int64 (__fastcall *v49)(PVOID); // rax
  PVOID v50; // rbx
  PVOID v51; // rdx
  __int64 v52; // rbx
  __int64 (__fastcall **v53)(PVOID); // rax
  __int64 (__fastcall *v54)(PVOID); // rax
  PVOID v55; // rbx
  PVOID v56; // rdx
  __int64 v57; // rbx
  __int64 (__fastcall **v58)(PVOID); // rax
  __int64 (__fastcall *v59)(PVOID); // rax
  PVOID v60; // rbx
  PVOID v61; // rdx
  __int64 v62; // rbx
  __int64 (__fastcall **v63)(PVOID); // rax
  __int64 (__fastcall *v64)(PVOID); // rax
  PVOID v65; // rbx
  PVOID v66; // rdx
  __int64 v67; // rbx
  __int64 (__fastcall **v68)(PVOID); // rax
  __int64 (__fastcall *v69)(PVOID); // rax
  PVOID v70; // rbx
  PVOID v71; // rdx
  __int64 v72; // rbx
  __int64 (__fastcall **v73)(PVOID); // rax
  __int64 (__fastcall *v74)(PVOID); // rax
  PVOID v75; // rbx
  PVOID v76; // rdx
  __int64 v77; // rbx
  __int64 (__fastcall **v78)(PVOID); // rax
  __int64 (__fastcall *v79)(PVOID); // rax
  PVOID v80; // rbx
  PVOID v81; // rdx
  __int64 v82; // rbx
  __int64 (__fastcall **v83)(PVOID); // rax
  __int64 (__fastcall *v84)(PVOID); // rax
  PVOID v85; // rdx
  PVOID v86; // rbx
  PVOID v87; // rbx
  PVOID v88; // rdx
  __int64 v89; // rbx
  __int64 (__fastcall **v90)(PVOID); // rax
  __int64 (__fastcall *v91)(PVOID); // rax
  PVOID v92; // rdx
  PVOID v93; // rbx
  __int64 v94; // rbx
  __int64 (__fastcall **v95)(PVOID); // rax
  __int64 (__fastcall *v96)(PVOID); // rax
  PVOID v97; // rbx
  PVOID v98; // rdx
  __int64 v99; // rbx
  __int64 (__fastcall **v100)(PVOID); // rax
  __int64 (__fastcall *v101)(PVOID); // rax
  PVOID v102; // rbx
  PVOID v103; // rdx
  __int64 v104; // rbx
  __int64 (__fastcall **v105)(PVOID); // rdx
  PVOID v106; // rbx
  __int64 (__fastcall **v107)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v108; // [rsp+30h] [rbp-D8h]
  PVOID v109; // [rsp+38h] [rbp-D0h]
  __int64 v110; // [rsp+40h] [rbp-C8h]
  __int64 v111; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v112)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+58h] [rbp-B0h]
  PVOID v114; // [rsp+60h] [rbp-A8h]
  __int64 v115; // [rsp+68h] [rbp-A0h]
  __int64 v116; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v117)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v118; // [rsp+80h] [rbp-88h]
  PVOID v119; // [rsp+88h] [rbp-80h]
  __int64 v120; // [rsp+90h] [rbp-78h]
  __int64 v121; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v122)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v123; // [rsp+A8h] [rbp-60h]
  PVOID v124; // [rsp+B0h] [rbp-58h]
  __int64 v125; // [rsp+B8h] [rbp-50h]
  __int64 v126; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v127)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v128; // [rsp+D0h] [rbp-38h]
  PVOID v129; // [rsp+D8h] [rbp-30h]
  __int64 v130; // [rsp+E0h] [rbp-28h]
  __int64 v131; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v132)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v133; // [rsp+F8h] [rbp-10h]
  PVOID v134; // [rsp+100h] [rbp-8h]
  __int64 v135; // [rsp+108h] [rbp+0h]
  __int64 v136; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v137)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v138; // [rsp+120h] [rbp+18h]
  PVOID v139; // [rsp+128h] [rbp+20h]
  __int64 v140; // [rsp+130h] [rbp+28h]
  __int64 v141; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v142)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v143; // [rsp+148h] [rbp+40h]
  PVOID v144; // [rsp+150h] [rbp+48h]
  __int64 v145; // [rsp+158h] [rbp+50h]
  __int64 v146; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v147)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v148; // [rsp+170h] [rbp+68h]
  PVOID v149; // [rsp+178h] [rbp+70h]
  __int64 v150; // [rsp+180h] [rbp+78h]
  __int64 v151; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v152)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v153; // [rsp+198h] [rbp+90h]
  PVOID v154; // [rsp+1A0h] [rbp+98h]
  __int64 v155; // [rsp+1A8h] [rbp+A0h]
  __int64 v156; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v157)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v158; // [rsp+1C0h] [rbp+B8h]
  PVOID v159; // [rsp+1C8h] [rbp+C0h]
  __int64 v160; // [rsp+1D0h] [rbp+C8h]
  __int64 v161; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v162)(PVOID); // [rsp+1E0h] [rbp+D8h] BYREF
  __int16 v163; // [rsp+1E8h] [rbp+E0h]
  PVOID v164; // [rsp+1F0h] [rbp+E8h]
  __int64 v165; // [rsp+1F8h] [rbp+F0h]
  __int64 v166; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v167)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int16 v168; // [rsp+210h] [rbp+108h]
  PVOID v169; // [rsp+218h] [rbp+110h]
  __int64 v170; // [rsp+220h] [rbp+118h]
  __int64 v171; // [rsp+228h] [rbp+120h]
  __int64 (__fastcall **v172)(PVOID); // [rsp+230h] [rbp+128h] BYREF
  __int16 v173; // [rsp+238h] [rbp+130h]
  PVOID v174; // [rsp+240h] [rbp+138h]
  __int64 v175; // [rsp+248h] [rbp+140h]
  __int64 v176; // [rsp+250h] [rbp+148h]
  __int64 (__fastcall **v177)(PVOID); // [rsp+258h] [rbp+150h] BYREF
  __int16 v178; // [rsp+260h] [rbp+158h]
  PVOID v179; // [rsp+268h] [rbp+160h]
  __int64 v180; // [rsp+270h] [rbp+168h]
  __int64 v181; // [rsp+278h] [rbp+170h]
  __int64 (__fastcall **v182)(PVOID); // [rsp+280h] [rbp+178h] BYREF
  __int16 v183; // [rsp+288h] [rbp+180h]
  PVOID v184; // [rsp+290h] [rbp+188h]
  __int64 v185; // [rsp+298h] [rbp+190h]
  __int64 v186; // [rsp+2A0h] [rbp+198h]
  __int64 (__fastcall **v187)(PVOID); // [rsp+2A8h] [rbp+1A0h] BYREF
  __int16 v188; // [rsp+2B0h] [rbp+1A8h]
  PVOID v189; // [rsp+2B8h] [rbp+1B0h]
  __int64 v190; // [rsp+2C0h] [rbp+1B8h]
  __int64 v191; // [rsp+2C8h] [rbp+1C0h]
  __int64 (__fastcall **v192)(PVOID); // [rsp+2D0h] [rbp+1C8h] BYREF
  __int16 v193; // [rsp+2D8h] [rbp+1D0h]
  PVOID v194; // [rsp+2E0h] [rbp+1D8h]
  __int64 v195; // [rsp+2E8h] [rbp+1E0h]
  __int64 v196; // [rsp+2F0h] [rbp+1E8h]
  __int64 (__fastcall **v197)(PVOID); // [rsp+2F8h] [rbp+1F0h] BYREF
  __int16 v198; // [rsp+300h] [rbp+1F8h]
  PVOID v199; // [rsp+308h] [rbp+200h]
  __int64 v200; // [rsp+310h] [rbp+208h]
  __int64 v201; // [rsp+318h] [rbp+210h]
  __int64 (__fastcall **v202)(PVOID); // [rsp+320h] [rbp+218h] BYREF
  __int16 v203; // [rsp+328h] [rbp+220h]
  PVOID v204; // [rsp+330h] [rbp+228h]
  __int64 v205; // [rsp+338h] [rbp+230h]
  __int64 v206; // [rsp+340h] [rbp+238h]
  __int64 (__fastcall **v207)(PVOID); // [rsp+348h] [rbp+240h] BYREF
  __int16 v208; // [rsp+350h] [rbp+248h]
  PVOID v209; // [rsp+358h] [rbp+250h]
  __int64 v210; // [rsp+360h] [rbp+258h]
  __int64 v211; // [rsp+368h] [rbp+260h]
  __int64 (__fastcall **v212)(PVOID); // [rsp+370h] [rbp+268h] BYREF
  __int16 v213; // [rsp+378h] [rbp+270h]
  PVOID v214; // [rsp+380h] [rbp+278h]
  __int64 v215; // [rsp+388h] [rbp+280h]
  __int64 v216; // [rsp+390h] [rbp+288h]
  __int64 (__fastcall **v217)(PVOID); // [rsp+398h] [rbp+290h] BYREF
  __int16 v218; // [rsp+3A0h] [rbp+298h]
  PVOID v219; // [rsp+3A8h] [rbp+2A0h]
  __int64 v220; // [rsp+3B0h] [rbp+2A8h]
  __int64 v221; // [rsp+3B8h] [rbp+2B0h]
  __int64 (__fastcall **v222)(PVOID); // [rsp+3C0h] [rbp+2B8h] BYREF
  __int16 v223; // [rsp+3C8h] [rbp+2C0h]
  PVOID v224; // [rsp+3D0h] [rbp+2C8h]
  __int64 v225; // [rsp+3D8h] [rbp+2D0h]
  __int64 v226; // [rsp+3E0h] [rbp+2D8h]
  __int64 (__fastcall **v227)(PVOID); // [rsp+3E8h] [rbp+2E0h] BYREF
  __int16 v228; // [rsp+3F0h] [rbp+2E8h]
  PVOID v229; // [rsp+3F8h] [rbp+2F0h]
  __int64 v230; // [rsp+400h] [rbp+2F8h]
  __int64 v231; // [rsp+408h] [rbp+300h]
  __int64 (__fastcall **v232)(PVOID); // [rsp+410h] [rbp+308h] BYREF
  __int16 v233; // [rsp+418h] [rbp+310h]
  PVOID v234; // [rsp+420h] [rbp+318h]
  __int64 v235; // [rsp+428h] [rbp+320h]
  __int64 v236; // [rsp+430h] [rbp+328h]
  __int64 (__fastcall **v237)(PVOID); // [rsp+438h] [rbp+330h] BYREF
  __int16 v238; // [rsp+440h] [rbp+338h]
  PVOID v239; // [rsp+448h] [rbp+340h]
  __int64 v240; // [rsp+450h] [rbp+348h]
  __int64 v241; // [rsp+458h] [rbp+350h]
  __int64 (__fastcall **v242)(PVOID); // [rsp+460h] [rbp+358h] BYREF
  __int16 v243; // [rsp+468h] [rbp+360h]
  PVOID v244; // [rsp+470h] [rbp+368h]
  __int64 v245; // [rsp+478h] [rbp+370h]
  __int64 v246; // [rsp+480h] [rbp+378h]
  __int64 (__fastcall **v247)(PVOID); // [rsp+488h] [rbp+380h] BYREF
  __int16 v248; // [rsp+490h] [rbp+388h]
  PVOID v249; // [rsp+498h] [rbp+390h]
  __int64 v250; // [rsp+4A0h] [rbp+398h]
  __int64 v251; // [rsp+4A8h] [rbp+3A0h]
  __int64 (__fastcall **v252)(PVOID); // [rsp+4B0h] [rbp+3A8h] BYREF
  __int16 v253; // [rsp+4B8h] [rbp+3B0h]
  PVOID v254; // [rsp+4C0h] [rbp+3B8h]
  __int64 v255; // [rsp+4C8h] [rbp+3C0h]
  __int64 v256; // [rsp+4D0h] [rbp+3C8h]
  __int64 (__fastcall **v257)(PVOID); // [rsp+4D8h] [rbp+3D0h] BYREF
  __int16 v258; // [rsp+4E0h] [rbp+3D8h]
  PVOID v259; // [rsp+4E8h] [rbp+3E0h]
  __int64 v260; // [rsp+4F0h] [rbp+3E8h]
  __int64 v261; // [rsp+4F8h] [rbp+3F0h]
  __int64 (__fastcall **v262)(PVOID); // [rsp+500h] [rbp+3F8h] BYREF
  __int16 v263; // [rsp+508h] [rbp+400h]
  PVOID v264; // [rsp+510h] [rbp+408h]
  __int64 v265; // [rsp+518h] [rbp+410h]
  __int64 v266; // [rsp+520h] [rbp+418h]
  __int64 (__fastcall **v267)(PVOID); // [rsp+528h] [rbp+420h] BYREF
  __int16 v268; // [rsp+530h] [rbp+428h]
  PVOID v269; // [rsp+538h] [rbp+430h]
  __int64 v270; // [rsp+540h] [rbp+438h]
  __int64 v271; // [rsp+548h] [rbp+440h]
  __int64 (__fastcall **v272)(PVOID); // [rsp+550h] [rbp+448h] BYREF
  __int16 v273; // [rsp+558h] [rbp+450h]
  PVOID v274; // [rsp+560h] [rbp+458h]
  __int64 v275; // [rsp+568h] [rbp+460h]
  __int64 v276; // [rsp+570h] [rbp+468h]
  __int64 (__fastcall **v277)(PVOID); // [rsp+578h] [rbp+470h] BYREF
  __int16 v278; // [rsp+580h] [rbp+478h]
  PVOID v279; // [rsp+588h] [rbp+480h]
  __int64 v280; // [rsp+590h] [rbp+488h]
  __int64 v281; // [rsp+598h] [rbp+490h]
  __int64 (__fastcall **v282)(PVOID); // [rsp+5A0h] [rbp+498h] BYREF
  __int16 v283; // [rsp+5A8h] [rbp+4A0h]
  PVOID v284; // [rsp+5B0h] [rbp+4A8h]
  __int64 v285; // [rsp+5B8h] [rbp+4B0h]
  __int64 v286; // [rsp+5C0h] [rbp+4B8h]
  __int64 (__fastcall **v287)(PVOID); // [rsp+5C8h] [rbp+4C0h] BYREF
  __int16 v288; // [rsp+5D0h] [rbp+4C8h]
  PVOID v289; // [rsp+5D8h] [rbp+4D0h]
  __int64 v290; // [rsp+5E0h] [rbp+4D8h]
  __int64 v291; // [rsp+5E8h] [rbp+4E0h]
  __int64 (__fastcall **v292)(PVOID); // [rsp+5F0h] [rbp+4E8h] BYREF
  __int16 v293; // [rsp+5F8h] [rbp+4F0h]
  PVOID v294; // [rsp+600h] [rbp+4F8h]
  __int64 v295; // [rsp+608h] [rbp+500h]
  __int64 v296; // [rsp+610h] [rbp+508h]
  __int64 (__fastcall **v297)(PVOID); // [rsp+618h] [rbp+510h] BYREF
  __int16 v298; // [rsp+620h] [rbp+518h]
  PVOID v299; // [rsp+628h] [rbp+520h]
  __int64 v300; // [rsp+630h] [rbp+528h]
  __int64 v301; // [rsp+638h] [rbp+530h]
  __int64 (__fastcall **v302)(PVOID); // [rsp+640h] [rbp+538h] BYREF
  __int16 v303; // [rsp+648h] [rbp+540h]
  PVOID P; // [rsp+650h] [rbp+548h]
  __int64 v305; // [rsp+658h] [rbp+550h]
  __int64 v306; // [rsp+660h] [rbp+558h]
  __int64 (__fastcall **v307)(PVOID); // [rsp+668h] [rbp+560h] BYREF
  __int64 (__fastcall **v308)(); // [rsp+670h] [rbp+568h]
  unsigned __int64 v309; // [rsp+6B0h] [rbp+5A8h]
  __int64 v310; // [rsp+6B8h] [rbp+5B0h]
  __int64 v311; // [rsp+6C0h] [rbp+5B8h]
  __int64 (__fastcall **v312)(PVOID); // [rsp+6C8h] [rbp+5C0h] BYREF
  __int16 v313; // [rsp+6D0h] [rbp+5C8h]
  PVOID v314; // [rsp+6D8h] [rbp+5D0h]
  __int64 v315; // [rsp+6E0h] [rbp+5D8h]
  __int64 v316; // [rsp+6E8h] [rbp+5E0h]
  __int64 (__fastcall **v317)(PVOID); // [rsp+6F8h] [rbp+5F0h] BYREF
  __int64 (__fastcall **v318)(); // [rsp+700h] [rbp+5F8h]
  unsigned __int64 v319; // [rsp+740h] [rbp+638h]
  __int64 v320; // [rsp+748h] [rbp+640h]
  __int64 v321; // [rsp+750h] [rbp+648h]
  __int64 (__fastcall **v322)(PVOID); // [rsp+758h] [rbp+650h] BYREF
  __int64 (__fastcall **v323)(); // [rsp+760h] [rbp+658h]
  unsigned __int64 v324; // [rsp+7A0h] [rbp+698h]
  __int64 v325; // [rsp+7A8h] [rbp+6A0h]
  __int64 v326; // [rsp+7B0h] [rbp+6A8h]
  __int64 (__fastcall **v327)(PVOID); // [rsp+7B8h] [rbp+6B0h] BYREF
  __int64 (__fastcall **v328)(); // [rsp+7C0h] [rbp+6B8h]
  unsigned __int64 v329; // [rsp+800h] [rbp+6F8h]
  __int64 v330; // [rsp+808h] [rbp+700h]
  __int64 v331; // [rsp+810h] [rbp+708h]
  __int64 (__fastcall **v332)(PVOID); // [rsp+818h] [rbp+710h] BYREF
  __int64 (__fastcall **v333)(); // [rsp+820h] [rbp+718h]
  unsigned __int64 v334; // [rsp+860h] [rbp+758h]
  __int64 v335; // [rsp+868h] [rbp+760h]
  __int64 v336; // [rsp+870h] [rbp+768h]
  __int64 (__fastcall **v337)(PVOID); // [rsp+878h] [rbp+770h] BYREF
  __int64 (__fastcall **v338)(); // [rsp+880h] [rbp+778h]
  unsigned __int64 v339; // [rsp+8C0h] [rbp+7B8h]
  __int64 v340; // [rsp+8C8h] [rbp+7C0h]
  __int64 v341; // [rsp+8D0h] [rbp+7C8h]
  __int64 (__fastcall **v342)(PVOID); // [rsp+8D8h] [rbp+7D0h] BYREF
  __int64 (__fastcall **v343)(); // [rsp+8E0h] [rbp+7D8h]
  unsigned __int64 v344; // [rsp+920h] [rbp+818h]
  __int64 v345; // [rsp+928h] [rbp+820h]
  __int64 v346; // [rsp+930h] [rbp+828h]
  __int64 (__fastcall **v347)(PVOID); // [rsp+938h] [rbp+830h] BYREF
  __int64 (__fastcall **v348)(); // [rsp+940h] [rbp+838h]
  unsigned __int64 v349; // [rsp+980h] [rbp+878h]
  __int64 v350; // [rsp+988h] [rbp+880h]
  __int64 v351; // [rsp+990h] [rbp+888h]
  __int64 (__fastcall **v352)(PVOID); // [rsp+998h] [rbp+890h] BYREF
  __int64 (__fastcall **v353)(); // [rsp+9A0h] [rbp+898h]
  unsigned __int64 v354; // [rsp+9E0h] [rbp+8D8h]
  __int64 v355; // [rsp+9E8h] [rbp+8E0h]
  __int64 v356; // [rsp+9F0h] [rbp+8E8h]
  __int64 (__fastcall **v357)(PVOID); // [rsp+9F8h] [rbp+8F0h] BYREF
  __int64 (__fastcall **v358)(); // [rsp+A00h] [rbp+8F8h]
  unsigned __int64 v359; // [rsp+A40h] [rbp+938h]
  __int64 v360; // [rsp+A48h] [rbp+940h]
  __int64 v361; // [rsp+A50h] [rbp+948h]
  __int64 (__fastcall **v362)(PVOID); // [rsp+A58h] [rbp+950h] BYREF
  __int64 (__fastcall **v363)(); // [rsp+A60h] [rbp+958h]
  unsigned __int64 v364; // [rsp+AA0h] [rbp+998h]
  __int64 v365; // [rsp+AA8h] [rbp+9A0h]
  __int64 v366; // [rsp+AB0h] [rbp+9A8h]
  __int64 (__fastcall **v367)(PVOID); // [rsp+AB8h] [rbp+9B0h] BYREF
  __int64 (__fastcall **v368)(); // [rsp+AC0h] [rbp+9B8h]
  unsigned __int64 v369; // [rsp+B00h] [rbp+9F8h]
  __int64 v370; // [rsp+B08h] [rbp+A00h]
  __int64 v371; // [rsp+B10h] [rbp+A08h]
  __int64 (__fastcall **v372)(PVOID); // [rsp+B18h] [rbp+A10h] BYREF
  __int64 (__fastcall **v373)(); // [rsp+B20h] [rbp+A18h]
  unsigned __int64 v374; // [rsp+B60h] [rbp+A58h]
  __int64 v375; // [rsp+B68h] [rbp+A60h]
  __int64 v376; // [rsp+B70h] [rbp+A68h]
  __int64 (__fastcall **v377)(PVOID); // [rsp+B78h] [rbp+A70h] BYREF
  __int64 (__fastcall **v378)(); // [rsp+B80h] [rbp+A78h]
  unsigned __int64 v379; // [rsp+BC0h] [rbp+AB8h]
  __int64 v380; // [rsp+BC8h] [rbp+AC0h]
  __int64 v381; // [rsp+BD0h] [rbp+AC8h]
  __int64 (__fastcall **v382)(PVOID); // [rsp+BD8h] [rbp+AD0h] BYREF
  __int64 (__fastcall **v383)(); // [rsp+BE0h] [rbp+AD8h]
  unsigned __int64 v384; // [rsp+C20h] [rbp+B18h]
  __int64 v385; // [rsp+C28h] [rbp+B20h]
  __int64 v386; // [rsp+C30h] [rbp+B28h]
  __int64 (__fastcall **v387)(PVOID); // [rsp+C38h] [rbp+B30h] BYREF
  __int64 (__fastcall **v388)(); // [rsp+C40h] [rbp+B38h]
  unsigned __int64 v389; // [rsp+C80h] [rbp+B78h]
  __int64 v390; // [rsp+C88h] [rbp+B80h]
  __int64 v391; // [rsp+C90h] [rbp+B88h]
  __int64 (__fastcall **v392)(PVOID); // [rsp+C98h] [rbp+B90h] BYREF
  __int64 (__fastcall **v393)(); // [rsp+CA0h] [rbp+B98h]
  unsigned __int64 v394; // [rsp+CE0h] [rbp+BD8h]
  __int64 v395; // [rsp+CE8h] [rbp+BE0h]
  __int64 v396; // [rsp+CF0h] [rbp+BE8h]
  __int64 (__fastcall **v397)(PVOID); // [rsp+CF8h] [rbp+BF0h] BYREF
  __int64 (__fastcall **v398)(); // [rsp+D00h] [rbp+BF8h]
  unsigned __int64 v399; // [rsp+D40h] [rbp+C38h]
  __int64 v400; // [rsp+D48h] [rbp+C40h]
  __int64 v401; // [rsp+D50h] [rbp+C48h]
  __int64 (__fastcall **v402)(PVOID); // [rsp+D58h] [rbp+C50h] BYREF
  __int64 (__fastcall **v403)(); // [rsp+D60h] [rbp+C58h]
  unsigned __int64 v404; // [rsp+DA0h] [rbp+C98h]
  __int64 v405; // [rsp+DA8h] [rbp+CA0h]
  __int64 v406; // [rsp+DB0h] [rbp+CA8h]

  v302 = &off_1400D41D0;
  v303 = 0;
  P = 0LL;
  v305 = 0LL;
  v306 = 0LL;
  sub_1400011A8(&v302, (__int64)L"Packet Counters:\n", 0x11uLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v305);
  v302 = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  P = 0LL;
  v305 = 0LL;
  v306 = 0LL;
  v112 = &off_1400D41D0;
  LOWORD(v113) = 0;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  sub_1400011A8(&v112, (__int64)L"st_receivedFramesCount", 0x16uLL);
  v7 = *(_QWORD *)(a1 + 784);
  sub_1400120E0((__int64)&v317, (__int64)&v112);
  v321 = 10LL;
  v318 = off_1400D4720;
  v112 = &off_1400D41D0;
  v8 = &off_1400D46F8;
  v317 = &off_1400D46F8;
  v319 = 0xA5A5A5A5A5000012uLL;
  v320 = v7;
  if ( v114 )
  {
    ExFreePool(v114);
    v8 = v317;
  }
  v9 = v8[4];
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v9)(&v317, a2);
  v117 = &off_1400D41D0;
  v118 = 0;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  sub_1400011A8(&v117, (__int64)qword_1400B6F30, 1uLL);
  v10 = v119;
  v11 = &unk_1400D44E0;
  if ( v119 )
    v11 = v119;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v120);
  v117 = &off_1400D41D0;
  if ( v10 )
    ExFreePool(v10);
  v119 = 0LL;
  v318 = off_1400D4720;
  v120 = 0LL;
  v121 = 0LL;
  v317 = &off_1400D46F8;
  sub_140005CFC(&v317);
  v122 = &off_1400D41D0;
  v123 = 0;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  sub_1400011A8(&v122, (__int64)L"st_ignoredFragmentsCount", 0x18uLL);
  v12 = *(_QWORD *)(a1 + 792);
  sub_1400120E0((__int64)&v322, (__int64)&v122);
  v326 = 10LL;
  v323 = off_1400D4720;
  v13 = &off_1400D46F8;
  v322 = &off_1400D46F8;
  v324 = 0xA5A5A5A5A5000012uLL;
  v325 = v12;
  v122 = &off_1400D41D0;
  if ( v124 )
  {
    ExFreePool(v124);
    v13 = v322;
  }
  v14 = v13[4];
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v14)(&v322, a2);
  v127 = &off_1400D41D0;
  v128 = 0;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  sub_1400011A8(&v127, (__int64)qword_1400B6F30, 1uLL);
  v15 = v129;
  v16 = &unk_1400D44E0;
  if ( v129 )
    v16 = v129;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v130);
  v127 = &off_1400D41D0;
  if ( v15 )
    ExFreePool(v15);
  v129 = 0LL;
  v323 = off_1400D4720;
  v130 = 0LL;
  v131 = 0LL;
  v322 = &off_1400D46F8;
  sub_140005CFC(&v322);
  v132 = &off_1400D41D0;
  v133 = 0;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  sub_1400011A8(&v132, (__int64)L"st_fragmentValidLengthZeroCount", 0x1FuLL);
  v17 = *(_QWORD *)(a1 + 800);
  sub_1400120E0((__int64)&v327, (__int64)&v132);
  v331 = 10LL;
  v328 = off_1400D4720;
  v18 = &off_1400D46F8;
  v327 = &off_1400D46F8;
  v329 = 0xA5A5A5A5A5000012uLL;
  v330 = v17;
  v132 = &off_1400D41D0;
  if ( v134 )
  {
    ExFreePool(v134);
    v18 = v327;
  }
  v19 = v18[4];
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v19)(&v327, a2);
  v137 = &off_1400D41D0;
  v138 = 0;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  sub_1400011A8(&v137, (__int64)qword_1400B6F30, 1uLL);
  v20 = v139;
  v21 = &unk_1400D44E0;
  if ( v139 )
    v21 = v139;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2 * v140);
  v137 = &off_1400D41D0;
  if ( v20 )
    ExFreePool(v20);
  v139 = 0LL;
  v328 = off_1400D4720;
  v140 = 0LL;
  v141 = 0LL;
  v327 = &off_1400D46F8;
  sub_140005CFC(&v327);
  v142 = &off_1400D41D0;
  v143 = 0;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  sub_1400011A8(&v142, (__int64)L"st_layer2RawPacketCount", 0x17uLL);
  v22 = *(_QWORD *)(a1 + 808);
  sub_1400120E0((__int64)&v332, (__int64)&v142);
  v336 = 10LL;
  v333 = off_1400D4720;
  v23 = &off_1400D46F8;
  v332 = &off_1400D46F8;
  v334 = 0xA5A5A5A5A5000012uLL;
  v335 = v22;
  v142 = &off_1400D41D0;
  if ( v144 )
  {
    ExFreePool(v144);
    v23 = v332;
  }
  v24 = v23[4];
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v24)(&v332, a2);
  v147 = &off_1400D41D0;
  v148 = 0;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  sub_1400011A8(&v147, (__int64)qword_1400B6F30, 1uLL);
  v25 = v149;
  v26 = &unk_1400D44E0;
  if ( v149 )
    v26 = v149;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, 2 * v150);
  v147 = &off_1400D41D0;
  if ( v25 )
    ExFreePool(v25);
  v149 = 0LL;
  v333 = off_1400D4720;
  v150 = 0LL;
  v151 = 0LL;
  v332 = &off_1400D46F8;
  sub_140005CFC(&v332);
  v152 = &off_1400D41D0;
  v153 = 0;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  sub_1400011A8(&v152, (__int64)L"st_layer3IPv4PacketCount", 0x18uLL);
  v27 = *(_QWORD *)(a1 + 816);
  sub_1400120E0((__int64)&v367, (__int64)&v152);
  v371 = 10LL;
  v368 = off_1400D4720;
  v28 = &off_1400D46F8;
  v367 = &off_1400D46F8;
  v369 = 0xA5A5A5A5A5000012uLL;
  v370 = v27;
  v152 = &off_1400D41D0;
  if ( v154 )
  {
    ExFreePool(v154);
    v28 = v367;
  }
  v29 = v28[4];
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v29)(&v367, a2);
  v157 = &off_1400D41D0;
  v158 = 0;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  sub_1400011A8(&v157, (__int64)qword_1400B6F30, 1uLL);
  v30 = v159;
  v31 = &unk_1400D44E0;
  if ( v159 )
    v31 = v159;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v31, 2 * v160);
  v157 = &off_1400D41D0;
  if ( v30 )
    ExFreePool(v30);
  v159 = 0LL;
  v368 = off_1400D4720;
  v160 = 0LL;
  v161 = 0LL;
  v367 = &off_1400D46F8;
  sub_140005CFC(&v367);
  v162 = &off_1400D41D0;
  v163 = 0;
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  sub_1400011A8(&v162, (__int64)L"st_layer3IPv6PacketCount", 0x18uLL);
  v32 = *(_QWORD *)(a1 + 824);
  sub_1400120E0((__int64)&v337, (__int64)&v162);
  v341 = 10LL;
  v338 = off_1400D4720;
  v33 = &off_1400D46F8;
  v337 = &off_1400D46F8;
  v339 = 0xA5A5A5A5A5000012uLL;
  v340 = v32;
  v162 = &off_1400D41D0;
  if ( v164 )
  {
    ExFreePool(v164);
    v33 = v337;
  }
  v34 = v33[4];
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v34)(&v337, a2);
  v167 = &off_1400D41D0;
  v168 = 0;
  v169 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  sub_1400011A8(&v167, (__int64)qword_1400B6F30, 1uLL);
  v35 = v169;
  v36 = &unk_1400D44E0;
  if ( v169 )
    v36 = v169;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v36, 2 * v170);
  v167 = &off_1400D41D0;
  if ( v35 )
    ExFreePool(v35);
  v169 = 0LL;
  v338 = off_1400D4720;
  v170 = 0LL;
  v171 = 0LL;
  v337 = &off_1400D46F8;
  sub_140005CFC(&v337);
  v172 = &off_1400D41D0;
  v173 = 0;
  v174 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  sub_1400011A8(&v172, (__int64)L"st_layer3UnspecifiedPacketCount", 0x1FuLL);
  v37 = *(_QWORD *)(a1 + 832);
  sub_1400120E0((__int64)&v342, (__int64)&v172);
  v346 = 10LL;
  v343 = off_1400D4720;
  v38 = &off_1400D46F8;
  v342 = &off_1400D46F8;
  v344 = 0xA5A5A5A5A5000012uLL;
  v345 = v37;
  v172 = &off_1400D41D0;
  if ( v174 )
  {
    ExFreePool(v174);
    v38 = v342;
  }
  v39 = v38[4];
  v174 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v39)(&v342, a2);
  v177 = &off_1400D41D0;
  v178 = 0;
  v179 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  sub_1400011A8(&v177, (__int64)qword_1400B6F30, 1uLL);
  v40 = v179;
  v41 = &unk_1400D44E0;
  if ( v179 )
    v41 = v179;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v41, 2 * v180);
  v177 = &off_1400D41D0;
  if ( v40 )
    ExFreePool(v40);
  v179 = 0LL;
  v343 = off_1400D4720;
  v180 = 0LL;
  v181 = 0LL;
  v342 = &off_1400D46F8;
  sub_140005CFC(&v342);
  v182 = &off_1400D41D0;
  v183 = 0;
  v184 = 0LL;
  v185 = 0LL;
  v186 = 0LL;
  sub_1400011A8(&v182, (__int64)L"st_layer3bothIpv4Ipv6", 0x15uLL);
  v42 = *(_QWORD *)(a1 + 840);
  sub_1400120E0((__int64)&v347, (__int64)&v182);
  v351 = 10LL;
  v348 = off_1400D4720;
  v43 = &off_1400D46F8;
  v347 = &off_1400D46F8;
  v349 = 0xA5A5A5A5A5000012uLL;
  v350 = v42;
  v182 = &off_1400D41D0;
  if ( v184 )
  {
    ExFreePool(v184);
    v43 = v347;
  }
  v44 = v43[4];
  v184 = 0LL;
  v185 = 0LL;
  v186 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v44)(&v347, a2);
  v187 = &off_1400D41D0;
  v188 = 0;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  sub_1400011A8(&v187, (__int64)qword_1400B6F30, 1uLL);
  v45 = v189;
  v46 = &unk_1400D44E0;
  if ( v189 )
    v46 = v189;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v46, 2 * v190);
  v187 = &off_1400D41D0;
  if ( v45 )
    ExFreePool(v45);
  v189 = 0LL;
  v348 = off_1400D4720;
  v190 = 0LL;
  v191 = 0LL;
  v347 = &off_1400D46F8;
  sub_140005CFC(&v347);
  v192 = &off_1400D41D0;
  v193 = 0;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  sub_1400011A8(&v192, (__int64)L"st_layer4TcpPacketCount", 0x17uLL);
  v47 = *(_QWORD *)(a1 + 848);
  sub_1400120E0((__int64)&v352, (__int64)&v192);
  v356 = 10LL;
  v353 = off_1400D4720;
  v48 = &off_1400D46F8;
  v352 = &off_1400D46F8;
  v354 = 0xA5A5A5A5A5000012uLL;
  v355 = v47;
  v192 = &off_1400D41D0;
  if ( v194 )
  {
    ExFreePool(v194);
    v48 = v352;
  }
  v49 = v48[4];
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v49)(&v352, a2);
  v197 = &off_1400D41D0;
  v198 = 0;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  sub_1400011A8(&v197, (__int64)qword_1400B6F30, 1uLL);
  v50 = v199;
  v51 = &unk_1400D44E0;
  if ( v199 )
    v51 = v199;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v51, 2 * v200);
  v197 = &off_1400D41D0;
  if ( v50 )
    ExFreePool(v50);
  v199 = 0LL;
  v353 = off_1400D4720;
  v200 = 0LL;
  v201 = 0LL;
  v352 = &off_1400D46F8;
  sub_140005CFC(&v352);
  v202 = &off_1400D41D0;
  v203 = 0;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  sub_1400011A8(&v202, (__int64)L"st_layer4UdpPacketCount", 0x17uLL);
  v52 = *(_QWORD *)(a1 + 856);
  sub_1400120E0((__int64)&v357, (__int64)&v202);
  v361 = 10LL;
  v358 = off_1400D4720;
  v53 = &off_1400D46F8;
  v357 = &off_1400D46F8;
  v359 = 0xA5A5A5A5A5000012uLL;
  v360 = v52;
  v202 = &off_1400D41D0;
  if ( v204 )
  {
    ExFreePool(v204);
    v53 = v357;
  }
  v54 = v53[4];
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v54)(&v357, a2);
  v207 = &off_1400D41D0;
  v208 = 0;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  sub_1400011A8(&v207, (__int64)qword_1400B6F30, 1uLL);
  v55 = v209;
  v56 = &unk_1400D44E0;
  if ( v209 )
    v56 = v209;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v56, 2 * v210);
  v207 = &off_1400D41D0;
  if ( v55 )
    ExFreePool(v55);
  v209 = 0LL;
  v358 = off_1400D4720;
  v210 = 0LL;
  v211 = 0LL;
  v357 = &off_1400D46F8;
  sub_140005CFC(&v357);
  v212 = &off_1400D41D0;
  v213 = 0;
  v214 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  sub_1400011A8(&v212, (__int64)L"st_layer4UnspecifiedPacketCount", 0x1FuLL);
  v57 = *(_QWORD *)(a1 + 864);
  sub_1400120E0((__int64)&v362, (__int64)&v212);
  v366 = 10LL;
  v363 = off_1400D4720;
  v58 = &off_1400D46F8;
  v362 = &off_1400D46F8;
  v364 = 0xA5A5A5A5A5000012uLL;
  v365 = v57;
  v212 = &off_1400D41D0;
  if ( v214 )
  {
    ExFreePool(v214);
    v58 = v362;
  }
  v59 = v58[4];
  v214 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v59)(&v362, a2);
  v217 = &off_1400D41D0;
  v218 = 0;
  v219 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  sub_1400011A8(&v217, (__int64)qword_1400B6F30, 1uLL);
  v60 = v219;
  v61 = &unk_1400D44E0;
  if ( v219 )
    v61 = v219;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v61, 2 * v220);
  v217 = &off_1400D41D0;
  if ( v60 )
    ExFreePool(v60);
  v219 = 0LL;
  v363 = off_1400D4720;
  v220 = 0LL;
  v221 = 0LL;
  v362 = &off_1400D46F8;
  sub_140005CFC(&v362);
  v222 = &off_1400D41D0;
  v223 = 0;
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  sub_1400011A8(&v222, (__int64)L"st_layer4bothTcpUdp", 0x13uLL);
  v62 = *(_QWORD *)(a1 + 872);
  sub_1400120E0((__int64)&v402, (__int64)&v222);
  v406 = 10LL;
  v403 = off_1400D4720;
  v63 = &off_1400D46F8;
  v402 = &off_1400D46F8;
  v404 = 0xA5A5A5A5A5000012uLL;
  v405 = v62;
  v222 = &off_1400D41D0;
  if ( v224 )
  {
    ExFreePool(v224);
    v63 = v402;
  }
  v64 = v63[4];
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v64)(&v402, a2);
  v227 = &off_1400D41D0;
  v228 = 0;
  v229 = 0LL;
  v230 = 0LL;
  v231 = 0LL;
  sub_1400011A8(&v227, (__int64)qword_1400B6F30, 1uLL);
  v65 = v229;
  v66 = &unk_1400D44E0;
  if ( v229 )
    v66 = v229;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v66, 2 * v230);
  v227 = &off_1400D41D0;
  if ( v65 )
    ExFreePool(v65);
  v229 = 0LL;
  v403 = off_1400D4720;
  v230 = 0LL;
  v231 = 0LL;
  v402 = &off_1400D46F8;
  sub_140005CFC(&v402);
  v232 = &off_1400D41D0;
  v233 = 0;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  sub_1400011A8(&v232, (__int64)L"st_layer3IPv4ChecksumErrorCount", 0x1FuLL);
  v67 = *(_QWORD *)(a1 + 904);
  sub_1400120E0((__int64)&v372, (__int64)&v232);
  v376 = 10LL;
  v373 = off_1400D4720;
  v68 = &off_1400D46F8;
  v372 = &off_1400D46F8;
  v374 = 0xA5A5A5A5A5000012uLL;
  v375 = v67;
  v232 = &off_1400D41D0;
  if ( v234 )
  {
    ExFreePool(v234);
    v68 = v372;
  }
  v69 = v68[4];
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v69)(&v372, a2);
  v237 = &off_1400D41D0;
  v238 = 0;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  sub_1400011A8(&v237, (__int64)qword_1400B6F30, 1uLL);
  v70 = v239;
  v71 = &unk_1400D44E0;
  if ( v239 )
    v71 = v239;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v71, 2 * v240);
  v237 = &off_1400D41D0;
  if ( v70 )
    ExFreePool(v70);
  v239 = 0LL;
  v373 = off_1400D4720;
  v240 = 0LL;
  v241 = 0LL;
  v372 = &off_1400D46F8;
  sub_140005CFC(&v372);
  v242 = &off_1400D41D0;
  v243 = 0;
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  sub_1400011A8(&v242, (__int64)L"st_layer4TcpChecksumErrorCount", 0x1EuLL);
  v72 = *(_QWORD *)(a1 + 912);
  sub_1400120E0((__int64)&v377, (__int64)&v242);
  v381 = 10LL;
  v378 = off_1400D4720;
  v73 = &off_1400D46F8;
  v377 = &off_1400D46F8;
  v379 = 0xA5A5A5A5A5000012uLL;
  v380 = v72;
  v242 = &off_1400D41D0;
  if ( v244 )
  {
    ExFreePool(v244);
    v73 = v377;
  }
  v74 = v73[4];
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v74)(&v377, a2);
  v247 = &off_1400D41D0;
  v248 = 0;
  v249 = 0LL;
  v250 = 0LL;
  v251 = 0LL;
  sub_1400011A8(&v247, (__int64)qword_1400B6F30, 1uLL);
  v75 = v249;
  v76 = &unk_1400D44E0;
  if ( v249 )
    v76 = v249;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v76, 2 * v250);
  v247 = &off_1400D41D0;
  if ( v75 )
    ExFreePool(v75);
  v249 = 0LL;
  v378 = off_1400D4720;
  v250 = 0LL;
  v251 = 0LL;
  v377 = &off_1400D46F8;
  sub_140005CFC(&v377);
  v252 = &off_1400D41D0;
  v253 = 0;
  v254 = 0LL;
  v255 = 0LL;
  v256 = 0LL;
  sub_1400011A8(&v252, (__int64)L"st_layer4UdpChecksumErrorCount", 0x1EuLL);
  v77 = *(_QWORD *)(a1 + 920);
  sub_1400120E0((__int64)&v382, (__int64)&v252);
  v386 = 10LL;
  v383 = off_1400D4720;
  v78 = &off_1400D46F8;
  v382 = &off_1400D46F8;
  v384 = 0xA5A5A5A5A5000012uLL;
  v385 = v77;
  v252 = &off_1400D41D0;
  if ( v254 )
  {
    ExFreePool(v254);
    v78 = v382;
  }
  v79 = v78[4];
  v254 = 0LL;
  v255 = 0LL;
  v256 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v79)(&v382, a2);
  v257 = &off_1400D41D0;
  v258 = 0;
  v259 = 0LL;
  v260 = 0LL;
  v261 = 0LL;
  sub_1400011A8(&v257, (__int64)qword_1400B6F30, 1uLL);
  v80 = v259;
  v81 = &unk_1400D44E0;
  if ( v259 )
    v81 = v259;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v81, 2 * v260);
  v257 = &off_1400D41D0;
  if ( v80 )
    ExFreePool(v80);
  v259 = 0LL;
  v383 = off_1400D4720;
  v260 = 0LL;
  v261 = 0LL;
  v382 = &off_1400D46F8;
  sub_140005CFC(&v382);
  v262 = &off_1400D41D0;
  v263 = 0;
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  sub_1400011A8(&v262, (__int64)L"st_receivedVlanPriorityFramesCount", 0x22uLL);
  v82 = *(_QWORD *)(a1 + 928);
  sub_1400120E0((__int64)&v387, (__int64)&v262);
  v391 = 10LL;
  v388 = off_1400D4720;
  v83 = &off_1400D46F8;
  v387 = &off_1400D46F8;
  v389 = 0xA5A5A5A5A5000012uLL;
  v390 = v82;
  v262 = &off_1400D41D0;
  if ( v264 )
  {
    ExFreePool(v264);
    v83 = v387;
  }
  v84 = v83[4];
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v84)(&v387, a2);
  v267 = &off_1400D41D0;
  v268 = 0;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  sub_1400011A8(&v267, (__int64)qword_1400B6F30, 1uLL);
  v85 = v269;
  if ( v269 )
  {
    v86 = v269;
  }
  else
  {
    v85 = &unk_1400D44E0;
    v86 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v85, 2 * v270);
  v267 = &off_1400D41D0;
  if ( v86 )
    ExFreePool(v86);
  v269 = 0LL;
  v388 = off_1400D4720;
  v270 = 0LL;
  v271 = 0LL;
  v387 = &off_1400D46F8;
  sub_140005CFC(&v387);
  sub_140003990(a2, 0);
  v272 = &off_1400D41D0;
  v273 = 0;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  sub_1400011A8(&v272, (__int64)L"Notification Counters:\n", 0x17uLL);
  v87 = v274;
  v88 = &unk_1400D44E0;
  if ( v274 )
    v88 = v274;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v88, 2 * v275);
  v272 = &off_1400D41D0;
  if ( v87 )
    ExFreePool(v87);
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  v277 = &off_1400D41D0;
  v278 = 0;
  v279 = 0LL;
  v280 = 0LL;
  v281 = 0LL;
  sub_1400011A8(&v277, (__int64)L"st_notificationCounter", 0x16uLL);
  v89 = *(_QWORD *)(a1 + 880);
  sub_1400120E0((__int64)&v392, (__int64)&v277);
  v396 = 10LL;
  v393 = off_1400D4720;
  v90 = &off_1400D46F8;
  v392 = &off_1400D46F8;
  v394 = 0xA5A5A5A5A5000012uLL;
  v395 = v89;
  v277 = &off_1400D41D0;
  if ( v279 )
  {
    ExFreePool(v279);
    v90 = v392;
  }
  v91 = v90[4];
  v279 = 0LL;
  v280 = 0LL;
  v281 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v91)(&v392, a2);
  v282 = &off_1400D41D0;
  v283 = 0;
  v284 = 0LL;
  v285 = 0LL;
  v286 = 0LL;
  sub_1400011A8(&v282, (__int64)qword_1400B6F30, 1uLL);
  v92 = v284;
  if ( v284 )
  {
    v93 = v284;
  }
  else
  {
    v92 = &unk_1400D44E0;
    v93 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v92, 2 * v285);
  v282 = &off_1400D41D0;
  if ( v93 )
    ExFreePool(v93);
  v284 = 0LL;
  v393 = off_1400D4720;
  v285 = 0LL;
  v286 = 0LL;
  v392 = &off_1400D46F8;
  sub_140005CFC(&v392);
  v287 = &off_1400D41D0;
  v288 = 0;
  v289 = 0LL;
  v290 = 0LL;
  v291 = 0LL;
  sub_1400011A8(&v287, (__int64)L"st_enableNotificationCounter", 0x1CuLL);
  v94 = *(_QWORD *)(a1 + 888);
  sub_1400120E0((__int64)&v397, (__int64)&v287);
  v401 = 10LL;
  v398 = off_1400D4720;
  v95 = &off_1400D46F8;
  v397 = &off_1400D46F8;
  v399 = 0xA5A5A5A5A5000012uLL;
  v400 = v94;
  v287 = &off_1400D41D0;
  if ( v289 )
  {
    ExFreePool(v289);
    v95 = v397;
  }
  v96 = v95[4];
  v289 = 0LL;
  v290 = 0LL;
  v291 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v96)(&v397, a2);
  v292 = &off_1400D41D0;
  v293 = 0;
  v294 = 0LL;
  v295 = 0LL;
  v296 = 0LL;
  sub_1400011A8(&v292, (__int64)qword_1400B6F30, 1uLL);
  v97 = v294;
  v98 = &unk_1400D44E0;
  if ( v294 )
    v98 = v294;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v98, 2 * v295);
  v292 = &off_1400D41D0;
  if ( v97 )
    ExFreePool(v97);
  v294 = 0LL;
  v398 = off_1400D4720;
  v295 = 0LL;
  v296 = 0LL;
  v397 = &off_1400D46F8;
  sub_140005CFC(&v397);
  v297 = &off_1400D41D0;
  v298 = 0;
  v299 = 0LL;
  v300 = 0LL;
  v301 = 0LL;
  sub_1400011A8(&v297, (__int64)L"st_disableNotificationCounter", 0x1DuLL);
  v99 = *(_QWORD *)(a1 + 896);
  sub_1400120E0((__int64)&v307, (__int64)&v297);
  v311 = 10LL;
  v308 = off_1400D4720;
  v100 = &off_1400D46F8;
  v307 = &off_1400D46F8;
  v309 = 0xA5A5A5A5A5000012uLL;
  v310 = v99;
  v297 = &off_1400D41D0;
  if ( v299 )
  {
    ExFreePool(v299);
    v100 = v307;
  }
  v101 = v100[4];
  v299 = 0LL;
  v300 = 0LL;
  v301 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v101)(&v307, a2);
  v107 = &off_1400D41D0;
  LOWORD(v108) = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  sub_1400011A8(&v107, (__int64)qword_1400B6F30, 1uLL);
  v102 = v109;
  v103 = &unk_1400D44E0;
  if ( v109 )
    v103 = v109;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v103, 2 * v110);
  v107 = &off_1400D41D0;
  if ( v102 )
    ExFreePool(v102);
  v109 = 0LL;
  v308 = off_1400D4720;
  v110 = 0LL;
  v111 = 0LL;
  v307 = &off_1400D46F8;
  sub_140005CFC(&v307);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 576) + 8LL))(a1 + 576, a2, 0LL);
  sub_140003840(a2, 0);
  sub_140003990(a2, 0);
  v107 = &off_1400D41D0;
  LOWORD(v108) = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  sub_1400011A8(&v107, (__int64)L"m_advertiseFragmentsThreshold", 0x1DuLL);
  v104 = *(unsigned int *)(a1 + 568);
  sub_1400120E0((__int64)&v307, (__int64)&v107);
  v308 = off_1400D5638;
  v311 = 10LL;
  v105 = &off_1400D5610;
  v307 = &off_1400D5610;
  v309 = 0xA5A5A5A5A5000012uLL;
  v310 = v104;
  if ( v109 )
  {
    ExFreePool(v109);
    v105 = v307;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v105[4])(&v307, a2);
  v312 = &off_1400D41D0;
  v313 = 0;
  v314 = 0LL;
  v315 = 0LL;
  v316 = 0LL;
  sub_1400011A8(&v312, (__int64)qword_1400B6F30, 1uLL);
  v106 = v314;
  if ( v314 )
    v5 = v314;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v315);
  if ( v106 )
    ExFreePool(v106);
  v307 = &off_1400D5610;
  v308 = off_1400D5638;
  sub_140005CFC(&v307);
  sub_140003990(a2, 0);
  sub_1400949E0(a1, a2);
}
