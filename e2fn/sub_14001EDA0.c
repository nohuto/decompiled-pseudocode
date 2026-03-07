void *(__fastcall **__fastcall sub_14001EDA0(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v3; // rcx
  PVOID v5; // r14
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall **v9)(PVOID); // rdx
  __int64 (__fastcall *v10)(PVOID); // rax
  PVOID v11; // rdi
  PVOID v12; // rdx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 (__fastcall **v17)(PVOID); // rdx
  __int64 (__fastcall *v18)(PVOID); // rax
  PVOID v19; // rdx
  PVOID v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  PVOID v24; // rdi
  PVOID v25; // rdx
  __int64 (__fastcall **v26)(PVOID); // rax
  __int64 (__fastcall *v27)(PVOID); // rax
  PVOID v28; // rdi
  PVOID v29; // rdx
  __int64 (__fastcall **v30)(PVOID); // rax
  __int64 (__fastcall *v31)(PVOID); // rax
  PVOID v32; // rdi
  PVOID v33; // rdx
  __int64 (__fastcall **v34)(PVOID); // rax
  __int64 (__fastcall *v35)(PVOID); // rax
  PVOID v36; // rdi
  PVOID v37; // rdx
  __int64 (__fastcall **v38)(PVOID); // rax
  __int64 (__fastcall *v39)(PVOID); // rax
  PVOID v40; // rdi
  PVOID v41; // rdx
  PVOID v42; // rdi
  PVOID v43; // rdx
  __int64 (__fastcall **v44)(PVOID); // rax
  __int64 (__fastcall *v45)(PVOID); // rax
  PVOID v46; // rdi
  PVOID v47; // rdx
  __int64 (__fastcall **v48)(PVOID); // rax
  __int64 (__fastcall *v49)(PVOID); // rax
  PVOID v50; // rdx
  PVOID v51; // rdi
  __int64 (__fastcall **v52)(PVOID); // rdx
  __int64 (__fastcall *v53)(PVOID); // rax
  PVOID v54; // rdi
  PVOID v55; // rdx
  __int64 (__fastcall **v56)(PVOID); // rax
  __int64 (__fastcall *v57)(PVOID); // rax
  PVOID v58; // rdi
  PVOID v59; // rdx
  __int64 (__fastcall **v60)(PVOID); // rax
  __int64 (__fastcall *v61)(PVOID); // rax
  PVOID v62; // rdi
  PVOID v63; // rdx
  PVOID v64; // rdi
  PVOID v65; // rdx
  __int64 (__fastcall **v66)(PVOID); // rax
  void (__fastcall *v67)(__int64, __int64); // rax
  PVOID v68; // rdi
  PVOID v69; // rdx
  __int64 (__fastcall **v70)(PVOID); // rax
  void (__fastcall *v71)(__int64, __int64); // rax
  PVOID v72; // rdi
  PVOID v73; // rdx
  __int64 (__fastcall **v74)(PVOID); // rax
  void (__fastcall *v75)(__int64, __int64); // rax
  PVOID v76; // rdx
  PVOID v77; // rdi
  __int64 (__fastcall **v78)(PVOID); // rax
  void (__fastcall *v79)(__int64, __int64); // rax
  PVOID v80; // rdi
  PVOID v81; // rdx
  __int64 (__fastcall **v82)(PVOID); // rax
  void (__fastcall *v83)(__int64, __int64); // rax
  PVOID v84; // rdi
  __int64 (__fastcall **v86)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+30h] [rbp-D8h]
  PVOID v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h]
  __int64 v90; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v91)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+58h] [rbp-B0h]
  PVOID v93; // [rsp+60h] [rbp-A8h]
  __int64 v94; // [rsp+68h] [rbp-A0h]
  __int64 v95; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v96)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v97; // [rsp+80h] [rbp-88h]
  PVOID v98; // [rsp+88h] [rbp-80h]
  __int64 v99; // [rsp+90h] [rbp-78h]
  __int64 v100; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v101)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v102; // [rsp+A8h] [rbp-60h]
  PVOID v103; // [rsp+B0h] [rbp-58h]
  __int64 v104; // [rsp+B8h] [rbp-50h]
  __int64 v105; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v106)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v107; // [rsp+D0h] [rbp-38h]
  PVOID v108; // [rsp+D8h] [rbp-30h]
  __int64 v109; // [rsp+E0h] [rbp-28h]
  __int64 v110; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v111)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v112; // [rsp+F8h] [rbp-10h]
  PVOID v113; // [rsp+100h] [rbp-8h]
  __int64 v114; // [rsp+108h] [rbp+0h]
  __int64 v115; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v116)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v117; // [rsp+120h] [rbp+18h]
  PVOID v118; // [rsp+128h] [rbp+20h]
  __int64 v119; // [rsp+130h] [rbp+28h]
  __int64 v120; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v121)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v122; // [rsp+148h] [rbp+40h]
  PVOID v123; // [rsp+150h] [rbp+48h]
  __int64 v124; // [rsp+158h] [rbp+50h]
  __int64 v125; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v126)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v127; // [rsp+170h] [rbp+68h]
  PVOID v128; // [rsp+178h] [rbp+70h]
  __int64 v129; // [rsp+180h] [rbp+78h]
  __int64 v130; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v131)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v132; // [rsp+198h] [rbp+90h]
  PVOID v133; // [rsp+1A0h] [rbp+98h]
  __int64 v134; // [rsp+1A8h] [rbp+A0h]
  __int64 v135; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v136)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v137; // [rsp+1C0h] [rbp+B8h]
  PVOID v138; // [rsp+1C8h] [rbp+C0h]
  __int64 v139; // [rsp+1D0h] [rbp+C8h]
  __int64 v140; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v141)(PVOID); // [rsp+1E0h] [rbp+D8h] BYREF
  __int16 v142; // [rsp+1E8h] [rbp+E0h]
  PVOID v143; // [rsp+1F0h] [rbp+E8h]
  __int64 v144; // [rsp+1F8h] [rbp+F0h]
  __int64 v145; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v146)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int16 v147; // [rsp+210h] [rbp+108h]
  PVOID v148; // [rsp+218h] [rbp+110h]
  __int64 v149; // [rsp+220h] [rbp+118h]
  __int64 v150; // [rsp+228h] [rbp+120h]
  __int64 (__fastcall **v151)(PVOID); // [rsp+230h] [rbp+128h] BYREF
  __int16 v152; // [rsp+238h] [rbp+130h]
  PVOID v153; // [rsp+240h] [rbp+138h]
  __int64 v154; // [rsp+248h] [rbp+140h]
  __int64 v155; // [rsp+250h] [rbp+148h]
  __int64 (__fastcall **v156)(PVOID); // [rsp+258h] [rbp+150h] BYREF
  __int16 v157; // [rsp+260h] [rbp+158h]
  PVOID v158; // [rsp+268h] [rbp+160h]
  __int64 v159; // [rsp+270h] [rbp+168h]
  __int64 v160; // [rsp+278h] [rbp+170h]
  __int64 (__fastcall **v161)(PVOID); // [rsp+280h] [rbp+178h] BYREF
  __int16 v162; // [rsp+288h] [rbp+180h]
  PVOID v163; // [rsp+290h] [rbp+188h]
  __int64 v164; // [rsp+298h] [rbp+190h]
  __int64 v165; // [rsp+2A0h] [rbp+198h]
  __int64 (__fastcall **v166)(PVOID); // [rsp+2A8h] [rbp+1A0h] BYREF
  __int16 v167; // [rsp+2B0h] [rbp+1A8h]
  PVOID v168; // [rsp+2B8h] [rbp+1B0h]
  __int64 v169; // [rsp+2C0h] [rbp+1B8h]
  __int64 v170; // [rsp+2C8h] [rbp+1C0h]
  __int64 (__fastcall **v171)(PVOID); // [rsp+2D0h] [rbp+1C8h] BYREF
  __int16 v172; // [rsp+2D8h] [rbp+1D0h]
  PVOID v173; // [rsp+2E0h] [rbp+1D8h]
  __int64 v174; // [rsp+2E8h] [rbp+1E0h]
  __int64 v175; // [rsp+2F0h] [rbp+1E8h]
  __int64 (__fastcall **v176)(PVOID); // [rsp+2F8h] [rbp+1F0h] BYREF
  __int16 v177; // [rsp+300h] [rbp+1F8h]
  PVOID v178; // [rsp+308h] [rbp+200h]
  __int64 v179; // [rsp+310h] [rbp+208h]
  __int64 v180; // [rsp+318h] [rbp+210h]
  __int64 (__fastcall **v181)(PVOID); // [rsp+320h] [rbp+218h] BYREF
  __int16 v182; // [rsp+328h] [rbp+220h]
  PVOID v183; // [rsp+330h] [rbp+228h]
  __int64 v184; // [rsp+338h] [rbp+230h]
  __int64 v185; // [rsp+340h] [rbp+238h]
  __int64 (__fastcall **v186)(PVOID); // [rsp+348h] [rbp+240h] BYREF
  __int16 v187; // [rsp+350h] [rbp+248h]
  PVOID v188; // [rsp+358h] [rbp+250h]
  __int64 v189; // [rsp+360h] [rbp+258h]
  __int64 v190; // [rsp+368h] [rbp+260h]
  __int64 (__fastcall **v191)(PVOID); // [rsp+370h] [rbp+268h] BYREF
  __int16 v192; // [rsp+378h] [rbp+270h]
  PVOID v193; // [rsp+380h] [rbp+278h]
  __int64 v194; // [rsp+388h] [rbp+280h]
  __int64 v195; // [rsp+390h] [rbp+288h]
  __int64 (__fastcall **v196)(PVOID); // [rsp+398h] [rbp+290h] BYREF
  __int16 v197; // [rsp+3A0h] [rbp+298h]
  PVOID v198; // [rsp+3A8h] [rbp+2A0h]
  __int64 v199; // [rsp+3B0h] [rbp+2A8h]
  __int64 v200; // [rsp+3B8h] [rbp+2B0h]
  __int64 (__fastcall **v201)(PVOID); // [rsp+3C0h] [rbp+2B8h] BYREF
  __int16 v202; // [rsp+3C8h] [rbp+2C0h]
  PVOID v203; // [rsp+3D0h] [rbp+2C8h]
  __int64 v204; // [rsp+3D8h] [rbp+2D0h]
  __int64 v205; // [rsp+3E0h] [rbp+2D8h]
  __int64 (__fastcall **v206)(PVOID); // [rsp+3E8h] [rbp+2E0h] BYREF
  __int16 v207; // [rsp+3F0h] [rbp+2E8h]
  PVOID v208; // [rsp+3F8h] [rbp+2F0h]
  __int64 v209; // [rsp+400h] [rbp+2F8h]
  __int64 v210; // [rsp+408h] [rbp+300h]
  __int64 (__fastcall **v211)(PVOID); // [rsp+410h] [rbp+308h] BYREF
  __int16 v212; // [rsp+418h] [rbp+310h]
  PVOID v213; // [rsp+420h] [rbp+318h]
  __int64 v214; // [rsp+428h] [rbp+320h]
  __int64 v215; // [rsp+430h] [rbp+328h]
  __int64 (__fastcall **v216)(PVOID); // [rsp+438h] [rbp+330h] BYREF
  __int16 v217; // [rsp+440h] [rbp+338h]
  PVOID v218; // [rsp+448h] [rbp+340h]
  __int64 v219; // [rsp+450h] [rbp+348h]
  __int64 v220; // [rsp+458h] [rbp+350h]
  __int64 (__fastcall **v221)(PVOID); // [rsp+460h] [rbp+358h] BYREF
  __int16 v222; // [rsp+468h] [rbp+360h]
  PVOID v223; // [rsp+470h] [rbp+368h]
  __int64 v224; // [rsp+478h] [rbp+370h]
  __int64 v225; // [rsp+480h] [rbp+378h]
  __int64 (__fastcall **v226)(PVOID); // [rsp+488h] [rbp+380h] BYREF
  __int16 v227; // [rsp+490h] [rbp+388h]
  PVOID v228; // [rsp+498h] [rbp+390h]
  __int64 v229; // [rsp+4A0h] [rbp+398h]
  __int64 v230; // [rsp+4A8h] [rbp+3A0h]
  __int64 (__fastcall **v231)(PVOID); // [rsp+4B0h] [rbp+3A8h] BYREF
  __int16 v232; // [rsp+4B8h] [rbp+3B0h]
  PVOID v233; // [rsp+4C0h] [rbp+3B8h]
  __int64 v234; // [rsp+4C8h] [rbp+3C0h]
  __int64 v235; // [rsp+4D0h] [rbp+3C8h]
  __int64 (__fastcall **v236)(PVOID); // [rsp+4D8h] [rbp+3D0h] BYREF
  __int16 v237; // [rsp+4E0h] [rbp+3D8h]
  PVOID v238; // [rsp+4E8h] [rbp+3E0h]
  __int64 v239; // [rsp+4F0h] [rbp+3E8h]
  __int64 v240; // [rsp+4F8h] [rbp+3F0h]
  __int64 (__fastcall **v241)(PVOID); // [rsp+500h] [rbp+3F8h] BYREF
  __int16 v242; // [rsp+508h] [rbp+400h]
  PVOID v243; // [rsp+510h] [rbp+408h]
  __int64 v244; // [rsp+518h] [rbp+410h]
  __int64 v245; // [rsp+520h] [rbp+418h]
  __int64 (__fastcall **v246)(PVOID); // [rsp+528h] [rbp+420h] BYREF
  __int16 v247; // [rsp+530h] [rbp+428h]
  PVOID P; // [rsp+538h] [rbp+430h]
  __int64 v249; // [rsp+540h] [rbp+438h]
  __int64 v250; // [rsp+548h] [rbp+440h]
  __int64 (__fastcall **v251)(PVOID); // [rsp+558h] [rbp+450h] BYREF
  __int64 (__fastcall **v252)(); // [rsp+560h] [rbp+458h]
  unsigned __int64 v253; // [rsp+5A0h] [rbp+498h]
  int v254; // [rsp+5A8h] [rbp+4A0h]
  __int64 (__fastcall **v255)(PVOID); // [rsp+5B8h] [rbp+4B0h] BYREF
  __int16 v256; // [rsp+5C0h] [rbp+4B8h]
  PVOID v257; // [rsp+5C8h] [rbp+4C0h]
  __int64 v258; // [rsp+5D0h] [rbp+4C8h]
  __int64 v259; // [rsp+5D8h] [rbp+4D0h]
  __int64 (__fastcall **v260)(PVOID); // [rsp+5E8h] [rbp+4E0h] BYREF
  __int64 (__fastcall **v261)(); // [rsp+5F0h] [rbp+4E8h]
  unsigned __int64 v262; // [rsp+630h] [rbp+528h]
  int v263; // [rsp+638h] [rbp+530h]
  __int64 (__fastcall **v264)(PVOID); // [rsp+648h] [rbp+540h] BYREF
  __int64 (__fastcall **v265)(); // [rsp+650h] [rbp+548h]
  unsigned __int64 v266; // [rsp+690h] [rbp+588h]
  int v267; // [rsp+698h] [rbp+590h]
  __int64 (__fastcall **v268)(PVOID); // [rsp+6A8h] [rbp+5A0h] BYREF
  __int64 (__fastcall **v269)(); // [rsp+6B0h] [rbp+5A8h]
  unsigned __int64 v270; // [rsp+6F0h] [rbp+5E8h]
  int v271; // [rsp+6F8h] [rbp+5F0h]
  __int64 (__fastcall **v272)(PVOID); // [rsp+708h] [rbp+600h] BYREF
  __int64 (__fastcall **v273)(); // [rsp+710h] [rbp+608h]
  unsigned __int64 v274; // [rsp+750h] [rbp+648h]
  __int64 v275; // [rsp+758h] [rbp+650h]
  __int64 v276; // [rsp+760h] [rbp+658h]
  __int64 (__fastcall **v277)(PVOID); // [rsp+768h] [rbp+660h] BYREF
  __int64 (__fastcall **v278)(); // [rsp+770h] [rbp+668h]
  unsigned __int64 v279; // [rsp+7B0h] [rbp+6A8h]
  __int64 v280; // [rsp+7B8h] [rbp+6B0h]
  __int64 v281; // [rsp+7C0h] [rbp+6B8h]
  __int64 (__fastcall **v282)(PVOID); // [rsp+7C8h] [rbp+6C0h] BYREF
  __int64 (__fastcall **v283)(); // [rsp+7D0h] [rbp+6C8h]
  unsigned __int64 v284; // [rsp+810h] [rbp+708h]
  __int64 v285; // [rsp+818h] [rbp+710h]
  __int64 v286; // [rsp+820h] [rbp+718h]
  __int64 (__fastcall **v287)(PVOID); // [rsp+828h] [rbp+720h] BYREF
  __int64 (__fastcall **v288)(); // [rsp+830h] [rbp+728h]
  unsigned __int64 v289; // [rsp+870h] [rbp+768h]
  __int64 v290; // [rsp+878h] [rbp+770h]
  __int64 v291; // [rsp+880h] [rbp+778h]
  __int64 (__fastcall **v292)(PVOID); // [rsp+888h] [rbp+780h] BYREF
  __int64 (__fastcall **v293)(); // [rsp+890h] [rbp+788h]
  unsigned __int64 v294; // [rsp+8D0h] [rbp+7C8h]
  __int64 v295; // [rsp+8D8h] [rbp+7D0h]
  __int64 v296; // [rsp+8E0h] [rbp+7D8h]
  __int64 (__fastcall **v297)(PVOID); // [rsp+8E8h] [rbp+7E0h] BYREF
  __int64 (__fastcall **v298)(); // [rsp+8F0h] [rbp+7E8h]
  unsigned __int64 v299; // [rsp+930h] [rbp+828h]
  __int64 v300; // [rsp+938h] [rbp+830h]
  __int64 v301; // [rsp+940h] [rbp+838h]
  __int64 (__fastcall **v302)(PVOID); // [rsp+948h] [rbp+840h] BYREF
  __int64 (__fastcall **v303)(); // [rsp+950h] [rbp+848h]
  unsigned __int64 v304; // [rsp+990h] [rbp+888h]
  __int64 v305; // [rsp+998h] [rbp+890h]
  __int64 v306; // [rsp+9A0h] [rbp+898h]
  __int64 (__fastcall **v307)(PVOID); // [rsp+9A8h] [rbp+8A0h] BYREF
  __int64 (__fastcall **v308)(); // [rsp+9B0h] [rbp+8A8h]
  unsigned __int64 v309; // [rsp+9F0h] [rbp+8E8h]
  __int64 v310; // [rsp+9F8h] [rbp+8F0h]
  __int64 v311; // [rsp+A00h] [rbp+8F8h]
  __int64 (__fastcall **v312)(PVOID); // [rsp+A08h] [rbp+900h] BYREF
  __int64 (__fastcall **v313)(); // [rsp+A10h] [rbp+908h]
  unsigned __int64 v314; // [rsp+A50h] [rbp+948h]
  __int64 v315; // [rsp+A58h] [rbp+950h]
  __int64 v316; // [rsp+A60h] [rbp+958h]
  __int64 (__fastcall **v317)(PVOID); // [rsp+A68h] [rbp+960h] BYREF
  __int64 (__fastcall **v318)(); // [rsp+A70h] [rbp+968h]
  unsigned __int64 v319; // [rsp+AB0h] [rbp+9A8h]
  __int64 v320; // [rsp+AB8h] [rbp+9B0h]
  __int64 v321; // [rsp+AC0h] [rbp+9B8h]
  __int64 (__fastcall **v322)(PVOID); // [rsp+AC8h] [rbp+9C0h] BYREF
  __int64 (__fastcall **v323)(); // [rsp+AD0h] [rbp+9C8h]
  unsigned __int64 v324; // [rsp+B10h] [rbp+A08h]
  __int64 v325; // [rsp+B18h] [rbp+A10h]
  __int64 v326; // [rsp+B20h] [rbp+A18h]

  v3 = *(_QWORD *)(a1 + 376);
  v5 = &unk_1400D44E0;
  v6 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(v3 + 8);
  if ( v7 && !*(_DWORD *)(v3 + 20) )
  {
    v8 = *(unsigned int *)(v7 + 5416);
    if ( (_DWORD)v8 == -1 && *(_DWORD *)(*(_QWORD *)(v3 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 3LL, 0xFFFFFFFFLL);
    }
    else
    {
      v246 = &off_1400D41D0;
      v247 = 0;
      P = 0LL;
      v249 = 0LL;
      v250 = 0LL;
      sub_1400011A8(&v246, (__int64)L"Register_MAC_IGC_EIMC", 0x15uLL);
      sub_1400120E0((__int64)&v272, (__int64)&v246);
      v273 = off_1400D5638;
      v9 = &off_1400D5610;
      v272 = &off_1400D5610;
      v274 = 0xA5A5A5A5A5000012uLL;
      v275 = v8;
      v276 = 10LL;
      v246 = &off_1400D41D0;
      if ( P )
      {
        ExFreePool(P);
        v9 = v272;
      }
      v10 = v9[4];
      P = 0LL;
      v249 = 0LL;
      v250 = 0LL;
      v276 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v10)(&v272, a2);
      v91 = &off_1400D41D0;
      LOWORD(v92) = 0;
      v93 = 0LL;
      v94 = 0LL;
      v95 = 0LL;
      sub_1400011A8(&v91, (__int64)qword_1400B6F30, 1uLL);
      v11 = v93;
      v12 = &unk_1400D44E0;
      if ( v93 )
        v12 = v93;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v94);
      v91 = &off_1400D41D0;
      if ( v11 )
        ExFreePool(v11);
      v93 = 0LL;
      v273 = off_1400D5638;
      v94 = 0LL;
      v95 = 0LL;
      v272 = &off_1400D5610;
      sub_140005CFC(&v272);
    }
    v6 = 0xFFFFFFFFLL;
  }
  v13 = (__int64 *)(a1 + 376);
  v14 = *(_QWORD *)(a1 + 376);
  v15 = *(_QWORD *)(v14 + 8);
  if ( v15 && !*(_DWORD *)(v14 + 20) )
  {
    v16 = *(unsigned int *)(v15 + 5412);
    if ( (_DWORD)v16 == -1 && *(_DWORD *)(*(_QWORD *)(v14 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, 3LL, 0xFFFFFFFFLL);
    }
    else
    {
      v96 = &off_1400D41D0;
      v97 = 0;
      v98 = 0LL;
      v99 = 0LL;
      v100 = 0LL;
      sub_1400011A8(&v96, (__int64)L"Register_MAC_IGC_EIMS", 0x15uLL);
      sub_1400120E0((__int64)&v277, (__int64)&v96);
      v278 = off_1400D5638;
      v17 = &off_1400D5610;
      v277 = &off_1400D5610;
      v279 = 0xA5A5A5A5A5000012uLL;
      v280 = v16;
      v281 = 10LL;
      v96 = &off_1400D41D0;
      if ( v98 )
      {
        ExFreePool(v98);
        v17 = v277;
      }
      v18 = v17[4];
      v98 = 0LL;
      v99 = 0LL;
      v100 = 0LL;
      v281 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v18)(&v277, a2);
      v101 = &off_1400D41D0;
      v102 = 0;
      v103 = 0LL;
      v104 = 0LL;
      v105 = 0LL;
      sub_1400011A8(&v101, (__int64)qword_1400B6F30, 1uLL);
      v19 = v103;
      if ( v103 )
      {
        v20 = v103;
      }
      else
      {
        v19 = &unk_1400D44E0;
        v20 = 0LL;
      }
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v104);
      v101 = &off_1400D41D0;
      if ( v20 )
        ExFreePool(v20);
      v103 = 0LL;
      v278 = off_1400D5638;
      v277 = &off_1400D5610;
      v104 = 0LL;
      v105 = 0LL;
      sub_140005CFC(&v277);
      v13 = (__int64 *)(a1 + 376);
    }
  }
  v21 = *v13;
  v22 = *(_QWORD *)(*v13 + 8);
  if ( v22 && !*(_DWORD *)(v21 + 20) )
  {
    v23 = *(unsigned int *)(v22 + 5396);
    if ( (_DWORD)v23 == -1 && *(_DWORD *)(*(_QWORD *)(v21 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, 3LL, v6);
    }
    else
    {
      v106 = &off_1400D41D0;
      v107 = 0;
      v108 = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      sub_1400011A8(&v106, (__int64)L"Register_MAC_IGC_GPIE", 0x15uLL);
      sub_1400120E0((__int64)&v282, (__int64)&v106);
      v283 = off_1400D5638;
      v52 = &off_1400D5610;
      v282 = &off_1400D5610;
      v284 = 0xA5A5A5A5A5000012uLL;
      v285 = v23;
      v286 = 10LL;
      v106 = &off_1400D41D0;
      if ( v108 )
      {
        ExFreePool(v108);
        v52 = v282;
      }
      v53 = v52[4];
      v108 = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      v286 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v53)(&v282, a2);
      v111 = &off_1400D41D0;
      v112 = 0;
      v113 = 0LL;
      v114 = 0LL;
      v115 = 0LL;
      sub_1400011A8(&v111, (__int64)qword_1400B6F30, 1uLL);
      v54 = v113;
      v55 = &unk_1400D44E0;
      if ( v113 )
        v55 = v113;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v55, 2 * v114);
      v111 = &off_1400D41D0;
      if ( v54 )
        ExFreePool(v54);
      v113 = 0LL;
      v114 = 0LL;
      v115 = 0LL;
      v282 = &off_1400D5610;
      v283 = off_1400D5638;
      sub_140005CFC(&v282);
    }
  }
  v116 = &off_1400D41D0;
  v117 = 0;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  sub_1400011A8(&v116, (__int64)L"Rx queues lookup table\n", 0x17uLL);
  v24 = v118;
  v25 = &unk_1400D44E0;
  if ( v118 )
    v25 = v118;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v25, 2 * v119);
  v116 = &off_1400D41D0;
  if ( v24 )
    ExFreePool(v24);
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = &off_1400D41D0;
  v122 = 0;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  sub_1400011A8(&v121, (__int64)L"sc_rxQueueToMessageIdLookupTable[0]", 0x23uLL);
  sub_1400120E0((__int64)&v287, (__int64)&v121);
  v288 = off_1400D5638;
  v26 = &off_1400D5610;
  v291 = 10LL;
  v287 = &off_1400D5610;
  v289 = 0xA5A5A5A5A5000012uLL;
  v290 = 0LL;
  v121 = &off_1400D41D0;
  if ( v123 )
  {
    ExFreePool(v123);
    v26 = v287;
  }
  v27 = v26[4];
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v27)(&v287, a2);
  v126 = &off_1400D41D0;
  v127 = 0;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  sub_1400011A8(&v126, (__int64)qword_1400B6F30, 1uLL);
  v28 = v128;
  v29 = &unk_1400D44E0;
  if ( v128 )
    v29 = v128;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v29, 2 * v129);
  v126 = &off_1400D41D0;
  if ( v28 )
    ExFreePool(v28);
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v287 = &off_1400D5610;
  v288 = off_1400D5638;
  sub_140005CFC(&v287);
  v131 = &off_1400D41D0;
  v132 = 0;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  sub_1400011A8(&v131, (__int64)L"sc_rxQueueToMessageIdLookupTable[1]", 0x23uLL);
  sub_1400120E0((__int64)&v292, (__int64)&v131);
  v293 = off_1400D5638;
  v30 = &off_1400D5610;
  v296 = 10LL;
  v292 = &off_1400D5610;
  v294 = 0xA5A5A5A5A5000012uLL;
  v295 = 2LL;
  v131 = &off_1400D41D0;
  if ( v133 )
  {
    ExFreePool(v133);
    v30 = v292;
  }
  v31 = v30[4];
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v31)(&v292, a2);
  v136 = &off_1400D41D0;
  v137 = 0;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  sub_1400011A8(&v136, (__int64)qword_1400B6F30, 1uLL);
  v32 = v138;
  v33 = &unk_1400D44E0;
  if ( v138 )
    v33 = v138;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v33, 2 * v139);
  v136 = &off_1400D41D0;
  if ( v32 )
    ExFreePool(v32);
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v292 = &off_1400D5610;
  v293 = off_1400D5638;
  sub_140005CFC(&v292);
  v141 = &off_1400D41D0;
  v142 = 0;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  sub_1400011A8(&v141, (__int64)L"sc_rxQueueToMessageIdLookupTable[2]", 0x23uLL);
  sub_1400120E0((__int64)&v297, (__int64)&v141);
  v298 = off_1400D5638;
  v34 = &off_1400D5610;
  v301 = 10LL;
  v297 = &off_1400D5610;
  v299 = 0xA5A5A5A5A5000012uLL;
  v300 = 4LL;
  v141 = &off_1400D41D0;
  if ( v143 )
  {
    ExFreePool(v143);
    v34 = v297;
  }
  v35 = v34[4];
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v35)(&v297, a2);
  v146 = &off_1400D41D0;
  v147 = 0;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  sub_1400011A8(&v146, (__int64)qword_1400B6F30, 1uLL);
  v36 = v148;
  v37 = &unk_1400D44E0;
  if ( v148 )
    v37 = v148;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v37, 2 * v149);
  v146 = &off_1400D41D0;
  if ( v36 )
    ExFreePool(v36);
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v297 = &off_1400D5610;
  v298 = off_1400D5638;
  sub_140005CFC(&v297);
  v151 = &off_1400D41D0;
  v152 = 0;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  sub_1400011A8(&v151, (__int64)L"sc_rxQueueToMessageIdLookupTable[3]", 0x23uLL);
  sub_1400120E0((__int64)&v302, (__int64)&v151);
  v303 = off_1400D5638;
  v38 = &off_1400D5610;
  v306 = 10LL;
  v302 = &off_1400D5610;
  v304 = 0xA5A5A5A5A5000012uLL;
  v305 = 4LL;
  v151 = &off_1400D41D0;
  if ( v153 )
  {
    ExFreePool(v153);
    v38 = v302;
  }
  v39 = v38[4];
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v39)(&v302, a2);
  v156 = &off_1400D41D0;
  v157 = 0;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  sub_1400011A8(&v156, (__int64)qword_1400B6F30, 1uLL);
  v40 = v158;
  v41 = &unk_1400D44E0;
  if ( v158 )
    v41 = v158;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v41, 2 * v159);
  v156 = &off_1400D41D0;
  if ( v40 )
    ExFreePool(v40);
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v302 = &off_1400D5610;
  v303 = off_1400D5638;
  sub_140005CFC(&v302);
  v161 = &off_1400D41D0;
  v162 = 0;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  sub_1400011A8(&v161, (__int64)L"Tx queues lookup table\n", 0x17uLL);
  v42 = v163;
  v43 = &unk_1400D44E0;
  if ( v163 )
    v43 = v163;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v43, 2 * v164);
  v161 = &off_1400D41D0;
  if ( v42 )
    ExFreePool(v42);
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v166 = &off_1400D41D0;
  v167 = 0;
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  sub_1400011A8(&v166, (__int64)L"sc_txQueueToMessageIdLookupTable[0]", 0x23uLL);
  sub_1400120E0((__int64)&v307, (__int64)&v166);
  v308 = off_1400D5638;
  v44 = &off_1400D5610;
  v311 = 10LL;
  v307 = &off_1400D5610;
  v309 = 0xA5A5A5A5A5000012uLL;
  v310 = 1LL;
  v166 = &off_1400D41D0;
  if ( v168 )
  {
    ExFreePool(v168);
    v44 = v307;
  }
  v45 = v44[4];
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v45)(&v307, a2);
  v171 = &off_1400D41D0;
  v172 = 0;
  v173 = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  sub_1400011A8(&v171, (__int64)qword_1400B6F30, 1uLL);
  v46 = v173;
  v47 = &unk_1400D44E0;
  if ( v173 )
    v47 = v173;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v47, 2 * v174);
  v171 = &off_1400D41D0;
  if ( v46 )
    ExFreePool(v46);
  v173 = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  v307 = &off_1400D5610;
  v308 = off_1400D5638;
  sub_140005CFC(&v307);
  v176 = &off_1400D41D0;
  v177 = 0;
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  sub_1400011A8(&v176, (__int64)L"sc_txQueueToMessageIdLookupTable[1]", 0x23uLL);
  sub_1400120E0((__int64)&v312, (__int64)&v176);
  v313 = off_1400D5638;
  v48 = &off_1400D5610;
  v316 = 10LL;
  v312 = &off_1400D5610;
  v314 = 0xA5A5A5A5A5000012uLL;
  v315 = 3LL;
  v176 = &off_1400D41D0;
  if ( v178 )
  {
    ExFreePool(v178);
    v48 = v312;
  }
  v49 = v48[4];
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v49)(&v312, a2);
  v181 = &off_1400D41D0;
  v182 = 0;
  v183 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  sub_1400011A8(&v181, (__int64)qword_1400B6F30, 1uLL);
  v50 = v183;
  if ( v183 )
  {
    v51 = v183;
  }
  else
  {
    v50 = &unk_1400D44E0;
    v51 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v50, 2 * v184);
  v181 = &off_1400D41D0;
  if ( v51 )
    ExFreePool(v51);
  v183 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  v312 = &off_1400D5610;
  v313 = off_1400D5638;
  sub_140005CFC(&v312);
  v186 = &off_1400D41D0;
  v187 = 0;
  v188 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  sub_1400011A8(&v186, (__int64)L"sc_txQueueToMessageIdLookupTable[2]", 0x23uLL);
  sub_1400120E0((__int64)&v317, (__int64)&v186);
  v318 = off_1400D5638;
  v56 = &off_1400D5610;
  v321 = 10LL;
  v317 = &off_1400D5610;
  v319 = 0xA5A5A5A5A5000012uLL;
  v320 = 4LL;
  v186 = &off_1400D41D0;
  if ( v188 )
  {
    ExFreePool(v188);
    v56 = v317;
  }
  v57 = v56[4];
  v188 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v57)(&v317, a2);
  v191 = &off_1400D41D0;
  v192 = 0;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  sub_1400011A8(&v191, (__int64)qword_1400B6F30, 1uLL);
  v58 = v193;
  v59 = &unk_1400D44E0;
  if ( v193 )
    v59 = v193;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v59, 2 * v194);
  v191 = &off_1400D41D0;
  if ( v58 )
    ExFreePool(v58);
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v317 = &off_1400D5610;
  v318 = off_1400D5638;
  sub_140005CFC(&v317);
  v196 = &off_1400D41D0;
  v197 = 0;
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  sub_1400011A8(&v196, (__int64)L"sc_txQueueToMessageIdLookupTable[3]", 0x23uLL);
  sub_1400120E0((__int64)&v322, (__int64)&v196);
  v323 = off_1400D5638;
  v60 = &off_1400D5610;
  v326 = 10LL;
  v322 = &off_1400D5610;
  v324 = 0xA5A5A5A5A5000012uLL;
  v325 = 4LL;
  v196 = &off_1400D41D0;
  if ( v198 )
  {
    ExFreePool(v198);
    v60 = v322;
  }
  v61 = v60[4];
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v61)(&v322, a2);
  v201 = &off_1400D41D0;
  v202 = 0;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  sub_1400011A8(&v201, (__int64)qword_1400B6F30, 1uLL);
  v62 = v203;
  v63 = &unk_1400D44E0;
  if ( v203 )
    v63 = v203;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v63, 2 * v204);
  v201 = &off_1400D41D0;
  if ( v62 )
    ExFreePool(v62);
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v322 = &off_1400D5610;
  v323 = off_1400D5638;
  sub_140005CFC(&v322);
  v206 = &off_1400D41D0;
  v207 = 0;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  sub_1400011A8(&v206, (__int64)L"Interrupt dispatchers auto reset lookup table\n", 0x2EuLL);
  v64 = v208;
  v65 = &unk_1400D44E0;
  if ( v208 )
    v65 = v208;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v65, 2 * v209);
  v206 = &off_1400D41D0;
  if ( v64 )
    ExFreePool(v64);
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = &off_1400D41D0;
  v212 = 0;
  v213 = 0LL;
  v214 = 0LL;
  v215 = 0LL;
  sub_1400011A8(&v211, (__int64)L"sc_interruptDispatcherAutoResetLookupTable[0]", 0x2DuLL);
  sub_1400120E0((__int64)&v260, (__int64)&v211);
  v211 = &off_1400D41D0;
  v66 = &off_1400D5998;
  v260 = &off_1400D5998;
  v261 = off_1400D59C0;
  v262 = 0xA5A5A5A5A5000013uLL;
  v263 = 0;
  if ( v213 )
  {
    ExFreePool(v213);
    v66 = v260;
  }
  v67 = (void (__fastcall *)(__int64, __int64))v66[4];
  v213 = 0LL;
  v214 = 0LL;
  v215 = 0LL;
  if ( v67 == sub_140007740 )
    sub_140007740((__int64)&v260, a2);
  else
    v67((__int64)&v260, a2);
  v216 = &off_1400D41D0;
  v217 = 0;
  v218 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  sub_1400011A8(&v216, (__int64)qword_1400B6F30, 1uLL);
  v68 = v218;
  v69 = &unk_1400D44E0;
  if ( v218 )
    v69 = v218;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v69, 2 * v219);
  v216 = &off_1400D41D0;
  if ( v68 )
    ExFreePool(v68);
  v218 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v260 = &off_1400D5998;
  v261 = off_1400D59C0;
  sub_140005CFC(&v260);
  v221 = &off_1400D41D0;
  v222 = 0;
  v223 = 0LL;
  v224 = 0LL;
  v225 = 0LL;
  sub_1400011A8(&v221, (__int64)L"sc_interruptDispatcherAutoResetLookupTable[1]", 0x2DuLL);
  sub_1400120E0((__int64)&v264, (__int64)&v221);
  v265 = off_1400D59C0;
  v70 = &off_1400D5998;
  v221 = &off_1400D41D0;
  v264 = &off_1400D5998;
  v266 = 0xA5A5A5A5A5000013uLL;
  v267 = 0;
  if ( v223 )
  {
    ExFreePool(v223);
    v70 = v264;
  }
  v71 = (void (__fastcall *)(__int64, __int64))v70[4];
  v223 = 0LL;
  v224 = 0LL;
  v225 = 0LL;
  if ( v71 == sub_140007740 )
    sub_140007740((__int64)&v264, a2);
  else
    v71((__int64)&v264, a2);
  v226 = &off_1400D41D0;
  v227 = 0;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  sub_1400011A8(&v226, (__int64)qword_1400B6F30, 1uLL);
  v72 = v228;
  v73 = &unk_1400D44E0;
  if ( v228 )
    v73 = v228;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v73, 2 * v229);
  v226 = &off_1400D41D0;
  if ( v72 )
    ExFreePool(v72);
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  v264 = &off_1400D5998;
  v265 = off_1400D59C0;
  sub_140005CFC(&v264);
  v231 = &off_1400D41D0;
  v232 = 0;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  sub_1400011A8(&v231, (__int64)L"sc_interruptDispatcherAutoResetLookupTable[2]", 0x2DuLL);
  sub_1400120E0((__int64)&v268, (__int64)&v231);
  v269 = off_1400D59C0;
  v74 = &off_1400D5998;
  v231 = &off_1400D41D0;
  v268 = &off_1400D5998;
  v270 = 0xA5A5A5A5A5000013uLL;
  v271 = 0;
  if ( v233 )
  {
    ExFreePool(v233);
    v74 = v268;
  }
  v75 = (void (__fastcall *)(__int64, __int64))v74[4];
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  if ( v75 == sub_140007740 )
    sub_140007740((__int64)&v268, a2);
  else
    v75((__int64)&v268, a2);
  v236 = &off_1400D41D0;
  v237 = 0;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  sub_1400011A8(&v236, (__int64)qword_1400B6F30, 1uLL);
  v76 = v238;
  if ( v238 )
  {
    v77 = v238;
  }
  else
  {
    v76 = &unk_1400D44E0;
    v77 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v76, 2 * v239);
  v236 = &off_1400D41D0;
  if ( v77 )
    ExFreePool(v77);
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v268 = &off_1400D5998;
  v269 = off_1400D59C0;
  sub_140005CFC(&v268);
  v241 = &off_1400D41D0;
  v242 = 0;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  sub_1400011A8(&v241, (__int64)L"sc_interruptDispatcherAutoResetLookupTable[3]", 0x2DuLL);
  sub_1400120E0((__int64)&v251, (__int64)&v241);
  v252 = off_1400D59C0;
  v78 = &off_1400D5998;
  v241 = &off_1400D41D0;
  v251 = &off_1400D5998;
  v253 = 0xA5A5A5A5A5000013uLL;
  v254 = 0;
  if ( v243 )
  {
    ExFreePool(v243);
    v78 = v251;
  }
  v79 = (void (__fastcall *)(__int64, __int64))v78[4];
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  if ( v79 == sub_140007740 )
    sub_140007740((__int64)&v251, a2);
  else
    v79((__int64)&v251, a2);
  v86 = &off_1400D41D0;
  LOWORD(v87) = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  sub_1400011A8(&v86, (__int64)qword_1400B6F30, 1uLL);
  v80 = v88;
  v81 = &unk_1400D44E0;
  if ( v88 )
    v81 = v88;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v81, 2 * v89);
  v86 = &off_1400D41D0;
  if ( v80 )
    ExFreePool(v80);
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v251 = &off_1400D5998;
  v252 = off_1400D59C0;
  sub_140005CFC(&v251);
  v86 = &off_1400D41D0;
  LOWORD(v87) = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  sub_1400011A8(&v86, (__int64)L"sc_interruptDispatcherAutoResetLookupTable[4]", 0x2DuLL);
  sub_1400120E0((__int64)&v251, (__int64)&v86);
  v252 = off_1400D59C0;
  v82 = &off_1400D5998;
  v251 = &off_1400D5998;
  v253 = 0xA5A5A5A5A5000013uLL;
  v254 = 1;
  if ( v88 )
  {
    ExFreePool(v88);
    v82 = v251;
  }
  v83 = (void (__fastcall *)(__int64, __int64))v82[4];
  if ( v83 == sub_140007740 )
    sub_140007740((__int64)&v251, a2);
  else
    v83((__int64)&v251, a2);
  v255 = &off_1400D41D0;
  v256 = 0;
  v257 = 0LL;
  v258 = 0LL;
  v259 = 0LL;
  sub_1400011A8(&v255, (__int64)qword_1400B6F30, 1uLL);
  v84 = v257;
  if ( v257 )
    v5 = v257;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v258);
  if ( v84 )
    ExFreePool(v84);
  v251 = &off_1400D5998;
  v252 = off_1400D59C0;
  return sub_140005CFC(&v251);
}
