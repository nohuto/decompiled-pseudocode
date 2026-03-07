void __fastcall sub_1400301A0(__int64 a1, __int64 a2)
{
  PVOID v3; // rbx
  PVOID v4; // r14
  PVOID v5; // rdx
  PVOID v6; // rbx
  PVOID v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 (__fastcall **v9)(PVOID); // rdx
  void (__fastcall *v10)(__int64, __int64); // rax
  PVOID v11; // r15
  PVOID v12; // rdx
  __int64 (__fastcall **v13)(PVOID); // rdx
  void (__fastcall *v14)(__int64, __int64); // rax
  PVOID v15; // r15
  PVOID v16; // rdx
  __int64 (__fastcall **v17)(PVOID); // rdx
  void (__fastcall *v18)(__int64, __int64); // rax
  PVOID v19; // r15
  PVOID v20; // rdx
  __int64 (__fastcall **v21)(PVOID); // rdx
  void (__fastcall *v22)(__int64, __int64); // rax
  PVOID v23; // r15
  PVOID v24; // rdx
  __int64 (__fastcall **v25)(PVOID); // rdx
  void (__fastcall *v26)(__int64, __int64); // rax
  PVOID v27; // r15
  PVOID v28; // rdx
  __int64 (__fastcall **v29)(PVOID); // rdx
  void (__fastcall *v30)(__int64, __int64); // rax
  PVOID v31; // r15
  PVOID v32; // rdx
  __int64 (__fastcall **v33)(PVOID); // rdx
  unsigned __int64 v34; // r12
  __int64 (__fastcall *v35)(PVOID); // rax
  PVOID v36; // r15
  PVOID v37; // rdx
  __int64 (__fastcall **v38)(PVOID); // rdx
  __int64 (__fastcall *v39)(PVOID); // rax
  PVOID v40; // r15
  PVOID v41; // rdx
  __int64 (__fastcall **v42)(PVOID); // rdx
  __int64 (__fastcall *v43)(PVOID); // rax
  PVOID v44; // r15
  PVOID v45; // rdx
  __int64 (__fastcall **v46)(PVOID); // rdx
  __int64 (__fastcall *v47)(PVOID); // rax
  PVOID v48; // r15
  PVOID v49; // rdx
  __int64 (__fastcall **v50)(PVOID); // rdx
  __int64 (__fastcall *v51)(PVOID); // rax
  PVOID v52; // r15
  PVOID v53; // rdx
  __int64 (__fastcall **v54)(PVOID); // rdx
  void (__fastcall *v55)(__int64, __int64); // rax
  PVOID v56; // r15
  PVOID v57; // rdx
  __int64 (__fastcall **v58)(PVOID); // rdx
  __int64 (__fastcall *v59)(PVOID); // rax
  PVOID v60; // r15
  PVOID v61; // rdx
  __int64 (__fastcall **v62)(PVOID); // rdx
  void (__fastcall *v63)(__int64, __int64); // rax
  PVOID v64; // r15
  PVOID v65; // rdx
  __int64 (__fastcall **v66)(PVOID); // rdx
  void (__fastcall *v67)(__int64, __int64); // rax
  PVOID v68; // r15
  PVOID v69; // rdx
  __int64 (__fastcall **v70)(PVOID); // rdx
  void (__fastcall *v71)(__int64, __int64); // rax
  PVOID v72; // rdx
  PVOID v73; // r15
  __int64 (__fastcall **v74)(PVOID); // rdx
  void (__fastcall *v75)(__int64, __int64); // rax
  PVOID v76; // rdx
  PVOID v77; // r15
  __int64 (__fastcall **v78)(PVOID); // rdx
  void (__fastcall *v79)(__int64, __int64); // rax
  PVOID v80; // r15
  PVOID v81; // rdx
  __int64 (__fastcall **v82)(PVOID); // rdx
  void (__fastcall *v83)(__int64, __int64); // rax
  PVOID v84; // r15
  PVOID v85; // rdx
  __int64 (__fastcall **v86)(PVOID); // rdx
  __int64 (__fastcall *v87)(PVOID); // rax
  PVOID v88; // r15
  PVOID v89; // rdx
  __int64 (__fastcall **v90)(PVOID); // rax
  void (__fastcall *v91)(__int64, __int64); // rax
  PVOID v92; // rbx
  PVOID v93; // rdx
  __int64 (__fastcall **v94)(PVOID); // rax
  PVOID v95; // rbx
  PVOID v96; // rbx
  PVOID v97; // rdx
  __int64 (__fastcall **v98)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v99; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+38h] [rbp-D0h]
  __int64 v101; // [rsp+40h] [rbp-C8h]
  __int64 v102; // [rsp+48h] [rbp-C0h]
  __int64 v103; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v104; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall **v105)(PVOID); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+70h] [rbp-98h]
  PVOID v107; // [rsp+78h] [rbp-90h]
  __int64 v108; // [rsp+80h] [rbp-88h]
  __int64 v109; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall **v110)(PVOID); // [rsp+90h] [rbp-78h] BYREF
  __int16 v111; // [rsp+98h] [rbp-70h]
  PVOID v112; // [rsp+A0h] [rbp-68h]
  __int64 v113; // [rsp+A8h] [rbp-60h]
  __int64 v114; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall **v115)(PVOID); // [rsp+B8h] [rbp-50h] BYREF
  __int16 v116; // [rsp+C0h] [rbp-48h]
  PVOID v117; // [rsp+C8h] [rbp-40h]
  __int64 v118; // [rsp+D0h] [rbp-38h]
  __int64 v119; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall **v120)(PVOID); // [rsp+E0h] [rbp-28h] BYREF
  __int16 v121; // [rsp+E8h] [rbp-20h]
  PVOID v122; // [rsp+F0h] [rbp-18h]
  __int64 v123; // [rsp+F8h] [rbp-10h]
  __int64 v124; // [rsp+100h] [rbp-8h]
  __int64 (__fastcall **v125)(PVOID); // [rsp+108h] [rbp+0h] BYREF
  __int16 v126; // [rsp+110h] [rbp+8h]
  PVOID v127; // [rsp+118h] [rbp+10h]
  __int64 v128; // [rsp+120h] [rbp+18h]
  __int64 v129; // [rsp+128h] [rbp+20h]
  __int64 (__fastcall **v130)(PVOID); // [rsp+130h] [rbp+28h] BYREF
  __int16 v131; // [rsp+138h] [rbp+30h]
  PVOID v132; // [rsp+140h] [rbp+38h]
  __int64 v133; // [rsp+148h] [rbp+40h]
  __int64 v134; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall **v135)(PVOID); // [rsp+158h] [rbp+50h] BYREF
  __int16 v136; // [rsp+160h] [rbp+58h]
  PVOID v137; // [rsp+168h] [rbp+60h]
  __int64 v138; // [rsp+170h] [rbp+68h]
  __int64 v139; // [rsp+178h] [rbp+70h]
  __int64 (__fastcall **v140)(PVOID); // [rsp+180h] [rbp+78h] BYREF
  __int16 v141; // [rsp+188h] [rbp+80h]
  PVOID v142; // [rsp+190h] [rbp+88h]
  __int64 v143; // [rsp+198h] [rbp+90h]
  __int64 v144; // [rsp+1A0h] [rbp+98h]
  __int64 (__fastcall **v145)(PVOID); // [rsp+1A8h] [rbp+A0h] BYREF
  __int16 v146; // [rsp+1B0h] [rbp+A8h]
  PVOID v147; // [rsp+1B8h] [rbp+B0h]
  __int64 v148; // [rsp+1C0h] [rbp+B8h]
  __int64 v149; // [rsp+1C8h] [rbp+C0h]
  __int64 (__fastcall **v150)(PVOID); // [rsp+1D0h] [rbp+C8h] BYREF
  __int16 v151; // [rsp+1D8h] [rbp+D0h]
  PVOID v152; // [rsp+1E0h] [rbp+D8h]
  __int64 v153; // [rsp+1E8h] [rbp+E0h]
  __int64 v154; // [rsp+1F0h] [rbp+E8h]
  __int64 (__fastcall **v155)(PVOID); // [rsp+1F8h] [rbp+F0h] BYREF
  __int16 v156; // [rsp+200h] [rbp+F8h]
  PVOID v157; // [rsp+208h] [rbp+100h]
  __int64 v158; // [rsp+210h] [rbp+108h]
  __int64 v159; // [rsp+218h] [rbp+110h]
  __int64 (__fastcall **v160)(PVOID); // [rsp+220h] [rbp+118h] BYREF
  __int16 v161; // [rsp+228h] [rbp+120h]
  PVOID v162; // [rsp+230h] [rbp+128h]
  __int64 v163; // [rsp+238h] [rbp+130h]
  __int64 v164; // [rsp+240h] [rbp+138h]
  __int64 (__fastcall **v165)(PVOID); // [rsp+248h] [rbp+140h] BYREF
  __int16 v166; // [rsp+250h] [rbp+148h]
  PVOID v167; // [rsp+258h] [rbp+150h]
  __int64 v168; // [rsp+260h] [rbp+158h]
  __int64 v169; // [rsp+268h] [rbp+160h]
  __int64 (__fastcall **v170)(PVOID); // [rsp+270h] [rbp+168h] BYREF
  __int16 v171; // [rsp+278h] [rbp+170h]
  PVOID v172; // [rsp+280h] [rbp+178h]
  __int64 v173; // [rsp+288h] [rbp+180h]
  __int64 v174; // [rsp+290h] [rbp+188h]
  __int64 (__fastcall **v175)(PVOID); // [rsp+298h] [rbp+190h] BYREF
  __int16 v176; // [rsp+2A0h] [rbp+198h]
  PVOID v177; // [rsp+2A8h] [rbp+1A0h]
  __int64 v178; // [rsp+2B0h] [rbp+1A8h]
  __int64 v179; // [rsp+2B8h] [rbp+1B0h]
  __int64 (__fastcall **v180)(PVOID); // [rsp+2C0h] [rbp+1B8h] BYREF
  __int16 v181; // [rsp+2C8h] [rbp+1C0h]
  PVOID v182; // [rsp+2D0h] [rbp+1C8h]
  __int64 v183; // [rsp+2D8h] [rbp+1D0h]
  __int64 v184; // [rsp+2E0h] [rbp+1D8h]
  __int64 (__fastcall **v185)(PVOID); // [rsp+2E8h] [rbp+1E0h] BYREF
  __int16 v186; // [rsp+2F0h] [rbp+1E8h]
  PVOID v187; // [rsp+2F8h] [rbp+1F0h]
  __int64 v188; // [rsp+300h] [rbp+1F8h]
  __int64 v189; // [rsp+308h] [rbp+200h]
  __int64 (__fastcall **v190)(PVOID); // [rsp+310h] [rbp+208h] BYREF
  __int16 v191; // [rsp+318h] [rbp+210h]
  PVOID v192; // [rsp+320h] [rbp+218h]
  __int64 v193; // [rsp+328h] [rbp+220h]
  __int64 v194; // [rsp+330h] [rbp+228h]
  __int64 (__fastcall **v195)(PVOID); // [rsp+338h] [rbp+230h] BYREF
  __int16 v196; // [rsp+340h] [rbp+238h]
  PVOID v197; // [rsp+348h] [rbp+240h]
  __int64 v198; // [rsp+350h] [rbp+248h]
  __int64 v199; // [rsp+358h] [rbp+250h]
  __int64 (__fastcall **v200)(PVOID); // [rsp+360h] [rbp+258h] BYREF
  __int16 v201; // [rsp+368h] [rbp+260h]
  PVOID v202; // [rsp+370h] [rbp+268h]
  __int64 v203; // [rsp+378h] [rbp+270h]
  __int64 v204; // [rsp+380h] [rbp+278h]
  __int64 (__fastcall **v205)(PVOID); // [rsp+388h] [rbp+280h] BYREF
  __int16 v206; // [rsp+390h] [rbp+288h]
  PVOID v207; // [rsp+398h] [rbp+290h]
  __int64 v208; // [rsp+3A0h] [rbp+298h]
  __int64 v209; // [rsp+3A8h] [rbp+2A0h]
  __int64 (__fastcall **v210)(PVOID); // [rsp+3B0h] [rbp+2A8h] BYREF
  __int16 v211; // [rsp+3B8h] [rbp+2B0h]
  PVOID v212; // [rsp+3C0h] [rbp+2B8h]
  __int64 v213; // [rsp+3C8h] [rbp+2C0h]
  __int64 v214; // [rsp+3D0h] [rbp+2C8h]
  __int64 (__fastcall **v215)(PVOID); // [rsp+3D8h] [rbp+2D0h] BYREF
  __int16 v216; // [rsp+3E0h] [rbp+2D8h]
  PVOID v217; // [rsp+3E8h] [rbp+2E0h]
  __int64 v218; // [rsp+3F0h] [rbp+2E8h]
  __int64 v219; // [rsp+3F8h] [rbp+2F0h]
  __int64 (__fastcall **v220)(PVOID); // [rsp+400h] [rbp+2F8h] BYREF
  __int16 v221; // [rsp+408h] [rbp+300h]
  PVOID v222; // [rsp+410h] [rbp+308h]
  __int64 v223; // [rsp+418h] [rbp+310h]
  __int64 v224; // [rsp+420h] [rbp+318h]
  __int64 (__fastcall **v225)(PVOID); // [rsp+428h] [rbp+320h] BYREF
  __int16 v226; // [rsp+430h] [rbp+328h]
  PVOID v227; // [rsp+438h] [rbp+330h]
  __int64 v228; // [rsp+440h] [rbp+338h]
  __int64 v229; // [rsp+448h] [rbp+340h]
  __int64 (__fastcall **v230)(PVOID); // [rsp+450h] [rbp+348h] BYREF
  __int16 v231; // [rsp+458h] [rbp+350h]
  PVOID v232; // [rsp+460h] [rbp+358h]
  __int64 v233; // [rsp+468h] [rbp+360h]
  __int64 v234; // [rsp+470h] [rbp+368h]
  __int64 (__fastcall **v235)(PVOID); // [rsp+478h] [rbp+370h] BYREF
  __int16 v236; // [rsp+480h] [rbp+378h]
  PVOID v237; // [rsp+488h] [rbp+380h]
  __int64 v238; // [rsp+490h] [rbp+388h]
  __int64 v239; // [rsp+498h] [rbp+390h]
  __int64 (__fastcall **v240)(PVOID); // [rsp+4A0h] [rbp+398h] BYREF
  __int16 v241; // [rsp+4A8h] [rbp+3A0h]
  PVOID v242; // [rsp+4B0h] [rbp+3A8h]
  __int64 v243; // [rsp+4B8h] [rbp+3B0h]
  __int64 v244; // [rsp+4C0h] [rbp+3B8h]
  __int64 (__fastcall **v245)(PVOID); // [rsp+4C8h] [rbp+3C0h] BYREF
  __int16 v246; // [rsp+4D0h] [rbp+3C8h]
  PVOID v247; // [rsp+4D8h] [rbp+3D0h]
  __int64 v248; // [rsp+4E0h] [rbp+3D8h]
  __int64 v249; // [rsp+4E8h] [rbp+3E0h]
  __int64 (__fastcall **v250)(PVOID); // [rsp+4F0h] [rbp+3E8h] BYREF
  __int16 v251; // [rsp+4F8h] [rbp+3F0h]
  PVOID v252; // [rsp+500h] [rbp+3F8h]
  __int64 v253; // [rsp+508h] [rbp+400h]
  __int64 v254; // [rsp+510h] [rbp+408h]
  __int64 (__fastcall **v255)(PVOID); // [rsp+518h] [rbp+410h] BYREF
  __int16 v256; // [rsp+520h] [rbp+418h]
  PVOID v257; // [rsp+528h] [rbp+420h]
  __int64 v258; // [rsp+530h] [rbp+428h]
  __int64 v259; // [rsp+538h] [rbp+430h]
  __int64 (__fastcall **v260)(PVOID); // [rsp+540h] [rbp+438h] BYREF
  __int16 v261; // [rsp+548h] [rbp+440h]
  PVOID v262; // [rsp+550h] [rbp+448h]
  __int64 v263; // [rsp+558h] [rbp+450h]
  __int64 v264; // [rsp+560h] [rbp+458h]
  __int64 (__fastcall **v265)(PVOID); // [rsp+568h] [rbp+460h] BYREF
  __int16 v266; // [rsp+570h] [rbp+468h]
  PVOID v267; // [rsp+578h] [rbp+470h]
  __int64 v268; // [rsp+580h] [rbp+478h]
  __int64 v269; // [rsp+588h] [rbp+480h]
  __int64 (__fastcall **v270)(PVOID); // [rsp+590h] [rbp+488h] BYREF
  __int16 v271; // [rsp+598h] [rbp+490h]
  PVOID v272; // [rsp+5A0h] [rbp+498h]
  __int64 v273; // [rsp+5A8h] [rbp+4A0h]
  __int64 v274; // [rsp+5B0h] [rbp+4A8h]
  __int64 (__fastcall **v275)(PVOID); // [rsp+5B8h] [rbp+4B0h] BYREF
  __int16 v276; // [rsp+5C0h] [rbp+4B8h]
  PVOID v277; // [rsp+5C8h] [rbp+4C0h]
  __int64 v278; // [rsp+5D0h] [rbp+4C8h]
  __int64 v279; // [rsp+5D8h] [rbp+4D0h]
  __int64 (__fastcall **v280)(PVOID); // [rsp+5E0h] [rbp+4D8h] BYREF
  __int16 v281; // [rsp+5E8h] [rbp+4E0h]
  PVOID v282; // [rsp+5F0h] [rbp+4E8h]
  __int64 v283; // [rsp+5F8h] [rbp+4F0h]
  __int64 v284; // [rsp+600h] [rbp+4F8h]
  __int64 (__fastcall **v285)(PVOID); // [rsp+608h] [rbp+500h] BYREF
  __int16 v286; // [rsp+610h] [rbp+508h]
  PVOID v287; // [rsp+618h] [rbp+510h]
  __int64 v288; // [rsp+620h] [rbp+518h]
  __int64 v289; // [rsp+628h] [rbp+520h]
  __int64 (__fastcall **v290)(PVOID); // [rsp+630h] [rbp+528h] BYREF
  __int16 v291; // [rsp+638h] [rbp+530h]
  PVOID v292; // [rsp+640h] [rbp+538h]
  __int64 v293; // [rsp+648h] [rbp+540h]
  __int64 v294; // [rsp+650h] [rbp+548h]
  __int64 (__fastcall **v295)(PVOID); // [rsp+658h] [rbp+550h] BYREF
  __int16 v296; // [rsp+660h] [rbp+558h]
  PVOID v297; // [rsp+668h] [rbp+560h]
  __int64 v298; // [rsp+670h] [rbp+568h]
  __int64 v299; // [rsp+678h] [rbp+570h]
  __int64 (__fastcall **v300)(PVOID); // [rsp+680h] [rbp+578h] BYREF
  __int16 v301; // [rsp+688h] [rbp+580h]
  PVOID v302; // [rsp+690h] [rbp+588h]
  __int64 v303; // [rsp+698h] [rbp+590h]
  __int64 v304; // [rsp+6A0h] [rbp+598h]
  __int64 (__fastcall **v305)(PVOID); // [rsp+6A8h] [rbp+5A0h] BYREF
  __int16 v306; // [rsp+6B0h] [rbp+5A8h]
  PVOID v307; // [rsp+6B8h] [rbp+5B0h]
  __int64 v308; // [rsp+6C0h] [rbp+5B8h]
  __int64 v309; // [rsp+6C8h] [rbp+5C0h]
  __int64 (__fastcall **v310)(PVOID); // [rsp+6D0h] [rbp+5C8h] BYREF
  __int16 v311; // [rsp+6D8h] [rbp+5D0h]
  PVOID v312; // [rsp+6E0h] [rbp+5D8h]
  __int64 v313; // [rsp+6E8h] [rbp+5E0h]
  __int64 v314; // [rsp+6F0h] [rbp+5E8h]
  __int64 (__fastcall **v315)(PVOID); // [rsp+6F8h] [rbp+5F0h] BYREF
  __int64 (__fastcall **v316)(); // [rsp+700h] [rbp+5F8h]
  unsigned __int64 v317; // [rsp+740h] [rbp+638h]
  unsigned __int64 v318; // [rsp+748h] [rbp+640h]
  __int64 v319; // [rsp+750h] [rbp+648h]
  __int64 (__fastcall **v320)(PVOID); // [rsp+758h] [rbp+650h] BYREF
  PVOID v321; // [rsp+768h] [rbp+660h]
  __int64 v322; // [rsp+770h] [rbp+668h]
  __int64 v323; // [rsp+778h] [rbp+670h]
  __int64 (__fastcall **v324)(PVOID); // [rsp+788h] [rbp+680h] BYREF
  __int64 (__fastcall **v325)(); // [rsp+790h] [rbp+688h]
  unsigned __int64 v326; // [rsp+7D0h] [rbp+6C8h]
  int v327; // [rsp+7D8h] [rbp+6D0h]
  __int64 (__fastcall **v328)(PVOID); // [rsp+7E8h] [rbp+6E0h] BYREF
  __int64 (__fastcall **v329)(); // [rsp+7F0h] [rbp+6E8h]
  unsigned __int64 v330; // [rsp+830h] [rbp+728h]
  unsigned int v331; // [rsp+838h] [rbp+730h]
  __int64 (__fastcall **v332)(PVOID); // [rsp+848h] [rbp+740h] BYREF
  __int64 (__fastcall **v333)(); // [rsp+850h] [rbp+748h]
  unsigned __int64 v334; // [rsp+890h] [rbp+788h]
  unsigned int v335; // [rsp+898h] [rbp+790h]
  __int64 (__fastcall **v336)(PVOID); // [rsp+8A8h] [rbp+7A0h] BYREF
  __int64 (__fastcall **v337)(); // [rsp+8B0h] [rbp+7A8h]
  unsigned __int64 v338; // [rsp+8F0h] [rbp+7E8h]
  unsigned int v339; // [rsp+8F8h] [rbp+7F0h]
  __int64 (__fastcall **v340)(PVOID); // [rsp+908h] [rbp+800h] BYREF
  __int64 (__fastcall **v341)(); // [rsp+910h] [rbp+808h]
  unsigned __int64 v342; // [rsp+950h] [rbp+848h]
  unsigned int v343; // [rsp+958h] [rbp+850h]
  __int64 (__fastcall **v344)(PVOID); // [rsp+968h] [rbp+860h] BYREF
  __int64 (__fastcall **v345)(); // [rsp+970h] [rbp+868h]
  unsigned __int64 v346; // [rsp+9B0h] [rbp+8A8h]
  unsigned int v347; // [rsp+9B8h] [rbp+8B0h]
  __int64 (__fastcall **v348)(PVOID); // [rsp+9C8h] [rbp+8C0h] BYREF
  __int64 (__fastcall **v349)(); // [rsp+9D0h] [rbp+8C8h]
  unsigned __int64 v350; // [rsp+A10h] [rbp+908h]
  unsigned int v351; // [rsp+A18h] [rbp+910h]
  __int64 (__fastcall **v352)(PVOID); // [rsp+A28h] [rbp+920h] BYREF
  __int64 (__fastcall **v353)(); // [rsp+A30h] [rbp+928h]
  unsigned __int64 v354; // [rsp+A70h] [rbp+968h]
  unsigned int v355; // [rsp+A78h] [rbp+970h]
  __int64 (__fastcall **v356)(PVOID); // [rsp+A88h] [rbp+980h] BYREF
  __int64 (__fastcall **v357)(); // [rsp+A90h] [rbp+988h]
  unsigned __int64 v358; // [rsp+AD0h] [rbp+9C8h]
  unsigned int v359; // [rsp+AD8h] [rbp+9D0h]
  __int64 (__fastcall **v360)(PVOID); // [rsp+AE8h] [rbp+9E0h] BYREF
  __int64 (__fastcall **v361)(); // [rsp+AF0h] [rbp+9E8h]
  unsigned __int64 v362; // [rsp+B30h] [rbp+A28h]
  unsigned int v363; // [rsp+B38h] [rbp+A30h]
  __int64 (__fastcall **v364)(PVOID); // [rsp+B48h] [rbp+A40h] BYREF
  __int64 (__fastcall **v365)(); // [rsp+B50h] [rbp+A48h]
  unsigned __int64 v366; // [rsp+B90h] [rbp+A88h]
  unsigned int v367; // [rsp+B98h] [rbp+A90h]
  __int64 (__fastcall **v368)(PVOID); // [rsp+BA8h] [rbp+AA0h] BYREF
  __int64 (__fastcall **v369)(); // [rsp+BB0h] [rbp+AA8h]
  unsigned __int64 v370; // [rsp+BF0h] [rbp+AE8h]
  unsigned int v371; // [rsp+BF8h] [rbp+AF0h]
  __int64 (__fastcall **v372)(PVOID); // [rsp+C08h] [rbp+B00h] BYREF
  __int64 (__fastcall **v373)(); // [rsp+C10h] [rbp+B08h]
  unsigned __int64 v374; // [rsp+C50h] [rbp+B48h]
  unsigned int v375; // [rsp+C58h] [rbp+B50h]
  __int64 (__fastcall **v376)(PVOID); // [rsp+C68h] [rbp+B60h] BYREF
  __int64 (__fastcall **v377)(); // [rsp+C70h] [rbp+B68h]
  unsigned __int64 v378; // [rsp+CB0h] [rbp+BA8h]
  __int64 v379; // [rsp+CB8h] [rbp+BB0h]
  __int64 v380; // [rsp+CC0h] [rbp+BB8h]
  __int64 (__fastcall **v381)(PVOID); // [rsp+CC8h] [rbp+BC0h] BYREF
  __int64 (__fastcall **v382)(); // [rsp+CD0h] [rbp+BC8h]
  unsigned __int64 v383; // [rsp+D10h] [rbp+C08h]
  __int64 v384; // [rsp+D18h] [rbp+C10h]
  __int64 v385; // [rsp+D20h] [rbp+C18h]
  __int64 (__fastcall **v386)(PVOID); // [rsp+D28h] [rbp+C20h] BYREF
  __int64 (__fastcall **v387)(); // [rsp+D30h] [rbp+C28h]
  unsigned __int64 v388; // [rsp+D70h] [rbp+C68h]
  __int64 v389; // [rsp+D78h] [rbp+C70h]
  __int64 v390; // [rsp+D80h] [rbp+C78h]
  __int64 (__fastcall **v391)(PVOID); // [rsp+D88h] [rbp+C80h] BYREF
  __int64 (__fastcall **v392)(); // [rsp+D90h] [rbp+C88h]
  unsigned __int64 v393; // [rsp+DD0h] [rbp+CC8h]
  __int64 v394; // [rsp+DD8h] [rbp+CD0h]
  __int64 v395; // [rsp+DE0h] [rbp+CD8h]
  __int64 (__fastcall **v396)(PVOID); // [rsp+DE8h] [rbp+CE0h] BYREF
  __int64 (__fastcall **v397)(); // [rsp+DF0h] [rbp+CE8h]
  unsigned __int64 v398; // [rsp+E30h] [rbp+D28h]
  __int64 v399; // [rsp+E38h] [rbp+D30h]
  __int64 v400; // [rsp+E40h] [rbp+D38h]
  __int64 (__fastcall **v401)(PVOID); // [rsp+E48h] [rbp+D40h] BYREF
  __int64 (__fastcall **v402)(); // [rsp+E50h] [rbp+D48h]
  unsigned __int64 v403; // [rsp+E90h] [rbp+D88h]
  __int64 v404; // [rsp+E98h] [rbp+D90h]
  __int64 v405; // [rsp+EA0h] [rbp+D98h]
  __int64 (__fastcall **v406)(PVOID); // [rsp+EA8h] [rbp+DA0h] BYREF
  __int64 (__fastcall **v407)(); // [rsp+EB0h] [rbp+DA8h]
  unsigned __int64 v408; // [rsp+EF0h] [rbp+DE8h]
  __int64 v409; // [rsp+EF8h] [rbp+DF0h]
  __int64 v410; // [rsp+F00h] [rbp+DF8h]
  unsigned int v411; // [rsp+F48h] [rbp+E40h] BYREF

  v411 = 0;
  LOWORD(v99) = 0;
  v98 = &off_1400D41D0;
  P = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  if ( (unsigned int)sub_14007D3C8(a1, &v411) )
  {
    sub_1400011A8(&v98, (__int64)L"Failed to read receive control register value\n", 0x2EuLL);
    v96 = P;
    v97 = &unk_1400D44E0;
    if ( P )
      v97 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v97, 2 * v101);
    if ( v96 )
      ExFreePool(v96);
  }
  else
  {
    sub_1400011A8(&v98, (__int64)L"Receive control register value = 0x", 0x23uLL);
    v3 = P;
    v4 = &unk_1400D44E0;
    v5 = &unk_1400D44E0;
    if ( P )
      v5 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v101);
    v98 = &off_1400D41D0;
    if ( v3 )
      ExFreePool(v3);
    v103 = v411 | 0x1000000000LL;
    P = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    LODWORD(v104) = 10;
    sub_1400042F0((__int64)&v320, (int *)&v103);
    v6 = v321;
    v7 = &unk_1400D44E0;
    if ( v321 )
      v7 = v321;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v322);
    v320 = &off_1400D41D0;
    if ( v6 )
      ExFreePool(v6);
    v321 = 0LL;
    v322 = 0LL;
    v323 = 0LL;
    sub_140003840(a2, 0);
    v8 = v411;
    v310 = &off_1400D41D0;
    v311 = 0;
    v312 = 0LL;
    v313 = 0LL;
    v314 = 0LL;
    sub_1400011A8(&v310, (__int64)L"Reserved0", 9uLL);
    sub_1400120E0((__int64)&v324, (__int64)&v310);
    v324 = &off_1400D5998;
    v9 = &off_1400D5998;
    v310 = &off_1400D41D0;
    v325 = off_1400D59C0;
    v326 = 0xA5A5A5A5A5000013uLL;
    v327 = v8 & 1;
    if ( v312 )
    {
      ExFreePool(v312);
      v9 = v324;
    }
    v10 = (void (__fastcall *)(__int64, __int64))v9[4];
    v312 = 0LL;
    v313 = 0LL;
    v314 = 0LL;
    if ( v10 == sub_140007740 )
      sub_140007740((__int64)&v324, a2);
    else
      v10((__int64)&v324, a2);
    v110 = &off_1400D41D0;
    v111 = 0;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    sub_1400011A8(&v110, (__int64)qword_1400B6F30, 1uLL);
    v11 = v112;
    v12 = &unk_1400D44E0;
    if ( v112 )
      v12 = v112;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v113);
    v110 = &off_1400D41D0;
    if ( v11 )
      ExFreePool(v11);
    v112 = 0LL;
    v325 = off_1400D59C0;
    v113 = 0LL;
    v114 = 0LL;
    v324 = &off_1400D5998;
    sub_140005CFC(&v324);
    v115 = &off_1400D41D0;
    v116 = 0;
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    sub_1400011A8(&v115, (__int64)L"ReceiveEnabled", 0xEuLL);
    sub_1400120E0((__int64)&v328, (__int64)&v115);
    v115 = &off_1400D41D0;
    v329 = off_1400D59C0;
    v13 = &off_1400D5998;
    v328 = &off_1400D5998;
    v330 = 0xA5A5A5A5A5000013uLL;
    v331 = ((unsigned int)v8 >> 1) & 1;
    if ( v117 )
    {
      ExFreePool(v117);
      v13 = v328;
    }
    v14 = (void (__fastcall *)(__int64, __int64))v13[4];
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    if ( v14 == sub_140007740 )
      sub_140007740((__int64)&v328, a2);
    else
      v14((__int64)&v328, a2);
    v120 = &off_1400D41D0;
    v121 = 0;
    v122 = 0LL;
    v123 = 0LL;
    v124 = 0LL;
    sub_1400011A8(&v120, (__int64)qword_1400B6F30, 1uLL);
    v15 = v122;
    v16 = &unk_1400D44E0;
    if ( v122 )
      v16 = v122;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v123);
    v120 = &off_1400D41D0;
    if ( v15 )
      ExFreePool(v15);
    v122 = 0LL;
    v329 = off_1400D59C0;
    v328 = &off_1400D5998;
    v123 = 0LL;
    v124 = 0LL;
    sub_140005CFC(&v328);
    v125 = &off_1400D41D0;
    v126 = 0;
    v127 = 0LL;
    v128 = 0LL;
    v129 = 0LL;
    sub_1400011A8(&v125, (__int64)L"StoreBadPackets", 0xFuLL);
    sub_1400120E0((__int64)&v332, (__int64)&v125);
    v333 = off_1400D59C0;
    v17 = &off_1400D5998;
    v332 = &off_1400D5998;
    v334 = 0xA5A5A5A5A5000013uLL;
    v125 = &off_1400D41D0;
    v335 = ((unsigned int)v8 >> 2) & 1;
    if ( v127 )
    {
      ExFreePool(v127);
      v17 = v332;
    }
    v18 = (void (__fastcall *)(__int64, __int64))v17[4];
    v127 = 0LL;
    v128 = 0LL;
    v129 = 0LL;
    if ( v18 == sub_140007740 )
      sub_140007740((__int64)&v332, a2);
    else
      v18((__int64)&v332, a2);
    v130 = &off_1400D41D0;
    v131 = 0;
    v132 = 0LL;
    v133 = 0LL;
    v134 = 0LL;
    sub_1400011A8(&v130, (__int64)qword_1400B6F30, 1uLL);
    v19 = v132;
    v20 = &unk_1400D44E0;
    if ( v132 )
      v20 = v132;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2 * v133);
    v130 = &off_1400D41D0;
    if ( v19 )
      ExFreePool(v19);
    v132 = 0LL;
    v333 = off_1400D59C0;
    v332 = &off_1400D5998;
    v133 = 0LL;
    v134 = 0LL;
    sub_140005CFC(&v332);
    v135 = &off_1400D41D0;
    v136 = 0;
    v137 = 0LL;
    v138 = 0LL;
    v139 = 0LL;
    sub_1400011A8(&v135, (__int64)L"AcceptUnicastPromiscuous", 0x18uLL);
    sub_1400120E0((__int64)&v336, (__int64)&v135);
    v337 = off_1400D59C0;
    v21 = &off_1400D5998;
    v336 = &off_1400D5998;
    v338 = 0xA5A5A5A5A5000013uLL;
    v135 = &off_1400D41D0;
    v339 = ((unsigned int)v8 >> 3) & 1;
    if ( v137 )
    {
      ExFreePool(v137);
      v21 = v336;
    }
    v22 = (void (__fastcall *)(__int64, __int64))v21[4];
    v137 = 0LL;
    v138 = 0LL;
    v139 = 0LL;
    if ( v22 == sub_140007740 )
      sub_140007740((__int64)&v336, a2);
    else
      v22((__int64)&v336, a2);
    v140 = &off_1400D41D0;
    v141 = 0;
    v142 = 0LL;
    v143 = 0LL;
    v144 = 0LL;
    sub_1400011A8(&v140, (__int64)qword_1400B6F30, 1uLL);
    v23 = v142;
    v24 = &unk_1400D44E0;
    if ( v142 )
      v24 = v142;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v143);
    v140 = &off_1400D41D0;
    if ( v23 )
      ExFreePool(v23);
    v142 = 0LL;
    v337 = off_1400D59C0;
    v336 = &off_1400D5998;
    v143 = 0LL;
    v144 = 0LL;
    sub_140005CFC(&v336);
    v145 = &off_1400D41D0;
    v146 = 0;
    v147 = 0LL;
    v148 = 0LL;
    v149 = 0LL;
    sub_1400011A8(&v145, (__int64)L"AcceptMulticastPromiscuous", 0x1AuLL);
    sub_1400120E0((__int64)&v340, (__int64)&v145);
    v341 = off_1400D59C0;
    v25 = &off_1400D5998;
    v340 = &off_1400D5998;
    v342 = 0xA5A5A5A5A5000013uLL;
    v145 = &off_1400D41D0;
    v343 = ((unsigned int)v8 >> 4) & 1;
    if ( v147 )
    {
      ExFreePool(v147);
      v25 = v340;
    }
    v26 = (void (__fastcall *)(__int64, __int64))v25[4];
    v147 = 0LL;
    v148 = 0LL;
    v149 = 0LL;
    if ( v26 == sub_140007740 )
      sub_140007740((__int64)&v340, a2);
    else
      v26((__int64)&v340, a2);
    v150 = &off_1400D41D0;
    v151 = 0;
    v152 = 0LL;
    v153 = 0LL;
    v154 = 0LL;
    sub_1400011A8(&v150, (__int64)qword_1400B6F30, 1uLL);
    v27 = v152;
    v28 = &unk_1400D44E0;
    if ( v152 )
      v28 = v152;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v28, 2 * v153);
    v150 = &off_1400D41D0;
    if ( v27 )
      ExFreePool(v27);
    v152 = 0LL;
    v341 = off_1400D59C0;
    v340 = &off_1400D5998;
    v153 = 0LL;
    v154 = 0LL;
    sub_140005CFC(&v340);
    v155 = &off_1400D41D0;
    v156 = 0;
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
    sub_1400011A8(&v155, (__int64)L"AcceptLongPackets", 0x11uLL);
    sub_1400120E0((__int64)&v344, (__int64)&v155);
    v345 = off_1400D59C0;
    v29 = &off_1400D5998;
    v344 = &off_1400D5998;
    v346 = 0xA5A5A5A5A5000013uLL;
    v155 = &off_1400D41D0;
    v347 = ((unsigned int)v8 >> 5) & 1;
    if ( v157 )
    {
      ExFreePool(v157);
      v29 = v344;
    }
    v30 = (void (__fastcall *)(__int64, __int64))v29[4];
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
    if ( v30 == sub_140007740 )
      sub_140007740((__int64)&v344, a2);
    else
      v30((__int64)&v344, a2);
    v160 = &off_1400D41D0;
    v161 = 0;
    v162 = 0LL;
    v163 = 0LL;
    v164 = 0LL;
    sub_1400011A8(&v160, (__int64)qword_1400B6F30, 1uLL);
    v31 = v162;
    v32 = &unk_1400D44E0;
    if ( v162 )
      v32 = v162;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v32, 2 * v163);
    v160 = &off_1400D41D0;
    if ( v31 )
      ExFreePool(v31);
    v162 = 0LL;
    v344 = &off_1400D5998;
    v163 = 0LL;
    v164 = 0LL;
    v345 = off_1400D59C0;
    sub_140005CFC(&v344);
    v165 = &off_1400D41D0;
    v166 = 0;
    v167 = 0LL;
    v168 = 0LL;
    v169 = 0LL;
    sub_1400011A8(&v165, (__int64)L"LoopbackMode", 0xCuLL);
    sub_1400120E0((__int64)&v376, (__int64)&v165);
    v376 = &off_1400D5610;
    v33 = &off_1400D5610;
    v380 = 10LL;
    v377 = off_1400D5638;
    v34 = v8;
    v165 = &off_1400D41D0;
    v378 = 0xA5A5A5A5A5000012uLL;
    v379 = (unsigned __int8)v8 >> 6;
    if ( v167 )
    {
      ExFreePool(v167);
      v33 = v376;
    }
    v35 = v33[4];
    v167 = 0LL;
    v168 = 0LL;
    v169 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v35)(&v376, a2);
    v170 = &off_1400D41D0;
    v171 = 0;
    v172 = 0LL;
    v173 = 0LL;
    v174 = 0LL;
    sub_1400011A8(&v170, (__int64)qword_1400B6F30, 1uLL);
    v36 = v172;
    v37 = &unk_1400D44E0;
    if ( v172 )
      v37 = v172;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v37, 2 * v173);
    v170 = &off_1400D41D0;
    if ( v36 )
      ExFreePool(v36);
    v172 = 0LL;
    v377 = off_1400D5638;
    v173 = 0LL;
    v174 = 0LL;
    v376 = &off_1400D5610;
    sub_140005CFC(&v376);
    v175 = &off_1400D41D0;
    v176 = 0;
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    sub_1400011A8(&v175, (__int64)L"HashSelectForMulticastTable", 0x1BuLL);
    sub_1400120E0((__int64)&v381, (__int64)&v175);
    v385 = 10LL;
    v382 = off_1400D5638;
    v175 = &off_1400D41D0;
    v38 = &off_1400D5610;
    v381 = &off_1400D5610;
    v383 = 0xA5A5A5A5A5000012uLL;
    v384 = (v8 >> 8) & 3;
    if ( v177 )
    {
      ExFreePool(v177);
      v38 = v381;
    }
    v39 = v38[4];
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v39)(&v381, a2);
    v180 = &off_1400D41D0;
    v181 = 0;
    v182 = 0LL;
    v183 = 0LL;
    v184 = 0LL;
    sub_1400011A8(&v180, (__int64)qword_1400B6F30, 1uLL);
    v40 = v182;
    v41 = &unk_1400D44E0;
    if ( v182 )
      v41 = v182;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v41, 2 * v183);
    v180 = &off_1400D41D0;
    if ( v40 )
      ExFreePool(v40);
    v182 = 0LL;
    v382 = off_1400D5638;
    v381 = &off_1400D5610;
    v183 = 0LL;
    v184 = 0LL;
    sub_140005CFC(&v381);
    v185 = &off_1400D41D0;
    v186 = 0;
    v187 = 0LL;
    v188 = 0LL;
    v189 = 0LL;
    sub_1400011A8(&v185, (__int64)L"Reserved1", 9uLL);
    sub_1400120E0((__int64)&v386, (__int64)&v185);
    v387 = off_1400D5638;
    v42 = &off_1400D5610;
    v386 = &off_1400D5610;
    v388 = 0xA5A5A5A5A5000012uLL;
    v390 = 10LL;
    v389 = (v8 >> 10) & 3;
    v185 = &off_1400D41D0;
    if ( v187 )
    {
      ExFreePool(v187);
      v42 = v386;
    }
    v43 = v42[4];
    v187 = 0LL;
    v188 = 0LL;
    v189 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v43)(&v386, a2);
    v190 = &off_1400D41D0;
    v191 = 0;
    v192 = 0LL;
    v193 = 0LL;
    v194 = 0LL;
    sub_1400011A8(&v190, (__int64)qword_1400B6F30, 1uLL);
    v44 = v192;
    v45 = &unk_1400D44E0;
    if ( v192 )
      v45 = v192;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v45, 2 * v193);
    v190 = &off_1400D41D0;
    if ( v44 )
      ExFreePool(v44);
    v192 = 0LL;
    v387 = off_1400D5638;
    v386 = &off_1400D5610;
    v193 = 0LL;
    v194 = 0LL;
    sub_140005CFC(&v386);
    v195 = &off_1400D41D0;
    v196 = 0;
    v197 = 0LL;
    v198 = 0LL;
    v199 = 0LL;
    sub_1400011A8(&v195, (__int64)L"MulticastUnicastTableOffset", 0x1BuLL);
    sub_1400120E0((__int64)&v391, (__int64)&v195);
    v392 = off_1400D5638;
    v46 = &off_1400D5610;
    v391 = &off_1400D5610;
    v393 = 0xA5A5A5A5A5000012uLL;
    v395 = 10LL;
    v394 = (v8 >> 12) & 3;
    v195 = &off_1400D41D0;
    if ( v197 )
    {
      ExFreePool(v197);
      v46 = v391;
    }
    v47 = v46[4];
    v197 = 0LL;
    v198 = 0LL;
    v199 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v47)(&v391, a2);
    v200 = &off_1400D41D0;
    v201 = 0;
    v202 = 0LL;
    v203 = 0LL;
    v204 = 0LL;
    sub_1400011A8(&v200, (__int64)qword_1400B6F30, 1uLL);
    v48 = v202;
    v49 = &unk_1400D44E0;
    if ( v202 )
      v49 = v202;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v49, 2 * v203);
    v200 = &off_1400D41D0;
    if ( v48 )
      ExFreePool(v48);
    v202 = 0LL;
    v392 = off_1400D5638;
    v391 = &off_1400D5610;
    v203 = 0LL;
    v204 = 0LL;
    sub_140005CFC(&v391);
    v205 = &off_1400D41D0;
    v206 = 0;
    v207 = 0LL;
    v208 = 0LL;
    v209 = 0LL;
    sub_1400011A8(&v205, (__int64)L"Reserved2", 9uLL);
    sub_1400120E0((__int64)&v396, (__int64)&v205);
    v397 = off_1400D5638;
    v50 = &off_1400D5610;
    v396 = &off_1400D5610;
    v398 = 0xA5A5A5A5A5000012uLL;
    v400 = 10LL;
    v399 = (v8 >> 14) & 1;
    v205 = &off_1400D41D0;
    if ( v207 )
    {
      ExFreePool(v207);
      v50 = v396;
    }
    v51 = v50[4];
    v207 = 0LL;
    v208 = 0LL;
    v209 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v51)(&v396, a2);
    v210 = &off_1400D41D0;
    v211 = 0;
    v212 = 0LL;
    v213 = 0LL;
    v214 = 0LL;
    sub_1400011A8(&v210, (__int64)qword_1400B6F30, 1uLL);
    v52 = v212;
    v53 = &unk_1400D44E0;
    if ( v212 )
      v53 = v212;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v53, 2 * v213);
    v210 = &off_1400D41D0;
    if ( v52 )
      ExFreePool(v52);
    v212 = 0LL;
    v396 = &off_1400D5610;
    v213 = 0LL;
    v214 = 0LL;
    v397 = off_1400D5638;
    sub_140005CFC(&v396);
    v215 = &off_1400D41D0;
    v216 = 0;
    v217 = 0LL;
    v218 = 0LL;
    v219 = 0LL;
    sub_1400011A8(&v215, (__int64)L"AcceptBroadcast", 0xFuLL);
    sub_1400120E0((__int64)&v348, (__int64)&v215);
    v348 = &off_1400D5998;
    v54 = &off_1400D5998;
    v215 = &off_1400D41D0;
    v349 = off_1400D59C0;
    v350 = 0xA5A5A5A5A5000013uLL;
    v351 = ((unsigned int)v8 >> 15) & 1;
    if ( v217 )
    {
      ExFreePool(v217);
      v54 = v348;
    }
    v55 = (void (__fastcall *)(__int64, __int64))v54[4];
    v217 = 0LL;
    v218 = 0LL;
    v219 = 0LL;
    if ( v55 == sub_140007740 )
      sub_140007740((__int64)&v348, a2);
    else
      v55((__int64)&v348, a2);
    v220 = &off_1400D41D0;
    v221 = 0;
    v222 = 0LL;
    v223 = 0LL;
    v224 = 0LL;
    sub_1400011A8(&v220, (__int64)qword_1400B6F30, 1uLL);
    v56 = v222;
    v57 = &unk_1400D44E0;
    if ( v222 )
      v57 = v222;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v57, 2 * v223);
    v220 = &off_1400D41D0;
    if ( v56 )
      ExFreePool(v56);
    v222 = 0LL;
    v348 = &off_1400D5998;
    v223 = 0LL;
    v349 = off_1400D59C0;
    v224 = 0LL;
    sub_140005CFC(&v348);
    v225 = &off_1400D41D0;
    v226 = 0;
    v227 = 0LL;
    v228 = 0LL;
    v229 = 0LL;
    sub_1400011A8(&v225, (__int64)L"ReceiveBufferSize", 0x11uLL);
    sub_1400120E0((__int64)&v401, (__int64)&v225);
    v401 = &off_1400D5610;
    v58 = &off_1400D5610;
    v405 = 10LL;
    v402 = off_1400D5638;
    v403 = 0xA5A5A5A5A5000012uLL;
    v225 = &off_1400D41D0;
    v404 = (v8 >> 16) & 3;
    if ( v227 )
    {
      ExFreePool(v227);
      v58 = v401;
    }
    v59 = v58[4];
    v227 = 0LL;
    v228 = 0LL;
    v229 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v59)(&v401, a2);
    v230 = &off_1400D41D0;
    v231 = 0;
    v232 = 0LL;
    v233 = 0LL;
    v234 = 0LL;
    sub_1400011A8(&v230, (__int64)qword_1400B6F30, 1uLL);
    v60 = v232;
    v61 = &unk_1400D44E0;
    if ( v232 )
      v61 = v232;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v61, 2 * v233);
    v230 = &off_1400D41D0;
    if ( v60 )
      ExFreePool(v60);
    v232 = 0LL;
    v401 = &off_1400D5610;
    v233 = 0LL;
    v402 = off_1400D5638;
    v234 = 0LL;
    sub_140005CFC(&v401);
    v235 = &off_1400D41D0;
    v236 = 0;
    v237 = 0LL;
    v238 = 0LL;
    v239 = 0LL;
    sub_1400011A8(&v235, (__int64)L"VlanFilterEnabled", 0x11uLL);
    sub_1400120E0((__int64)&v352, (__int64)&v235);
    v352 = &off_1400D5998;
    v62 = &off_1400D5998;
    v235 = &off_1400D41D0;
    v353 = off_1400D59C0;
    v354 = 0xA5A5A5A5A5000013uLL;
    v355 = ((unsigned int)v8 >> 18) & 1;
    if ( v237 )
    {
      ExFreePool(v237);
      v62 = v352;
    }
    v63 = (void (__fastcall *)(__int64, __int64))v62[4];
    v237 = 0LL;
    v238 = 0LL;
    v239 = 0LL;
    if ( v63 == sub_140007740 )
      sub_140007740((__int64)&v352, a2);
    else
      v63((__int64)&v352, a2);
    v240 = &off_1400D41D0;
    v241 = 0;
    v242 = 0LL;
    v243 = 0LL;
    v244 = 0LL;
    sub_1400011A8(&v240, (__int64)qword_1400B6F30, 1uLL);
    v64 = v242;
    v65 = &unk_1400D44E0;
    if ( v242 )
      v65 = v242;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v65, 2 * v243);
    v240 = &off_1400D41D0;
    if ( v64 )
      ExFreePool(v64);
    v242 = 0LL;
    v353 = off_1400D59C0;
    v352 = &off_1400D5998;
    v243 = 0LL;
    v244 = 0LL;
    sub_140005CFC(&v352);
    v245 = &off_1400D41D0;
    v246 = 0;
    v247 = 0LL;
    v248 = 0LL;
    v249 = 0LL;
    sub_1400011A8(&v245, (__int64)L"CanonicalFormIndicatorEnabled", 0x1DuLL);
    sub_1400120E0((__int64)&v356, (__int64)&v245);
    v357 = off_1400D59C0;
    v66 = &off_1400D5998;
    v356 = &off_1400D5998;
    v358 = 0xA5A5A5A5A5000013uLL;
    v245 = &off_1400D41D0;
    v359 = ((unsigned int)v8 >> 19) & 1;
    if ( v247 )
    {
      ExFreePool(v247);
      v66 = v356;
    }
    v67 = (void (__fastcall *)(__int64, __int64))v66[4];
    v247 = 0LL;
    v248 = 0LL;
    v249 = 0LL;
    if ( v67 == sub_140007740 )
      sub_140007740((__int64)&v356, a2);
    else
      v67((__int64)&v356, a2);
    v250 = &off_1400D41D0;
    v251 = 0;
    v252 = 0LL;
    v253 = 0LL;
    v254 = 0LL;
    sub_1400011A8(&v250, (__int64)qword_1400B6F30, 1uLL);
    v68 = v252;
    v69 = &unk_1400D44E0;
    if ( v252 )
      v69 = v252;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v69, 2 * v253);
    v250 = &off_1400D41D0;
    if ( v68 )
      ExFreePool(v68);
    v252 = 0LL;
    v357 = off_1400D59C0;
    v356 = &off_1400D5998;
    v253 = 0LL;
    v254 = 0LL;
    sub_140005CFC(&v356);
    v255 = &off_1400D41D0;
    v256 = 0;
    v257 = 0LL;
    v258 = 0LL;
    v259 = 0LL;
    sub_1400011A8(&v255, (__int64)L"DiscardCanonicalFormIndicatedPackets", 0x24uLL);
    sub_1400120E0((__int64)&v360, (__int64)&v255);
    v361 = off_1400D59C0;
    v70 = &off_1400D5998;
    v360 = &off_1400D5998;
    v362 = 0xA5A5A5A5A5000013uLL;
    v255 = &off_1400D41D0;
    v363 = ((unsigned int)v8 >> 20) & 1;
    if ( v257 )
    {
      ExFreePool(v257);
      v70 = v360;
    }
    v71 = (void (__fastcall *)(__int64, __int64))v70[4];
    v257 = 0LL;
    v258 = 0LL;
    v259 = 0LL;
    if ( v71 == sub_140007740 )
      sub_140007740((__int64)&v360, a2);
    else
      v71((__int64)&v360, a2);
    v260 = &off_1400D41D0;
    v261 = 0;
    v262 = 0LL;
    v263 = 0LL;
    v264 = 0LL;
    sub_1400011A8(&v260, (__int64)qword_1400B6F30, 1uLL);
    v72 = v262;
    if ( v262 )
    {
      v73 = v262;
    }
    else
    {
      v72 = &unk_1400D44E0;
      v73 = 0LL;
    }
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v72, 2 * v263);
    v260 = &off_1400D41D0;
    if ( v73 )
      ExFreePool(v73);
    v262 = 0LL;
    v361 = off_1400D59C0;
    v360 = &off_1400D5998;
    v263 = 0LL;
    v264 = 0LL;
    sub_140005CFC(&v360);
    v265 = &off_1400D41D0;
    v266 = 0;
    v267 = 0LL;
    v268 = 0LL;
    v269 = 0LL;
    sub_1400011A8(&v265, (__int64)L"PadSmallPackets", 0xFuLL);
    sub_1400120E0((__int64)&v364, (__int64)&v265);
    v365 = off_1400D59C0;
    v74 = &off_1400D5998;
    v364 = &off_1400D5998;
    v366 = 0xA5A5A5A5A5000013uLL;
    v265 = &off_1400D41D0;
    v367 = ((unsigned int)v8 >> 21) & 1;
    if ( v267 )
    {
      ExFreePool(v267);
      v74 = v364;
    }
    v75 = (void (__fastcall *)(__int64, __int64))v74[4];
    v267 = 0LL;
    v268 = 0LL;
    v269 = 0LL;
    if ( v75 == sub_140007740 )
      sub_140007740((__int64)&v364, a2);
    else
      v75((__int64)&v364, a2);
    v270 = &off_1400D41D0;
    v271 = 0;
    v272 = 0LL;
    v273 = 0LL;
    v274 = 0LL;
    sub_1400011A8(&v270, (__int64)qword_1400B6F30, 1uLL);
    v76 = v272;
    if ( v272 )
    {
      v77 = v272;
    }
    else
    {
      v76 = &unk_1400D44E0;
      v77 = 0LL;
    }
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v76, 2 * v273);
    v270 = &off_1400D41D0;
    if ( v77 )
      ExFreePool(v77);
    v272 = 0LL;
    v365 = off_1400D59C0;
    v364 = &off_1400D5998;
    v273 = 0LL;
    v274 = 0LL;
    sub_140005CFC(&v364);
    v275 = &off_1400D41D0;
    v276 = 0;
    v277 = 0LL;
    v278 = 0LL;
    v279 = 0LL;
    sub_1400011A8(&v275, (__int64)L"DiscardPauseFrames", 0x12uLL);
    sub_1400120E0((__int64)&v368, (__int64)&v275);
    v369 = off_1400D59C0;
    v78 = &off_1400D5998;
    v368 = &off_1400D5998;
    v370 = 0xA5A5A5A5A5000013uLL;
    v275 = &off_1400D41D0;
    v371 = ((unsigned int)v8 >> 22) & 1;
    if ( v277 )
    {
      ExFreePool(v277);
      v78 = v368;
    }
    v79 = (void (__fastcall *)(__int64, __int64))v78[4];
    v277 = 0LL;
    v278 = 0LL;
    v279 = 0LL;
    if ( v79 == sub_140007740 )
      sub_140007740((__int64)&v368, a2);
    else
      v79((__int64)&v368, a2);
    v280 = &off_1400D41D0;
    v281 = 0;
    v282 = 0LL;
    v283 = 0LL;
    v284 = 0LL;
    sub_1400011A8(&v280, (__int64)qword_1400B6F30, 1uLL);
    v80 = v282;
    v81 = &unk_1400D44E0;
    if ( v282 )
      v81 = v282;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v81, 2 * v283);
    v280 = &off_1400D41D0;
    if ( v80 )
      ExFreePool(v80);
    v282 = 0LL;
    v369 = off_1400D59C0;
    v368 = &off_1400D5998;
    v283 = 0LL;
    v284 = 0LL;
    sub_140005CFC(&v368);
    v285 = &off_1400D41D0;
    v286 = 0;
    v287 = 0LL;
    v288 = 0LL;
    v289 = 0LL;
    sub_1400011A8(&v285, (__int64)L"PassMacControlFrames", 0x14uLL);
    sub_1400120E0((__int64)&v372, (__int64)&v285);
    v373 = off_1400D59C0;
    v82 = &off_1400D5998;
    v372 = &off_1400D5998;
    v374 = 0xA5A5A5A5A5000013uLL;
    v285 = &off_1400D41D0;
    v375 = ((unsigned int)v8 >> 23) & 1;
    if ( v287 )
    {
      ExFreePool(v287);
      v82 = v372;
    }
    v83 = (void (__fastcall *)(__int64, __int64))v82[4];
    v287 = 0LL;
    v288 = 0LL;
    v289 = 0LL;
    if ( v83 == sub_140007740 )
      sub_140007740((__int64)&v372, a2);
    else
      v83((__int64)&v372, a2);
    v290 = &off_1400D41D0;
    v291 = 0;
    v292 = 0LL;
    v293 = 0LL;
    v294 = 0LL;
    sub_1400011A8(&v290, (__int64)qword_1400B6F30, 1uLL);
    v84 = v292;
    v85 = &unk_1400D44E0;
    if ( v292 )
      v85 = v292;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v85, 2 * v293);
    v290 = &off_1400D41D0;
    if ( v84 )
      ExFreePool(v84);
    v292 = 0LL;
    v372 = &off_1400D5998;
    v293 = 0LL;
    v373 = off_1400D59C0;
    v294 = 0LL;
    sub_140005CFC(&v372);
    v295 = &off_1400D41D0;
    v296 = 0;
    v297 = 0LL;
    v298 = 0LL;
    v299 = 0LL;
    sub_1400011A8(&v295, (__int64)L"Reserved3", 9uLL);
    sub_1400120E0((__int64)&v406, (__int64)&v295);
    v406 = &off_1400D5610;
    v86 = &off_1400D5610;
    v410 = 10LL;
    v407 = off_1400D5638;
    v408 = 0xA5A5A5A5A5000012uLL;
    v295 = &off_1400D41D0;
    v409 = (v8 >> 24) & 3;
    if ( v297 )
    {
      ExFreePool(v297);
      v86 = v406;
    }
    v87 = v86[4];
    v297 = 0LL;
    v298 = 0LL;
    v299 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v87)(&v406, a2);
    v300 = &off_1400D41D0;
    v301 = 0;
    v302 = 0LL;
    v303 = 0LL;
    v304 = 0LL;
    sub_1400011A8(&v300, (__int64)qword_1400B6F30, 1uLL);
    v88 = v302;
    v89 = &unk_1400D44E0;
    if ( v302 )
      v89 = v302;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v89, 2 * v303);
    v300 = &off_1400D41D0;
    if ( v88 )
      ExFreePool(v88);
    v302 = 0LL;
    v406 = &off_1400D5610;
    v303 = 0LL;
    v407 = off_1400D5638;
    v304 = 0LL;
    sub_140005CFC(&v406);
    v305 = &off_1400D41D0;
    v306 = 0;
    v307 = 0LL;
    v308 = 0LL;
    v309 = 0LL;
    sub_1400011A8(&v305, (__int64)L"StripEthernetCrcFromIncomingPackets", 0x23uLL);
    sub_1400120E0((__int64)&v315, (__int64)&v305);
    v315 = &off_1400D5998;
    v90 = &off_1400D5998;
    v305 = &off_1400D41D0;
    v316 = off_1400D59C0;
    v317 = 0xA5A5A5A5A5000013uLL;
    LODWORD(v318) = ((unsigned int)v8 >> 26) & 1;
    if ( v307 )
    {
      ExFreePool(v307);
      v90 = v315;
    }
    v91 = (void (__fastcall *)(__int64, __int64))v90[4];
    v307 = 0LL;
    v308 = 0LL;
    v309 = 0LL;
    if ( v91 == sub_140007740 )
      sub_140007740((__int64)&v315, a2);
    else
      v91((__int64)&v315, a2);
    v105 = &off_1400D41D0;
    LOWORD(v106) = 0;
    v107 = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    sub_1400011A8(&v105, (__int64)qword_1400B6F30, 1uLL);
    v92 = v107;
    v93 = &unk_1400D44E0;
    if ( v107 )
      v93 = v107;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v93, 2 * v108);
    v105 = &off_1400D41D0;
    if ( v92 )
      ExFreePool(v92);
    v107 = 0LL;
    v315 = &off_1400D5998;
    v108 = 0LL;
    v316 = off_1400D59C0;
    v109 = 0LL;
    sub_140005CFC(&v315);
    v105 = &off_1400D41D0;
    LOWORD(v106) = 0;
    v107 = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    sub_1400011A8(&v105, (__int64)L"Reserved4", 9uLL);
    sub_1400120E0((__int64)&v315, (__int64)&v105);
    v315 = &off_1400D5610;
    v94 = &off_1400D5610;
    v319 = 10LL;
    v316 = off_1400D5638;
    v317 = 0xA5A5A5A5A5000012uLL;
    v318 = v34 >> 27;
    if ( v107 )
    {
      ExFreePool(v107);
      v94 = v315;
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v94[4])(&v315, a2);
    v98 = &off_1400D41D0;
    LOWORD(v99) = 0;
    P = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    sub_1400011A8(&v98, (__int64)qword_1400B6F30, 1uLL);
    v95 = P;
    if ( P )
      v4 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2 * v101);
    if ( v95 )
      ExFreePool(v95);
    v315 = &off_1400D5610;
    v316 = off_1400D5638;
    sub_140005CFC(&v315);
  }
}
