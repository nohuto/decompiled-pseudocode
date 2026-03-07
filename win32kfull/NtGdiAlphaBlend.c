__int64 __fastcall NtGdiAlphaBlend(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        XLATEOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v14; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  struct UMPDOBJ *v19; // rax
  DC *v20; // rdx
  int v21; // edi
  __int64 v23; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  struct UMPDOBJ *v28; // rax
  DC *v29; // rdx
  int v30; // edi
  unsigned int v31; // r12d
  struct _DC_ATTR *v32; // rax
  __int64 v33; // rsi
  struct _DC_ATTR *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  struct _DC_ATTR *v37; // rax
  char *v38; // r9
  int v39; // r8d
  char *v40; // rcx
  int v41; // edi
  float v42; // xmm4_4
  LONG left; // edx
  LONG top; // r11d
  LONG right; // eax
  LONG bottom; // r10d
  int v47; // edi
  int v48; // ecx
  int v49; // edx
  int v50; // r8d
  int v51; // esi
  __int32 v52; // eax
  __int32 v53; // eax
  FIX v54; // r8d
  FIX x; // r10d
  FIX v56; // ecx
  FIX y; // r11d
  int v58; // r9d
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct DC *v67; // r8
  DC *v68; // r14
  __int64 v69; // r15
  __int64 v70; // r12
  __int64 v71; // r13
  __int64 v72; // rdi
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // rax
  int v78; // ecx
  _DWORD *v79; // rcx
  ULONG v80; // ecx
  __int64 v81; // rcx
  int v82; // r10d
  __int64 v83; // r11
  __int64 v84; // rdi
  DC *v85; // r10
  __int64 v86; // rcx
  __int64 v87; // r15
  __int64 v88; // rdx
  LONG v89; // r11d
  int v90; // edx
  __int64 v91; // r15
  LONG v92; // r9d
  LONG v93; // edi
  LONG v94; // r8d
  _DWORD *v95; // rax
  LONG v96; // ecx
  LONG v97; // edx
  int v98; // edi
  __int64 v99; // rax
  int v100; // edx
  char v101; // di
  __int64 v102; // rdx
  struct DC *v103; // r8
  _DWORD *v104; // rax
  __int64 v105; // rdi
  __int64 v106; // r14
  unsigned __int64 v107; // rcx
  __int64 v108; // r15
  int v109; // esi
  __int64 v110; // rax
  int v111; // esi
  Gre::Base *v112; // r9
  __int64 v113; // rcx
  int v114; // r10d
  int v115; // r11d
  __int64 v116; // rax
  int v117; // r8d
  __int64 v118; // rax
  int v119; // edx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rsi
  XLATEOBJ *v123; // rax
  int v124; // eax
  unsigned int v125; // eax
  unsigned int v126; // r9d
  __int64 v127; // rdx
  __int64 v128; // r11
  unsigned int v129; // eax
  __int64 v130; // rdx
  unsigned int v131; // r9d
  __int64 v132; // r11
  Gre::Base *v133; // rdx
  int v134; // r10d
  struct Gre::Base::SESSION_GLOBALS *v135; // r9
  unsigned int v136; // eax
  __int64 v137; // rcx
  unsigned int v138; // esi
  struct Gre::Base::SESSION_GLOBALS *XlateObject; // rax
  Gre::Base *v140; // r13
  unsigned int v141; // edx
  unsigned __int64 v142; // rcx
  unsigned int v143; // r12d
  Gre::Base *v144; // r8
  __int64 v145; // rax
  struct Gre::Base::SESSION_GLOBALS *v146; // rax
  unsigned int v147; // edx
  Gre::Base *v148; // rdi
  struct Gre::Base::SESSION_GLOBALS *v149; // rax
  __int64 v150; // rdx
  Gre::Base *v151; // rax
  int v152; // r8d
  int v153; // esi
  int v154; // r11d
  int v155; // r9d
  __int64 v156; // r11
  __int64 v157; // rax
  int v158; // edx
  __int64 v159; // rax
  XLATEOBJ *v160; // r12
  Gre::Base *v161; // r14
  int v162; // eax
  __int64 v163; // rsi
  Gre::Base *v164; // rcx
  unsigned int v165; // r8d
  Gre::Base *v166; // r9
  __int64 v167; // rax
  struct Gre::Base::SESSION_GLOBALS *v168; // rax
  unsigned int v169; // edx
  unsigned int v170; // r10d
  Gre::Base *v171; // r13
  __int64 v172; // rcx
  Gre::Base *v173; // rax
  int v174; // r9d
  int v175; // r11d
  ULONG *pulXlate; // rsi
  __int64 v177; // rcx
  int v178; // eax
  __int64 v179; // rdx
  int v180; // eax
  unsigned int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // r10
  unsigned int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // r10
  Gre::Base *v187; // rdx
  int v188; // r10d
  unsigned int v189; // eax
  int v190; // r9d
  Gre::Base *v191; // rsi
  __int64 v192; // rax
  __int64 v193; // rax
  int v194; // edx
  __int64 v195; // rax
  struct Gre::Base::SESSION_GLOBALS *v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rdi
  __int64 v199; // rax
  int v200; // eax
  unsigned int v201; // eax
  unsigned int v202; // r10d
  __int64 v203; // rdx
  __int64 v204; // r11
  unsigned int v205; // eax
  __int64 v206; // rdx
  unsigned int v207; // r10d
  __int64 v208; // r11
  Gre::Base *v209; // rdx
  int v210; // r11d
  struct Gre::Base::SESSION_GLOBALS *v211; // r10
  unsigned int v212; // eax
  __int64 v213; // rcx
  Gre::Base *v214; // rdi
  int v215; // eax
  __int64 v216; // rcx
  unsigned int v217; // edi
  int v218; // edx
  Gre::Base *v219; // rcx
  unsigned int v220; // r8d
  Gre::Base *v221; // r10
  __int64 v222; // rax
  __int64 v223; // rdx
  int v224; // r9d
  Gre::Base *v225; // rsi
  Gre::Base *v226; // rdx
  unsigned int v227; // edi
  __int64 v228; // rcx
  int v229; // edi
  int v230; // edx
  struct Gre::Base::SESSION_GLOBALS *v231; // rax
  __int64 v232; // rdi
  __int64 v233; // rax
  int v234; // ecx
  unsigned int v235; // eax
  unsigned int v236; // r9d
  __int64 v237; // r11
  unsigned int v238; // eax
  unsigned int v239; // r9d
  __int64 v240; // r11
  Gre::Base *v241; // rdx
  int v242; // r11d
  unsigned int v243; // r9d
  __int64 v244; // rdi
  int v245; // ecx
  DC *v246; // rdx
  __int64 v247; // r10
  struct REGION *v248; // r10
  struct ECLIPOBJ *v249; // rdx
  __int64 v250; // r15
  unsigned int v251; // eax
  int v252; // r8d
  __int64 *v253; // rax
  BOOL (__stdcall *v254)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v255; // edx
  __int64 *v256; // r14
  int v257; // r9d
  __int64 *v258; // rax
  LONG v259; // edi
  Gre::Base *v260; // rcx
  __int64 v261; // rdx
  struct DC *v262; // r8
  SURFOBJ *v263; // rcx
  __int64 v264; // r10
  LONG v265; // r8d
  Gre::Base *v266; // rdx
  Gre::Base *v267; // r9
  Gre::Base *v268; // rdi
  LONG v269; // eax
  struct Gre::Base::SESSION_GLOBALS *v270; // rax
  _DWORD *v271; // r8
  unsigned __int64 v272; // rdx
  SURFOBJ *v273; // rdx
  SURFOBJ *v274; // rcx
  Gre::Base *v275; // rcx
  struct Gre::Base::SESSION_GLOBALS *v276; // rax
  DC *v277; // rdi
  ULONG v278; // ecx
  BOOL (__stdcall *v279)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v280; // rdx
  __int64 v281; // rdx
  Gre::Base *v282; // rcx
  struct DC *v283; // r8
  int v284; // eax
  struct Gre::Base::SESSION_GLOBALS *v285; // rax
  int v286; // eax
  struct Gre::Base::SESSION_GLOBALS *v287; // rax
  int cEntries; // eax
  struct Gre::Base::SESSION_GLOBALS *v289; // rax
  Gre::Base *v290; // rdi
  int v291; // eax
  struct Gre::Base::SESSION_GLOBALS *v292; // rax
  int v293; // eax
  __int64 v294; // rdx
  struct DC *v295; // r8
  __int64 v296; // rdx
  struct DC *v297; // r8
  __int64 v298; // rdx
  struct DC *v299; // r8
  __int64 v300; // rdx
  struct DC *v301; // r8
  int v302; // r12d
  __int64 v303; // rdx
  struct DC *v304; // r8
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  unsigned int v309; // [rsp+70h] [rbp-90h]
  int v310; // [rsp+70h] [rbp-90h]
  unsigned int v311; // [rsp+70h] [rbp-90h]
  unsigned int v312; // [rsp+70h] [rbp-90h]
  int inited; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v315; // [rsp+74h] [rbp-8Ch]
  unsigned int v316; // [rsp+74h] [rbp-8Ch]
  int v317; // [rsp+74h] [rbp-8Ch]
  unsigned int v318; // [rsp+74h] [rbp-8Ch]
  int v319; // [rsp+74h] [rbp-8Ch]
  unsigned int v320; // [rsp+74h] [rbp-8Ch]
  int v321; // [rsp+78h] [rbp-88h]
  int v322; // [rsp+78h] [rbp-88h]
  int v323; // [rsp+78h] [rbp-88h]
  int v324; // [rsp+78h] [rbp-88h]
  unsigned int v325; // [rsp+78h] [rbp-88h]
  unsigned int v326; // [rsp+78h] [rbp-88h]
  int v327; // [rsp+7Ch] [rbp-84h]
  int v328; // [rsp+7Ch] [rbp-84h]
  int v329; // [rsp+7Ch] [rbp-84h]
  Gre::Base *v330; // [rsp+80h] [rbp-80h]
  Gre::Base *v331; // [rsp+80h] [rbp-80h]
  Gre::Base *v332; // [rsp+80h] [rbp-80h]
  Gre::Base *v333; // [rsp+80h] [rbp-80h]
  int v334; // [rsp+88h] [rbp-78h]
  unsigned int v335; // [rsp+88h] [rbp-78h]
  unsigned int v336; // [rsp+88h] [rbp-78h]
  int v338; // [rsp+8Ch] [rbp-74h]
  int v339; // [rsp+8Ch] [rbp-74h]
  int v340; // [rsp+8Ch] [rbp-74h]
  unsigned int v341; // [rsp+8Ch] [rbp-74h]
  int v342; // [rsp+8Ch] [rbp-74h]
  unsigned int v343; // [rsp+8Ch] [rbp-74h]
  Gre::Base *v345; // [rsp+90h] [rbp-70h]
  struct Gre::Base::SESSION_GLOBALS *v346; // [rsp+90h] [rbp-70h]
  Gre::Base *v347; // [rsp+90h] [rbp-70h]
  POINTFIX v348; // [rsp+90h] [rbp-70h]
  int v350; // [rsp+98h] [rbp-68h]
  int v351; // [rsp+98h] [rbp-68h]
  unsigned int v352; // [rsp+98h] [rbp-68h]
  int v353; // [rsp+98h] [rbp-68h]
  unsigned int v354; // [rsp+98h] [rbp-68h]
  DC *v355; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v356; // [rsp+A8h] [rbp-58h]
  DC *v357; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v358; // [rsp+B8h] [rbp-48h]
  int v359; // [rsp+C0h] [rbp-40h]
  char v360; // [rsp+C4h] [rbp-3Ch]
  int v361; // [rsp+C8h] [rbp-38h]
  struct Gre::Base::SESSION_GLOBALS *v362; // [rsp+D0h] [rbp-30h]
  Gre::Base *v363; // [rsp+D8h] [rbp-28h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v364; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v365; // [rsp+E8h] [rbp-18h] BYREF
  XLATEOBJ *pxlo; // [rsp+F0h] [rbp-10h]
  Gre::Base *v367; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v368; // [rsp+100h] [rbp+0h]
  __int64 v369; // [rsp+108h] [rbp+8h]
  Gre::Base *v370; // [rsp+110h] [rbp+10h] BYREF
  __int64 v371; // [rsp+118h] [rbp+18h]
  int v372; // [rsp+120h] [rbp+20h] BYREF
  int v373; // [rsp+124h] [rbp+24h] BYREF
  Gre::Base *v374; // [rsp+128h] [rbp+28h] BYREF
  int v375; // [rsp+130h] [rbp+30h]
  POINTL pptlSrc; // [rsp+138h] [rbp+38h] BYREF
  __int64 v377; // [rsp+140h] [rbp+40h]
  __int64 v378; // [rsp+148h] [rbp+48h]
  char *v379; // [rsp+150h] [rbp+50h] BYREF
  int v380; // [rsp+158h] [rbp+58h]
  int v381; // [rsp+15Ch] [rbp+5Ch]
  __int64 v382; // [rsp+160h] [rbp+60h] BYREF
  char v383; // [rsp+168h] [rbp+68h]
  int v384; // [rsp+16Ch] [rbp+6Ch]
  __int64 v385; // [rsp+170h] [rbp+70h]
  __int64 v386; // [rsp+178h] [rbp+78h] BYREF
  char v387; // [rsp+180h] [rbp+80h]
  int v388; // [rsp+184h] [rbp+84h]
  __int64 v389; // [rsp+188h] [rbp+88h] BYREF
  char v390; // [rsp+190h] [rbp+90h]
  int v391; // [rsp+194h] [rbp+94h]
  __int64 v392; // [rsp+198h] [rbp+98h]
  char *v393; // [rsp+1A0h] [rbp+A0h] BYREF
  int v394; // [rsp+1A8h] [rbp+A8h]
  int v395; // [rsp+1ACh] [rbp+ACh]
  __int64 v396; // [rsp+1B0h] [rbp+B0h] BYREF
  ULONG *v397; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v398; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v399; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v400; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v401; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v402; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v403; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v404; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v405; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v406; // [rsp+200h] [rbp+100h]
  __int64 v407; // [rsp+208h] [rbp+108h] BYREF
  __int64 v408; // [rsp+210h] [rbp+110h] BYREF
  __int64 v409; // [rsp+218h] [rbp+118h] BYREF
  __int64 v410; // [rsp+220h] [rbp+120h] BYREF
  __int64 v411; // [rsp+228h] [rbp+128h] BYREF
  __int64 v412; // [rsp+230h] [rbp+130h] BYREF
  __int64 v413; // [rsp+238h] [rbp+138h] BYREF
  _DWORD v414[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v415; // [rsp+250h] [rbp+150h]
  __int64 v416; // [rsp+258h] [rbp+158h]
  _DWORD v417[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v418; // [rsp+270h] [rbp+170h]
  __int64 v419; // [rsp+278h] [rbp+178h]
  _DWORD v420[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v421; // [rsp+290h] [rbp+190h]
  __int64 v422; // [rsp+298h] [rbp+198h]
  _DWORD v423[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  XLATEOBJ *v424; // [rsp+2A8h] [rbp+1A8h]
  Gre::Base *v425; // [rsp+2B0h] [rbp+1B0h]
  Gre::Base *v426; // [rsp+2B8h] [rbp+1B8h]
  RECTL v427; // [rsp+2C0h] [rbp+1C0h] BYREF
  __m128i v428; // [rsp+2D0h] [rbp+1D0h]
  _OWORD v429[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v430; // [rsp+300h] [rbp+200h]
  __int64 v431; // [rsp+308h] [rbp+208h]
  char v432; // [rsp+310h] [rbp+210h]
  int v433; // [rsp+314h] [rbp+214h]
  int v434; // [rsp+338h] [rbp+238h]
  __int128 v435; // [rsp+340h] [rbp+240h]
  int v436; // [rsp+350h] [rbp+250h]
  __int64 v437; // [rsp+358h] [rbp+258h]
  __int64 v438; // [rsp+360h] [rbp+260h]
  __int16 v439; // [rsp+368h] [rbp+268h]
  __int64 v440; // [rsp+370h] [rbp+270h]
  __int64 v441; // [rsp+378h] [rbp+278h]
  __int16 v442; // [rsp+380h] [rbp+280h]
  __int64 v443; // [rsp+388h] [rbp+288h]
  __int128 v444; // [rsp+390h] [rbp+290h]
  __int64 v445; // [rsp+3A0h] [rbp+2A0h]
  __int64 v446; // [rsp+3A8h] [rbp+2A8h]
  __int64 v447; // [rsp+3B0h] [rbp+2B0h]
  __int64 v448; // [rsp+3B8h] [rbp+2B8h]
  __m128i v449; // [rsp+3C0h] [rbp+2C0h] BYREF
  RECTL prclDest; // [rsp+3D0h] [rbp+2D0h] BYREF
  __m128i v451; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v452; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v453; // [rsp+3F8h] [rbp+2F8h]
  int v454; // [rsp+3FCh] [rbp+2FCh]
  _BYTE v455[4]; // [rsp+400h] [rbp+300h] BYREF
  int v456; // [rsp+404h] [rbp+304h]
  int v457; // [rsp+408h] [rbp+308h]
  int v458; // [rsp+40Ch] [rbp+30Ch]
  int v459; // [rsp+410h] [rbp+310h]
  __int64 v460; // [rsp+450h] [rbp+350h]
  int v461; // [rsp+458h] [rbp+358h]
  int v462; // [rsp+480h] [rbp+380h]
  __int64 v463; // [rsp+490h] [rbp+390h]
  struct _POINTFIX v464; // [rsp+4A0h] [rbp+3A0h] BYREF
  FIX v465; // [rsp+4A8h] [rbp+3A8h]
  int v466; // [rsp+4ACh] [rbp+3ACh]
  int v467; // [rsp+4B0h] [rbp+3B0h]
  FIX v468; // [rsp+4B4h] [rbp+3B4h]
  FIX v469; // [rsp+4B8h] [rbp+3B8h]
  int v470; // [rsp+4BCh] [rbp+3BCh]
  struct _POINTL v471; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v472; // [rsp+4C8h] [rbp+3C8h]
  int v473; // [rsp+4CCh] [rbp+3CCh]
  int v474; // [rsp+4D0h] [rbp+3D0h]
  int v475; // [rsp+4D4h] [rbp+3D4h]
  POINTFIX v476; // [rsp+4D8h] [rbp+3D8h] BYREF
  POINTFIX v477; // [rsp+4E0h] [rbp+3E0h]
  POINTFIX v478; // [rsp+4E8h] [rbp+3E8h]

  pxlo = a6;
  v359 = a8;
  v361 = a2;
  v373 = a9;
  v372 = a10;
  pptlSrc = (POINTL)Gre::Base::Globals(a1);
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_564;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_564:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v375 = BYTE1(a11) & 0x80;
  LOBYTE(v14) = 1;
  BYTE1(a11) &= ~0x80u;
  v358 = 0LL;
  v357 = (DC *)HmgLockEx(a1, v14, 0LL);
  if ( !v357 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v23);
LABEL_30:
    v20 = v357;
    goto LABEL_31;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || (v16 = *ThreadWin32Thread) == 0
    || (v17 = *(_QWORD *)(v16 + 40), v18 = v17 == v16 + 40, v19 = (struct UMPDOBJ *)(v17 - 40), v18) )
  {
    v19 = 0LL;
  }
  v20 = v357;
  if ( *((_WORD *)v357 + 6) == 1 )
  {
    *((_QWORD *)v357 + 271) = v19;
    *((_DWORD *)v357 + 544) = 0xFFFF;
    v20 = v357;
  }
  else if ( *((struct UMPDOBJ **)v357 + 271) != v19 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v357, v19);
    goto LABEL_26;
  }
  if ( HIDWORD(v358) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_20:
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
LABEL_21:
      v357 = 0LL;
LABEL_22:
      EngSetLastError(6u);
      goto LABEL_23;
    }
    v21 = *((_DWORD *)v20 + 528);
    if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v20 = v357;
      goto LABEL_20;
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( !v20 )
    goto LABEL_22;
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v358) )
    {
LABEL_37:
      *((_DWORD *)v20 + 11) |= 2u;
      v20 = v357;
      LODWORD(v358) = 1;
      goto LABEL_38;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v357);
    if ( !UserAttr || DC::SaveAttributes(v357, UserAttr) )
    {
      v20 = v357;
      goto LABEL_37;
    }
LABEL_26:
    _InterlockedDecrement((volatile signed __int32 *)v357 + 3);
    goto LABEL_21;
  }
LABEL_38:
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
    v20 = v357;
  }
  if ( !v20 || (*((_DWORD *)v20 + 9) & 0x10000) != 0 )
    goto LABEL_22;
  v356 = 0LL;
  v355 = (DC *)HmgLockEx(pxlo, 1LL, 0LL);
  if ( !v355 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v36);
LABEL_81:
    v29 = v355;
    goto LABEL_82;
  }
  v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v25
    || (v26 = *v25) == 0
    || (v27 = *(_QWORD *)(v26 + 40), v18 = v27 == v26 + 40, v28 = (struct UMPDOBJ *)(v27 - 40), v18) )
  {
    v28 = 0LL;
  }
  v29 = v355;
  if ( *((_WORD *)v355 + 6) == 1 )
  {
    *((_QWORD *)v355 + 271) = v28;
    *((_DWORD *)v355 + 544) = 0xFFFF;
    v29 = v355;
  }
  else if ( *((struct UMPDOBJ **)v355 + 271) != v28 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v355, v28);
    goto LABEL_56;
  }
  if ( HIDWORD(v356) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v29 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_53:
      _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
LABEL_57:
      v355 = 0LL;
LABEL_58:
      v31 = 0;
      EngSetLastError(0x57u);
      goto LABEL_59;
    }
    v30 = *((_DWORD *)v29 + 528);
    if ( v30 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v29 = v355;
      goto LABEL_53;
    }
    goto LABEL_81;
  }
LABEL_82:
  if ( !v29 )
    goto LABEL_58;
  if ( (*((_DWORD *)v29 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v356) )
    {
LABEL_88:
      *((_DWORD *)v29 + 11) |= 2u;
      v29 = v355;
      LODWORD(v356) = 1;
      goto LABEL_89;
    }
    v37 = XDCOBJ::GetUserAttr((XDCOBJ *)&v355);
    if ( !v37 || DC::SaveAttributes(v355, v37) )
    {
      v29 = v355;
      goto LABEL_88;
    }
LABEL_56:
    _InterlockedDecrement((volatile signed __int32 *)v355 + 3);
    goto LABEL_57;
  }
LABEL_89:
  if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v29);
    v29 = v355;
  }
  if ( !v29 )
    goto LABEL_58;
  bSpDwmValidateSurface((struct XDCOBJ *)&v355, a7, v359, a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)&v357, a2, a3, a4, a5);
  v380 = *(_DWORD *)(*((_QWORD *)v357 + 122) + 208LL);
  v381 = *(_DWORD *)(*((_QWORD *)v357 + 122) + 108LL) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v357 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v379, (struct XDCOBJ *)&v357, 0x204u, 0);
    v38 = v379;
  }
  else
  {
    v38 = (char *)v357 + 320;
    v379 = (char *)v357 + 320;
  }
  v394 = *(_DWORD *)(*((_QWORD *)v355 + 122) + 208LL);
  v39 = *(_DWORD *)(*((_QWORD *)v355 + 122) + 108LL) & 1;
  v395 = v39;
  if ( (*(_DWORD *)(*((_QWORD *)v355 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v393, (struct XDCOBJ *)&v355, 0x204u, 0);
    v38 = v379;
    v39 = v395;
    v40 = v393;
  }
  else
  {
    v40 = (char *)v355 + 320;
    v393 = (char *)v355 + 320;
  }
  v41 = *((_DWORD *)v40 + 8);
  if ( (v41 & 1) == 0 )
    goto LABEL_58;
  v42 = 0.0;
  if ( !v39 && (*(float *)v40 < 0.0 || *((float *)v40 + 3) < 0.0) )
    goto LABEL_58;
  left = a7;
  prclDest.left = a7;
  top = v359;
  right = a9 + a7;
  prclDest.top = v359;
  bottom = a10 + v359;
  prclDest.right = a9 + a7;
  prclDest.bottom = a10 + v359;
  if ( (v41 & 0x43) != 0x43 )
  {
    bCvtPts1(v40, &prclDest, 2LL);
    v38 = v379;
    v39 = v395;
    bottom = prclDest.bottom;
    right = prclDest.right;
    top = prclDest.top;
    left = prclDest.left;
  }
  if ( v39 )
  {
    ++left;
    ++right;
    prclDest.left = left;
    prclDest.right = right;
  }
  if ( left > right )
  {
    prclDest.left = right;
    prclDest.right = left;
  }
  if ( top > bottom )
  {
    prclDest.top = bottom;
    prclDest.bottom = top;
  }
  if ( (*((_DWORD *)v38 + 8) & 1) != 0 && (v381 || v42 <= *(float *)v38 && v42 <= *((float *)v38 + 3)) )
  {
    v47 = a2 + a4;
    v48 = a3 + a5;
    v49 = a2;
    v451.m128i_i32[3] = a3 + a5;
    v451.m128i_i64[0] = __PAIR64__(a3, a2);
    v50 = a3;
    v451.m128i_i32[2] = a2 + a4;
    if ( (v38[32] & 0x43) != 0x43 )
    {
      bCvtPts1(v38, &v451, 2LL);
      v48 = v451.m128i_i32[3];
      v50 = v451.m128i_i32[1];
      v49 = v451.m128i_i32[0];
      v47 = v451.m128i_i32[2];
    }
    v51 = 0;
    if ( v381 )
    {
      ++v49;
      ++v47;
      v451.m128i_i32[0] = v49;
      v451.m128i_i32[2] = v47;
    }
    if ( v49 > v47 )
    {
      v52 = v49;
      v49 = v47;
      v451.m128i_i32[0] = v47;
      v47 = v52;
      v451.m128i_i32[2] = v52;
    }
    v31 = 1;
    if ( v50 > v48 )
    {
      v53 = v50;
      v451.m128i_i32[1] = v48;
      v50 = v48;
      v451.m128i_i32[3] = v53;
      v48 = v53;
    }
    goto LABEL_131;
  }
  v471.x = a2;
  v472 = a2 + a4;
  v31 = 1;
  v471.y = a3;
  v473 = a3;
  v475 = a3 + a5;
  v51 = 1;
  v474 = a2;
  EXFORMOBJ::bXform((EXFORMOBJ *)&v379, &v471, &v464, 3uLL);
  v54 = v465;
  x = v464.x;
  if ( (*((_DWORD *)v379 + 8) & 1) != 0 )
  {
    if ( v464.x > v465 )
    {
      x = v464.x + 16;
      v54 = v465 + 16;
      v467 += 16;
      v464.x += 16;
      v465 += 16;
    }
    y = v464.y;
    v56 = v468;
    if ( v464.y > v468 )
    {
      y = v464.y + 16;
      v58 = v466 + 16;
      v464.y += 16;
      v56 = v468 + 16;
      v466 += 16;
      v468 += 16;
      goto LABEL_126;
    }
  }
  else
  {
    v56 = v468;
    y = v464.y;
  }
  v58 = v466;
LABEL_126:
  v469 = v54 + v467 - x;
  v470 = v56 + v58 - y;
  v59 = (v54 <= v469) ^ (unsigned int)(v54 > x);
  v60 = (unsigned int)v59;
  v61 = (v58 > y) ^ (unsigned int)(v58 <= v470);
  if ( *(&v464.x + 2 * v59) > *(&v464.x + 2 * ((unsigned int)v59 ^ 3LL)) )
    v60 = (unsigned int)v59 ^ 3;
  if ( *(&v464.y + 2 * v61) > *(&v464.y + 2 * ((unsigned int)v61 ^ 3LL)) )
    LODWORD(v61) = v61 ^ 3;
  v62 = (unsigned int)v61;
  v63 = (unsigned int)v60 ^ 3LL;
  v49 = (*(&v464.x + 2 * v60) + 15) >> 4;
  v64 = *(&v464.y + 2 * v62);
  v451.m128i_i32[0] = v49;
  v50 = (v64 + 15) >> 4;
  v47 = (*(&v464.x + 2 * v63) + 15) >> 4;
  v48 = (*(&v464.y + 2 * (v62 ^ 3)) + 15) >> 4;
  v451.m128i_i32[1] = v50;
  v451.m128i_i64[1] = __PAIR64__(v48, v47);
LABEL_131:
  if ( v49 == v47 || v50 == v48 )
    goto LABEL_59;
  if ( (*((_DWORD *)v357 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)&v357, (struct ERECTL *)&v451);
  v431 = 0LL;
  memset(v429, 0, sizeof(v429));
  v435 = 0LL;
  v444 = 0LL;
  v432 = 0;
  v433 = 0;
  v434 = 0;
  v438 = 0LL;
  v439 = 256;
  v441 = 0LL;
  v442 = 256;
  v430 = 0LL;
  v436 = 0;
  v443 = 0LL;
  v445 = 0LL;
  v448 = 0LL;
  v446 = 0LL;
  v447 = 0LL;
  v437 = 0LL;
  v440 = 0LL;
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v429, (struct XDCOBJ *)&v357, (struct XDCOBJ *)&v355) )
  {
    v302 = XDCOBJ::bFullScreen((XDCOBJ *)&v355);
    v31 = XDCOBJ::bFullScreen((XDCOBJ *)&v357) | v302;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v303, v304);
    goto LABEL_59;
  }
  v68 = v357;
  v69 = *((_QWORD *)v357 + 62);
  v385 = v69;
  if ( !v69
    || (v70 = *(_QWORD *)(v69 + 128),
        v71 = *((_QWORD *)v357 + 11),
        v392 = v70,
        v72 = *((_QWORD *)v355 + 62),
        v368 = v71,
        (v371 = v72) == 0) )
  {
    v31 = 1;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v65, v67);
    goto LABEL_59;
  }
  if ( *(_DWORD *)(v72 + 656) )
  {
    if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v72 + 656) )
      goto LABEL_559;
    v68 = v357;
  }
  v73 = *(_DWORD *)(v72 + 112);
  if ( (v73 & 0x800) != 0 )
  {
    v74 = UserSurfaceAccessCheck(*(_QWORD *)(v72 + 648), v65, v67);
  }
  else
  {
    if ( (v73 & 0x10000000) == 0 )
      goto LABEL_151;
    v74 = UserScreenAccessCheck(v66, v65, v67);
  }
  if ( !v74 )
    goto LABEL_559;
  v68 = v357;
LABEL_151:
  if ( ((*(_DWORD *)(v69 + 116) & 8) != 0 || *(_QWORD *)(v69 + 224))
    && _bittest16((const signed __int16 *)(v69 + 102), 9u) )
  {
    goto LABEL_559;
  }
  v75 = *(_DWORD *)(v69 + 112);
  if ( (v75 & 0x800) != 0 )
  {
    v76 = UserSurfaceAccessCheck(*(_QWORD *)(v69 + 648), v65, v67);
    goto LABEL_158;
  }
  if ( (v75 & 0x10000000) != 0 )
  {
    v76 = UserScreenAccessCheck(v66, v65, v67);
LABEL_158:
    if ( v76 )
    {
      v68 = v357;
      goto LABEL_160;
    }
LABEL_559:
    EngSetLastError(6u);
    v31 = 0;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v300, v301);
    goto LABEL_59;
  }
LABEL_160:
  v360 = HIBYTE(a11) & 1;
  if ( (a11 & 0x1000000) != 0 )
  {
    v77 = *(_QWORD *)(v72 + 128);
    if ( *(_DWORD *)(v72 + 96) != 6
      || !v77
      || (v78 = *(_DWORD *)(v77 + 24), (v78 & 8) == 0)
      && ((v78 & 2) == 0 || (v79 = *(_DWORD **)(v77 + 112), *v79 != 16711680) || v79[1] != 65280 || v79[2] != 255) )
    {
      v80 = 87;
LABEL_557:
      EngSetLastError(v80);
      goto LABEL_558;
    }
  }
  v81 = *((_DWORD *)v68 + 10) & 1;
  v82 = _mm_cvtsi128_si32(v451);
  v428 = v451;
  v83 = *((int *)v68 + 2 * v81 + 254);
  v451.m128i_i32[0] = v82;
  if ( (unsigned __int64)(v83 + v82 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_556;
  if ( (unsigned __int64)(v83 + v451.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_556;
  v84 = *((int *)v68 + 2 * v81 + 255);
  if ( (unsigned __int64)(v84 + v451.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_556;
  if ( (unsigned __int64)(v84 + v451.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_556;
  v451.m128i_i32[0] = v83 + v82;
  v85 = v355;
  v451.m128i_i32[2] += *((_DWORD *)v68 + 2 * v81 + 254);
  v451.m128i_i32[1] += *((_DWORD *)v68 + 2 * v81 + 255);
  v451.m128i_i32[3] += *((_DWORD *)v68 + 2 * v81 + 255);
  v86 = *((_DWORD *)v355 + 10) & 1;
  v87 = *((int *)v355 + 2 * v86 + 254);
  if ( (unsigned __int64)(v87 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v87 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
    || (v88 = *((int *)v355 + 2 * v86 + 255), (unsigned __int64)(v88 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v88 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_556:
    v80 = 534;
    goto LABEL_557;
  }
  v89 = v87 + prclDest.left;
  v90 = v51;
  v91 = v371;
  prclDest.left = v89;
  v92 = *((_DWORD *)v355 + 2 * v86 + 254) + prclDest.right;
  prclDest.right = v92;
  v93 = *((_DWORD *)v355 + 2 * v86 + 255) + prclDest.top;
  prclDest.top = v93;
  v94 = *((_DWORD *)v355 + 2 * v86 + 255) + prclDest.bottom;
  prclDest.bottom = v94;
  v18 = *(_WORD *)(v371 + 100) == 1;
  v95 = *(_DWORD **)(v371 + 48);
  v406 = v95;
  v315 = v51;
  if ( v18 && (v315 = v51, v95) && (v95[10] & 0x20000) != 0 )
  {
    v96 = v95[640];
    if ( v89 < v96
      || (v97 = v95[641], v93 < v97)
      || v92 > *(_DWORD *)(v371 + 56) + v96
      || (v98 = 0, v94 > v97 + *(_DWORD *)(v371 + 60)) )
    {
      v98 = 1;
    }
    v90 = v51;
    v315 = v51;
  }
  else if ( v89 < 0 || v93 < 0 || v92 > *(_DWORD *)(v371 + 56) || (v98 = 0, v94 > *(_DWORD *)(v371 + 60)) )
  {
    v98 = 1;
  }
  if ( v371 == v385 )
  {
    v427 = prclDest;
    ERECTL::operator*=(&v427.left, v451.m128i_i32);
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v427) )
    {
LABEL_555:
      EngSetLastError(0x57u);
      v31 = 0;
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v298, v299);
      goto LABEL_59;
    }
    v90 = v315;
    v85 = v355;
  }
  if ( v98 )
    goto LABEL_555;
  if ( BYTE2(a11) == 0xFF && !v360 && (a11 & 0x100) == 0 )
  {
    v99 = *((_QWORD *)v68 + 122);
    v100 = v361;
    v101 = *(_BYTE *)(v99 + 215);
    *(_BYTE *)(v99 + 215) = 3;
    v31 = GreStretchBltInternal((HDC)a1, v100, a3, a4, a5, (HDC)pxlo, a7, v359, v373, v372, 13369376, -1, 0);
    v102 = *((_QWORD *)v357 + 122);
    *(_BYTE *)(v102 + 215) = v101;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v102, v103);
    goto LABEL_59;
  }
  v104 = (_DWORD *)*((_QWORD *)v85 + 122);
  v105 = *(_QWORD *)(v91 + 128);
  v106 = *((_QWORD *)v85 + 11);
  v359 = v104[45];
  v107 = (unsigned int)v104[44];
  v108 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6008LL);
  v327 = v104[46];
  v374 = 0LL;
  v334 = v107;
  if ( !v105 )
  {
    if ( v70 )
    {
      v109 = v90;
      if ( (*(_DWORD *)(v70 + 24) & 0x800) == 0
        || (v116 = *(_QWORD *)(v71 + 80), v310 = v90, v116) && (v310 = v90, v116 != *(_QWORD *)(v71 + 72)) )
      {
LABEL_209:
        v90 = v109;
        if ( !v105 )
        {
          v117 = v109;
          v309 = v109;
          goto LABEL_246;
        }
        goto LABEL_210;
      }
    }
    else
    {
      v310 = v90;
    }
    v149 = Gre::Base::Globals((Gre::Base *)v107);
    v142 = (unsigned __int64)v355;
    v111 = 1;
    v362 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v149 + 6896);
    v112 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v149 + 6896);
    v363 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v149 + 6896);
    v150 = *((_QWORD *)v355 + 122);
    v114 = *(_DWORD *)(v150 + 176);
    v115 = *(_DWORD *)(v150 + 184);
    v141 = v310;
    goto LABEL_265;
  }
  if ( !v70 )
  {
    v109 = v90;
    if ( (*(_DWORD *)(v105 + 24) & 0x800) != 0 )
    {
      v110 = *(_QWORD *)(v71 + 80);
      if ( !v110 || v110 == *(_QWORD *)(v71 + 72) )
      {
        v111 = 1;
        v309 = v315;
        v362 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals((Gre::Base *)v107) + 6896);
        v112 = v362;
        v363 = v362;
        v345 = v362;
        v113 = *((_QWORD *)v355 + 122);
        v114 = *(_DWORD *)(v113 + 176);
        v115 = *(_DWORD *)(v113 + 184);
        goto LABEL_256;
      }
    }
    goto LABEL_209;
  }
LABEL_210:
  v309 = v90;
  v117 = v90;
  if ( v70 )
  {
    v118 = *(_QWORD *)(v105 + 120);
    v119 = v118 == v105 ? *(_DWORD *)(v105 + 32) : *(_DWORD *)(v118 + 32);
    v120 = *(_QWORD *)(v70 + 120);
    v107 = v120 == v70 ? *(unsigned int *)(v70 + 32) : *(unsigned int *)(v120 + 32);
    if ( v119 == (_DWORD)v107 )
    {
      v111 = 1;
      v362 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals((Gre::Base *)v107) + 6896);
      v112 = v362;
      v363 = v362;
      v121 = *((_QWORD *)v355 + 122);
      v345 = v362;
      v114 = *(_DWORD *)(v121 + 176);
      v115 = *(_DWORD *)(v121 + 184);
      goto LABEL_257;
    }
  }
  v309 = v117;
  if ( !v70 )
  {
    v309 = v117;
    goto LABEL_246;
  }
  v316 = *(_DWORD *)(v105 + 56);
  v412 = v71;
  v413 = v106;
  v411 = v70;
  v362 = Gre::Base::Globals((Gre::Base *)v107);
  v122 = *((_QWORD *)v362 + 5);
  v407 = v122;
  GreAcquireSemaphore(v122);
  v123 = *(XLATEOBJ **)(v105 + 120);
  pxlo = v123;
  LODWORD(v364) = 0;
  while ( 1 )
  {
    if ( v123 == (XLATEOBJ *)v105 )
      v124 = *(_DWORD *)(v105 + 32);
    else
      v124 = *(_DWORD *)&v123[1].iSrcType;
    v117 = v309;
    if ( *((_DWORD *)v362 + 8 * v316 + 1662) != v124 )
      goto LABEL_238;
    v125 = XEPALOBJ::ulTime((XEPALOBJ *)&v411);
    if ( *(_DWORD *)(v128 + v127 + 6652) != v125 )
      goto LABEL_238;
    v309 = v126;
    v129 = XEPALOBJ::ulTime((XEPALOBJ *)&v412);
    if ( *(_DWORD *)(v132 + v130 + 6660) != v129 )
      goto LABEL_238;
    v133 = *(Gre::Base **)(v132 + v130 + 6640);
    v363 = v133;
    v309 = v131;
    if ( (*((_DWORD *)v133 + 19) & 0x6000) != 0 )
      goto LABEL_238;
    v134 = *((_DWORD *)v133 + 19) & 0x100;
    if ( (*((_DWORD *)v133 + 1) & 4) != 0 )
    {
      v309 = v131;
      if ( v359 == *((_DWORD *)v133 + 6) )
      {
        v309 = v131;
        v136 = XEPALOBJ::ulTime((XEPALOBJ *)&v413);
        v135 = v362;
        if ( *((_DWORD *)v362 + 8 * v316 + 1664) == v136 )
          goto LABEL_241;
      }
      else
      {
        v135 = v362;
      }
      if ( !v134 )
        goto LABEL_238;
      goto LABEL_236;
    }
    if ( !v134 )
      break;
    v309 = v131;
    v135 = v362;
LABEL_236:
    if ( v327 == *((_DWORD *)v133 + 7) && v334 == *((_DWORD *)v133 + 8) )
      goto LABEL_241;
LABEL_238:
    v316 = ((_BYTE)v316 + 1) & 7;
    LODWORD(v364) = (_DWORD)v364 + 1;
    if ( (unsigned int)v364 >= 8 )
    {
      if ( v122 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(v122);
        v117 = v309;
      }
LABEL_246:
      v138 = v117;
      XlateObject = (struct Gre::Base::SESSION_GLOBALS *)CreateXlateObject(
                                                           0LL,
                                                           0,
                                                           v105,
                                                           v70,
                                                           v106,
                                                           v71,
                                                           v327,
                                                           v334,
                                                           v359,
                                                           0);
      v362 = XlateObject;
      v140 = XlateObject;
      v363 = XlateObject;
      if ( XlateObject )
      {
        if ( v105 )
        {
          v309 = v138;
          if ( v70 )
          {
            if ( (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
            {
              EXLATEOBJ::vAddToCache((Gre::Base *)&v363, v105, v70, v106, v368);
              v309 = v138;
            }
            v141 = v138;
            v111 = 1;
          }
          else
          {
            v141 = v138;
            v111 = 1;
            v309 = v141;
          }
        }
        else
        {
          v141 = v309;
          v111 = 1;
        }
      }
      else
      {
        v141 = v309;
        v111 = 0;
      }
      v112 = v140;
      v345 = v140;
      v142 = *((_QWORD *)v355 + 122);
      v114 = *(_DWORD *)(v142 + 176);
      v115 = *(_DWORD *)(v142 + 184);
      if ( v105 )
      {
LABEL_256:
        v71 = v368;
        goto LABEL_257;
      }
      v71 = v368;
LABEL_265:
      v322 = v111;
      v151 = v112;
      v328 = v115;
      v152 = v111;
      v330 = v112;
      v153 = v115;
      v309 = v141;
      v154 = v114;
      v317 = v114;
      v155 = v152;
      if ( v108 )
      {
        v143 = v141;
        v144 = v151;
        if ( (*(_DWORD *)(v108 + 24) & 0x800) == 0 )
          goto LABEL_271;
        v156 = *(_QWORD *)(v106 + 80);
        v309 = v141;
        v322 = v155;
        v330 = v151;
        if ( v156 )
        {
          v309 = v141;
          v317 = v114;
          v322 = v155;
          v330 = v151;
          v328 = v153;
          if ( v156 != *(_QWORD *)(v106 + 72) )
          {
            v154 = v114;
            goto LABEL_271;
          }
        }
      }
LABEL_280:
      v146 = Gre::Base::Globals((Gre::Base *)v142);
      v147 = v309;
      v148 = v330;
LABEL_281:
      v160 = (XLATEOBJ *)((char *)v146 + 6896);
      v365 = (XLATEOBJ *)((char *)v146 + 6896);
LABEL_282:
      v161 = v362;
LABEL_283:
      v162 = 1;
      goto LABEL_284;
    }
    v123 = pxlo;
  }
  v135 = v362;
LABEL_241:
  v309 = v117;
  _InterlockedIncrement((volatile signed __int32 *)((char *)v135 + v132 + 6632));
  *(_DWORD *)(v105 + 56) = v316;
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v407);
  v111 = 1;
  v137 = *((_QWORD *)v355 + 122);
  v362 = v363;
  v112 = v363;
  v345 = v363;
  v114 = *(_DWORD *)(v137 + 176);
  v115 = *(_DWORD *)(v137 + 184);
LABEL_257:
  v142 = v309;
  v143 = v309;
  v321 = v111;
  v144 = v112;
  v317 = v114;
  v328 = v115;
  if ( !v108 )
  {
    v321 = v111;
    v317 = v114;
    v328 = v115;
    if ( (*(_DWORD *)(v105 + 24) & 0x800) != 0 )
    {
      v145 = *(_QWORD *)(v106 + 80);
      if ( !v145 || (v321 = v111, v317 = v114, v328 = v115, v145 == *(_QWORD *)(v106 + 72)) )
      {
        v146 = Gre::Base::Globals((Gre::Base *)v309);
        v147 = v309;
        v148 = v345;
        v322 = v111;
        goto LABEL_281;
      }
    }
  }
  v155 = v321;
  v154 = v114;
  v153 = v328;
LABEL_271:
  v331 = v144;
  v322 = v155;
  v309 = v143;
  if ( !v105 )
  {
LABEL_323:
    v328 = v153;
    goto LABEL_316;
  }
  v330 = v144;
  v322 = v155;
  v309 = v143;
  if ( v108 )
  {
    v157 = *(_QWORD *)(v105 + 120);
    if ( v157 == v105 )
      v158 = *(_DWORD *)(v105 + 32);
    else
      v158 = *(_DWORD *)(v157 + 32);
    v159 = *(_QWORD *)(v108 + 120);
    if ( v159 == v108 )
      v142 = *(unsigned int *)(v108 + 32);
    else
      v142 = *(unsigned int *)(v159 + 32);
    if ( v158 == (_DWORD)v142 )
      goto LABEL_280;
  }
  else
  {
    v317 = v154;
    v328 = v153;
  }
  v331 = v144;
  v322 = v155;
  if ( !v108 )
  {
    v309 = v143;
    v322 = v155;
    v331 = v144;
    goto LABEL_323;
  }
  v335 = *(_DWORD *)(v105 + 56);
  v409 = v106;
  v410 = v106;
  v408 = v108;
  pxlo = (XLATEOBJ *)Gre::Base::Globals((Gre::Base *)v142);
  pulXlate = pxlo[1].pulXlate;
  v397 = pulXlate;
  GreAcquireSemaphore(pulXlate);
  v177 = *(_QWORD *)(v105 + 120);
  v154 = v317;
  v178 = v328;
  v179 = v335;
  v378 = v177;
  v338 = 0;
  while ( 1 )
  {
    v351 = v178;
    if ( v177 == v105 )
      v180 = *(_DWORD *)(v105 + 32);
    else
      v180 = *(_DWORD *)(v177 + 32);
    v144 = v331;
    LODWORD(v364) = v322;
    v377 = (unsigned int)v179;
    v369 = 32 * v179;
    v309 = v143;
    if ( *(&pxlo[277].iUniq + 8 * v179) != v180
      || (v309 = v143, v181 = XEPALOBJ::ulTime((XEPALOBJ *)&v408), *(_DWORD *)(v182 + v183 + 6652) != v181)
      || (v309 = v143, v184 = XEPALOBJ::ulTime((XEPALOBJ *)&v409), *(_DWORD *)(v185 + v186 + 6660) != v184)
      || (v187 = *(Gre::Base **)(v185 + v186 + 6640),
          v365 = (XLATEOBJ *)v187,
          v309 = v143,
          (*((_DWORD *)v187 + 19) & 0x6000) != 0) )
    {
LABEL_310:
      v178 = v328;
      goto LABEL_311;
    }
    v188 = *((_DWORD *)v187 + 19) & 0x100;
    if ( (*((_DWORD *)v187 + 1) & 4) != 0 )
    {
      v328 = v351;
      v309 = v143;
      v322 = (int)v364;
      v331 = v144;
      v317 = v154;
      if ( v359 == *((_DWORD *)v187 + 6) )
      {
        v322 = (int)v364;
        v309 = v143;
        v331 = v144;
        v317 = v154;
        v328 = v351;
        v189 = XEPALOBJ::ulTime((XEPALOBJ *)&v410);
        if ( *((_DWORD *)&pxlo[277].iSrcType + 8 * v377) == v189 )
          goto LABEL_309;
      }
      if ( !v188 )
        goto LABEL_310;
    }
    else
    {
      if ( !v188 )
        goto LABEL_308;
      v309 = v143;
    }
    v178 = v328;
    if ( v328 == *((_DWORD *)v187 + 7) && v154 == *((_DWORD *)v187 + 8) )
    {
LABEL_308:
      v190 = v322;
LABEL_309:
      v332 = v144;
      v322 = v190;
      v309 = v143;
      _InterlockedIncrement((volatile signed __int32 *)((char *)&pxlo[276].iSrcType + v369));
      *(_DWORD *)(v105 + 56) = v335;
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v397);
      v161 = v363;
      v160 = v365;
      v147 = v309;
      v148 = v332;
      v362 = v363;
      goto LABEL_283;
    }
LABEL_311:
    v179 = ((_BYTE)v335 + 1) & 7;
    v335 = ((_BYTE)v335 + 1) & 7;
    if ( (unsigned int)++v338 >= 8 )
      break;
    v177 = v378;
  }
  if ( pulXlate )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(pulXlate);
    v144 = v331;
    v154 = v317;
  }
  v155 = v322;
LABEL_316:
  v191 = v144;
  LODWORD(pptl) = 0;
  LODWORD(prcl) = v359;
  LODWORD(pptfx) = v154;
  LODWORD(pptlBrushOrg) = v328;
  v339 = v155;
  v352 = v143;
  v365 = (XLATEOBJ *)CreateXlateObject(0LL, 0, v105, v108, v106, v106, pptlBrushOrg, pptfx, prcl, pptl);
  v160 = v365;
  if ( v365 )
  {
    if ( v105 )
    {
      v147 = v352;
      v322 = v339;
      v309 = v352;
      if ( v108 )
      {
        if ( (v365[3].flXlate & 0x200) == 0 )
        {
          EXLATEOBJ::vAddToCache((Gre::Base *)&v365, v105, v108, v106, v106);
          v147 = v352;
        }
        v148 = v191;
      }
      else
      {
        v309 = v352;
        v148 = v191;
        v322 = v339;
      }
    }
    else
    {
      v147 = v309;
      v148 = v331;
    }
    goto LABEL_282;
  }
  v161 = v362;
  v162 = 0;
  v147 = v309;
  v148 = v331;
LABEL_284:
  v323 = v162 & v322;
  v163 = v392;
  pxlo = v160;
  v164 = (Gre::Base *)*((_QWORD *)v355 + 122);
  v350 = *((_DWORD *)v164 + 44);
  v361 = *((_DWORD *)v164 + 46);
  if ( !v392 )
  {
    if ( v108 )
    {
      v165 = v147;
      v166 = v148;
      if ( (*(_DWORD *)(v108 + 24) & 0x800) == 0 )
        goto LABEL_331;
      v192 = *(_QWORD *)(v71 + 80);
      v311 = v147;
      v333 = v148;
      if ( v192 )
      {
        v311 = v147;
        v333 = v148;
        if ( v192 != *(_QWORD *)(v71 + 72) )
          goto LABEL_331;
      }
    }
    else
    {
      v311 = v147;
      v333 = v148;
    }
    v171 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v164) + 6896);
    v367 = v171;
    goto LABEL_377;
  }
  if ( !v108 )
  {
    v165 = v147;
    v166 = v148;
    if ( (*(_DWORD *)(v392 + 24) & 0x800) != 0 )
    {
      v167 = *(_QWORD *)(v71 + 80);
      if ( !v167 || v167 == *(_QWORD *)(v71 + 72) )
      {
        v168 = Gre::Base::Globals(v164);
        v169 = v309;
        v170 = v323 & 1;
        v171 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v168 + 6896);
        v367 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v168 + 6896);
        v172 = *((_QWORD *)v355 + 122);
        v173 = v148;
        v174 = *(_DWORD *)(v172 + 176);
        v175 = *(_DWORD *)(v172 + 184);
LABEL_386:
        v333 = v173;
        v219 = (Gre::Base *)v170;
        v312 = v170;
        v217 = v169;
        v329 = v175;
        v226 = v173;
        v319 = v174;
        if ( v163 )
        {
          v221 = v173;
          v222 = v368;
          v220 = v217;
          v312 = (unsigned int)v219;
          if ( (*(_DWORD *)(v163 + 24) & 0x800) == 0 )
          {
            v218 = v174;
            v224 = v175;
            goto LABEL_391;
          }
          v369 = *(_QWORD *)(v368 + 80);
          v312 = (unsigned int)v219;
          v333 = v226;
          if ( v369 )
          {
            v312 = (unsigned int)v219;
            v220 = v217;
            v219 = (Gre::Base *)v369;
            v319 = v174;
            v224 = v175;
            v329 = v175;
            v333 = v226;
            if ( v369 != *(_QWORD *)(v368 + 72) )
              goto LABEL_390;
          }
        }
        v231 = Gre::Base::Globals(v219);
LABEL_445:
        v225 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v231 + 6896);
        goto LABEL_446;
      }
    }
LABEL_331:
    v333 = v166;
    v148 = v166;
    v311 = v165;
    v147 = v165;
    if ( !v392 )
      goto LABEL_367;
  }
  v333 = v148;
  v166 = v148;
  v311 = v147;
  v165 = v147;
  if ( v108 )
  {
    v193 = *(_QWORD *)(v392 + 120);
    v194 = v193 == v392 ? *(_DWORD *)(v392 + 32) : *(_DWORD *)(v193 + 32);
    v195 = *(_QWORD *)(v108 + 120);
    v164 = v195 == v108 ? (Gre::Base *)*(unsigned int *)(v108 + 32) : (Gre::Base *)*(unsigned int *)(v195 + 32);
    if ( v194 == (_DWORD)v164 )
    {
      v196 = Gre::Base::Globals(v164);
      v170 = v323 & 1;
      v324 = v170;
      v171 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v196 + 6896);
      v367 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v196 + 6896);
      v197 = *((_QWORD *)v355 + 122);
      v174 = *(_DWORD *)(v197 + 176);
      v175 = *(_DWORD *)(v197 + 184);
      goto LABEL_380;
    }
  }
  v333 = v148;
  v311 = v165;
  if ( !v108 )
  {
    v311 = v165;
    v333 = v148;
    goto LABEL_367;
  }
  v318 = *(_DWORD *)(v392 + 56);
  v399 = v71;
  v400 = v71;
  v398 = v108;
  v364 = Gre::Base::Globals(v164);
  v198 = *((_QWORD *)v364 + 5);
  v401 = v198;
  GreAcquireSemaphore(v198);
  v199 = *(_QWORD *)(v163 + 120);
  v166 = v333;
  v378 = v199;
  v340 = 0;
  while ( 2 )
  {
    if ( v199 == v163 )
      v200 = *(_DWORD *)(v163 + 32);
    else
      v200 = *(_DWORD *)(v199 + 32);
    v165 = v311;
    v377 = 32LL * v318;
    if ( *(_DWORD *)((char *)v364 + v377 + 6648) == v200 )
    {
      v201 = XEPALOBJ::ulTime((XEPALOBJ *)&v398);
      if ( *(_DWORD *)(v203 + v204 + 6652) == v201 )
      {
        v311 = v202;
        v205 = XEPALOBJ::ulTime((XEPALOBJ *)&v399);
        if ( *(_DWORD *)(v206 + v208 + 6660) == v205 )
        {
          v209 = *(Gre::Base **)(v206 + v208 + 6640);
          v367 = v209;
          v311 = v207;
          if ( (*((_DWORD *)v209 + 19) & 0x6000) == 0 )
          {
            v210 = *((_DWORD *)v209 + 19) & 0x100;
            if ( (*((_DWORD *)v209 + 1) & 4) != 0 )
            {
              v333 = v166;
              v311 = v165;
              if ( v359 == *((_DWORD *)v209 + 6) )
              {
                v311 = v165;
                v333 = v166;
                v212 = XEPALOBJ::ulTime((XEPALOBJ *)&v400);
                v211 = v364;
                if ( *((_DWORD *)v364 + 8 * v318 + 1664) == v212 )
                  goto LABEL_363;
              }
              else
              {
                v211 = v364;
              }
              if ( v210 )
                goto LABEL_358;
            }
            else
            {
              if ( !v210 )
              {
                v211 = v364;
LABEL_363:
                v333 = v166;
                v311 = v165;
                _InterlockedIncrement((volatile signed __int32 *)((char *)v211 + v377 + 6632));
                *(_DWORD *)(v163 + 56) = v318;
                SEMOBJ::~SEMOBJ((SEMOBJ *)&v401);
                v170 = v323 & 1;
                v161 = v363;
                v160 = v365;
                v171 = v367;
                v213 = *((_QWORD *)v355 + 122);
                v324 = v170;
                v362 = v363;
                v174 = *(_DWORD *)(v213 + 176);
                v175 = *(_DWORD *)(v213 + 184);
                goto LABEL_380;
              }
              v311 = v207;
              v211 = v364;
LABEL_358:
              if ( v361 == *((_DWORD *)v209 + 7) && v350 == *((_DWORD *)v209 + 8) )
                goto LABEL_363;
            }
          }
        }
      }
    }
    v318 = ((_BYTE)v318 + 1) & 7;
    if ( (unsigned int)++v340 < 8 )
    {
      v199 = v378;
      continue;
    }
    break;
  }
  if ( v198 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v198);
    v165 = v311;
    v166 = v333;
  }
LABEL_367:
  v214 = v166;
  LODWORD(pptl) = 0;
  LODWORD(prcl) = v359;
  LODWORD(pptfx) = v350;
  LODWORD(pptlBrushOrg) = v361;
  v369 = (__int64)v166;
  v341 = v165;
  v367 = (Gre::Base *)CreateXlateObject(0LL, 0, v163, v108, v71, v71, pptlBrushOrg, pptfx, prcl, pptl);
  v171 = v367;
  if ( !v367 )
  {
    v169 = v311;
    v215 = 0;
    goto LABEL_379;
  }
  if ( !v163 )
  {
LABEL_377:
    v169 = v311;
    goto LABEL_378;
  }
  v333 = v214;
  v311 = v341;
  if ( v108 )
  {
    if ( (*((_DWORD *)v367 + 19) & 0x200) != 0 )
    {
      v169 = v341;
    }
    else
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)&v367, v163, v108, v368, v368);
      v169 = v341;
      v311 = v341;
    }
  }
  else
  {
    v169 = v341;
    v311 = v341;
    v333 = (Gre::Base *)v369;
  }
LABEL_378:
  v215 = 1;
LABEL_379:
  v170 = v215 & v323;
  v324 = v215 & v323;
  v216 = *((_QWORD *)v355 + 122);
  v174 = *(_DWORD *)(v216 + 176);
  v175 = *(_DWORD *)(v216 + 184);
  if ( !v108 )
  {
    v173 = v333;
    goto LABEL_386;
  }
LABEL_380:
  v217 = v311;
  v218 = v174;
  v219 = v333;
  v220 = v311;
  v312 = v170;
  v221 = v333;
  v319 = v174;
  v329 = v175;
  if ( v163 )
  {
    v222 = v368;
    goto LABEL_396;
  }
  v312 = v324;
  v222 = v368;
  v319 = v174;
  v329 = v175;
  if ( (*(_DWORD *)(v108 + 24) & 0x800) == 0 )
  {
LABEL_396:
    v224 = v175;
    goto LABEL_391;
  }
  v223 = *(_QWORD *)(v368 + 80);
  if ( !v223 || (v312 = v324, v221 = v333, v319 = v174, v224 = v175, v329 = v175, v223 == *(_QWORD *)(v368 + 72)) )
  {
    v225 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v333) + 6896);
    v312 = v324;
LABEL_446:
    v370 = v225;
    goto LABEL_447;
  }
LABEL_390:
  v218 = v319;
LABEL_391:
  v227 = v312;
  v333 = v221;
  v325 = v220;
  if ( !v108 )
    goto LABEL_435;
  v333 = v221;
  v326 = v220;
  if ( v163 )
  {
    v228 = *(_QWORD *)(v108 + 120);
    if ( v228 == v108 )
      v229 = *(_DWORD *)(v108 + 32);
    else
      v229 = *(_DWORD *)(v228 + 32);
    v219 = *(Gre::Base **)(v163 + 120);
    if ( v219 == (Gre::Base *)v163 )
      v230 = *(_DWORD *)(v163 + 32);
    else
      v230 = *((_DWORD *)v219 + 8);
    if ( v229 == v230 )
    {
      v231 = Gre::Base::Globals(v219);
      v217 = v326;
      goto LABEL_445;
    }
    v218 = v319;
    v227 = v312;
  }
  else
  {
    v319 = v218;
    v329 = v224;
  }
  v333 = v221;
  v312 = v227;
  v325 = v220;
  if ( !v163 )
  {
    v325 = v220;
    v312 = v227;
    v333 = v221;
    goto LABEL_435;
  }
  v403 = v222;
  v404 = v222;
  v336 = *(_DWORD *)(v108 + 56);
  v402 = v163;
  v346 = Gre::Base::Globals(v219);
  v232 = *((_QWORD *)v346 + 5);
  v405 = v232;
  GreAcquireSemaphore(v232);
  v233 = *(_QWORD *)(v108 + 120);
  v218 = v319;
  v224 = v329;
  v378 = v233;
  v361 = 0;
  while ( 2 )
  {
    v353 = v224;
    v342 = v218;
    if ( v233 == v108 )
      v234 = *(_DWORD *)(v108 + 32);
    else
      v234 = *(_DWORD *)(v233 + 32);
    v220 = v325;
    v221 = v333;
    LODWORD(v364) = v312;
    v377 = 32LL * v336;
    if ( *(_DWORD *)((char *)v346 + v377 + 6648) == v234
      && (v235 = XEPALOBJ::ulTime((XEPALOBJ *)&v402), *(_DWORD *)((char *)v346 + v237 + 6652) == v235)
      && (v325 = v236, v238 = XEPALOBJ::ulTime((XEPALOBJ *)&v403), *(_DWORD *)((char *)v346 + v240 + 6660) == v238) )
    {
      v241 = *(Gre::Base **)((char *)v346 + v240 + 6640);
      v370 = v241;
      v325 = v239;
      if ( (*((_DWORD *)v241 + 19) & 0x6000) != 0 )
        goto LABEL_428;
      v242 = *((_DWORD *)v241 + 19) & 0x100;
      if ( (*((_DWORD *)v241 + 1) & 4) == 0 )
      {
        if ( !v242 )
          goto LABEL_429;
        v325 = v239;
        goto LABEL_421;
      }
      v319 = v342;
      v329 = v353;
      v333 = v221;
      v325 = v220;
      v312 = (unsigned int)v364;
      if ( v359 == *((_DWORD *)v241 + 6) )
      {
        v312 = (unsigned int)v364;
        v319 = v342;
        v333 = v221;
        v329 = v353;
        v325 = v220;
        if ( *((_DWORD *)v346 + 8 * v336 + 1664) == XEPALOBJ::ulTime((XEPALOBJ *)&v404) )
          goto LABEL_430;
      }
      if ( !v242 )
      {
LABEL_428:
        v218 = v319;
        goto LABEL_424;
      }
LABEL_421:
      v224 = v329;
      if ( v329 == *((_DWORD *)v241 + 7) )
      {
        if ( v319 == *((_DWORD *)v241 + 8) )
        {
LABEL_429:
          v243 = v312;
LABEL_430:
          v333 = v221;
          v312 = v243;
          v325 = v220;
          _InterlockedIncrement((volatile signed __int32 *)((char *)v346 + v377 + 6632));
          *(_DWORD *)(v108 + 56) = v336;
          SEMOBJ::~SEMOBJ((SEMOBJ *)&v405);
          v161 = v363;
          v160 = v365;
          v171 = v367;
          v225 = v370;
          v362 = v363;
          goto LABEL_431;
        }
        v218 = v319;
        goto LABEL_424;
      }
      v218 = v319;
    }
    else
    {
LABEL_424:
      v224 = v329;
    }
    v336 = ((_BYTE)v336 + 1) & 7;
    if ( (unsigned int)++v361 < 8 )
    {
      v233 = v378;
      continue;
    }
    break;
  }
  if ( v232 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v232);
    v220 = v325;
    v221 = v333;
    v218 = v319;
    v224 = v329;
  }
  v227 = v312;
LABEL_435:
  LODWORD(pptl) = 0;
  LODWORD(prcl) = v359;
  LODWORD(pptfx) = v218;
  LODWORD(pptlBrushOrg) = v224;
  v354 = v220;
  v343 = v227;
  v244 = v368;
  v369 = (__int64)v221;
  v370 = (Gre::Base *)CreateXlateObject(0LL, 0, v108, v163, v368, v368, pptlBrushOrg, pptfx, prcl, pptl);
  v225 = v370;
  if ( v370 )
  {
    if ( !v108 )
    {
LABEL_431:
      v217 = v325;
      goto LABEL_447;
    }
    v333 = (Gre::Base *)v369;
    v312 = v343;
    if ( v392 )
    {
      if ( (*((_DWORD *)v370 + 19) & 0x200) == 0 )
      {
        EXLATEOBJ::vAddToCache((Gre::Base *)&v370, v108, v392, v244, v244);
        v217 = v354;
        goto LABEL_447;
      }
    }
    else
    {
      v312 = v343;
      v333 = (Gre::Base *)v369;
    }
    v217 = v354;
LABEL_447:
    v245 = 1;
  }
  else
  {
    v217 = v325;
    v245 = 0;
  }
  v246 = v357;
  inited = v245 & v312;
  v247 = *((_QWORD *)v357 + 146);
  if ( v247 && (*((_DWORD *)v357 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v357) )
  {
LABEL_453:
    if ( (*((_DWORD *)v246 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v246) )
      goto LABEL_455;
  }
  else if ( *((_QWORD *)v246 + 144) )
  {
    if ( v247 )
      goto LABEL_453;
LABEL_455:
    v248 = (struct REGION *)*((_QWORD *)v246 + 144);
  }
  else
  {
    v248 = DC::prgnVisSnap(v246);
  }
  v460 = 0LL;
  v461 = 0;
  v462 = 1;
  v463 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v455, v248, (struct ERECTL *)&v451, 0);
  if ( v456 == v458 || v457 == v459 )
  {
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v370);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v367);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v365);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v374);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v363);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v296, v297);
    DCOBJ::~DCOBJ((DCOBJ *)&v355);
    DCOBJ::~DCOBJ((DCOBJ *)&v357);
    return 1LL;
  }
  v249 = v333;
  v382 = 0LL;
  v383 = 0;
  v250 = *(_QWORD *)(v385 + 48);
  v251 = v217;
  v384 = 0;
  v347 = v333;
  if ( !v375
    || (v347 = v333, v251 = v217, v252 = *(_DWORD *)(*((_QWORD *)v357 + 122) + 108LL), (v252 & 1) == 0)
    || (v347 = v333, (v252 & 9) == 9) )
  {
LABEL_469:
    v389 = 0LL;
    v390 = 0;
    v391 = 0;
    v386 = 0LL;
    v387 = 0;
    v388 = 0;
    if ( !v251 )
      goto LABEL_509;
    v417[1] = v451.m128i_i32[2] - v451.m128i_i32[0];
    v417[2] = v451.m128i_i32[3] - v451.m128i_i32[1];
    v417[3] = 0;
    v419 = 0LL;
    v256 = *(__int64 **)(*(_QWORD *)&pptlSrc + 6008LL);
    v417[0] = 6;
    v418 = *v256;
    v257 = SURFMEM::bCreateDIB((SURFMEM *)&v389, (struct _DEVBITMAPINFO *)v417, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) & inited;
    if ( v257 )
    {
      if ( !v360 )
      {
        v420[1] = prclDest.right - prclDest.left;
        v420[2] = prclDest.bottom - prclDest.top;
        v420[3] = 0;
        v258 = *(__int64 **)(*(_QWORD *)&pptlSrc + 6008LL);
        v422 = 0LL;
        v420[0] = 6;
        v421 = *v258;
        DIB = SURFMEM::bCreateDIB((SURFMEM *)&v386, (struct _DEVBITMAPINFO *)v420, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        v257 = DIB;
        if ( DIB )
        {
          v259 = prclDest.left;
          pptlSrc.x = prclDest.left;
          v375 = prclDest.top;
          pptlSrc.y = prclDest.top;
          if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
          {
            EngSetLastError(0x57u);
            SURFMEM::~SURFMEM((SURFMEM *)&v386);
            SURFMEM::~SURFMEM((SURFMEM *)&v389);
            goto LABEL_475;
          }
          if ( prclDest.right > prclDest.left && prclDest.bottom > prclDest.top )
          {
            v260 = (Gre::Base *)v371;
            if ( v259 <= *(_DWORD *)(v371 + 56) && v375 <= *(_DWORD *)(v371 + 60) )
            {
              v263 = (SURFOBJ *)(v386 + 24);
              if ( !v386 )
                v263 = 0LL;
              EngCopyBits(v263, (SURFOBJ *)(v371 + 24), 0LL, v160, &prclDest, &pptlSrc);
            }
          }
          v264 = v386;
          v265 = 0;
          v371 = v386;
          v266 = *(Gre::Base **)(v386 + 80);
          v267 = (Gre::Base *)((char *)v266 + *(_DWORD *)(v386 + 60) * *(_DWORD *)(v386 + 88));
          if ( v266 != v267 )
          {
            do
            {
              if ( v265 >= prclDest.top && v265 < prclDest.bottom )
              {
                v260 = v266;
                v268 = (Gre::Base *)((char *)v266 + 4 * *(int *)(v264 + 56));
                v269 = 0;
                if ( v266 != v268 )
                {
                  do
                  {
                    if ( v269 >= prclDest.left && v269 < prclDest.right )
                      *(_DWORD *)v260 |= 0xFF000000;
                    ++v269;
                    v260 = (Gre::Base *)((char *)v260 + 4);
                  }
                  while ( v260 != v268 );
                  v264 = v386;
                }
              }
              ++v265;
              v266 = (Gre::Base *)((char *)v266 + *(int *)(v264 + 88));
            }
            while ( v266 != v267 );
            v371 = v264;
          }
          v270 = Gre::Base::Globals(v260);
          v257 = DIB;
          HIBYTE(a11) |= 1u;
          pxlo = (XLATEOBJ *)((char *)v270 + 6896);
        }
      }
      v271 = *(_DWORD **)(v389 + 72);
      v272 = (unsigned __int64)*(unsigned int *)(v389 + 64) >> 2;
      if ( v272 )
      {
        if ( ((unsigned __int8)v271 & 4) == 0 )
          goto LABEL_499;
        *v271 = 0;
        if ( --v272 )
        {
          ++v271;
LABEL_499:
          memset(v271, 0, 8 * (v272 >> 1));
          if ( (v272 & 1) != 0 )
            v271[v272 - 1] = 0;
        }
      }
    }
    if ( !v257 )
    {
      EngSetLastError(8u);
      SURFMEM::~SURFMEM((SURFMEM *)&v386);
      SURFMEM::~SURFMEM((SURFMEM *)&v389);
      SURFMEM::~SURFMEM((SURFMEM *)&v382);
      EXLATEOBJ::vAltUnlock(&v370);
      EXLATEOBJ::vAltUnlock(&v367);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v365);
      EXLATEOBJ::vAltUnlock(&v374);
      EXLATEOBJ::vAltUnlock(&v363);
      goto LABEL_558;
    }
    `vector constructor iterator'(&v476, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v348.x = v464.x - 16 * v428.m128i_i32[0];
    v348.y = v464.y - 16 * v428.m128i_i32[1];
    v476 = v348;
    v348.x = v465 - 16 * v428.m128i_i32[0];
    v348.y = v466 - 16 * v428.m128i_i32[1];
    v477 = v348;
    v348.x = v467 - 16 * v428.m128i_i32[0];
    v348.y = v468 - 16 * v428.m128i_i32[1];
    v478 = v348;
    v273 = (SURFOBJ *)(v371 + 24);
    if ( !v371 )
      v273 = 0LL;
    if ( v389 )
      v274 = (SURFOBJ *)(v389 + 24);
    else
      v274 = 0LL;
    EngPlgBlt(v274, v273, 0LL, 0LL, pxlo, 0LL, 0LL, &v476, &prclDest, 0LL, 3u);
    inited = EXLATEOBJ::bInitXlateObj(
               (Gre::Base *)&v374,
               0LL,
               0,
               (__int64)v256,
               v392,
               0LL,
               v368,
               *(_DWORD *)(*((_QWORD *)v355 + 122) + 184LL),
               *(_DWORD *)(*((_QWORD *)v355 + 122) + 176LL),
               v359,
               0);
    v347 = v374;
    v276 = Gre::Base::Globals(v275);
    *(_QWORD *)&prclDest.left = 0LL;
    pxlo = (XLATEOBJ *)((char *)v276 + 6896);
    v371 = v389;
    prclDest.right = v451.m128i_i32[2] - v451.m128i_i32[0];
    prclDest.bottom = v451.m128i_i32[3] - v451.m128i_i32[1];
    `vector destructor iterator'(&v476, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
    v161 = v362;
LABEL_509:
    if ( inited )
    {
      ++*(_DWORD *)(v385 + 92);
      v277 = v357;
      if ( *((_QWORD *)v357 + 6) == *((_QWORD *)v355 + 6)
        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v357)
        && (v277 = v357,
            v249 = (struct ECLIPOBJ *)*((_QWORD *)v357 + 6),
            *((_QWORD *)v249 + 437) == *((_QWORD *)v355 + 6)) )
      {
        if ( (*((_DWORD *)v277 + 9) & 0xE0) != 0 )
        {
          v449 = v451;
          XDCOBJ::vAccumulateTight((XDCOBJ *)&v357, v249, &v449);
        }
        v423[1] = 0;
        v423[0] = a11;
        v424 = pxlo;
        v425 = v171;
        v426 = v225;
        if ( v451.m128i_i32[2] - v451.m128i_i32[0] == prclDest.right - prclDest.left
          && v451.m128i_i32[3] - v451.m128i_i32[1] == prclDest.bottom - prclDest.top )
        {
          BYTE1(v423[0]) = BYTE1(a11) & 0xFE;
        }
        if ( (*(_DWORD *)(v385 + 112) & 0x10000) != 0 )
          v279 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v250 + 3232);
        else
          v279 = EngAlphaBlend;
        if ( v371 )
          v280 = v371 + 24;
        else
          v280 = 0LL;
        v320 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, Gre::Base *, __m128i *, RECTL *, _DWORD *))v279)(
                 v385 + 24,
                 v280,
                 v455,
                 v347,
                 &v451,
                 &prclDest,
                 v423);
        goto LABEL_528;
      }
      v278 = 87;
    }
    else
    {
      v278 = 6;
    }
    EngSetLastError(v278);
    v320 = 0;
LABEL_528:
    SURFMEM::~SURFMEM((SURFMEM *)&v386);
    SURFMEM::~SURFMEM((SURFMEM *)&v389);
    SURFMEM::~SURFMEM((SURFMEM *)&v382);
    if ( v225 )
    {
      v284 = *((_DWORD *)v225 + 9);
      if ( v284 < 0 )
      {
        if ( v284 == -1 )
          FreeThreadBufferWithTag(v225);
      }
      else
      {
        v285 = Gre::Base::Globals(v282);
        v282 = (Gre::Base *)(32LL * *((int *)v225 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v285 + (_QWORD)v282 + 6632));
        v161 = v363;
        v160 = v365;
        v171 = v367;
      }
    }
    if ( v171 )
    {
      v286 = *((_DWORD *)v171 + 9);
      if ( v286 < 0 )
      {
        if ( v286 == -1 )
          FreeThreadBufferWithTag(v171);
      }
      else
      {
        v287 = Gre::Base::Globals(v282);
        v282 = (Gre::Base *)(32LL * *((int *)v171 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v287 + (_QWORD)v282 + 6632));
        v161 = v363;
        v160 = v365;
      }
    }
    if ( v160 )
    {
      cEntries = v160[1].cEntries;
      if ( cEntries < 0 )
      {
        if ( cEntries == -1 )
          FreeThreadBufferWithTag(v160);
      }
      else
      {
        v289 = Gre::Base::Globals(v282);
        v282 = (Gre::Base *)(32LL * (int)v160[1].cEntries);
        _InterlockedDecrement((volatile signed __int32 *)((char *)v289 + (_QWORD)v282 + 6632));
        v161 = v363;
      }
    }
    v290 = v374;
    if ( v374 )
    {
      v291 = *((_DWORD *)v374 + 9);
      if ( v291 < 0 )
      {
        if ( v291 == -1 )
          FreeThreadBufferWithTag(v374);
      }
      else
      {
        v292 = Gre::Base::Globals(v282);
        v282 = (Gre::Base *)(32LL * *((int *)v290 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v292 + (_QWORD)v282 + 6632));
        v161 = v363;
      }
    }
    if ( v161 )
    {
      v293 = *((_DWORD *)v161 + 9);
      if ( v293 < 0 )
      {
        if ( v293 == -1 )
        {
          FreeThreadBufferWithTag(v161);
          v31 = v320;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v294, v295);
          goto LABEL_59;
        }
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v282) + 8 * *((int *)v161 + 9) + 1658);
      }
    }
    v31 = v320;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v281, v283);
LABEL_59:
    if ( v355 )
    {
      if ( (_DWORD)v356 && (*((_DWORD *)v355 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v356) )
        {
          v32 = XDCOBJ::GetUserAttr((XDCOBJ *)&v355);
          if ( v32 )
            DC::RestoreAttributes(v355, v32);
        }
        *((_DWORD *)v355 + 11) &= ~2u;
        LODWORD(v356) = 0;
      }
      v373 = 0;
      v33 = *(_QWORD *)v355;
      HmgDecrementExclusiveReferenceCountEx(v355, HIDWORD(v356), &v373);
      if ( v373 )
        GrepDeleteDC(v33, 0x2000000LL);
    }
    if ( v357 )
    {
      if ( (_DWORD)v358 && (*((_DWORD *)v357 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v358) )
        {
          v34 = XDCOBJ::GetUserAttr((XDCOBJ *)&v357);
          if ( v34 )
            DC::RestoreAttributes(v357, v34);
        }
        *((_DWORD *)v357 + 11) &= ~2u;
        LODWORD(v358) = 0;
      }
      v372 = 0;
      v35 = *(_QWORD *)v357;
      HmgDecrementExclusiveReferenceCountEx(v357, HIDWORD(v358), &v372);
      if ( v372 )
        GrepDeleteDC(v35, 0x2000000LL);
    }
    return v31;
  }
  v414[1] = *(_DWORD *)(v371 + 56);
  v414[2] = *(_DWORD *)(v371 + 60);
  v414[0] = *(_DWORD *)(v371 + 96);
  v253 = *(__int64 **)(v371 + 128);
  v414[3] = 0;
  v416 = 0LL;
  v415 = *v253;
  SURFMEM::bCreateDIB((SURFMEM *)&v382, (struct _DEVBITMAPINFO *)v414, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v382 )
  {
    v452 = 0LL;
    v396 = 0LL;
    v18 = (*(_DWORD *)(v371 + 112) & 0x400) == 0;
    v453 = *(_DWORD *)(v371 + 56);
    v454 = *(_DWORD *)(v371 + 60);
    v254 = v18
         ? EngCopyBits
         : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v406 + 352);
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v254)(
           v382 + 24,
           v371 + 24,
           0LL,
           0LL,
           &v452,
           &v396) )
    {
      v255 = *(_DWORD *)(v382 + 96);
      if ( (unsigned int)(v255 - 1) <= 5 )
      {
        ((void (*)(void))(&apfnMirror)[v255])();
        v371 = v382;
        v251 = v217;
        v347 = v333;
        goto LABEL_469;
      }
    }
  }
LABEL_475:
  SURFMEM::~SURFMEM((SURFMEM *)&v382);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v370);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v367);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v365);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v374);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v363);
LABEL_558:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v429, v261, v262);
  DCOBJ::~DCOBJ((DCOBJ *)&v355);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)&v357);
  return 0LL;
}
