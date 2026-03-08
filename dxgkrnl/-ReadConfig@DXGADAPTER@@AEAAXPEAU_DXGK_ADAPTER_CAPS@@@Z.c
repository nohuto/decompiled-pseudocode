/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01F6DB4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall DXGADAPTER::ReadConfig(DXGADAPTER *this, struct _DXGK_ADAPTER_CAPS *a2)
{
  bool v4; // zf
  bool v5; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  char v13; // al
  bool v14; // al
  char v15; // al
  bool v16; // cf
  int v17; // eax
  bool v18; // al
  bool v19; // al
  bool v20; // al
  char v21; // al
  char v22; // dl
  int v23; // r8d
  int v24; // r10d
  char v25; // al
  char v26; // al
  char v27; // r9
  _DWORD *v28; // rcx
  _DWORD *v29; // rdx
  char v30; // al
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+7Ch] [rbp-84h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+8Ch] [rbp-74h] BYREF
  int v55; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+94h] [rbp-6Ch] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A4h] [rbp-5Ch] BYREF
  int v61; // [rsp+A8h] [rbp-58h] BYREF
  int v62; // [rsp+ACh] [rbp-54h] BYREF
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B4h] [rbp-4Ch] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  int v66; // [rsp+BCh] [rbp-44h] BYREF
  int v67; // [rsp+C0h] [rbp-40h] BYREF
  int v68; // [rsp+C4h] [rbp-3Ch] BYREF
  int v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+CCh] [rbp-34h] BYREF
  int v71; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch] BYREF
  int v73; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+DCh] [rbp-24h] BYREF
  int v75; // [rsp+E0h] [rbp-20h] BYREF
  int v76; // [rsp+E4h] [rbp-1Ch] BYREF
  int v77; // [rsp+E8h] [rbp-18h] BYREF
  int v78; // [rsp+ECh] [rbp-14h] BYREF
  int v79; // [rsp+F0h] [rbp-10h] BYREF
  int v80; // [rsp+F4h] [rbp-Ch] BYREF
  int v81; // [rsp+F8h] [rbp-8h] BYREF
  int v82; // [rsp+FCh] [rbp-4h] BYREF
  int v83; // [rsp+100h] [rbp+0h] BYREF
  int v84; // [rsp+104h] [rbp+4h] BYREF
  int v85; // [rsp+108h] [rbp+8h] BYREF
  int v86; // [rsp+10Ch] [rbp+Ch] BYREF
  int v87; // [rsp+110h] [rbp+10h] BYREF
  int v88; // [rsp+114h] [rbp+14h] BYREF
  int v89; // [rsp+118h] [rbp+18h] BYREF
  int v90; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v91; // [rsp+120h] [rbp+20h] BYREF
  int v92; // [rsp+124h] [rbp+24h] BYREF
  int v93; // [rsp+128h] [rbp+28h] BYREF
  int v94; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v95; // [rsp+130h] [rbp+30h] BYREF
  int v96; // [rsp+134h] [rbp+34h] BYREF
  int v97; // [rsp+138h] [rbp+38h] BYREF
  int v98; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v99; // [rsp+140h] [rbp+40h] BYREF
  int v100; // [rsp+144h] [rbp+44h] BYREF
  int v101; // [rsp+148h] [rbp+48h] BYREF
  int v102; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v103; // [rsp+150h] [rbp+50h] BYREF
  int v104; // [rsp+154h] [rbp+54h] BYREF
  int v105; // [rsp+158h] [rbp+58h] BYREF
  int v106; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v107; // [rsp+160h] [rbp+60h] BYREF
  int v108; // [rsp+164h] [rbp+64h] BYREF
  int v109; // [rsp+168h] [rbp+68h] BYREF
  int v110; // [rsp+16Ch] [rbp+6Ch] BYREF
  __int64 v111; // [rsp+170h] [rbp+70h] BYREF
  __int64 v112; // [rsp+178h] [rbp+78h] BYREF
  __int64 v113; // [rsp+180h] [rbp+80h]
  __int64 v114; // [rsp+190h] [rbp+90h] BYREF
  int v115; // [rsp+198h] [rbp+98h]
  const wchar_t *v116; // [rsp+1A0h] [rbp+A0h]
  int *v117; // [rsp+1A8h] [rbp+A8h]
  int v118; // [rsp+1B0h] [rbp+B0h]
  int *v119; // [rsp+1B8h] [rbp+B8h]
  int v120; // [rsp+1C0h] [rbp+C0h]
  __int64 v121; // [rsp+1C8h] [rbp+C8h]
  int v122; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v123; // [rsp+1D8h] [rbp+D8h]
  int *v124; // [rsp+1E0h] [rbp+E0h]
  int v125; // [rsp+1E8h] [rbp+E8h]
  int *v126; // [rsp+1F0h] [rbp+F0h]
  int v127; // [rsp+1F8h] [rbp+F8h]
  __int64 v128; // [rsp+200h] [rbp+100h]
  int v129; // [rsp+208h] [rbp+108h]
  const wchar_t *v130; // [rsp+210h] [rbp+110h]
  int *v131; // [rsp+218h] [rbp+118h]
  int v132; // [rsp+220h] [rbp+120h]
  int *v133; // [rsp+228h] [rbp+128h]
  int v134; // [rsp+230h] [rbp+130h]
  __int64 v135; // [rsp+238h] [rbp+138h]
  int v136; // [rsp+240h] [rbp+140h]
  const wchar_t *v137; // [rsp+248h] [rbp+148h]
  __int64 *v138; // [rsp+250h] [rbp+150h]
  int v139; // [rsp+258h] [rbp+158h]
  __int64 *v140; // [rsp+260h] [rbp+160h]
  int v141; // [rsp+268h] [rbp+168h]
  __int64 v142; // [rsp+270h] [rbp+170h]
  int v143; // [rsp+278h] [rbp+178h]
  const wchar_t *v144; // [rsp+280h] [rbp+180h]
  int *v145; // [rsp+288h] [rbp+188h]
  int v146; // [rsp+290h] [rbp+190h]
  int *v147; // [rsp+298h] [rbp+198h]
  int v148; // [rsp+2A0h] [rbp+1A0h]
  __int64 v149; // [rsp+2A8h] [rbp+1A8h]
  int v150; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v151; // [rsp+2B8h] [rbp+1B8h]
  int *v152; // [rsp+2C0h] [rbp+1C0h]
  int v153; // [rsp+2C8h] [rbp+1C8h]
  int *v154; // [rsp+2D0h] [rbp+1D0h]
  int v155; // [rsp+2D8h] [rbp+1D8h]
  __int64 v156; // [rsp+2E0h] [rbp+1E0h]
  int v157; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v158; // [rsp+2F0h] [rbp+1F0h]
  int *v159; // [rsp+2F8h] [rbp+1F8h]
  int v160; // [rsp+300h] [rbp+200h]
  int *v161; // [rsp+308h] [rbp+208h]
  int v162; // [rsp+310h] [rbp+210h]
  __int64 v163; // [rsp+318h] [rbp+218h]
  int v164; // [rsp+320h] [rbp+220h]
  const wchar_t *v165; // [rsp+328h] [rbp+228h]
  int *v166; // [rsp+330h] [rbp+230h]
  int v167; // [rsp+338h] [rbp+238h]
  int *v168; // [rsp+340h] [rbp+240h]
  int v169; // [rsp+348h] [rbp+248h]
  __int64 v170; // [rsp+350h] [rbp+250h]
  int v171; // [rsp+358h] [rbp+258h]
  const wchar_t *v172; // [rsp+360h] [rbp+260h]
  int *v173; // [rsp+368h] [rbp+268h]
  int v174; // [rsp+370h] [rbp+270h]
  int *v175; // [rsp+378h] [rbp+278h]
  int v176; // [rsp+380h] [rbp+280h]
  __int64 v177; // [rsp+388h] [rbp+288h]
  int v178; // [rsp+390h] [rbp+290h]
  const wchar_t *v179; // [rsp+398h] [rbp+298h]
  int *v180; // [rsp+3A0h] [rbp+2A0h]
  int v181; // [rsp+3A8h] [rbp+2A8h]
  int *v182; // [rsp+3B0h] [rbp+2B0h]
  int v183; // [rsp+3B8h] [rbp+2B8h]
  __int64 v184; // [rsp+3C0h] [rbp+2C0h]
  int v185; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v186; // [rsp+3D0h] [rbp+2D0h]
  int *v187; // [rsp+3D8h] [rbp+2D8h]
  int v188; // [rsp+3E0h] [rbp+2E0h]
  int *v189; // [rsp+3E8h] [rbp+2E8h]
  int v190; // [rsp+3F0h] [rbp+2F0h]
  __int64 v191; // [rsp+3F8h] [rbp+2F8h]
  int v192; // [rsp+400h] [rbp+300h]
  const wchar_t *v193; // [rsp+408h] [rbp+308h]
  int *v194; // [rsp+410h] [rbp+310h]
  int v195; // [rsp+418h] [rbp+318h]
  int *v196; // [rsp+420h] [rbp+320h]
  int v197; // [rsp+428h] [rbp+328h]
  __int64 v198; // [rsp+430h] [rbp+330h]
  int v199; // [rsp+438h] [rbp+338h]
  const wchar_t *v200; // [rsp+440h] [rbp+340h]
  int *v201; // [rsp+448h] [rbp+348h]
  int v202; // [rsp+450h] [rbp+350h]
  int *v203; // [rsp+458h] [rbp+358h]
  int v204; // [rsp+460h] [rbp+360h]
  __int64 v205; // [rsp+468h] [rbp+368h]
  int v206; // [rsp+470h] [rbp+370h]
  const wchar_t *v207; // [rsp+478h] [rbp+378h]
  int *v208; // [rsp+480h] [rbp+380h]
  int v209; // [rsp+488h] [rbp+388h]
  int *v210; // [rsp+490h] [rbp+390h]
  int v211; // [rsp+498h] [rbp+398h]
  __int64 v212; // [rsp+4A0h] [rbp+3A0h]
  int v213; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v214; // [rsp+4B0h] [rbp+3B0h]
  int *v215; // [rsp+4B8h] [rbp+3B8h]
  int v216; // [rsp+4C0h] [rbp+3C0h]
  int *v217; // [rsp+4C8h] [rbp+3C8h]
  int v218; // [rsp+4D0h] [rbp+3D0h]
  __int64 v219; // [rsp+4D8h] [rbp+3D8h]
  int v220; // [rsp+4E0h] [rbp+3E0h]
  const wchar_t *v221; // [rsp+4E8h] [rbp+3E8h]
  int *v222; // [rsp+4F0h] [rbp+3F0h]
  int v223; // [rsp+4F8h] [rbp+3F8h]
  int *v224; // [rsp+500h] [rbp+400h]
  int v225; // [rsp+508h] [rbp+408h]
  __int64 v226; // [rsp+510h] [rbp+410h]
  int v227; // [rsp+518h] [rbp+418h]
  const wchar_t *v228; // [rsp+520h] [rbp+420h]
  int *v229; // [rsp+528h] [rbp+428h]
  int v230; // [rsp+530h] [rbp+430h]
  int *v231; // [rsp+538h] [rbp+438h]
  int v232; // [rsp+540h] [rbp+440h]
  __int64 v233; // [rsp+548h] [rbp+448h]
  int v234; // [rsp+550h] [rbp+450h]
  const wchar_t *v235; // [rsp+558h] [rbp+458h]
  int *v236; // [rsp+560h] [rbp+460h]
  int v237; // [rsp+568h] [rbp+468h]
  int *v238; // [rsp+570h] [rbp+470h]
  int v239; // [rsp+578h] [rbp+478h]
  __int64 v240; // [rsp+580h] [rbp+480h]
  int v241; // [rsp+588h] [rbp+488h]
  const wchar_t *v242; // [rsp+590h] [rbp+490h]
  int *v243; // [rsp+598h] [rbp+498h]
  int v244; // [rsp+5A0h] [rbp+4A0h]
  int *v245; // [rsp+5A8h] [rbp+4A8h]
  int v246; // [rsp+5B0h] [rbp+4B0h]
  __int64 v247; // [rsp+5B8h] [rbp+4B8h]
  int v248; // [rsp+5C0h] [rbp+4C0h]
  const wchar_t *v249; // [rsp+5C8h] [rbp+4C8h]
  int *v250; // [rsp+5D0h] [rbp+4D0h]
  int v251; // [rsp+5D8h] [rbp+4D8h]
  int *v252; // [rsp+5E0h] [rbp+4E0h]
  int v253; // [rsp+5E8h] [rbp+4E8h]
  __int64 v254; // [rsp+5F0h] [rbp+4F0h]
  int v255; // [rsp+5F8h] [rbp+4F8h]
  const wchar_t *v256; // [rsp+600h] [rbp+500h]
  int *v257; // [rsp+608h] [rbp+508h]
  int v258; // [rsp+610h] [rbp+510h]
  int *v259; // [rsp+618h] [rbp+518h]
  int v260; // [rsp+620h] [rbp+520h]
  __int64 v261; // [rsp+628h] [rbp+528h]
  int v262; // [rsp+630h] [rbp+530h]
  const wchar_t *v263; // [rsp+638h] [rbp+538h]
  int *v264; // [rsp+640h] [rbp+540h]
  int v265; // [rsp+648h] [rbp+548h]
  int *v266; // [rsp+650h] [rbp+550h]
  int v267; // [rsp+658h] [rbp+558h]
  __int64 v268; // [rsp+660h] [rbp+560h]
  int v269; // [rsp+668h] [rbp+568h]
  const wchar_t *v270; // [rsp+670h] [rbp+570h]
  int *v271; // [rsp+678h] [rbp+578h]
  int v272; // [rsp+680h] [rbp+580h]
  int *v273; // [rsp+688h] [rbp+588h]
  int v274; // [rsp+690h] [rbp+590h]
  __int64 v275; // [rsp+698h] [rbp+598h]
  int v276; // [rsp+6A0h] [rbp+5A0h]
  const wchar_t *v277; // [rsp+6A8h] [rbp+5A8h]
  int *v278; // [rsp+6B0h] [rbp+5B0h]
  int v279; // [rsp+6B8h] [rbp+5B8h]
  int *v280; // [rsp+6C0h] [rbp+5C0h]
  int v281; // [rsp+6C8h] [rbp+5C8h]
  __int64 v282; // [rsp+6D0h] [rbp+5D0h]
  int v283; // [rsp+6D8h] [rbp+5D8h]
  const wchar_t *v284; // [rsp+6E0h] [rbp+5E0h]
  int *v285; // [rsp+6E8h] [rbp+5E8h]
  int v286; // [rsp+6F0h] [rbp+5F0h]
  int *v287; // [rsp+6F8h] [rbp+5F8h]
  int v288; // [rsp+700h] [rbp+600h]
  __int64 v289; // [rsp+708h] [rbp+608h]
  int v290; // [rsp+710h] [rbp+610h]
  const wchar_t *v291; // [rsp+718h] [rbp+618h]
  int *v292; // [rsp+720h] [rbp+620h]
  int v293; // [rsp+728h] [rbp+628h]
  int *v294; // [rsp+730h] [rbp+630h]
  int v295; // [rsp+738h] [rbp+638h]
  __int64 v296; // [rsp+740h] [rbp+640h]
  int v297; // [rsp+748h] [rbp+648h]
  const wchar_t *v298; // [rsp+750h] [rbp+650h]
  int *v299; // [rsp+758h] [rbp+658h]
  int v300; // [rsp+760h] [rbp+660h]
  int *v301; // [rsp+768h] [rbp+668h]
  int v302; // [rsp+770h] [rbp+670h]
  __int64 v303; // [rsp+778h] [rbp+678h]
  int v304; // [rsp+780h] [rbp+680h]
  const wchar_t *v305; // [rsp+788h] [rbp+688h]
  int *v306; // [rsp+790h] [rbp+690h]
  int v307; // [rsp+798h] [rbp+698h]
  int *v308; // [rsp+7A0h] [rbp+6A0h]
  int v309; // [rsp+7A8h] [rbp+6A8h]
  __int64 v310; // [rsp+7B0h] [rbp+6B0h]
  int v311; // [rsp+7B8h] [rbp+6B8h]
  const wchar_t *v312; // [rsp+7C0h] [rbp+6C0h]
  int *v313; // [rsp+7C8h] [rbp+6C8h]
  int v314; // [rsp+7D0h] [rbp+6D0h]
  int *v315; // [rsp+7D8h] [rbp+6D8h]
  int v316; // [rsp+7E0h] [rbp+6E0h]
  __int64 v317; // [rsp+7E8h] [rbp+6E8h]
  int v318; // [rsp+7F0h] [rbp+6F0h]
  const wchar_t *v319; // [rsp+7F8h] [rbp+6F8h]
  int *v320; // [rsp+800h] [rbp+700h]
  int v321; // [rsp+808h] [rbp+708h]
  int *v322; // [rsp+810h] [rbp+710h]
  int v323; // [rsp+818h] [rbp+718h]
  __int64 v324; // [rsp+820h] [rbp+720h]
  int v325; // [rsp+828h] [rbp+728h]
  const wchar_t *v326; // [rsp+830h] [rbp+730h]
  int *v327; // [rsp+838h] [rbp+738h]
  int v328; // [rsp+840h] [rbp+740h]
  int *v329; // [rsp+848h] [rbp+748h]
  int v330; // [rsp+850h] [rbp+750h]
  __int64 v331; // [rsp+858h] [rbp+758h]
  int v332; // [rsp+860h] [rbp+760h]
  const wchar_t *v333; // [rsp+868h] [rbp+768h]
  int *v334; // [rsp+870h] [rbp+770h]
  int v335; // [rsp+878h] [rbp+778h]
  int *v336; // [rsp+880h] [rbp+780h]
  int v337; // [rsp+888h] [rbp+788h]
  __int64 v338; // [rsp+890h] [rbp+790h]
  int v339; // [rsp+898h] [rbp+798h]
  const wchar_t *v340; // [rsp+8A0h] [rbp+7A0h]
  int *v341; // [rsp+8A8h] [rbp+7A8h]
  int v342; // [rsp+8B0h] [rbp+7B0h]
  int *v343; // [rsp+8B8h] [rbp+7B8h]
  int v344; // [rsp+8C0h] [rbp+7C0h]
  __int64 v345; // [rsp+8C8h] [rbp+7C8h]
  int v346; // [rsp+8D0h] [rbp+7D0h]
  const wchar_t *v347; // [rsp+8D8h] [rbp+7D8h]
  unsigned int *v348; // [rsp+8E0h] [rbp+7E0h]
  int v349; // [rsp+8E8h] [rbp+7E8h]
  int *v350; // [rsp+8F0h] [rbp+7F0h]
  int v351; // [rsp+8F8h] [rbp+7F8h]
  __int64 v352; // [rsp+900h] [rbp+800h]
  int v353; // [rsp+908h] [rbp+808h]
  const wchar_t *v354; // [rsp+910h] [rbp+810h]
  int *v355; // [rsp+918h] [rbp+818h]
  int v356; // [rsp+920h] [rbp+820h]
  int *v357; // [rsp+928h] [rbp+828h]
  int v358; // [rsp+930h] [rbp+830h]
  __int64 v359; // [rsp+938h] [rbp+838h]
  int v360; // [rsp+940h] [rbp+840h]
  const wchar_t *v361; // [rsp+948h] [rbp+848h]
  int *v362; // [rsp+950h] [rbp+850h]
  int v363; // [rsp+958h] [rbp+858h]
  int *v364; // [rsp+960h] [rbp+860h]
  int v365; // [rsp+968h] [rbp+868h]
  __int64 v366; // [rsp+970h] [rbp+870h]
  int v367; // [rsp+978h] [rbp+878h]
  const wchar_t *v368; // [rsp+980h] [rbp+880h]
  int *v369; // [rsp+988h] [rbp+888h]
  int v370; // [rsp+990h] [rbp+890h]
  int *v371; // [rsp+998h] [rbp+898h]
  int v372; // [rsp+9A0h] [rbp+8A0h]
  __int64 v373; // [rsp+9A8h] [rbp+8A8h]
  int v374; // [rsp+9B0h] [rbp+8B0h]
  const wchar_t *v375; // [rsp+9B8h] [rbp+8B8h]
  int *v376; // [rsp+9C0h] [rbp+8C0h]
  int v377; // [rsp+9C8h] [rbp+8C8h]
  int *v378; // [rsp+9D0h] [rbp+8D0h]
  int v379; // [rsp+9D8h] [rbp+8D8h]
  __int64 v380; // [rsp+9E0h] [rbp+8E0h]
  int v381; // [rsp+9E8h] [rbp+8E8h]
  const wchar_t *v382; // [rsp+9F0h] [rbp+8F0h]
  int *v383; // [rsp+9F8h] [rbp+8F8h]
  int v384; // [rsp+A00h] [rbp+900h]
  int *v385; // [rsp+A08h] [rbp+908h]
  int v386; // [rsp+A10h] [rbp+910h]
  __int64 v387; // [rsp+A18h] [rbp+918h]
  int v388; // [rsp+A20h] [rbp+920h]
  const wchar_t *v389; // [rsp+A28h] [rbp+928h]
  int *v390; // [rsp+A30h] [rbp+930h]
  int v391; // [rsp+A38h] [rbp+938h]
  int *v392; // [rsp+A40h] [rbp+940h]
  int v393; // [rsp+A48h] [rbp+948h]
  __int64 v394; // [rsp+A50h] [rbp+950h]
  int v395; // [rsp+A58h] [rbp+958h]
  const wchar_t *v396; // [rsp+A60h] [rbp+960h]
  int *v397; // [rsp+A68h] [rbp+968h]
  int v398; // [rsp+A70h] [rbp+970h]
  int *v399; // [rsp+A78h] [rbp+978h]
  int v400; // [rsp+A80h] [rbp+980h]
  __int64 v401; // [rsp+A88h] [rbp+988h]
  int v402; // [rsp+A90h] [rbp+990h]
  const wchar_t *v403; // [rsp+A98h] [rbp+998h]
  int *v404; // [rsp+AA0h] [rbp+9A0h]
  int v405; // [rsp+AA8h] [rbp+9A8h]
  int *v406; // [rsp+AB0h] [rbp+9B0h]
  int v407; // [rsp+AB8h] [rbp+9B8h]
  __int64 v408; // [rsp+AC0h] [rbp+9C0h]
  int v409; // [rsp+AC8h] [rbp+9C8h]
  const wchar_t *v410; // [rsp+AD0h] [rbp+9D0h]
  int *v411; // [rsp+AD8h] [rbp+9D8h]
  int v412; // [rsp+AE0h] [rbp+9E0h]
  int *v413; // [rsp+AE8h] [rbp+9E8h]
  int v414; // [rsp+AF0h] [rbp+9F0h]
  __int64 v415; // [rsp+AF8h] [rbp+9F8h]
  int v416; // [rsp+B00h] [rbp+A00h]
  __int128 v417; // [rsp+B08h] [rbp+A08h]
  __int128 v418; // [rsp+B18h] [rbp+A18h]
  __int64 v419; // [rsp+B28h] [rbp+A28h]

  v112 = 16LL;
  v71 = 0;
  v111 = 1395864371LL;
  v113 = 1395864371LL;
  v60 = 0;
  v72 = 0;
  v77 = 7000;
  v44 = 7000;
  v103 = 30000;
  v52 = 30000;
  v104 = 5000;
  v53 = 5000;
  v105 = 500;
  v61 = 0;
  v76 = 0;
  v62 = 0;
  v74 = 0;
  v38 = 0;
  v34 = 0;
  v31 = 0;
  v35 = 0;
  v32 = 0;
  v73 = 1;
  v36 = 1;
  v75 = 0;
  v37 = 0;
  v78 = 0;
  v39 = 0;
  v79 = 0;
  v40 = 0;
  v80 = 0;
  v41 = 0;
  v81 = 0;
  v42 = 0;
  v82 = 0;
  v43 = 0;
  v83 = 1;
  v45 = 1;
  v84 = 0;
  v68 = 0;
  v85 = 0;
  v46 = 0;
  v87 = 0;
  v47 = 0;
  v86 = 0;
  v48 = 0;
  v88 = 0;
  v69 = 0;
  v89 = 1;
  v63 = 1;
  v90 = 0;
  v64 = 0;
  v92 = 0;
  v91 = 0;
  v93 = 0;
  v66 = 0;
  v95 = 0;
  v94 = 0;
  v96 = 0;
  v67 = 0;
  v97 = 0;
  v65 = 0;
  v98 = 0;
  v49 = 0;
  v99 = 0;
  v50 = 0;
  v100 = 0;
  v70 = 0;
  v101 = 1;
  v33 = 1;
  v102 = 0;
  v51 = 0;
  v54 = 500;
  v106 = 0;
  v55 = 0;
  v107 = 0;
  v116 = L"ForceDirectFlip";
  v59 = 0;
  v117 = &v60;
  v108 = 2;
  v119 = &v71;
  v123 = L"DisableOverlays";
  v124 = &v61;
  v126 = &v72;
  v130 = L"EnableOfferReclaimOnDriver";
  v131 = &v36;
  v133 = &v73;
  v137 = L"LeanMemoryLimit";
  v138 = &v112;
  v140 = &v111;
  v144 = L"ForceEnableDxgMms2";
  v145 = &v38;
  v147 = &v74;
  v151 = L"ContextNoPatchMode";
  v152 = &v37;
  v154 = &v75;
  v159 = &v31;
  v56 = 2;
  v109 = 1;
  v57 = 1;
  v110 = 0;
  v58 = 0;
  v114 = 0LL;
  v115 = 288;
  v118 = 67108868;
  v120 = 4;
  v121 = 0LL;
  v122 = 288;
  v125 = 67108868;
  v127 = 4;
  v128 = 0LL;
  v129 = 288;
  v132 = 67108868;
  v134 = 4;
  v135 = 0LL;
  v136 = 288;
  v139 = 184549387;
  v141 = 8;
  v142 = 0LL;
  v143 = 288;
  v146 = 67108868;
  v148 = 4;
  v149 = 0LL;
  v150 = 288;
  v153 = 67108868;
  v155 = 4;
  v156 = 0LL;
  v157 = 288;
  v158 = L"ForceToMapGpuVa";
  v160 = 67108868;
  v161 = &v34;
  v162 = 4;
  v166 = &v32;
  v168 = &v35;
  v172 = L"Force32BitFences";
  v173 = &v62;
  v175 = &v76;
  v179 = L"InitialPagingQueueFenceValue";
  v180 = &v44;
  v182 = &v77;
  v186 = L"ForceInitPagingProcessVaSpace";
  v187 = &v39;
  v189 = &v78;
  v193 = L"DisableGdiContextGpuVa";
  v194 = &v40;
  v196 = &v79;
  v200 = L"DisablePagingContextGpuVa";
  v201 = &v41;
  v203 = &v80;
  v207 = L"DisableMonitoredFenceGpuVa";
  v208 = &v42;
  v210 = &v81;
  v214 = L"ForceExplicitResidencyNotification";
  v215 = &v43;
  v163 = 0LL;
  v164 = 288;
  v165 = L"ForceAccessedPhysically";
  v167 = 67108868;
  v169 = 4;
  v170 = 0LL;
  v171 = 288;
  v174 = 67108868;
  v176 = 4;
  v177 = 0LL;
  v178 = 288;
  v181 = 67108868;
  v183 = 4;
  v184 = 0LL;
  v185 = 288;
  v188 = 67108868;
  v190 = 4;
  v191 = 0LL;
  v192 = 288;
  v195 = 67108868;
  v197 = 4;
  v198 = 0LL;
  v199 = 288;
  v202 = 67108868;
  v204 = 4;
  v205 = 0LL;
  v206 = 288;
  v209 = 67108868;
  v211 = 4;
  v212 = 0LL;
  v213 = 288;
  v216 = 67108868;
  v218 = 4;
  v217 = &v82;
  v222 = &v31;
  v224 = &v34;
  v229 = &v32;
  v231 = &v35;
  v235 = L"DriverManagesResidencyOverride";
  v236 = &v45;
  v238 = &v83;
  v242 = L"GdiPhysicalAdapterIndex";
  v243 = &v68;
  v245 = &v84;
  v249 = L"ForceReplicateGdiContent";
  v250 = &v46;
  v252 = &v85;
  v256 = L"EnableTimedCalls";
  v257 = &v48;
  v259 = &v86;
  v263 = L"CreateGdiPrimaryOnSlaveGpu";
  v264 = &v47;
  v266 = &v87;
  v270 = L"ForceSurpriseRemovalSupport";
  v271 = &v69;
  v273 = &v88;
  v219 = 0LL;
  v220 = 288;
  v221 = L"ForceToMapGpuVa";
  v223 = 67108868;
  v225 = 4;
  v226 = 0LL;
  v227 = 288;
  v228 = L"ForceAccessedPhysically";
  v230 = 67108868;
  v232 = 4;
  v233 = 0LL;
  v234 = 288;
  v237 = 67108868;
  v239 = 4;
  v240 = 0LL;
  v241 = 288;
  v244 = 67108868;
  v246 = 4;
  v247 = 0LL;
  v248 = 288;
  v251 = 67108868;
  v253 = 4;
  v254 = 0LL;
  v255 = 288;
  v258 = 67108868;
  v260 = 4;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v267 = 4;
  v268 = 0LL;
  v269 = 288;
  v272 = 67108868;
  v274 = 4;
  v275 = 0LL;
  v277 = L"EnableDecodeMPO";
  v278 = &v63;
  v280 = &v89;
  v284 = L"DisableBadDriverCheckForHwProtection";
  v285 = &v64;
  v287 = &v90;
  v291 = L"ForceSecondaryMPOSupport";
  v292 = &v91;
  v294 = &v92;
  v298 = L"ForceSecondaryIFlipSupport";
  v299 = &v66;
  v301 = &v93;
  v305 = L"EnablePanelFitterSupport";
  v306 = &v94;
  v308 = &v95;
  v312 = L"EnableMultiPlaneOverlay3DDIs";
  v313 = &v67;
  v315 = &v96;
  v319 = L"DisableSecondaryIFlipSupport";
  v320 = &v65;
  v322 = &v97;
  v326 = L"EnableWDDM23Synchronization";
  v327 = &v49;
  v329 = &v98;
  v276 = 288;
  v279 = 67108868;
  v281 = 4;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v288 = 4;
  v289 = 0LL;
  v290 = 288;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v333 = L"IoMmuFlags";
  v334 = &v50;
  v336 = &v99;
  v340 = L"DisableMultiSourceMPOCheck";
  v341 = &v70;
  v343 = &v100;
  v347 = L"DriverStoreCopyMode";
  v348 = &v33;
  v350 = &v101;
  v354 = L"ForceVariableRefresh";
  v355 = &v51;
  v357 = &v102;
  v361 = L"DeadlockTimeout";
  v362 = &v52;
  v364 = &v103;
  v368 = L"DeadlockPulse";
  v369 = &v53;
  v371 = &v104;
  v375 = L"DeadlockPulseTolerance";
  v376 = &v54;
  v378 = &v105;
  v382 = L"DisableIndependentVidPnVSync";
  v383 = &v55;
  v385 = &v106;
  v335 = 67108868;
  v337 = 4;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v349 = 67108868;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v389 = L"NumVirtualFunctions";
  v393 = 4;
  v390 = &v59;
  v398 = 67108868;
  v392 = &v107;
  v400 = 4;
  v396 = L"CrtcPhaseFrames";
  v397 = &v56;
  v399 = &v108;
  v403 = L"EnableFbrValidation";
  v404 = &v57;
  v406 = &v109;
  v410 = L"DisableBoostedVSyncVirtualization";
  v411 = &v58;
  v413 = &v110;
  v405 = 67108868;
  v407 = 4;
  v412 = 67108868;
  v414 = 4;
  v419 = 0LL;
  v394 = 0LL;
  v395 = 288;
  v401 = 0LL;
  v402 = 288;
  v408 = 0LL;
  v409 = 288;
  v415 = 0LL;
  v416 = 0;
  v417 = 0LL;
  v418 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v114, 0LL, 0LL);
  v4 = v38 == 0;
  *((_BYTE *)this + 2837) = v36 != 0;
  *((_DWORD *)this + 712) = v37;
  *((_QWORD *)this + 355) = v113;
  v5 = !v4;
  v4 = v31 == 0;
  *((_BYTE *)this + 2852) = v5;
  v6 = !v4;
  v4 = v32 == 0;
  *((_BYTE *)this + 2853) = v6;
  v7 = !v4;
  v4 = v39 == 0;
  *((_BYTE *)this + 2854) = v7;
  v8 = !v4;
  v4 = v40 == 0;
  *((_BYTE *)this + 2856) = v8;
  v9 = !v4;
  v4 = v41 == 0;
  *((_BYTE *)this + 2857) = v9;
  v10 = !v4;
  v4 = v42 == 0;
  *((_BYTE *)this + 2858) = v10;
  v11 = !v4;
  v4 = v43 == 0;
  *((_BYTE *)this + 2859) = v11;
  v12 = !v4;
  v4 = v45 == 0;
  *((_BYTE *)this + 2855) = v12;
  *((_DWORD *)this + 723) = v44;
  *((_BYTE *)this + 2860) = !v4;
  if ( v46 || (v13 = 0, (*((_DWORD *)this + 571) & 0x100) != 0) )
    v13 = 1;
  v4 = v47 == 0;
  *((_BYTE *)this + 2838) = v13;
  v14 = !v4;
  v4 = v48 == 0;
  *((_BYTE *)this + 2839) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v49 || (v15 = 1, *((int *)this + 638) < 8704) )
    v15 = 0;
  v16 = v33 < 2;
  *((_BYTE *)this + 2869) = v15;
  *((_DWORD *)this + 720) = v50;
  v17 = 2;
  if ( v16 )
    v17 = v33;
  v4 = v51 == 0;
  *((_DWORD *)this + 721) = v17;
  v18 = !v4;
  v4 = v55 == 0;
  *((_BYTE *)this + 2888) = v18;
  *((_DWORD *)this + 1166) = v52;
  *((_DWORD *)this + 1167) = v53;
  *((_DWORD *)this + 1168) = v54;
  v19 = !v4;
  v4 = v57 == 0;
  *((_BYTE *)this + 3020) = v19;
  *((_DWORD *)this + 1056) = v56;
  v20 = !v4;
  v4 = v58 == 0;
  *((_BYTE *)this + 2889) = v20;
  *((_BYTE *)this + 2890) = !v4;
  if ( v59 )
    *((_DWORD *)this + 1152) = v59;
  if ( v60 )
    *((_BYTE *)this + 2755) = 1;
  if ( v61 )
    *((_BYTE *)this + 2756) = 0;
  if ( v62 )
    *((_DWORD *)this + 570) |= 0x20u;
  if ( *((_BYTE *)this + 2756) )
  {
    if ( *((_BYTE *)this + 2834) )
      *((_DWORD *)this + 690) = 2;
  }
  else
  {
    *((_DWORD *)this + 690) = 1;
  }
  v21 = *((_BYTE *)this + 2837);
  if ( *((int *)this + 638) < 4608 )
    v21 = 0;
  *((_BYTE *)this + 2837) = v21;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2860) = 0;
  if ( !v63 || (v25 = 1, !v22) )
    v25 = 0;
  v4 = v64 == 0;
  *((_BYTE *)this + 2861) = v25;
  *((_BYTE *)this + 2864) = 0;
  *((_BYTE *)this + 2862) = !v4;
  if ( !v65 && (*((_DWORD *)this + 569) & 0x10) != 0 )
  {
    if ( v23 < 8448 )
    {
      if ( v23 >= 0x2000 )
        *((_BYTE *)this + 2864) = v66 != 0;
    }
    else
    {
      *((_BYTE *)this + 2864) = 1;
    }
  }
  v4 = *((_QWORD *)this + 79) == 0LL;
  *((_BYTE *)this + 2866) = 0;
  *((_BYTE *)this + 2873) = !v4;
  v26 = 0;
  if ( *((_QWORD *)this + 128) )
  {
    if ( v23 >= v24 || v23 >= 8448 && ((*((_DWORD *)this + 109) & 0x200) != 0 || v67) )
      v26 = 1;
    *((_BYTE *)this + 2866) = v26;
  }
  v27 = v22;
  if ( v22 && !v26 && !*((_QWORD *)this + 108) && !*((_QWORD *)this + 124) )
  {
    *((_BYTE *)this + 2756) = 0;
    v27 = 0;
  }
  *((_BYTE *)this + 2867) = 0;
  if ( v26 && v23 >= v24 && (*((_QWORD *)this + 152) || *((_QWORD *)this + 153)) )
  {
    v28 = (_DWORD *)((char *)this + 2788);
    *((_BYTE *)this + 2867) = 1;
    v29 = (_DWORD *)((char *)this + 2788);
  }
  else
  {
    v28 = (_DWORD *)((char *)this + 2788);
    v29 = (_DWORD *)((char *)this + 2788);
    if ( !v26 )
    {
      *v28 = 1;
      goto LABEL_31;
    }
  }
  if ( !*v28 )
    *v29 = 1;
LABEL_31:
  *((_BYTE *)this + 2865) = v26;
  if ( !v26 || (v30 = 1, !v27) )
    v30 = 0;
  *((_BYTE *)this + 2863) = v30;
  if ( *((_DWORD *)this + 72) > 1u )
    *((_DWORD *)this + 737) = v68;
  if ( v69 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2868) = v70 != 0;
}
