__int64 __fastcall CDrawingContext::PreSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int *v3; // r13
  void *v4; // r15
  CDrawingContext *v6; // r14
  __int64 v7; // rsi
  struct CVisual *v8; // r8
  _DWORD *v9; // rax
  bool v10; // zf
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rbx
  __int64 v15; // r9
  unsigned int v16; // eax
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rdi
  unsigned int v21; // ecx
  int v22; // eax
  CMILMatrix *v23; // rcx
  int v24; // ecx
  float v25; // xmm0_4
  void (__fastcall ***v26)(_QWORD, _DWORD *); // rcx
  char *v27; // rdx
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  __int64 v31; // rax
  float v32; // xmm1_4
  __int64 v33; // rcx
  int v34; // ecx
  __int128 v35; // xmm2
  float v36; // xmm8_4
  float v37; // xmm9_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  __int64 v40; // rax
  _QWORD *v41; // r12
  struct CVisualTree *v42; // rdi
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 *v45; // rax
  __int64 *v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r12
  _QWORD *v51; // r12
  _QWORD *v52; // rbx
  _DWORD *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r9
  _DWORD *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  int v60; // ecx
  struct CVisualTree *v61; // r12
  CGeometry *v62; // rbx
  char *v63; // r13
  _QWORD *v64; // rcx
  _QWORD *v65; // rbx
  struct CTreeData *TreeData; // rdi
  _DWORD *v67; // r8
  unsigned int *v68; // rdx
  unsigned int *v69; // r8
  __int64 v70; // r12
  unsigned __int64 v71; // rax
  char v72; // cl
  _BYTE *v73; // rbx
  _QWORD *v74; // rbx
  __int64 v75; // rbx
  int BitmapRealizationForEffectInput; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v77; // rdx
  CD2DLayer *v78; // rcx
  unsigned int *v79; // r12
  unsigned __int64 v80; // r13
  char *v81; // r12
  __int64 v82; // rax
  int v83; // ecx
  float v84; // xmm0_4
  char v85; // r13
  _DWORD *v86; // rdi
  bool v87; // r13
  bool v88; // r12
  __int64 v89; // rbx
  __int64 v90; // rax
  bool v91; // bl
  bool v92; // di
  bool v93; // al
  bool *v94; // rdi
  int v95; // eax
  unsigned int v96; // ebx
  unsigned int v98; // eax
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rax
  _QWORD *v102; // r10
  _QWORD *v103; // r11
  __int64 v104; // rbx
  __int64 v105; // rax
  void *v106; // rbx
  int v107; // r8d
  unsigned int v108; // ecx
  unsigned int v109; // eax
  unsigned int v110; // eax
  unsigned int v111; // edx
  int v112; // eax
  float v113; // xmm3_4
  float v114; // xmm0_4
  float v115; // xmm1_4
  unsigned int v116; // eax
  __int64 v117; // rcx
  unsigned int v118; // eax
  int v119; // eax
  CMILMatrix *v120; // rcx
  int v121; // eax
  void *v122; // rax
  int v123; // eax
  unsigned int v124; // ecx
  __int64 v125; // r9
  int v126; // ebx
  __int64 v127; // rax
  int v128; // eax
  int ShapeData; // eax
  unsigned int v130; // ecx
  int v131; // r13d
  void (__fastcall ***v132)(_QWORD, __int64); // rbx
  int v133; // edi
  int v134; // eax
  char v135; // di
  void (__fastcall ***v136)(_QWORD, __int64); // rcx
  __int64 *v137; // rdi
  struct _LIST_ENTRY *v138; // rbx
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *v140; // rcx
  struct _LIST_ENTRY *v141; // rbx
  struct _LIST_ENTRY *Flink; // rax
  const struct CMILMatrix *v143; // rcx
  struct CMILMatrix *v144; // rax
  _BOOL8 v145; // r8
  _BYTE *v146; // r9
  __int64 v147; // rbx
  int v148; // r12d
  __int64 v149; // rdx
  unsigned int v150; // r13d
  __int64 v151; // rdi
  char **v152; // r10
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rax
  void *v157; // rbx
  unsigned __int64 v158; // rdi
  unsigned int v159; // ecx
  unsigned int v160; // eax
  unsigned __int64 v161; // rbx
  unsigned __int64 v162; // r11
  char *v163; // rdx
  char *v164; // rcx
  unsigned __int64 v165; // r9
  unsigned __int64 v166; // rax
  __int64 v167; // r8
  char *v168; // rdi
  CScopedClipStack::ClippingScopeState *v169; // r13
  char *v170; // r13
  __int64 v171; // rax
  int v172; // eax
  void *v173; // r8
  char *v174; // rax
  __int64 v175; // rbx
  __int64 v176; // r8
  int v177; // edi
  unsigned int v178; // r9d
  __int64 v179; // rdx
  unsigned __int64 v180; // rdx
  char **v181; // r10
  __int64 v182; // rax
  __int64 v183; // r8
  __int64 v184; // rdx
  __int128 v185; // xmm0
  int v186; // ebx
  __int64 v187; // rax
  unsigned int v188; // ecx
  unsigned int v189; // eax
  void *v190; // rax
  char *v191; // rdx
  char *v192; // r8
  unsigned __int64 v193; // rcx
  char *v194; // r11
  char *v195; // rcx
  signed __int64 v196; // r9
  unsigned __int64 v197; // r10
  unsigned __int64 v198; // rdx
  __int64 v199; // rax
  __int64 v200; // r8
  char *v201; // rax
  __int64 v202; // rax
  _OWORD *v203; // rcx
  int v204; // eax
  __int64 v205; // rcx
  __int64 v206; // rax
  __int64 v207; // r8
  __int64 v208; // rax
  _BYTE *v209; // rdx
  __int64 k; // rcx
  _QWORD **v211; // rcx
  _QWORD *v212; // rcx
  _QWORD *v213; // rax
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // rax
  _BYTE *v217; // rdx
  __int64 jj; // rcx
  _QWORD **v219; // rcx
  _QWORD *v220; // rax
  __int64 v221; // r8
  __int64 v222; // rax
  _BYTE *v223; // rdx
  __int64 i1; // rcx
  _QWORD **v225; // rcx
  _QWORD *v226; // rcx
  _QWORD *v227; // rax
  __int64 v228; // r8
  __int64 v229; // rax
  _BYTE *v230; // rdx
  __int64 m; // rcx
  _QWORD **v232; // rcx
  _QWORD *v233; // rcx
  _QWORD *n; // rax
  __int64 v235; // r8
  __int64 v236; // rax
  _BYTE *v237; // rdx
  __int64 ii; // rcx
  _QWORD **v239; // rcx
  _QWORD *v240; // rcx
  _QWORD *v241; // rax
  __int64 v242; // rax
  __int64 mm; // rcx
  _QWORD **v244; // rcx
  _QWORD *v245; // rcx
  _QWORD *v246; // rax
  __int64 v247; // r8
  __int64 v248; // rcx
  _BYTE *v249; // rdx
  unsigned int nn; // r9d
  _QWORD **v251; // rcx
  _QWORD *v252; // rcx
  _QWORD *v253; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  CMILMatrix *TopByReference; // rax
  char v256; // dl
  const struct CMILMatrix *v257; // rax
  void *v258; // rax
  int v259; // eax
  unsigned int v260; // ecx
  void *v261; // rbx
  unsigned int v262; // eax
  bool IsEqual; // al
  int *v264; // r8
  int v265; // edx
  unsigned int v266; // ebx
  int v267; // edx
  _QWORD *v268; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v270; // rdi
  int v271; // eax
  unsigned int v272; // ecx
  unsigned int v273; // ebx
  __int64 v274; // rax
  struct CEffect *EffectInternal; // rax
  __int64 *v276; // r14
  _QWORD *v277; // r12
  __int64 v278; // r8
  __int64 v279; // rcx
  _BYTE *v280; // rdx
  unsigned int kk; // r9d
  _QWORD **v282; // rcx
  _QWORD *v283; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v286; // r12
  char v287; // r8
  __int64 v288; // rax
  int v289; // eax
  int v290; // eax
  __int64 ProjectedShadowReceivers; // rax
  _QWORD *v292; // rcx
  _QWORD *v293; // rdx
  _QWORD *v294; // rdi
  _QWORD *v295; // rbx
  _QWORD *v296; // rax
  CProjectedShadowScene *v297; // rax
  __int64 ***v298; // rdi
  __int64 **i; // rbx
  unsigned int v300; // ecx
  unsigned int v301; // ecx
  void *v302; // rbx
  __int64 v303; // rax
  int v304; // r12d
  _QWORD *v305; // rax
  unsigned int v306; // ecx
  unsigned int v307; // eax
  int v308; // ebx
  __int64 v309; // rax
  void *v310; // rbx
  unsigned int v311; // eax
  unsigned int v312; // r12d
  unsigned int v313; // ecx
  unsigned __int64 v314; // rax
  void *v315; // rbx
  unsigned int v316; // ecx
  unsigned int v317; // ecx
  void *v318; // rbx
  __int64 v319; // rax
  int v320; // edi
  unsigned int v321; // ecx
  unsigned int v322; // eax
  int v323; // ebx
  __int64 v324; // rax
  void *v325; // rbx
  unsigned int v326; // ecx
  unsigned int v327; // eax
  int v328; // eax
  unsigned int v329; // ecx
  unsigned int v330; // edi
  unsigned int v331; // ecx
  void *v332; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v334; // rax
  int v335; // eax
  unsigned int v336; // ecx
  unsigned __int64 v337; // rcx
  void *v338; // rbx
  const void *v339; // rdx
  int v340; // eax
  HANDLE v341; // rax
  bool v342; // cf
  __int64 *v343; // r14
  _QWORD *v344; // r12
  __int64 v345; // r8
  __int64 v346; // r12
  __int64 v347; // rcx
  char v348; // r10
  __int64 v349; // rax
  int v350; // eax
  int v351; // eax
  unsigned __int64 v352; // rax
  int v353; // eax
  unsigned int v354; // ecx
  unsigned __int64 v355; // rax
  void *v356; // rbx
  int v357; // eax
  HANDLE v358; // rax
  unsigned __int64 v359; // rdi
  LPVOID v360; // rax
  __int64 v361; // r8
  __int64 v362; // rdx
  LPVOID v363; // rbx
  char *v364; // rcx
  __int64 v365; // rax
  __int64 i2; // rax
  __int64 v367; // r8
  CScopedClipStack::ClippingScopeState *v368; // rbx
  CScopedClipStack::ClippingScopeState *v369; // rdi
  unsigned __int64 v370; // rax
  int v371; // eax
  unsigned int v372; // ecx
  unsigned __int64 v373; // rcx
  void *v374; // rbx
  const void *v375; // rdx
  int v376; // ecx
  HANDLE v377; // rax
  HANDLE v378; // rax
  unsigned int v379; // r13d
  int v380; // eax
  unsigned int v381; // ecx
  unsigned __int64 v382; // rax
  void *v383; // rbx
  HANDLE v384; // rax
  unsigned __int64 v385; // rdi
  LPVOID v386; // rax
  __int64 v387; // r8
  __int64 v388; // rdx
  LPVOID v389; // rbx
  char *v390; // rcx
  char *v391; // rax
  __int64 v392; // r10
  __int64 v393; // rdx
  __int64 v394; // r8
  int v395; // eax
  unsigned int v396; // ecx
  unsigned int v397; // r13d
  int v398; // eax
  unsigned int v399; // ecx
  int v400; // eax
  unsigned int v401; // ecx
  void *v402; // rbx
  HANDLE v403; // rax
  HANDLE v404; // rax
  unsigned int v405; // ecx
  __int64 v406; // r8
  unsigned int v407; // ecx
  __int64 v408; // r8
  __int64 v409; // r8
  char v410; // bl
  __int64 v411; // rdx
  __int64 Bounds; // rax
  __int64 v413; // rcx
  unsigned int v414; // ecx
  unsigned int v415; // ecx
  __int64 v416; // r8
  unsigned int v417; // ecx
  unsigned int v418; // edi
  int v419; // eax
  unsigned int v420; // ecx
  void *v421; // rbx
  unsigned int v422; // edi
  int v423; // eax
  unsigned int v424; // ecx
  void *v425; // rbx
  HANDLE v426; // rax
  int v427; // edx
  const void *v428; // rdi
  const char *v429; // rbx
  __int64 v430; // rcx
  __int64 v431; // rax
  const char *v432; // rdx
  __int64 v433; // rdi
  __int64 v434; // rbx
  __int64 v435; // rax
  unsigned int v436; // [rsp+20h] [rbp-E0h]
  int v437; // [rsp+20h] [rbp-E0h]
  unsigned int v438; // [rsp+20h] [rbp-E0h]
  char v439; // [rsp+50h] [rbp-B0h]
  char v440; // [rsp+50h] [rbp-B0h]
  char v441; // [rsp+50h] [rbp-B0h]
  int v442; // [rsp+54h] [rbp-ACh]
  char v443[8]; // [rsp+58h] [rbp-A8h] BYREF
  void *v444; // [rsp+60h] [rbp-A0h] BYREF
  char v445[8]; // [rsp+68h] [rbp-98h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v447[2]; // [rsp+78h] [rbp-88h] BYREF
  bool *v448; // [rsp+80h] [rbp-80h]
  void *v449; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v450; // [rsp+90h] [rbp-70h]
  char v451; // [rsp+98h] [rbp-68h]
  struct CVisualTree *v452; // [rsp+A0h] [rbp-60h]
  _BYTE v453[24]; // [rsp+B0h] [rbp-50h] BYREF
  void (__fastcall ***v454)(_QWORD, __int64); // [rsp+D0h] [rbp-30h] BYREF
  char v455; // [rsp+D8h] [rbp-28h]
  __int64 v456; // [rsp+E0h] [rbp-20h]
  _DWORD v457[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct CVisual *v458; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD *v459; // [rsp+F8h] [rbp-8h]
  __int128 v460; // [rsp+100h] [rbp+0h] BYREF
  char v461; // [rsp+110h] [rbp+10h]
  __int64 v462; // [rsp+118h] [rbp+18h]
  __int64 v463; // [rsp+120h] [rbp+20h]
  int v464; // [rsp+128h] [rbp+28h]
  float v465; // [rsp+12Ch] [rbp+2Ch]
  __int128 v466; // [rsp+130h] [rbp+30h] BYREF
  __int128 v467; // [rsp+140h] [rbp+40h]
  __int128 v468; // [rsp+150h] [rbp+50h]
  __int128 v469; // [rsp+160h] [rbp+60h]
  _QWORD v470[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v471; // [rsp+180h] [rbp+80h]
  __int128 v472; // [rsp+190h] [rbp+90h]
  __int128 v473; // [rsp+1A0h] [rbp+A0h]
  __int64 v474; // [rsp+1B0h] [rbp+B0h]
  __int64 v475; // [rsp+1B8h] [rbp+B8h]
  int v476; // [rsp+1C0h] [rbp+C0h]
  char v477; // [rsp+1C4h] [rbp+C4h]
  _DWORD v478[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  void *lpMem; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v480[5]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v481; // [rsp+1F4h] [rbp+F4h]
  int v482; // [rsp+1F8h] [rbp+F8h]
  int v483; // [rsp+1FCh] [rbp+FCh]
  _DWORD *v484; // [rsp+208h] [rbp+108h] BYREF
  void *v485; // [rsp+210h] [rbp+110h] BYREF
  char v486[8]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char v487[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  float v488[20]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v489[64]; // [rsp+330h] [rbp+230h] BYREF
  int v490; // [rsp+370h] [rbp+270h]
  _BYTE v491[64]; // [rsp+380h] [rbp+280h] BYREF
  int v492; // [rsp+3C0h] [rbp+2C0h]
  __int128 v493; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v494; // [rsp+3E0h] [rbp+2E0h]
  __int64 v495[2]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v496; // [rsp+400h] [rbp+300h]
  __int128 v497; // [rsp+410h] [rbp+310h]
  __int128 v498; // [rsp+420h] [rbp+320h] BYREF
  __int64 v499; // [rsp+430h] [rbp+330h]
  __m128 v500; // [rsp+438h] [rbp+338h]
  __int128 v501; // [rsp+448h] [rbp+348h] BYREF
  __int128 v502; // [rsp+458h] [rbp+358h] BYREF
  __int64 v503[2]; // [rsp+470h] [rbp+370h] BYREF
  __int64 v504; // [rsp+480h] [rbp+380h]
  __int128 v505; // [rsp+490h] [rbp+390h] BYREF
  __int64 v506; // [rsp+4A0h] [rbp+3A0h]
  __int128 v507; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int128 v508; // [rsp+4B8h] [rbp+3B8h]
  __int128 v509; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int128 v510; // [rsp+4D8h] [rbp+3D8h] BYREF
  char v511[16]; // [rsp+4E8h] [rbp+3E8h] BYREF
  char v512[16]; // [rsp+4F8h] [rbp+3F8h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+4A8h]

  v3 = (unsigned int *)((char *)this + 3280);
  v4 = 0LL;
  v448 = a3;
  v452 = a2;
  v499 = 0LL;
  v506 = 0LL;
  v498 = 0LL;
  v442 = 0;
  v505 = 0LL;
  LODWORD(Size) = 0;
  v6 = this;
  v509 = 0LL;
  v7 = *((_QWORD *)this + 415);
  v8 = (struct CVisual *)*((_QWORD *)this + 416);
  v461 = 0;
  v476 = 0;
  v477 = 0;
  v470[1] = 0LL;
  v474 = 0x15773F800000LL;
  v460 = 0LL;
  v462 = 0LL;
  v463 = 1065353216LL;
  v464 = 0;
  v465 = 1.0;
  v470[0] = 0LL;
  v475 = 0LL;
  v471 = 0LL;
  v472 = 0LL;
  v473 = 0LL;
  v9 = *(_DWORD **)(v7 + 232);
  v450 = (unsigned __int64)this;
  *(_OWORD *)v503 = 0LL;
  v456 = v7;
  v10 = (*v9 & 0x20000) == 0;
  *(_OWORD *)v495 = 0LL;
  v458 = v8;
  if ( !v10 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(v7);
    v292 = *(_QWORD **)ProjectedShadowReceivers;
    v293 = *(_QWORD **)(ProjectedShadowReceivers + 8);
    v444 = v292;
    for ( *(_QWORD *)&v493 = v293; v292 != v293; v444 = v292 )
    {
      v294 = (_QWORD *)*v292;
      v459 = v294;
      v295 = (_QWORD *)v294[9];
      v296 = (_QWORD *)v294[10];
      v449 = v295;
      *(_QWORD *)v453 = v296;
      if ( v295 != v296 )
      {
        do
        {
          v297 = (CProjectedShadowScene *)*v295;
          *(_QWORD *)v447 = *v295;
          if ( !CCommonRegistryData::DisableProjectedShadows
            && !CProjectedShadowScene::IsEmptyProjection(v297)
            && !CProjectedShadowReceiver::IsEmptyMaskContent((CProjectedShadowReceiver *)v294) )
          {
            v298 = *(__int64 ****)(*(_QWORD *)v447 + 64LL);
            for ( i = *v298; i != (__int64 **)v298; i = (__int64 **)*i )
            {
              if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
              {
                v11 = 1;
                goto LABEL_3;
              }
            }
            v295 = v449;
            v294 = v459;
          }
          v449 = ++v295;
        }
        while ( v295 != *(_QWORD **)v453 );
        v292 = v444;
        v293 = (_QWORD *)v493;
      }
      ++v292;
    }
  }
  v11 = 0;
LABEL_3:
  v12 = v3[1];
  v13 = 64LL;
  v14 = 0LL;
  v444 = 0LL;
  v15 = 1LL;
  if ( *v3 == (_DWORD)v12 )
  {
    v258 = (void *)(2 * v12);
    v449 = v258;
    if ( (unsigned __int64)v258 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_7;
    }
    if ( (unsigned int)v258 <= 0x40 )
    {
      LODWORD(v258) = 64;
      v449 = (void *)64;
    }
    v259 = HrMalloc(1uLL, (unsigned int)v258, &v444);
    if ( v259 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v260, 0LL, 0, v259, 0x6Bu, 0LL);
      v14 = v444;
      goto LABEL_7;
    }
    v261 = v444;
    memcpy_0(v444, *((const void **)v3 + 2), *v3);
    operator delete(*((void **)v3 + 2));
    v262 = (unsigned int)v449;
    *((_QWORD *)v3 + 2) = v261;
    v14 = 0LL;
    v3[1] = v262;
  }
  *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = v11;
  v16 = v3[6];
  if ( v16 <= *v3 )
    v16 = *v3;
  v3[6] = v16;
LABEL_7:
  if ( v14 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v14);
  }
  if ( !*((_QWORD *)v6 + 25) )
    goto LABEL_10;
  v137 = (__int64 *)*((_QWORD *)v6 + 1010);
  v138 = *(struct _LIST_ENTRY **)(v137[1] - 8);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, struct CVisual *, __int64))v138->Flink[11].Blink)(
         v138,
         v13,
         v8,
         v15) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v7 + 336);
LABEL_238:
    if ( p_Blink )
    {
      v140 = p_Blink[21];
      v141 = p_Blink[22];
      while ( v140 != v141 )
      {
        v13 = *v137;
        v274 = v137[1] - *v137;
        *(_QWORD *)&v493 = v140->Flink;
        v15 = *(_QWORD *)(v493 + 1800);
        v8 = *(struct CVisual **)(v493 + 1792);
        if ( ((v274 ^ (v15 - (_QWORD)v8)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        {
          v8 = (struct CVisual *)((char *)v8 - v13);
          while ( (struct CVisual *)((char *)v8 + v13) != (struct CVisual *)v15 )
          {
            if ( *(_QWORD *)((char *)v8 + v13) != *(_QWORD *)v13
              || *(_QWORD *)((char *)v8 + v13 + 8) != *(_QWORD *)(v13 + 8) )
            {
              goto LABEL_586;
            }
            v13 += 16LL;
          }
          v13 = v493;
          *(_QWORD *)(v493 + 1984) = p_Blink[33][1].Flink[31].Flink;
          Flink = v140->Flink;
          goto LABEL_242;
        }
LABEL_586:
        v140 = (struct _LIST_ENTRY *)((char *)v140 + 8);
      }
    }
    goto LABEL_241;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
  if ( TreeDataListHead )
  {
    for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
    {
      p_Blink = &j[-23].Blink;
      if ( j[2].Flink == v138 )
        goto LABEL_238;
    }
  }
LABEL_241:
  Flink = 0LL;
LABEL_242:
  if ( Flink == *((struct _LIST_ENTRY **)v6 + 25) )
    *((_BYTE *)v6 + 193) = 1;
LABEL_10:
  if ( (*(_BYTE *)(v7 + 102) & 2) != 0 || (*(_DWORD *)(v7 + 96) & 0x100) == 0 )
  {
LABEL_156:
    v98 = *v3;
    if ( *v3 )
      *v3 = --v98;
    v99 = v3[1];
    v449 = 0LL;
    if ( v98 == (_DWORD)v99 )
    {
      v422 = 2 * v99;
      if ( (unsigned __int64)(2 * v99) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_162;
      }
      if ( v422 <= 0x40 )
        v422 = 64;
      v423 = HrMalloc(1uLL, v422, &v449);
      if ( v423 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v424, 0LL, 0, v423, 0x6Bu, 0LL);
        v4 = v449;
        goto LABEL_162;
      }
      v425 = v449;
      memcpy_0(v449, *((const void **)v3 + 2), *v3);
      operator delete(*((void **)v3 + 2));
      *((_QWORD *)v3 + 2) = v425;
      v3[1] = v422;
    }
    *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = 0;
    v100 = v3[6];
    if ( v100 <= *v3 )
      v100 = *v3;
    v3[6] = v100;
LABEL_162:
    if ( !v4 )
      goto LABEL_163;
LABEL_803:
    v426 = GetProcessHeap();
    HeapFree(v426, 0, v4);
    goto LABEL_163;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64, struct CVisual *, __int64))(*(_QWORD *)a2 + 184LL))(
         a2,
         v13,
         v8,
         v15) )
  {
    goto LABEL_13;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v214 = v7 + 336;
  }
  else
  {
    v207 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v207 >= 0 )
      goto LABEL_13;
    v208 = *(unsigned int *)(v207 + 4);
    v209 = (_BYTE *)(v207 + 8);
    for ( k = 0LL; (unsigned int)k < (unsigned int)v208; ++v209 )
    {
      if ( *v209 == 1 )
        break;
      k = (unsigned int)(k + 1);
    }
    v211 = (unsigned int)k >= (unsigned int)v208
         ? 0LL
         : (_QWORD **)(v208 + 15 + v207 + 8 * k - (((_BYTE)v208 + 15) & 7));
    v212 = *v211;
    if ( !v212 )
      goto LABEL_13;
    v213 = (_QWORD *)*v212;
    if ( (_QWORD *)*v212 == v212 )
      goto LABEL_13;
    while ( 1 )
    {
      v214 = (__int64)(v213 - 45);
      if ( (const struct CVisualTree *)v213[4] == a2 )
        break;
      v213 = (_QWORD *)*v213;
      if ( v213 == v212 )
        goto LABEL_13;
    }
  }
  if ( v214 && *(_QWORD *)(v214 + 256) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v214 + 264) + 16LL) + 496LL) )
    goto LABEL_156;
LABEL_13:
  if ( *((_BYTE *)v6 + 193) )
    goto LABEL_156;
  if ( (unsigned int)((__int64)(*(_QWORD *)(v7 + 288) - *(_QWORD *)(v7 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v7 + 312) - *(_QWORD *)(v7 + 304)) >> 4) )
  {
    v457[0] = 0;
    v264 = v457;
    v457[1] = 1;
    v449 = v457;
    do
    {
      v265 = *v264;
      v266 = 0;
      v447[0] = *v264;
      while ( v266 < (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v265) )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v268, v266, v267);
        v270 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                               + 240LL))(
                 LightAtNoRef,
                 a2,
                 v7) )
          {
            BitmapRealizationForEffectInput = CDrawingContext::PushLight((__int64)v6, v7, v270, v447[0]);
            v442 = BitmapRealizationForEffectInput;
            LODWORD(Size) = BitmapRealizationForEffectInput;
            if ( BitmapRealizationForEffectInput < 0 )
            {
              v436 = 5549;
              goto LABEL_590;
            }
          }
        }
        v265 = v447[0];
        ++v266;
      }
      v264 = (int *)((char *)v449 + 4);
      v449 = v264;
    }
    while ( v264 != (int *)&v458 );
  }
  v17 = *(void **)(*((_QWORD *)v6 + 100) + 8LL * (unsigned int)(*((_DWORD *)v6 + 206) - 1));
  v18 = *(_QWORD *)v7;
  v449 = v17;
  v19 = (*(__int64 (__fastcall **)(__int64))(v18 + 160))(v7);
  v20 = (_DWORD *)v19;
  if ( v19 && (void *)v19 != v17 )
  {
    v105 = *((unsigned int *)v6 + 93);
    v106 = 0LL;
    v107 = 0;
    v449 = v20;
    *(_DWORD *)v453 = 11;
    *(_QWORD *)&v453[8] = v7;
    v447[0] = 0;
    v444 = 0LL;
    if ( *((_DWORD *)v6 + 92) != (_DWORD)v105 )
    {
LABEL_176:
      *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * (unsigned int)(*((_DWORD *)v6 + 92))++) = *(_OWORD *)v453;
      v108 = *((_DWORD *)v6 + 92);
      v109 = *((_DWORD *)v6 + 98);
      if ( v109 <= v108 )
        v109 = *((_DWORD *)v6 + 92);
      *((_DWORD *)v6 + 98) = v109;
LABEL_179:
      if ( v106 )
      {
        v341 = GetProcessHeap();
        HeapFree(v341, 0, v106);
        v107 = v447[0];
      }
      if ( v107 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v107, retaddr);
      v484 = v20;
      v110 = *((_DWORD *)v6 + 206);
      v111 = v110 + 1;
      if ( v110 + 1 < v110 )
      {
        v273 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v111 <= *((_DWORD *)v6 + 205) )
        {
          *(_QWORD *)(*((_QWORD *)v6 + 100) + 8LL * v110) = v20;
          *((_DWORD *)v6 + 206) = v111;
LABEL_185:
          if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == v20[32] )
            CDrawingContext::SetHeatMapForCurrentNode(v6);
          goto LABEL_18;
        }
        v271 = DynArrayImpl<0>::AddMultipleAndSet((char *)v6 + 800, 8LL, 1LL, &v484);
        v273 = v271;
        if ( v271 >= 0 )
          goto LABEL_185;
        MilInstrumentationCheckHR_MaybeFailFast(v272, 0LL, 0, v271, 0xC0u, 0LL);
      }
      ModuleFailFastForHRESULT(v273, retaddr);
    }
    v334 = 2 * v105;
    if ( v334 > 0xFFFFFFFF )
    {
      v447[0] = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
      v107 = v447[0];
      goto LABEL_179;
    }
    if ( (unsigned int)v334 <= 0x40 )
      v334 = 64LL;
    *(_QWORD *)&v493 = v334;
    v335 = HrMalloc(0x10uLL, (unsigned int)v334, &v444);
    v447[0] = v335;
    if ( v335 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v336, 0LL, 0, v335, 0x6Bu, 0LL);
    }
    else
    {
      v337 = 16LL * *((unsigned int *)v6 + 92);
      if ( v337 <= 0xFFFFFFFF )
      {
        v338 = v444;
        v339 = (const void *)*((_QWORD *)v6 + 48);
        v447[0] = 0;
        memcpy_0(v444, v339, (unsigned int)v337);
        operator delete(*((void **)v6 + 48));
        v340 = v493;
        v107 = 0;
        *((_QWORD *)v6 + 48) = v338;
        v106 = 0LL;
        *((_DWORD *)v6 + 93) = v340;
        goto LABEL_176;
      }
      v447[0] = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v337, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v107 = v447[0];
    v106 = v444;
    goto LABEL_179;
  }
LABEL_18:
  *v448 = 1;
  if ( (*(_BYTE *)(v7 + 101) & 0x18) != 0 )
  {
    CVisual::GetHeatMapProperties(v7, &v493);
    v342 = (*(_BYTE *)(v7 + 101) & 8) != 0;
    *(_OWORD *)&v453[4] = v493;
    *(_DWORD *)v453 = 2 - v342;
    *(_DWORD *)&v453[20] = v494;
    BitmapRealizationForEffectInput = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(
                                        (char *)g_pComposition + 1112,
                                        v453);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v436 = 5590;
      goto LABEL_590;
    }
  }
  v21 = *(_DWORD *)(v7 + 104);
  if ( (_BYTE)v21 )
  {
    v480[0] = (unsigned __int8)v21;
    v480[4] = (v21 >> 8) & 3;
    v480[3] = (v21 >> 14) & 0x1F;
    v480[1] = (int)(v21 << 18) >> 28;
    v480[2] = *(_DWORD *)(v7 + 196);
    if ( *((_DWORD *)g_pComposition + 278)
      && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112) == 2 )
    {
      v481 = 0;
    }
    else
    {
      v481 = *(_DWORD *)(v7 + 200);
    }
    v482 = *(_DWORD *)(v7 + 204);
    v483 = *(_DWORD *)(v7 + 208);
    BitmapRealizationForEffectInput = CDrawingContext::PushRenderOptionsInternal(
                                        v6,
                                        (const struct CVisual *)v7,
                                        (const struct MilRenderOptions *)v480,
                                        1);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v436 = 5606;
      goto LABEL_590;
    }
  }
  v497 = 0LL;
  v22 = *((_DWORD *)v6 + 100);
  if ( v22 )
    v23 = (CMILMatrix *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v22 - 1));
  else
    v23 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v23);
  if ( *((float *)&v498 + 2) > *(float *)&v498 && *((float *)&v498 + 3) > *((float *)&v498 + 1) )
  {
    v24 = *(_DWORD *)(v7 + 96);
    if ( (v24 & 0x200) != 0 )
    {
      v25 = FLOAT_4_0;
    }
    else if ( (v24 & 0x800) != 0 )
    {
      v25 = FLOAT_0_5;
    }
    else
    {
      v25 = 0.0;
    }
    if ( (v24 & 0x1000) != 0 )
      v25 = v25 + 0.5;
    if ( v25 != 0.0 )
    {
      *((float *)&v498 + 3) = *((float *)&v498 + 3) + v25;
      *(float *)&v498 = *(float *)&v498 - v25;
      *((float *)&v498 + 1) = *((float *)&v498 + 1) - v25;
      *((float *)&v498 + 2) = *((float *)&v498 + 2) + v25;
      *(float *)&v499 = *(float *)&v499 + 0.0;
      *((float *)&v499 + 1) = *((float *)&v499 + 1) + 0.0;
    }
  }
  v26 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)v6 + 4)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL) + 16LL));
  (**v26)(v26, v478);
  v27 = (char *)v6 + 896;
  v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v29 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *(_QWORD *)&v508 = 0LL;
  v31 = *((_QWORD *)v6 + 113);
  *((float *)&v508 + 2) = (float)v478[0];
  *((float *)&v508 + 3) = (float)v478[1];
  v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v33 = v31 - *((_QWORD *)v6 + 112);
  if ( v33 && *(_QWORD *)(v31 - 184) )
  {
    v34 = *((_DWORD *)v6 + 796);
    if ( v34 )
    {
      v27 = (char *)v6 + 896;
      v35 = *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(v34 - 1));
      v497 = v35;
    }
    else
    {
      v497 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      LODWORD(v35) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
  }
  else
  {
    v497 = v508;
    LODWORD(v35) = v508;
    if ( !v33 )
      goto LABEL_36;
  }
  if ( *(_QWORD *)(v31 - 168) )
  {
    v500 = 0LL;
    v112 = *((_DWORD *)v27 + 580);
    if ( v112 )
    {
      v500 = *(__m128 *)(*((_QWORD *)v6 + 404) + 16LL * (unsigned int)(v112 - 1));
      v30 = v500.m128_f32[0];
      v29 = v500.m128_f32[1];
      v32 = v500.m128_f32[2];
      LODWORD(v28) = _mm_shuffle_ps(v500, v500, 255).m128_u32[0];
    }
    else
    {
      v500 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v30 > *(float *)&v35 )
    {
      *(float *)&v497 = v30;
      *(float *)&v35 = v30;
    }
    v113 = *((float *)&v497 + 1);
    if ( v29 > *((float *)&v497 + 1) )
    {
      *((float *)&v497 + 1) = v29;
      v113 = v29;
    }
    v114 = *((float *)&v497 + 2);
    if ( *((float *)&v497 + 2) > v32 )
    {
      *((float *)&v497 + 2) = v32;
      v114 = v32;
    }
    v115 = *((float *)&v497 + 3);
    if ( *((float *)&v497 + 3) > v28 )
    {
      *((float *)&v497 + 3) = v28;
      v115 = v28;
    }
    if ( v114 <= *(float *)&v35 || v115 <= v113 )
    {
      LODWORD(v35) = 0;
      v497 = 0uLL;
    }
  }
LABEL_36:
  *(_QWORD *)((char *)&v493 + 4) = *(_QWORD *)((char *)&v497 + 4);
  v494 = v499;
  LODWORD(v493) = v35;
  HIDWORD(v493) = HIDWORD(v497);
  TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v498,
    &v493);
  LODWORD(v36) = v498;
  v37 = *((float *)&v498 + 2);
  v38 = *((float *)&v498 + 1);
  v39 = *((float *)&v498 + 3);
  *(_OWORD *)v503 = v498;
  if ( *((float *)&v498 + 2) <= *(float *)&v498 || *((float *)&v498 + 3) <= *((float *)&v498 + 1) )
  {
    v116 = *v3;
    if ( *v3 )
      *v3 = --v116;
    v117 = v3[1];
    v449 = 0LL;
    if ( v116 == (_DWORD)v117 )
    {
      v418 = 2 * v117;
      if ( (unsigned __int64)(2 * v117) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v117, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_212;
      }
      if ( v418 <= 0x40 )
        v418 = 64;
      v419 = HrMalloc(1uLL, v418, &v449);
      if ( v419 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v420, 0LL, 0, v419, 0x6Bu, 0LL);
        v4 = v449;
        goto LABEL_212;
      }
      v421 = v449;
      memcpy_0(v449, *((const void **)v3 + 2), *v3);
      operator delete(*((void **)v3 + 2));
      *((_QWORD *)v3 + 2) = v421;
      v3[1] = v418;
    }
    *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = 0;
    v118 = v3[6];
    if ( v118 <= *v3 )
      v118 = *v3;
    v3[6] = v118;
LABEL_212:
    if ( !v4 )
      goto LABEL_163;
    goto LABEL_803;
  }
  *(_QWORD *)v453 = *((_QWORD *)v6 + 1009);
  if ( !*(_QWORD *)v453 )
  {
LABEL_55:
    v42 = v452;
    goto LABEL_56;
  }
  v40 = *((_QWORD *)v6 + 25);
  if ( v40 )
    v41 = (_QWORD *)(v40 + 1888);
  else
    v41 = &CBackdropVisualImageKey::sc_NoBVIKey;
  v42 = v452;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v452 + 184LL))(v452) )
  {
    v43 = (_QWORD *)(v7 + 336);
LABEL_43:
    if ( !v43 )
      goto LABEL_56;
    v44 = 0LL;
    v45 = (__int64 *)v43[25];
    v46 = (__int64 *)v43[26];
    *(_QWORD *)&v493 = v43 + 25;
    while ( v45 != v46 )
    {
      v47 = *v45;
      if ( *(_QWORD *)(*v45 + 8) == *v41 && *(_QWORD *)(v47 + 16) == v41[1] )
      {
        v44 = *v45;
        if ( v47 )
          *(_BYTE *)(v47 + 25) = 10;
        break;
      }
      ++v45;
    }
    v48 = *(_QWORD *)(*(_QWORD *)(v43[33] + 16LL) + 496LL);
    if ( v43[30] != v48 )
    {
      v276 = (__int64 *)v493;
      v43[30] = v48;
      v277 = (_QWORD *)*v276;
      while ( v277 != (_QWORD *)v43[26] )
      {
        if ( (unsigned __int8)CBackdropVisualImageKey::operator==(*v277 + 8LL, &CBackdropVisualImageKey::sc_NoBVIKey)
          || (v10 = *(_BYTE *)(v278 + 25) == 1, --*(_BYTE *)(v278 + 25), !v10) )
        {
          ++v277;
        }
        else
        {
          v286 = ((__int64)v277 - *v276) >> 3;
          detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
            v276,
            v286,
            1LL);
          v277 = (_QWORD *)(*v276 + 8 * v286);
        }
      }
      v7 = v456;
      v6 = (CDrawingContext *)v450;
    }
    if ( v44 )
    {
      if ( v37 <= v36
        || v39 <= v38
        || (v49 = *(unsigned int *)(v44 + 28),
            *(_QWORD *)&v493 = __PAIR64__(LODWORD(v38), LODWORD(v36)),
            *((_QWORD *)&v493 + 1) = __PAIR64__(LODWORD(v39), LODWORD(v37)),
            (unsigned __int8)CArrayBasedCoverageSet::IsCovered(*(_QWORD *)v453 + 448LL, &v493, v49)) )
      {
        if ( *v3 )
          --*v3;
        v443[0] = 0;
        CWatermarkStack<bool,64,2,10>::Push(v3, v443);
        v94 = v448;
        *v448 = 0;
        goto LABEL_147;
      }
    }
    goto LABEL_55;
  }
  v228 = *(_QWORD *)(v7 + 232);
  if ( *(int *)v228 < 0 )
  {
    v229 = *(unsigned int *)(v228 + 4);
    v230 = (_BYTE *)(v228 + 8);
    for ( m = 0LL; (unsigned int)m < (unsigned int)v229; ++v230 )
    {
      if ( *v230 == 1 )
        break;
      m = (unsigned int)(m + 1);
    }
    v232 = (unsigned int)m >= (unsigned int)v229
         ? 0LL
         : (_QWORD **)(v229 + 15 + v228 + 8 * m - (((_BYTE)v229 + 15) & 7));
    v233 = *v232;
    if ( v233 )
    {
      for ( n = (_QWORD *)*v233; n != v233; n = (_QWORD *)*n )
      {
        v43 = n - 45;
        if ( (struct CVisualTree *)n[4] == v42 )
          goto LABEL_43;
      }
    }
  }
LABEL_56:
  *(_QWORD *)v453 = *((_QWORD *)v6 + 1009);
  if ( !*(_QWORD *)v453 )
    goto LABEL_71;
  v50 = *((_QWORD *)v6 + 25);
  if ( v50 )
    v51 = (_QWORD *)(v50 + 1888);
  else
    v51 = &CBackdropVisualImageKey::sc_NoBVIKey;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v42 + 184LL))(v42) )
  {
    v52 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v235 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v235 >= 0 )
      goto LABEL_71;
    v236 = *(unsigned int *)(v235 + 4);
    v237 = (_BYTE *)(v235 + 8);
    for ( ii = 0LL; (unsigned int)ii < (unsigned int)v236; ++v237 )
    {
      if ( *v237 == 1 )
        break;
      ii = (unsigned int)(ii + 1);
    }
    v239 = (unsigned int)ii >= (unsigned int)v236
         ? 0LL
         : (_QWORD **)(v236 + 15 + v235 + 8 * ii - (((_BYTE)v236 + 15) & 7));
    v240 = *v239;
    if ( !v240 )
      goto LABEL_71;
    v241 = (_QWORD *)*v240;
    if ( (_QWORD *)*v240 == v240 )
      goto LABEL_71;
    while ( 1 )
    {
      v52 = v241 - 45;
      if ( (struct CVisualTree *)v241[4] == v42 )
        break;
      v241 = (_QWORD *)*v241;
      if ( v241 == v240 )
        goto LABEL_71;
    }
  }
  if ( v52 )
  {
    v53 = 0LL;
    v54 = v52[25];
    v55 = v52[26];
    *(_QWORD *)&v493 = v52 + 25;
    while ( v54 != v55 )
    {
      v56 = *(_DWORD **)v54;
      if ( *(_QWORD *)(*(_QWORD *)v54 + 8LL) == *v51 && *((_QWORD *)v56 + 2) == v51[1] )
      {
        v53 = *(_DWORD **)v54;
        if ( v56 )
          *((_BYTE *)v56 + 25) = 10;
        break;
      }
      v54 += 8LL;
    }
    v57 = *(_QWORD *)(*(_QWORD *)(v52[33] + 16LL) + 496LL);
    if ( v52[30] != v57 )
    {
      v343 = (__int64 *)v493;
      v52[30] = v57;
      v344 = (_QWORD *)*v343;
      while ( v344 != (_QWORD *)v52[26] )
      {
        if ( (unsigned __int8)CBackdropVisualImageKey::operator==(*v344 + 8LL, &CBackdropVisualImageKey::sc_NoBVIKey)
          || (v10 = *(_BYTE *)(v345 + 25) == 1, --*(_BYTE *)(v345 + 25), !v10) )
        {
          ++v344;
        }
        else
        {
          v346 = ((__int64)v344 - *v343) >> 3;
          detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
            v343,
            v346,
            1LL);
          v344 = (_QWORD *)(*v343 + 8 * v346);
        }
      }
      v7 = v456;
      v6 = (CDrawingContext *)v450;
    }
    if ( v53 )
    {
      v58 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v53 + 16LL))(v53);
      v59 = *(_QWORD *)v453;
      *((_DWORD *)v6 + 2022) = v58;
      v60 = *(_DWORD *)(v59 + 1200);
      if ( v58 >= v60 )
      {
        if ( v53[7] < v60 )
          goto LABEL_146;
        CWatermarkStack<bool,64,2,10>::Pop(v3);
        v443[0] = 0;
        CWatermarkStack<bool,64,2,10>::Push(v347, v443);
        v94 = v448;
        *v448 = 0;
        goto LABEL_147;
      }
    }
  }
LABEL_71:
  v61 = v452;
  CDrawingContext::GetEffects(
    v6,
    (struct CVisual **)v452,
    (struct CVisual *)v7,
    (struct CDrawingContext::NodeEffects *)&v460);
  if ( COERCE_FLOAT(v463 & _xmm) < 0.0000011920929 || COERCE_FLOAT(LODWORD(v465) & _xmm) < 0.0000011920929 )
    goto LABEL_163;
  v62 = *(CGeometry **)(v7 + 248);
  if ( v62 )
  {
    v510 = 0LL;
    if ( v461 && *((_QWORD *)&v460 + 1) )
      (***((void (__fastcall ****)(_QWORD, __int64))&v460 + 1))(*((_QWORD *)&v460 + 1), 1LL);
    *((_QWORD *)&v460 + 1) = 0LL;
    v461 = 0;
    v454 = 0LL;
    v455 = 0;
    ShapeData = CGeometry::GetShapeData(v62, (const struct D2D_SIZE_F *)(v7 + 140), (struct CShapePtr *)&v454);
    v442 = ShapeData;
    v131 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, ShapeData, 0x952u, 0LL);
LABEL_548:
      v136 = v454;
      if ( v131 == -2003304438 )
      {
        v131 = 0;
        v442 = 0;
      }
LABEL_550:
      if ( v455 && v136 )
        (**v136)(v136, 1LL);
      v454 = 0LL;
      v455 = 0;
      LODWORD(Size) = v131;
      if ( v131 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v136, 0LL, 0, v131, 0x163Bu, 0LL);
        goto LABEL_146;
      }
      goto LABEL_74;
    }
    v132 = v454;
    v133 = -2003292412;
    if ( v454 )
    {
      v134 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v454)[6])(
               v454,
               &v510,
               0LL);
      v442 = v134;
      v133 = v134;
      v131 = v134;
      if ( v134 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v134, 0x140u, 0LL);
LABEL_628:
        MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v133, 0x953u, 0LL);
        goto LABEL_548;
      }
      v132 = v454;
    }
    v442 = v133;
    v131 = v133;
    if ( v133 >= 0 )
    {
      v135 = v455;
      if ( v461 && *((_QWORD *)&v460 + 1) )
        (***((void (__fastcall ****)(_QWORD, __int64))&v460 + 1))(*((_QWORD *)&v460 + 1), 1LL);
      v136 = 0LL;
      *((_QWORD *)&v460 + 1) = v132;
      v454 = 0LL;
      v455 = 0;
      v461 = v135;
      goto LABEL_550;
    }
    goto LABEL_628;
  }
LABEL_74:
  v63 = (char *)v470 + 4;
  if ( !*((_QWORD *)&v460 + 1) )
    v63 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
  {
    v65 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v215 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v215 >= 0 )
      goto LABEL_640;
    v216 = *(unsigned int *)(v215 + 4);
    v217 = (_BYTE *)(v215 + 8);
    for ( jj = 0LL; (unsigned int)jj < (unsigned int)v216; ++v217 )
    {
      if ( *v217 == 1 )
        break;
      jj = (unsigned int)(jj + 1);
    }
    v219 = (unsigned int)jj >= (unsigned int)v216
         ? 0LL
         : (_QWORD **)(v216 + 15 + v215 + 8 * jj - (((_BYTE)v216 + 15) & 7));
    v64 = *v219;
    if ( !v64 )
      goto LABEL_640;
    v220 = (_QWORD *)*v64;
    if ( (_QWORD *)*v64 == v64 )
      goto LABEL_640;
    while ( 1 )
    {
      v65 = v220 - 45;
      if ( (struct CVisualTree *)v220[4] == v61 )
        break;
      v220 = (_QWORD *)*v220;
      if ( v220 == v64 )
        goto LABEL_640;
    }
  }
  if ( v65 )
  {
    TreeData = 0LL;
    v439 = 0;
    if ( v7 == *((_QWORD *)v61 + 8) )
      goto LABEL_335;
    v67 = *(_DWORD **)(v7 + 232);
    if ( (*v67 & 0x1000000) != 0 )
    {
      v279 = (unsigned int)v67[1];
      v280 = v67 + 2;
      for ( kk = 0; kk < (unsigned int)v279; ++v280 )
      {
        if ( *v280 == 8 )
          break;
        ++kk;
      }
      if ( kk >= (unsigned int)v279 )
        v282 = 0LL;
      else
        v282 = (_QWORD **)((char *)v67 + v279 + 8LL * kk - (((_BYTE)v279 + 15) & 7) + 15);
      v283 = *v282;
      if ( v283 )
        TreeData = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v283 + 184LL))(*v283);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
    {
      v68 = (unsigned int *)(v7 + 336);
      v69 = (unsigned int *)v61;
    }
    else
    {
      v69 = *(unsigned int **)(v7 + 232);
      if ( (*v69 & 0x80000000) == 0 )
        goto LABEL_86;
      v242 = v69[1];
      v68 = v69 + 2;
      for ( mm = 0LL; (unsigned int)mm < (unsigned int)v242; v68 = (unsigned int *)((char *)v68 + 1) )
      {
        if ( *(_BYTE *)v68 == 1 )
          break;
        mm = (unsigned int)(mm + 1);
      }
      if ( (unsigned int)mm >= (unsigned int)v242 )
      {
        v244 = 0LL;
      }
      else
      {
        v68 = (unsigned int *)(v242 + 15);
        v244 = (_QWORD **)((char *)v69 + 8 * mm - (((_BYTE)v242 + 15) & 7) + v242 + 15);
      }
      v245 = *v244;
      if ( !v245 )
        goto LABEL_86;
      v246 = (_QWORD *)*v245;
      if ( (_QWORD *)*v245 == v245 )
        goto LABEL_86;
      v69 = (unsigned int *)v61;
      while ( 1 )
      {
        v68 = (unsigned int *)(v246 - 45);
        if ( (struct CVisualTree *)v246[4] == v61 )
          break;
        v246 = (_QWORD *)*v246;
        if ( v246 == v245 )
          goto LABEL_86;
      }
    }
    if ( v68 && *((_QWORD *)v68 + 32) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 33) + 16LL) + 496LL) && TreeData )
    {
      TreeData = CVisual::FindTreeData(TreeData, (const struct CVisualTree *)v69);
      v439 = 1;
      goto LABEL_88;
    }
LABEL_86:
    TreeData = 0LL;
    v70 = *(_QWORD *)(v7 + 88);
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, unsigned int *, unsigned int *))(*(_QWORD *)v452
                                                                                                 + 184LL))(
           v452,
           v68,
           v69) )
    {
      TreeData = (struct CTreeData *)(v70 + 336);
    }
    else
    {
      v247 = *(_QWORD *)(v70 + 232);
      if ( *(int *)v247 < 0 )
      {
        v248 = *(unsigned int *)(v247 + 4);
        v249 = (_BYTE *)(v247 + 8);
        for ( nn = 0; nn < (unsigned int)v248; ++v249 )
        {
          if ( *v249 == 1 )
            break;
          ++nn;
        }
        v251 = nn >= (unsigned int)v248 ? 0LL : (_QWORD **)(v248 + 15 + v247 + 8LL * nn - (((_BYTE)v248 + 15) & 7));
        v252 = *v251;
        if ( v252 )
        {
          v253 = (_QWORD *)*v252;
          if ( (_QWORD *)*v252 != v252 )
          {
            while ( (struct CVisualTree *)v253[4] != v452 )
            {
              v253 = (_QWORD *)*v253;
              if ( v253 == v252 )
                goto LABEL_88;
            }
            TreeData = (struct CTreeData *)(v253 - 45);
          }
        }
      }
    }
LABEL_88:
    if ( TreeData )
    {
      v71 = *((_QWORD *)TreeData + 31);
      goto LABEL_90;
    }
LABEL_335:
    v71 = 0LL;
    if ( g_pComposition )
      v71 = *((_QWORD *)g_pComposition + 62);
LABEL_90:
    v61 = v452;
    if ( v65[31] < v71 )
    {
      v488[16] = 0.0;
      v490 = 0;
      v143 = (struct CTreeData *)((char *)TreeData + 288);
      if ( !TreeData )
        v143 = 0LL;
      v144 = (struct CMILMatrix *)v489;
      v10 = *(_QWORD *)(v7 + 248) == 0LL;
      *(_QWORD *)&v493 = v143;
      if ( v10 )
        v144 = 0LL;
      CVisual::CalcTransform((CVisual *)v7, v452, v143, (bool *)v443, (struct CMILMatrix *)v488, v144);
      if ( v439 || !(_QWORD)v493 )
      {
        LOBYTE(v145) = 1;
      }
      else if ( v443[0] )
      {
        IsEqual = CMILMatrix::IsEqualTo<0>((float *)v493, v488);
        v145 = IsEqual;
        LOBYTE(v145) = !IsEqual;
      }
      else
      {
        LOBYTE(v145) = 0;
      }
      v146 = v489;
      if ( !*(_QWORD *)(v7 + 248) )
        v146 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, float *, _BOOL8, _BYTE *))(*v65 + 48LL))(v65, v488, v145, v146)
        && CVisual::GetInteractionInternal((CVisual *)v7) )
      {
        CVisual::NotifyMidManipulationPropertyChange((CVisual *)v7, (const struct CMILMatrix *)v488);
      }
    }
    if ( !v65[31] )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    v466 = *((_OWORD *)v65 + 18);
    v467 = *((_OWORD *)v65 + 19);
    v468 = *((_OWORD *)v65 + 20);
    v469 = *((_OWORD *)v65 + 21);
    LODWORD(v470[0]) = *((_DWORD *)v65 + 88);
    v72 = *((_BYTE *)v65 + 11);
    if ( v63 )
    {
      v127 = v65[34];
      if ( v127 )
      {
        *(_OWORD *)v63 = *(_OWORD *)v127;
        *((_OWORD *)v63 + 1) = *(_OWORD *)(v127 + 16);
        *((_OWORD *)v63 + 2) = *(_OWORD *)(v127 + 32);
        *((_OWORD *)v63 + 3) = *(_OWORD *)(v127 + 48);
        v128 = *(_DWORD *)(v127 + 64);
      }
      else
      {
        *(_OWORD *)v63 = *((_OWORD *)v65 + 18);
        *((_OWORD *)v63 + 1) = *((_OWORD *)v65 + 19);
        *((_OWORD *)v63 + 2) = *((_OWORD *)v65 + 20);
        *((_OWORD *)v63 + 3) = *((_OWORD *)v65 + 21);
        v128 = *((_DWORD *)v65 + 88);
      }
      *((_DWORD *)v63 + 16) = v128;
    }
    if ( v72 )
      goto LABEL_200;
    goto LABEL_94;
  }
LABEL_640:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2003292412, 0x6ADu, 0LL);
LABEL_94:
  if ( v7 != *((_QWORD *)v6 + 1008) )
  {
    v73 = (char *)v6 + 8168;
    if ( !*((_BYTE *)v6 + 8168) )
    {
      v204 = *((_DWORD *)v6 + 100);
      if ( v204 )
      {
        v205 = (unsigned int)(v204 - 1);
        v206 = *((_QWORD *)v6 + 52);
        v466 = *(_OWORD *)(68 * v205 + v206);
        v467 = *(_OWORD *)(68 * v205 + v206 + 16);
        v468 = *(_OWORD *)(68 * v205 + v206 + 32);
        v469 = *(_OWORD *)(68 * v205 + v206 + 48);
        LODWORD(v470[0]) = *(_DWORD *)(68 * v205 + v206 + 64);
      }
      else
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)&v466);
      }
    }
    goto LABEL_96;
  }
LABEL_200:
  v73 = (char *)v6 + 8168;
  if ( !*((_BYTE *)v6 + 8168) )
    CMILMatrix::Multiply((CMILMatrix *)&v466, (CDrawingContext *)((char *)v6 + 96));
  BitmapRealizationForEffectInput = CDrawingContext::PushTransformInternal(
                                      v6,
                                      (const struct CVisual *)v7,
                                      (const struct CMILMatrix *)&v466,
                                      0,
                                      1);
  v442 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v436 = 5714;
    goto LABEL_590;
  }
LABEL_96:
  if ( *((_QWORD *)&v460 + 1) && !*v73 )
    CMILMatrix::Multiply((CMILMatrix *)((char *)v470 + 4), (CDrawingContext *)((char *)v6 + 96));
  v74 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
  {
    v74 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v221 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v221 < 0 )
    {
      v222 = *(unsigned int *)(v221 + 4);
      v223 = (_BYTE *)(v221 + 8);
      for ( i1 = 0LL; (unsigned int)i1 < (unsigned int)v222; ++v223 )
      {
        if ( *v223 == 1 )
          break;
        i1 = (unsigned int)(i1 + 1);
      }
      v225 = (unsigned int)i1 >= (unsigned int)v222
           ? 0LL
           : (_QWORD **)(v222 + 15 + v221 + 8 * i1 - (((_BYTE)v222 + 15) & 7));
      v226 = *v225;
      if ( v226 )
      {
        v227 = (_QWORD *)*v226;
        if ( (_QWORD *)*v226 != v226 )
        {
          while ( (struct CVisualTree *)v227[4] != v61 )
          {
            v227 = (_QWORD *)*v227;
            if ( v227 == v226 )
              goto LABEL_99;
          }
          v74 = v227 - 45;
        }
      }
    }
  }
LABEL_99:
  v75 = (__int64)(v74 + 11);
  BitmapRealizationForEffectInput = CCpuClippingData::Update(
                                      v75,
                                      v61,
                                      v7,
                                      (CDrawingContext *)((char *)v6 + 896),
                                      *((struct CShape **)&v460 + 1),
                                      (struct CMILMatrix *)((char *)v470 + 4),
                                      *((_QWORD *)v6 + 27),
                                      (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)v6 + 84) != 0),
                                      v475);
  v442 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v436 = 5743;
    goto LABEL_590;
  }
  if ( *(_QWORD *)(v75 + 64) )
  {
    LOBYTE(v476) = 1;
    v462 = v75;
  }
  v79 = (unsigned int *)*(unsigned __int8 *)(v75 + 72);
  v80 = *(unsigned int *)(v75 + 32);
  if ( (_BYTE)v79 )
    goto LABEL_105;
  if ( (int)v80 <= 2
    || *((_QWORD *)&v460 + 1)
    || ((v172 = *((_DWORD *)v6 + 100)) == 0
      ? (v173 = &CMILMatrix::Identity)
      : (v173 = (void *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v172 - 1))),
        !(unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(v6, v7 + 172, v173)) )
  {
    LOBYTE(v79) = 0;
LABEL_105:
    if ( (_DWORD)v80 != 2 && !(_BYTE)v79 )
      goto LABEL_107;
    goto LABEL_296;
  }
  LOBYTE(v79) = 1;
LABEL_296:
  v502 = 0LL;
  LOBYTE(v78) = *((_QWORD *)&v460 + 1) != 0LL;
  v174 = (char *)&v466;
  if ( *((_QWORD *)&v460 + 1) )
    v174 = (char *)v470 + 4;
  v459 = v174;
  if ( (_BYTE)v79 )
    goto LABEL_303;
  v175 = *((_QWORD *)v6 + 113);
  v176 = *((_QWORD *)v6 + 345);
  v177 = 0;
  v178 = 0;
  v179 = *((_QWORD *)v6 + 346) - v176;
  v447[0] = 0;
  v180 = -858993459 * (unsigned int)(v179 >> 3) - *(_DWORD *)(v175 - 176);
  v444 = (void *)v180;
  if ( !*(_QWORD *)(v175 - 160) )
  {
LABEL_300:
    v442 = v177;
    if ( v177 < 0 )
      goto LABEL_521;
    if ( *((_BYTE *)v6 + 8170) )
      *(_WORD *)((char *)v6 + 8169) = 1;
LABEL_303:
    v181 = (char **)((char *)v6 + 896);
    v182 = *((_QWORD *)v6 + 113);
    v183 = v182 - *((_QWORD *)v6 + 112);
    if ( v183 && *(_QWORD *)(v182 - 184) && (LODWORD(v78) = *((_DWORD *)v6 + 796), (_DWORD)v78) )
    {
      v184 = (unsigned int)((_DWORD)v78 - 1);
      v78 = (CD2DLayer *)*((_QWORD *)v6 + 400);
      v185 = *((_OWORD *)v78 + v184);
    }
    else
    {
      v185 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v502 = v185;
    if ( !(_BYTE)v79 && v183 && *(_QWORD *)(v182 - 168) )
    {
      v493 = 0LL;
      CBaseClipStack::Top((char *)v6 + 3216, &v493);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v502, &v493);
    }
    *(_DWORD *)v453 = 4;
    v158 = (unsigned __int64)v6 + 368;
    Size = 0LL;
    v444 = 0LL;
    v186 = 0;
    v187 = *((unsigned int *)v6 + 93);
    *(_QWORD *)&v453[8] = v7;
    if ( *((_DWORD *)v6 + 92) != (_DWORD)v187 )
      goto LABEL_312;
    v352 = 2 * v187;
    if ( v352 > 0xFFFFFFFF )
    {
      v186 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, -2147024362, 0x64u, 0LL);
      v181 = (char **)((char *)v6 + 896);
LABEL_315:
      v190 = 0LL;
LABEL_316:
      if ( v190 )
      {
        v358 = GetProcessHeap();
        HeapFree(v358, 0, (LPVOID)Size);
        v181 = (char **)((char *)v6 + 896);
      }
      v442 = v186;
      if ( v186 >= 0 )
      {
        v191 = v181[2];
        v192 = *v181;
        v161 = 0xD37A6F4DE9BD37A7uLL * ((v181[1] - *v181) >> 3);
        v193 = 0xD37A6F4DE9BD37A7uLL * ((v191 - v181[1]) >> 3);
        v450 = v161;
        if ( !v193 )
        {
          if ( v161 + 1 < v161 )
            goto LABEL_721;
          v359 = detail::liberal_expansion_policy::expand(0LL, 0xD37A6F4DE9BD37A7uLL * ((v191 - v192) >> 3), v161 + 1);
          v360 = operator new(saturated_mul(v359, 0xB8uLL));
          v361 = *((_QWORD *)v6 + 113);
          v362 = *((_QWORD *)v6 + 112);
          v363 = v360;
          *(_QWORD *)&v493 = v360;
          *((_QWORD *)&v493 + 1) = v450;
          v494 = 0LL;
          std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
            v453,
            v362,
            v361,
            &v493);
          detail::destruct_range<CScopedClipStack::ClippingScopeState>(*((CScopedClipStack::ClippingScopeState **)v6
                                                                       + 112));
          v364 = (char *)*((_QWORD *)v6 + 112);
          *((_QWORD *)v6 + 112) = v363;
          if ( v364 == (char *)v6 + 920 )
            v364 = 0LL;
          operator delete(v364);
          v161 = v450;
          v181 = (char **)((char *)v6 + 896);
          *((_QWORD *)v6 + 113) = *((_QWORD *)v6 + 112) + 184 * v450;
          v365 = 184 * v359;
          v158 = (unsigned __int64)v6 + 368;
          *((_QWORD *)v6 + 114) = *((_QWORD *)v6 + 112) + v365;
        }
        v194 = *v181;
        v195 = v181[1];
        v444 = v194;
        v196 = 0xD37A6F4DE9BD37A7uLL * ((v195 - v194) >> 3);
        v197 = v196 - v161;
        v198 = (unsigned __int64)&v194[8 * ((v195 - v194) >> 3)];
        *(_QWORD *)v447 = v198;
        if ( !v198 )
          goto LABEL_785;
        v199 = 1LL;
        if ( v197 <= 1 )
          v199 = v196 - v161;
        if ( v195 == &v195[-184 * v199] )
        {
          *(_QWORD *)v447 = &v194[8 * ((v195 - v194) >> 3)];
LABEL_325:
          if ( v197 > 1 )
          {
            if ( v196 && (!v194 || v196 < 0) )
              goto LABEL_785;
            *(_QWORD *)&v453[8] = v196;
            *(_QWORD *)&v453[16] = v196;
            *(_QWORD *)&v493 = 184 * v161;
            *(_QWORD *)v453 = v194;
            std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
              v480,
              &v194[184 * v161],
              &v194[184 * v196 - 184],
              v453);
            v198 = *(_QWORD *)v447;
            v194 = (char *)v444;
            v200 = v493;
          }
          else
          {
            v200 = 184 * v161;
          }
          if ( v198 >= (unsigned __int64)&v194[184 * v161 + 184] )
          {
            v198 = (unsigned __int64)&v194[184 * v161 + 184];
            *(_QWORD *)v447 = v198;
          }
          v201 = &v194[v200];
          *(_QWORD *)v453 = &v194[v200];
          if ( &v194[v200] != (char *)v198 )
          {
            v368 = *(CScopedClipStack::ClippingScopeState **)v447;
            v369 = (CScopedClipStack::ClippingScopeState *)&v194[v200];
            do
            {
              CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v369, v198);
              v369 = (CScopedClipStack::ClippingScopeState *)((char *)v369 + 184);
            }
            while ( v369 != v368 );
            v201 = *(char **)v453;
            v158 = (unsigned __int64)v6 + 368;
          }
          *((_QWORD *)v6 + 113) += 184LL;
          memset_0(v201, 0, 0xB8uLL);
          v202 = *((_QWORD *)v6 + 113);
          *(_BYTE *)(v202 - 8) = 1;
          *(_OWORD *)(v202 - 152) = *((_OWORD *)v6 + 6);
          *(_OWORD *)(v202 - 136) = *((_OWORD *)v6 + 7);
          *(_OWORD *)(v202 - 120) = *((_OWORD *)v6 + 8);
          *(_OWORD *)(v202 - 104) = *((_OWORD *)v6 + 9);
          *(_DWORD *)(v202 - 88) = *((_DWORD *)v6 + 40);
          v203 = v459;
          *(_OWORD *)(v202 - 84) = *v459;
          *(_OWORD *)(v202 - 68) = v203[1];
          *(_OWORD *)(v202 - 52) = v203[2];
          *(_OWORD *)(v202 - 36) = v203[3];
          *(_DWORD *)(v202 - 20) = *((_DWORD *)v203 + 16);
          if ( (_BYTE)v79 )
            *((_BYTE *)v6 + 8170) = 0;
          LODWORD(Size) = v442;
          goto LABEL_522;
        }
        v444 = v194;
        v450 = (unsigned __int64)(v195 - 184);
        v456 = (__int64)(v195 - 184);
        for ( i2 = 1LL; i2; i2 = v493 )
        {
          *(_QWORD *)&v493 = i2 - 1;
          if ( i2 != 1 )
            break;
          CScopedClipStack::ClippingScopeState::ClippingScopeState(v198, v450);
          v198 = *(_QWORD *)v447;
          if ( v456 == v367 )
            goto LABEL_325;
          v450 = v456 - 184;
          v456 -= 184LL;
        }
LABEL_785:
        _invalid_parameter_noinfo_noreturn();
      }
      MilInstrumentationCheckHR_MaybeFailFast(v188, 0LL, 0, v186, 0xC0Du, 0LL);
      v301 = v186;
      LODWORD(Size) = v186;
LABEL_787:
      MilInstrumentationCheckHR_MaybeFailFast(v301, 0LL, 0, v186, 0x1696u, 0LL);
      goto LABEL_146;
    }
    if ( (unsigned int)v352 <= 0x40 )
      v352 = 64LL;
    *(_QWORD *)&v493 = v352;
    v353 = HrMalloc(0x10uLL, (unsigned int)v352, &v444);
    v186 = v353;
    if ( v353 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v354, 0LL, 0, v353, 0x6Bu, 0LL);
    }
    else
    {
      v355 = 16LL * *(unsigned int *)v158;
      if ( v355 <= 0xFFFFFFFF )
      {
        v356 = v444;
        memcpy_0(v444, *((const void **)v6 + 48), (unsigned int)v355);
        operator delete(*((void **)v6 + 48));
        v357 = v493;
        v181 = (char **)((char *)v6 + 896);
        *((_QWORD *)v6 + 48) = v356;
        v186 = 0;
        *((_DWORD *)v6 + 93) = v357;
        Size = 0LL;
LABEL_312:
        v188 = 2 * *(_DWORD *)v158;
        *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * *((unsigned int *)v6 + 92)) = *(_OWORD *)v453;
        ++*(_DWORD *)v158;
        v189 = *((_DWORD *)v6 + 98);
        if ( v189 <= *(_DWORD *)v158 )
          v189 = *(_DWORD *)v158;
        *((_DWORD *)v6 + 98) = v189;
        goto LABEL_315;
      }
      v186 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v190 = v444;
    v181 = (char **)((char *)v6 + 896);
    Size = (size_t)v444;
    goto LABEL_316;
  }
  while ( 1 )
  {
    v348 = 0;
    v349 = v176 + 40 * v180;
    v78 = *(CD2DLayer **)(v349 + 24);
    *(_QWORD *)&v493 = v349;
    if ( v78 )
    {
      v350 = CD2DLayer::ApplyState(v78, v6);
      v442 = v350;
      v177 = v350;
      if ( v350 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v350, 0x21Au, 0LL);
        goto LABEL_521;
      }
      v349 = v493;
      v348 = 1;
      LODWORD(v180) = (_DWORD)v444;
      v178 = v447[0];
      *(_QWORD *)(v493 + 24) = 0LL;
      --*(_QWORD *)(v175 - 160);
      v176 = *((_QWORD *)v6 + 345);
    }
    if ( *(_BYTE *)(v349 + 36) )
      break;
LABEL_652:
    v180 = (unsigned int)(v180 + 1);
    v444 = (void *)v180;
    if ( !*(_QWORD *)(v175 - 160) )
      goto LABEL_300;
  }
  if ( !v348 )
  {
LABEL_651:
    v447[0] = ++v178;
    goto LABEL_652;
  }
  v351 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v175 - 16), v6, v178);
  v442 = v351;
  v177 = v351;
  if ( v351 >= 0 )
  {
    v176 = *((_QWORD *)v6 + 345);
    LODWORD(v180) = (_DWORD)v444;
    v178 = v447[0];
    goto LABEL_651;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v351, 0x236u, 0LL);
LABEL_521:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v177, 0x1090u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v300, 0LL, 0, v177, 0xBFFu, 0LL);
  v158 = (unsigned __int64)v6 + 368;
  v186 = v442;
  LODWORD(Size) = v442;
  if ( v442 < 0 )
    goto LABEL_787;
LABEL_522:
  *(_QWORD *)&v453[8] = v7;
  *(_DWORD *)v453 = 1;
  v302 = 0LL;
  v303 = *(unsigned int *)(v158 + 4);
  v304 = 0;
  v444 = 0LL;
  if ( *(_DWORD *)v158 != (_DWORD)v303 )
  {
    v305 = (_QWORD *)(v158 + 16);
    goto LABEL_524;
  }
  v370 = 2 * v303;
  if ( v370 > 0xFFFFFFFF )
  {
    v304 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
  }
  else
  {
    if ( (unsigned int)v370 <= 0x40 )
      v370 = 64LL;
    *(_QWORD *)&v493 = v370;
    v371 = HrMalloc(0x10uLL, (unsigned int)v370, &v444);
    v304 = v371;
    if ( v371 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v372, 0LL, 0, v371, 0x6Bu, 0LL);
      v302 = v444;
    }
    else
    {
      v373 = 16LL * *(unsigned int *)v158;
      if ( v373 > 0xFFFFFFFF )
      {
        v304 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v373, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v302 = v444;
      }
      else
      {
        v374 = v444;
        v375 = *(const void **)(v158 + 16);
        v304 = 0;
        v450 = v158 + 16;
        memcpy_0(v444, v375, (unsigned int)v373);
        operator delete(*(void **)v450);
        v305 = (_QWORD *)v450;
        v376 = v493;
        *(_QWORD *)v450 = v374;
        v302 = 0LL;
        *(_DWORD *)(v158 + 4) = v376;
LABEL_524:
        v306 = 2 * *(_DWORD *)v158;
        *(_OWORD *)(*v305 + 16LL * (unsigned int)(*(_DWORD *)v158)++) = *(_OWORD *)v453;
        v307 = *(_DWORD *)(v158 + 24);
        if ( v307 <= *(_DWORD *)v158 )
          v307 = *(_DWORD *)v158;
        *(_DWORD *)(v158 + 24) = v307;
      }
    }
  }
  if ( v302 )
  {
    v377 = GetProcessHeap();
    HeapFree(v377, 0, v302);
  }
  v308 = v304;
  v442 = v304;
  if ( v304 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v306, 0LL, 0, v304, 0xBBFu, 0LL);
    goto LABEL_784;
  }
  v309 = *((unsigned int *)v6 + 797);
  v310 = 0LL;
  v304 = 0;
  v442 = 0;
  v493 = v502;
  v444 = 0LL;
  if ( *((_DWORD *)v6 + 796) != (_DWORD)v309 )
    goto LABEL_531;
  v312 = 2 * v309;
  if ( (unsigned __int64)(2 * v309) > 0xFFFFFFFF )
  {
    v304 = -2147024362;
    v442 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v306, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_534;
  }
  if ( v312 <= 8 )
    v312 = 8;
  v442 = HrMalloc(0x10uLL, v312, &v444);
  if ( v442 < 0 )
  {
    v304 = v442;
    MilInstrumentationCheckHR_MaybeFailFast(v313, 0LL, 0, v442, 0x6Bu, 0LL);
    goto LABEL_694;
  }
  v314 = 16LL * *((unsigned int *)v6 + 796);
  if ( v314 > 0xFFFFFFFF )
  {
    v304 = -2147024362;
    v442 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_694:
    v310 = v444;
    goto LABEL_534;
  }
  v315 = v444;
  v442 = 0;
  memcpy_0(v444, *((const void **)v6 + 400), (unsigned int)v314);
  operator delete(*((void **)v6 + 400));
  *((_QWORD *)v6 + 400) = v315;
  v310 = 0LL;
  *((_DWORD *)v6 + 797) = v312;
  v304 = 0;
LABEL_531:
  *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(*((_DWORD *)v6 + 796))++) = v493;
  LODWORD(v78) = *((_DWORD *)v6 + 796);
  v311 = *((_DWORD *)v6 + 802);
  if ( v311 <= (unsigned int)v78 )
    v311 = *((_DWORD *)v6 + 796);
  *((_DWORD *)v6 + 802) = v311;
LABEL_534:
  if ( v310 )
  {
    v378 = GetProcessHeap();
    HeapFree(v378, 0, v310);
  }
  if ( v304 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v304, 0xCEu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v415, 0LL, 0, v442, 0xBC4u, 0LL);
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v158, 0LL, v416);
    v308 = v304;
    v442 = v304;
LABEL_784:
    LODWORD(Size) = v308;
    MilInstrumentationCheckHR_MaybeFailFast(v417, 0LL, 0, v304, 0x169Cu, 0LL);
    goto LABEL_146;
  }
  ++*(_QWORD *)(*((_QWORD *)v6 + 113) - 184LL);
  *((_BYTE *)v6 + 8169) = 1;
  LODWORD(Size) = v304;
LABEL_107:
  if ( !*((_QWORD *)&v460 + 1)
    && !HIDWORD(v463)
    && !HIBYTE(v476)
    && !*(_WORD *)((char *)&v476 + 1)
    && !v477
    && !v464
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v465 - 1.0) & _xmm) < 0.0000011920929
    || *((_DWORD *)g_pComposition + 278)
    && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112) == 2 )
  {
    goto LABEL_114;
  }
  v119 = *((_DWORD *)v6 + 100);
  v494 = 0LL;
  v493 = 0LL;
  if ( v119 )
    v120 = (CMILMatrix *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v119 - 1));
  else
    v120 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v120);
  v505 = v493;
  v506 = v494;
  v507 = 0LL;
  v121 = *((_DWORD *)v6 + 100);
  if ( v121 )
    v122 = (void *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v121 - 1));
  else
    v122 = &CMILMatrix::Identity;
  v123 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *, __int128 *, __int128 *, __int128 *))(*(_QWORD *)v7 + 200LL))(
           v7,
           v122,
           &v498,
           &v505,
           &v509,
           &v507);
  v442 = v123;
  v126 = v123;
  if ( v123 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, v123, 0xAFCu, 0LL);
    LODWORD(Size) = v126;
    MilInstrumentationCheckHR_MaybeFailFast(v414, 0LL, 0, v126, 0x16B1u, 0LL);
    goto LABEL_146;
  }
  *(_OWORD *)v495 = v507;
  BitmapRealizationForEffectInput = CDrawingContext::PushEffects(
                                      v6,
                                      &v460,
                                      (unsigned __int64)&v509,
                                      v125,
                                      (__int64)v495,
                                      v503,
                                      v443);
  v442 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v436 = 5816;
    goto LABEL_590;
  }
  if ( v443[0] )
    goto LABEL_163;
LABEL_114:
  if ( (_DWORD)v80 == 4 )
  {
    if ( !*(_BYTE *)(*((_QWORD *)v6 + 113) - 8LL) )
      goto LABEL_116;
    *(_OWORD *)v495 = 0LL;
    BitmapRealizationForEffectInput = CDrawingContext::PushClippingScope(v6, v7, 0LL, 0LL, 0LL, v495);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v436 = 5838;
      goto LABEL_590;
    }
    LOBYTE(v437) = 1;
    BitmapRealizationForEffectInput = CDrawingContext::PushGpuClipRectInternal(v6, v7, v495, 0LL, v437);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v436 = 5844;
      goto LABEL_590;
    }
LABEL_116:
    v81 = (char *)v6 + 3392;
    v82 = 0LL;
    v83 = *((_DWORD *)v6 + 848);
    if ( v83 )
      v82 = *((_QWORD *)v6 + 426) + 16LL * (unsigned int)(v83 - 1);
    v451 = *(_BYTE *)(v82 + 8);
    v84 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v466, v77);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v84 - 0.0) & _xmm) >= 0.00000011920929 && _finite((float)(1.0 / v84)) )
    {
      if ( v84 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v466 + 3) * *(float *)&v467)
                                                      - (float)(*(float *)&v466 * *((float *)&v467 + 3)))
                                              * *((float *)&v469 + 1))
                                      + (float)((float)((float)(*((float *)&v466 + 1) * *((float *)&v467 + 3))
                                                      - (float)(*((float *)&v466 + 3) * *((float *)&v467 + 1)))
                                              * *(float *)&v469))
                              + (float)((float)((float)(*(float *)&v466 * *((float *)&v467 + 1))
                                              - (float)(*((float *)&v466 + 1) * *(float *)&v467))
                                      * *((float *)&v469 + 3))) < 0.0 )
      {
        v85 = 1;
        goto LABEL_122;
      }
    }
    else if ( (float)((float)(*(float *)&v466 * *((float *)&v467 + 1)) - (float)(*((float *)&v466 + 1) * *(float *)&v467)) > 0.0 )
    {
      v85 = 1;
      goto LABEL_122;
    }
    v85 = 0;
LABEL_122:
    v86 = (_DWORD *)(v7 + 108);
    v440 = v85;
    if ( (**(_DWORD **)(v7 + 232) & 0x400000) == 0 )
    {
      v87 = *v86 != 1;
      v88 = v458 && *((_DWORD *)v458 + 27) == 1;
      v89 = *(_QWORD *)(v7 + 80);
      if ( (v89 & 2) != 0 )
        v89 = *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v89) = v89 & 1;
      v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
      if ( v90 )
        LOBYTE(v90) = 1;
      if ( !v87 )
        goto LABEL_753;
      if ( !v88 )
      {
LABEL_132:
        v85 = v440;
        v81 = (char *)v6 + 3392;
        goto LABEL_133;
      }
      if ( !(_DWORD)v89 )
      {
LABEL_753:
        if ( !v88 || !(_BYTE)v90 )
          goto LABEL_132;
      }
      v85 = v440;
      v81 = (char *)v6 + 3392;
    }
    v495[0] = v7;
    LOBYTE(v495[1]) = v85;
    BitmapRealizationForEffectInput = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                        v81,
                                        v495);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v436 = 5872;
      goto LABEL_590;
    }
LABEL_133:
    if ( (**(_DWORD **)(v7 + 232) & 0x200000) != 0 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7);
      if ( CWindowBackgroundTreatment::HasValidBounds(WindowBackgroundTreatmentInternal) )
      {
        *(_OWORD *)v495 = 0LL;
        CDrawingContext::GetClipBoundsWorld(v6, v495);
        TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>(v503);
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v6 + 400));
        CMILMatrix::Transform3DBoundsHelper<0>(
          TopByReference,
          (float *)WindowBackgroundTreatmentInternal + 22,
          (float *)v503);
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)v495,
               (float *)v503) )
        {
          v441 = 0;
          v443[0] = 1;
          if ( *((_QWORD *)WindowBackgroundTreatmentInternal + 38) )
            v441 = *((_BYTE *)WindowBackgroundTreatmentInternal + 303);
          if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 300)
            || !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
          {
            if ( v441 )
              v443[0] = 0;
            BitmapRealizationForEffectInput = CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
                                                WindowBackgroundTreatmentInternal,
                                                v6);
            v442 = BitmapRealizationForEffectInput;
            LODWORD(Size) = BitmapRealizationForEffectInput;
            if ( BitmapRealizationForEffectInput < 0 )
            {
              v436 = 5914;
              goto LABEL_590;
            }
          }
          if ( v441 )
          {
            FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
              *((FRAME_TIME_INFO **)g_pComposition + 61),
              v443[0]);
            if ( !v256 )
              ++dword_1803E2AB0;
          }
          v257 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v6 + 400));
          CWindowBackgroundTreatment::SetWorldTransform(WindowBackgroundTreatmentInternal, v257, 3LL);
        }
      }
    }
    v91 = *v86 == 1;
    v92 = v458 && *((_DWORD *)v458 + 27) == 1;
    v93 = 1;
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7) )
    {
      if ( (**(_DWORD **)(v7 + 232) & 0x400000) == 0
        || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v7),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               61LL)) )
      {
        v93 = 0;
      }
    }
    if ( !v91 )
    {
LABEL_141:
      v445[0] = 0;
      if ( !*((_DWORD *)v6 + 87) || (v410 = v451, v451 == v85) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 248LL))(v7) )
        {
          (*(void (__fastcall **)(__int64, CDrawingContext *, char *))(*(_QWORD *)v7 + 240LL))(v7, v6, v445);
          ++*((_DWORD *)v449 + 8);
          goto LABEL_144;
        }
        if ( !CVisual::HasProtectedContent((CVisual *)v7) )
          goto LABEL_144;
        if ( !*((_BYTE *)g_pComposition + 1274) )
        {
          *((_BYTE *)v6 + 8092) = 1;
LABEL_144:
          if ( !HIBYTE(v476)
            || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, 93LL)
            || !CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled((CLayerVisual *)v7) )
          {
            if ( !v445[0] )
              goto LABEL_146;
            goto LABEL_163;
          }
          v411 = *(_QWORD *)(*((_QWORD *)v6 + 62) + 8LL * (unsigned int)(*((_DWORD *)v6 + 130) - 1));
          v492 = 0;
          CMILMatrix::Set2DScaleAndOffset(
            (CMILMatrix *)v491,
            *(float *)(v411 + 280),
            *(float *)(v411 + 280),
            (float)-*(_DWORD *)(v411 + 16),
            (float)-*(_DWORD *)(v411 + 20));
          Bounds = CVisualTree::GetBounds(*(_QWORD *)(v7 + 720));
          BitmapRealizationForEffectInput = CDrawingContext::DrawSubVisualTree(
                                              (__int64)v6,
                                              v413,
                                              Bounds,
                                              (CMILMatrix *)v491);
          v442 = BitmapRealizationForEffectInput;
          LODWORD(Size) = BitmapRealizationForEffectInput;
          if ( BitmapRealizationForEffectInput < 0 )
          {
            v436 = 5999;
            goto LABEL_590;
          }
          v445[0] = 1;
LABEL_163:
          v94 = v448;
          *v448 = 0;
          goto LABEL_147;
        }
      }
      else if ( !(unsigned __int8)CSparseAlignedStorage<8,8>::AllocatedStorage::HasData(*(_QWORD *)(v7 + 232), 10LL)
             && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7)
             || !v85
             || *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v81)
                         + 8) == v410 )
      {
        goto LABEL_144;
      }
      v445[0] = 1;
      goto LABEL_144;
    }
    if ( v92 )
    {
      if ( !v93 )
        goto LABEL_141;
    }
    else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v7 + 80)) )
    {
      goto LABEL_141;
    }
    if ( !CVisual::HasBspPolygonList((CVisual *)v7) )
      goto LABEL_146;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_RENDERING_Start,
        v408,
        1LL,
        v512);
    BitmapRealizationForEffectInput = CDrawingContext::DrawBspPolygonList(v6, (struct CVisual *)v7, v458);
    v442 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_P3D_RENDERING_Stop,
          v409,
          1LL,
          v511);
      v94 = v448;
      ++*((_DWORD *)v449 + 8);
      *v94 = 0;
      goto LABEL_147;
    }
    v436 = 6015;
LABEL_590:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, BitmapRealizationForEffectInput, v436, 0LL);
    goto LABEL_146;
  }
  if ( (_DWORD)v80 != 3 )
    goto LABEL_116;
  v501 = 0LL;
  v147 = *((_QWORD *)v6 + 113);
  v148 = 0;
  v149 = *((_QWORD *)v6 + 345);
  v150 = 0;
  v151 = -858993459 * (unsigned int)((*((_QWORD *)v6 + 346) - v149) >> 3) - *(_DWORD *)(v147 - 176);
  if ( !*(_QWORD *)(v147 - 160) )
  {
LABEL_264:
    v442 = v148;
    if ( v148 < 0 )
      goto LABEL_555;
    if ( *((_BYTE *)v6 + 8170) )
      *(_WORD *)((char *)v6 + 8169) = 1;
    v152 = (char **)((char *)v6 + 896);
    v153 = *((_QWORD *)v6 + 113);
    v154 = v153 - *((_QWORD *)v6 + 112);
    if ( v154 && *(_QWORD *)(v153 - 184) )
    {
      LODWORD(v154) = *((_DWORD *)v6 + 796);
      if ( (_DWORD)v154 )
      {
        v155 = (unsigned int)(v154 - 1);
        v154 = *((_QWORD *)v6 + 400);
        v501 = *(_OWORD *)(v154 + 16 * v155);
      }
      else
      {
        v501 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      goto LABEL_271;
    }
    v501 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( v154 )
    {
LABEL_271:
      if ( *(_QWORD *)(v153 - 168) )
      {
        *(_OWORD *)v495 = 0LL;
        CBaseClipStack::Top((char *)v6 + 3216, v495);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v501, v495);
      }
    }
    v79 = (unsigned int *)((char *)v6 + 368);
    LODWORD(v495[0]) = 4;
    v156 = *((unsigned int *)v6 + 93);
    v157 = 0LL;
    v158 = 0LL;
    v495[1] = v7;
    v444 = 0LL;
    if ( *((_DWORD *)v6 + 92) == (_DWORD)v156 )
    {
      v379 = 2 * v156;
      if ( (unsigned __int64)(2 * v156) > 0xFFFFFFFF )
      {
        v158 = 2147942934LL;
        MilInstrumentationCheckHR_MaybeFailFast(v154, 0LL, 0, -2147024362, 0x64u, 0LL);
        v152 = (char **)((char *)v6 + 896);
      }
      else
      {
        if ( v379 <= 0x40 )
          v379 = 64;
        v380 = HrMalloc(0x10uLL, v379, &v444);
        v158 = (unsigned int)v380;
        if ( v380 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v381, 0LL, 0, v380, 0x6Bu, 0LL);
        }
        else
        {
          v382 = 16LL * *v79;
          if ( v382 <= 0xFFFFFFFF )
          {
            v383 = v444;
            v158 = 0LL;
            memcpy_0(v444, *((const void **)v6 + 48), (unsigned int)v382);
            operator delete(*((void **)v6 + 48));
            *((_QWORD *)v6 + 48) = v383;
            v152 = (char **)((char *)v6 + 896);
            *((_DWORD *)v6 + 93) = v379;
            v157 = 0LL;
            goto LABEL_274;
          }
          v158 = 2147942934LL;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
        }
        v157 = v444;
        v152 = (char **)((char *)v6 + 896);
      }
    }
    else
    {
LABEL_274:
      v159 = 2 * *v79;
      *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * *((unsigned int *)v6 + 92)) = *(_OWORD *)v495;
      ++*v79;
      v160 = *((_DWORD *)v6 + 98);
      if ( v160 <= *v79 )
        v160 = *v79;
      *((_DWORD *)v6 + 98) = v160;
    }
    if ( v157 )
    {
      v384 = GetProcessHeap();
      HeapFree(v384, 0, v157);
      v152 = (char **)((char *)v6 + 896);
    }
    v161 = (unsigned int)v158;
    v442 = v158;
    if ( (v158 & 0x80000000) != 0LL )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, v158, 0xC0Du, 0LL);
      LODWORD(Size) = v158;
      goto LABEL_731;
    }
    v162 = 1LL;
    v80 = 0xD37A6F4DE9BD37A7uLL * ((v152[1] - *v152) >> 3);
    if ( 0xD37A6F4DE9BD37A7uLL * ((v152[2] - v152[1]) >> 3) )
    {
LABEL_281:
      v163 = *v152;
      v164 = v152[1];
      v444 = v163;
      v158 = 0xD37A6F4DE9BD37A7uLL * ((v164 - v163) >> 3);
      v165 = v158 - v80;
      v161 = (unsigned __int64)&v163[8 * ((v164 - v163) >> 3)];
      if ( v161 )
      {
        if ( v165 <= 1 )
        {
          v166 = v158 - v80;
LABEL_284:
          if ( v164 != &v164[-184 * v166] )
          {
            v391 = v164 - 184;
            v444 = v163;
            v392 = 1LL;
            while ( 1 )
            {
              if ( v392 != 1 )
                goto LABEL_785;
              CScopedClipStack::ClippingScopeState::ClippingScopeState(v161, v391);
              if ( v393 == v394 )
                break;
              v391 = (char *)(v393 - 184);
            }
            v163 = (char *)v444;
            v152 = (char **)((char *)v6 + 896);
            v162 = 1LL;
          }
          v167 = 184 * v80;
          v450 = 184 * v80;
          if ( v165 > v162 )
          {
            v495[0] = (__int64)v163;
            v495[1] = v158;
            v496 = 0LL;
            stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator+=(v495, v158);
            *(_OWORD *)v503 = *(_OWORD *)v495;
            v504 = v496;
            std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
              v480,
              (char *)v444 + v450,
              (char *)v444 + 184 * v158 - 184,
              v503);
            v163 = (char *)v444;
            v152 = (char **)((char *)v6 + 896);
            v167 = v450;
          }
          if ( v161 >= (unsigned __int64)&v163[184 * v80 + 184] )
            v161 = (unsigned __int64)&v163[184 * v80 + 184];
          v168 = &v163[v167];
          v169 = (CScopedClipStack::ClippingScopeState *)&v163[v167];
          if ( &v163[v167] != (char *)v161 )
          {
            do
            {
              CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v169, (unsigned int)v163);
              v169 = (CScopedClipStack::ClippingScopeState *)((char *)v169 + 184);
            }
            while ( v169 != (CScopedClipStack::ClippingScopeState *)v161 );
            v152 = (char **)((char *)v6 + 896);
          }
          v152[1] += 184;
          memset_0(v168, 0, 0xB8uLL);
          v170 = (char *)v6 + 896;
          v171 = *((_QWORD *)v6 + 113);
          *(_BYTE *)(v171 - 8) = 1;
          *(_OWORD *)(v171 - 152) = *((_OWORD *)v6 + 6);
          *(_OWORD *)(v171 - 136) = *((_OWORD *)v6 + 7);
          *(_OWORD *)(v171 - 120) = *((_OWORD *)v6 + 8);
          *(_OWORD *)(v171 - 104) = *((_OWORD *)v6 + 9);
          *(_DWORD *)(v171 - 88) = *((_DWORD *)v6 + 40);
          *(_OWORD *)(v171 - 84) = v466;
          *(_OWORD *)(v171 - 68) = v467;
          *(_OWORD *)(v171 - 52) = v468;
          *(_OWORD *)(v171 - 36) = v469;
          *(_DWORD *)(v171 - 20) = v470[0];
          LODWORD(Size) = v442;
LABEL_557:
          v495[1] = v7;
          LODWORD(v495[0]) = 1;
          v318 = 0LL;
          v319 = v79[1];
          v320 = 0;
          v444 = 0LL;
          if ( *v79 == (_DWORD)v319 )
          {
            v447[0] = 0;
            LODWORD(Size) = 0;
            v395 = ULongLongToUInt(2 * v319, v447);
            v320 = v395;
            if ( v395 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v396, 0LL, 0, v395, 0x64u, 0LL);
            }
            else
            {
              v397 = v447[0];
              if ( v447[0] <= 0x40 )
                v397 = 64;
              v398 = HrMalloc(0x10uLL, v397, &v444);
              v320 = v398;
              if ( v398 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v399, 0LL, 0, v398, 0x6Bu, 0LL);
              }
              else
              {
                v400 = ULongLongToUInt(16LL * *v79, (unsigned int *)&Size);
                v320 = v400;
                if ( v400 >= 0 )
                {
                  v402 = v444;
                  memcpy_0(v444, *((const void **)v79 + 2), (unsigned int)Size);
                  operator delete(*((void **)v79 + 2));
                  *((_QWORD *)v79 + 2) = v402;
                  v318 = 0LL;
                  v79[1] = v397;
                  v170 = (char *)v6 + 896;
                  goto LABEL_558;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v401, 0LL, 0, v400, 0x6Du, 0LL);
              }
              v318 = v444;
              v170 = (char *)v6 + 896;
            }
          }
          else
          {
LABEL_558:
            v321 = 2 * *v79;
            *(_OWORD *)(*((_QWORD *)v79 + 2) + 16LL * (*v79)++) = *(_OWORD *)v495;
            v322 = v79[6];
            if ( v322 <= *v79 )
              v322 = *v79;
            v79[6] = v322;
          }
          if ( v318 )
          {
            v403 = GetProcessHeap();
            HeapFree(v403, 0, v318);
          }
          v323 = v320;
          v442 = v320;
          if ( v320 >= 0 )
          {
            v324 = *((unsigned int *)v6 + 797);
            v325 = 0LL;
            v320 = 0;
            v442 = 0;
            *(_OWORD *)v495 = v501;
            v444 = 0LL;
            if ( *((_DWORD *)v6 + 796) != (_DWORD)v324 )
              goto LABEL_565;
            v447[0] = 0;
            LODWORD(Size) = 0;
            v328 = ULongLongToUInt(2 * v324, v447);
            v442 = v328;
            v320 = v328;
            if ( v328 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v329, 0LL, 0, v328, 0x64u, 0LL);
              goto LABEL_568;
            }
            v330 = v447[0];
            if ( v447[0] <= 8 )
              v330 = 8;
            v442 = HrMalloc(0x10uLL, v330, &v444);
            if ( v442 < 0 )
            {
              v438 = 107;
            }
            else
            {
              v442 = ULongLongToUInt(16LL * *((unsigned int *)v6 + 796), (unsigned int *)&Size);
              if ( v442 >= 0 )
              {
                v332 = v444;
                memcpy_0(v444, *((const void **)v6 + 400), (unsigned int)Size);
                operator delete(*((void **)v6 + 400));
                *((_QWORD *)v6 + 400) = v332;
                v325 = 0LL;
                *((_DWORD *)v6 + 797) = v330;
                v320 = v442;
LABEL_565:
                *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(*((_DWORD *)v6 + 796))++) = *(_OWORD *)v495;
                v326 = *((_DWORD *)v6 + 796);
                v327 = *((_DWORD *)v6 + 802);
                if ( v327 <= v326 )
                  v327 = *((_DWORD *)v6 + 796);
                *((_DWORD *)v6 + 802) = v327;
LABEL_568:
                if ( v325 )
                {
                  v404 = GetProcessHeap();
                  HeapFree(v404, 0, v325);
                }
                if ( v320 >= 0 )
                {
                  ++*(_QWORD *)(*((_QWORD *)v170 + 1) - 184LL);
                  *((_BYTE *)v6 + 8169) = 1;
                  LODWORD(Size) = v320;
                  goto LABEL_116;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v326, 0LL, 0, v320, 0xCEu, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(v405, 0LL, 0, v442, 0xBC4u, 0LL);
                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v79, 0LL, v406);
                v323 = v320;
                v442 = v320;
LABEL_748:
                LODWORD(Size) = v323;
                MilInstrumentationCheckHR_MaybeFailFast(v407, 0LL, 0, v320, 0x16E4u, 0LL);
                goto LABEL_146;
              }
              v438 = 109;
            }
            v320 = v442;
            MilInstrumentationCheckHR_MaybeFailFast(v331, 0LL, 0, v442, v438, 0LL);
            v325 = v444;
            goto LABEL_568;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v321, 0LL, 0, v320, 0xBBFu, 0LL);
          goto LABEL_748;
        }
LABEL_722:
        v166 = v162;
        goto LABEL_284;
      }
      goto LABEL_785;
    }
    if ( v80 + 1 >= v80 )
    {
      v385 = detail::liberal_expansion_policy::expand(0LL, 0xD37A6F4DE9BD37A7uLL * ((v152[2] - *v152) >> 3), v80 + 1);
      v386 = operator new(saturated_mul(v385, 0xB8uLL));
      v387 = *((_QWORD *)v6 + 113);
      v388 = *((_QWORD *)v6 + 112);
      v389 = v386;
      v495[0] = (__int64)v386;
      v495[1] = v80;
      v496 = 0LL;
      std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
        v480,
        v388,
        v387,
        v495);
      detail::destruct_range<CScopedClipStack::ClippingScopeState>(*((CScopedClipStack::ClippingScopeState **)v6 + 112));
      v390 = (char *)*((_QWORD *)v6 + 112);
      *((_QWORD *)v6 + 112) = v389;
      if ( v390 == (char *)v6 + 920 )
        v390 = 0LL;
      operator delete(v390);
      v152 = (char **)((char *)v6 + 896);
      v162 = 1LL;
      *((_QWORD *)v6 + 113) = *((_QWORD *)v6 + 112) + 184 * v80;
      *((_QWORD *)v6 + 114) = *((_QWORD *)v6 + 112) + 184 * v385;
      goto LABEL_281;
    }
LABEL_721:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_722;
  }
  while ( 2 )
  {
    v287 = 0;
    v288 = v149 + 40 * v151;
    v78 = *(CD2DLayer **)(v288 + 24);
    *(_QWORD *)&v493 = v288;
    if ( v78 )
    {
      v289 = CD2DLayer::ApplyState(v78, v6);
      v442 = v289;
      v148 = v289;
      if ( v289 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v289, 0x21Au, 0LL);
        goto LABEL_555;
      }
      v288 = v493;
      v287 = 1;
      *(_QWORD *)(v493 + 24) = 0LL;
      --*(_QWORD *)(v147 - 160);
      v149 = *((_QWORD *)v6 + 345);
    }
    if ( !*(_BYTE *)(v288 + 36) )
      goto LABEL_501;
    if ( !v287 )
      goto LABEL_500;
    v290 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v147 - 16), v6, v150);
    v442 = v290;
    v148 = v290;
    if ( v290 >= 0 )
    {
      v149 = *((_QWORD *)v6 + 345);
LABEL_500:
      ++v150;
LABEL_501:
      v151 = (unsigned int)(v151 + 1);
      if ( !*(_QWORD *)(v147 - 160) )
        goto LABEL_264;
      continue;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v290, 0x236u, 0LL);
LABEL_555:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v148, 0x1090u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v316, 0LL, 0, v148, 0xBFFu, 0LL);
  v79 = (unsigned int *)((char *)v6 + 368);
  LODWORD(v158) = v442;
  LODWORD(Size) = v442;
  if ( v442 >= 0 )
  {
    v170 = (char *)v6 + 896;
    goto LABEL_557;
  }
LABEL_731:
  MilInstrumentationCheckHR_MaybeFailFast(v317, 0LL, 0, v158, 0x16DEu, 0LL);
LABEL_146:
  v94 = v448;
LABEL_147:
  if ( *((_BYTE *)v6 + 8172) )
  {
    v95 = *((_DWORD *)v6 + 820);
    if ( v95 )
    {
      if ( *(_BYTE *)((unsigned int)(v95 - 1) + *((_QWORD *)v6 + 412)) )
        CVisual::RenderProjectedShadows(v7, v6, 1);
    }
  }
  if ( !*v94 )
  {
    v101 = *((_QWORD *)v6 + 25);
    if ( v101 )
    {
      if ( !*((_BYTE *)v6 + 193) )
      {
        v102 = *(_QWORD **)(v101 + 1960);
        v103 = *(_QWORD **)(v101 + 1968);
        v104 = *((_QWORD *)v6 + 1010);
        if ( v102 != v103 )
        {
          while ( v7 != *v102
               || !(unsigned __int8)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::operator==<detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>,void>(
                                      v104,
                                      v102 + 1) )
          {
            v102 += 8;
            if ( v102 == v103 )
              goto LABEL_152;
          }
          *((_BYTE *)v6 + 193) = 1;
        }
      }
    }
  }
LABEL_152:
  if ( dword_1803E0760
    && (unsigned __int8)tlgKeywordOn(&dword_1803E0760, 0LL)
    && *v94 == (_BYTE)v427
    && (*(_DWORD *)(v7 + 264) > v427 || *(_DWORD *)(v7 + 268) > v427) )
  {
    *(_OWORD *)v495 = 0LL;
    CDrawingContext::GetClipBoundsWorld(v6, v495);
    v428 = (const void *)*((_QWORD *)v6 + 25);
    v429 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v485, (const struct MilRectF *)v495);
    DwmDbg::DbgString::ConvertHR(v430, &lpMem, &Size);
    v431 = DwmDbg::DbgString::DbgString(
             (DwmDbg::DbgString *)v486,
             "hr=%s, clipBoundsWorld=[%s], m_pCutoffBVI=0x%p",
             (const char *)lpMem,
             v429,
             v428);
    v432 = "Render-BailWithBackdropsStillInSubtree-Backdrop";
    v433 = *((_QWORD *)v6 + 1010);
    v434 = v431;
    if ( !*((_QWORD *)v6 + 25) )
      v432 = "Render-BailWithBackdropsStillInSubtree-Normal";
    v435 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v487, v432);
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v435, v7, v452, v433, v434);
    if ( lpMem )
      operator delete(lpMem);
    if ( v485 )
      operator delete(v485);
    v96 = Size;
  }
  else
  {
    v96 = v442;
  }
  if ( v461 && *((_QWORD *)&v460 + 1) )
    (***((void (__fastcall ****)(_QWORD, __int64))&v460 + 1))(*((_QWORD *)&v460 + 1), 1LL);
  return v96;
}
