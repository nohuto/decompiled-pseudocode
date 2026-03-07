__int64 __fastcall CPreComputeContext::PreSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // r14
  struct CVisualTree *p_Blink; // rbx
  __int64 v7; // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r15
  struct CTreeData *UnusedTreeData; // rsi
  __int64 v17; // rax
  CPreComputeContext *v18; // r15
  _DWORD *v19; // rbx
  _DWORD *v20; // rax
  bool *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm6_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm5_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  __int64 v30; // rcx
  int *v31; // rdx
  FLOAT v32; // eax
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  bool v37; // r15
  char v38; // si
  struct CLightStack *v39; // rbx
  struct CVisualTree *v40; // r12
  CPreComputeContext *v41; // r12
  bool *v42; // r15
  _DWORD *v43; // rdx
  char v44; // al
  CMILMatrix *v45; // rcx
  struct CVisualTree *v46; // rsi
  int v47; // eax
  __int128 v48; // xmm6
  __int128 v49; // xmm7
  __int128 v50; // xmm8
  __int64 v51; // rax
  __int64 v52; // rbx
  __int128 v53; // xmm9
  char v54; // r13
  struct CTreeData *v55; // rsi
  __int64 v56; // rax
  bool v57; // zf
  bool v58; // al
  struct CManipulationManager *v59; // r12
  _BYTE *v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // r15
  char v64; // r13
  _DWORD *v65; // rdx
  CVisual *v66; // r13
  _QWORD *v67; // rdx
  __int64 v68; // r13
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // r8
  __int64 v73; // rax
  _BYTE *v74; // rcx
  __int64 j; // rdx
  _QWORD **v76; // rdx
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  HANDLE ProcessHeap; // rax
  CTreeData *v80; // rax
  void **v81; // rax
  CPreComputeContext *v82; // r15
  struct CVisualTree *v83; // rbx
  _DWORD *v84; // rdx
  _DWORD *v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rsi
  struct CVisual *Parent; // rax
  _DWORD *v89; // rcx
  struct CVisual *v90; // r15
  struct CVisualTree *v91; // rax
  int v92; // r12d
  _DWORD *v93; // rdi
  bool v94; // r13
  bool v95; // di
  __int64 v96; // r8
  _DWORD *v97; // rdx
  char v98; // al
  __int64 v99; // rcx
  _DWORD *v101; // rcx
  __int64 v102; // rax
  int v103; // eax
  unsigned int v104; // ebx
  __int128 v105; // xmm0
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 i1; // rdx
  _QWORD *v109; // rdx
  _QWORD *v110; // rax
  __int64 v111; // r8
  __int64 v112; // rax
  _BYTE *v113; // rcx
  __int64 i3; // rdx
  _QWORD **v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  _BYTE *v120; // rcx
  __int64 i4; // rdx
  _QWORD **v122; // rdx
  _QWORD *v123; // rax
  _QWORD *v124; // rdx
  int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned int v128; // eax
  const struct CMILMatrix *v129; // r12
  struct CMILMatrix *v130; // rax
  _BOOL8 v131; // r8
  _BYTE *v132; // r9
  _DWORD *v133; // rdx
  __int64 v134; // rax
  _BYTE *v135; // rcx
  __int64 i5; // r8
  _QWORD *v137; // r8
  __int64 v138; // rax
  __int128 v139; // xmm1
  __int128 v140; // xmm0
  __int128 v141; // xmm1
  int v142; // eax
  CGeometry *v143; // rcx
  int ShapeData; // eax
  unsigned int v145; // ecx
  unsigned int v146; // esi
  void (__fastcall ***v147)(_QWORD, __int64); // rcx
  int v148; // r15d
  int v149; // eax
  unsigned int v150; // ecx
  int v151; // eax
  __int128 v152; // xmm0
  unsigned int v153; // ecx
  unsigned int v154; // eax
  _DWORD *v155; // rsi
  __int64 v156; // rbx
  __int64 v157; // r12
  int v158; // eax
  __int64 v159; // r8
  int v160; // eax
  _OWORD *v161; // rcx
  __int128 v162; // xmm1
  bool v163; // cc
  float v164; // xmm2_4
  float v165; // xmm6_4
  float v166; // xmm3_4
  float v167; // xmm5_4
  float v168; // xmm0_4
  float v169; // xmm4_4
  CDirtyRegion *v170; // rcx
  unsigned int v171; // r15d
  int v172; // eax
  unsigned int v173; // ecx
  bool IsEqual; // al
  struct CVisualTree *v175; // r12
  bool v176; // r15
  struct CTreeData *v177; // rbx
  _DWORD *v178; // rdx
  struct _LIST_ENTRY **v179; // rdx
  CVisual *v180; // rsi
  unsigned __int64 v181; // rcx
  __int64 v182; // r9
  _BYTE *v183; // r10
  unsigned int v184; // eax
  _BYTE *v185; // rcx
  __int64 v186; // r8
  __int64 v187; // rcx
  __int64 v188; // r11
  unsigned int i8; // eax
  __int64 v190; // r8
  __int64 v191; // rax
  char v192; // al
  char v193; // al
  __int64 v194; // rax
  _BYTE *v195; // rcx
  __int64 i10; // r8
  _QWORD *v197; // r8
  __int64 v198; // rax
  _BYTE *v199; // rcx
  __int64 mm; // r8
  _QWORD *v201; // r8
  _QWORD *v202; // rbx
  int k; // ecx
  __int64 v204; // rcx
  _BYTE *v205; // r8
  unsigned int i; // eax
  __int64 *v207; // r8
  __int64 v208; // rbx
  __int64 v209; // rax
  CBspPreComputeHelper *v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rbx
  const void **v213; // rcx
  _BYTE *v214; // rbx
  __int64 v215; // rax
  unsigned __int64 v216; // r15
  unsigned int v217; // ecx
  unsigned __int64 v218; // rax
  HANDLE v219; // rax
  void *v220; // r12
  unsigned __int64 v221; // rcx
  void *v222; // rsi
  __int64 v223; // r8
  __int64 v224; // rax
  _BYTE *v225; // rcx
  __int64 m; // rdx
  _QWORD ***v227; // rdx
  _QWORD **v228; // rcx
  _QWORD *n; // rax
  __int64 v230; // r8
  __int64 v231; // rax
  _BYTE *v232; // rcx
  __int64 ii; // rdx
  _QWORD ***v234; // rdx
  _QWORD **v235; // rcx
  _QWORD *jj; // rax
  __int64 v237; // rcx
  __int128 *UnoptimizedBounds; // rdx
  __int64 v239; // rbx
  float v240; // xmm8_4
  __int64 v241; // rsi
  float v242; // xmm6_4
  __int64 v243; // rcx
  float v244; // xmm0_4
  __int64 v245; // rax
  float v246; // xmm1_4
  float v247; // xmm2_4
  unsigned __int64 v248; // rsi
  unsigned __int64 v249; // rax
  HANDLE v250; // rax
  void *v251; // r12
  unsigned __int64 v252; // rax
  void *v253; // r15
  const struct CVisualTree *v254; // rsi
  _OWORD *v255; // rax
  CTreeData *TreeData; // rax
  struct CBackdropVisualImage *BackdropVisualImage; // r15
  _BYTE *v258; // rbx
  __int64 v259; // r8
  __int64 v260; // rax
  _BYTE *v261; // rcx
  __int64 i9; // r8
  CWindowBackgroundTreatment **v263; // r8
  CWindowBackgroundTreatment *v264; // rbx
  __int64 v265; // r10
  int v266; // eax
  void *v267; // rdx
  __int64 v268; // r10
  __int64 v269; // rcx
  __int128 *v270; // rdx
  struct CVisualTree *v271; // r12
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v274; // rax
  float v275; // xmm0_4
  int v276; // eax
  unsigned int v277; // ebx
  __int64 TopByReference; // rax
  __int64 v279; // rdx
  float *v280; // rax
  const struct D2D_VECTOR_2F *v281; // r8
  __int128 *v282; // r12
  int v283; // r15d
  unsigned int kk; // esi
  _QWORD *v285; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v287; // r13
  int v288; // eax
  unsigned int v289; // ecx
  unsigned int v290; // r13d
  struct CEffect *EffectInternal; // r15
  __int64 v292; // rcx
  _BYTE *v293; // r8
  unsigned int i2; // r9d
  _QWORD **v295; // r8
  char v296; // al
  _DWORD *v297; // r10
  __int64 v298; // rcx
  unsigned int Slot; // eax
  __int64 v300; // r10
  int v301; // r9d
  int *v302; // r8
  __int64 v303; // rax
  __int64 v304; // rax
  int v305; // r8d
  int *v306; // rdx
  HANDLE v307; // rax
  _QWORD *ProjectedShadowReceivers; // rax
  int v309; // xmm1_4
  _QWORD *v310; // r15
  __int64 v311; // rsi
  __int64 v312; // r8
  __int64 v313; // rax
  _BYTE *v314; // rcx
  __int64 i6; // rdx
  _QWORD **v316; // rdx
  _QWORD *v317; // rax
  _QWORD *v318; // rdx
  __int64 v319; // rsi
  _QWORD *v320; // r15
  __int64 v321; // r8
  __int64 v322; // rax
  __int64 i7; // rdx
  _QWORD **v324; // rdx
  _QWORD *v325; // rax
  _QWORD *v326; // rdx
  __int64 v327; // rbx
  __int64 v328; // rdi
  int v329; // eax
  unsigned int v330; // esi
  char v331; // al
  HANDLE v332; // rax
  struct CTreeData *v333; // rax
  __int64 v334; // rcx
  _BYTE *v335; // r8
  unsigned int nn; // eax
  _QWORD **v337; // r8
  struct _LIST_ENTRY *v338; // rax
  struct _LIST_ENTRY *v339; // rcx
  struct _LIST_ENTRY *v340; // rax
  struct _LIST_ENTRY *v341; // rcx
  CComposition *v342; // rsi
  int ManipulationManager; // eax
  int v344; // r9d
  HANDLE v345; // rax
  int v346; // r15d
  HANDLE v347; // rax
  unsigned int v348; // ecx
  int v349; // esi
  HANDLE v350; // rax
  unsigned int v351; // ecx
  __int64 v352; // rdx
  __int64 v353; // rax
  __int64 v354; // r8
  float y; // xmm7_4
  float x; // xmm8_4
  float v357; // xmm0_4
  int v358; // eax
  unsigned int v359; // ebx
  __int64 v360; // rcx
  int v361; // eax
  unsigned int v362; // ecx
  unsigned int v363; // ecx
  int v364; // eax
  unsigned int v365; // ebx
  __int64 v366; // rbx
  __int64 v367; // rdi
  struct CTreeData *v368; // rax
  int v369; // edx
  __int64 v370; // rdi
  CVisualTreePath *v371; // rbx
  __int64 v372; // rax
  _BYTE *v373; // rcx
  __int64 v374; // r8
  int v375; // [rsp+20h] [rbp-E0h]
  int v376; // [rsp+20h] [rbp-E0h]
  int v377; // [rsp+20h] [rbp-E0h]
  int v378; // [rsp+20h] [rbp-E0h]
  bool v379; // [rsp+30h] [rbp-D0h]
  bool v380; // [rsp+31h] [rbp-CFh] BYREF
  CPreComputeContext *v381; // [rsp+38h] [rbp-C8h]
  char v382; // [rsp+40h] [rbp-C0h]
  struct CManipulationManager *v383; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualTree *v384; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualTree *v385; // [rsp+58h] [rbp-A8h]
  bool *v386; // [rsp+60h] [rbp-A0h]
  void (__fastcall ***v387)(_QWORD, __int64); // [rsp+68h] [rbp-98h] BYREF
  char v388; // [rsp+70h] [rbp-90h]
  __int64 v389; // [rsp+78h] [rbp-88h]
  __int128 v390; // [rsp+80h] [rbp-80h] BYREF
  __int128 v391; // [rsp+90h] [rbp-70h]
  __int128 v392; // [rsp+A0h] [rbp-60h]
  __int128 v393; // [rsp+B0h] [rbp-50h]
  int v394; // [rsp+C0h] [rbp-40h]
  _BYTE v395[64]; // [rsp+D0h] [rbp-30h] BYREF
  int v396; // [rsp+110h] [rbp+10h]
  _BYTE v397[64]; // [rsp+120h] [rbp+20h] BYREF
  int v398; // [rsp+160h] [rbp+60h]
  struct D2D_VECTOR_3F v399; // [rsp+170h] [rbp+70h] BYREF
  float v400; // [rsp+17Ch] [rbp+7Ch]
  __int128 v401; // [rsp+180h] [rbp+80h] BYREF
  __int128 v402; // [rsp+198h] [rbp+98h] BYREF
  __int64 v403; // [rsp+1A8h] [rbp+A8h]
  __int128 v404; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v405; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID lpMem; // [rsp+1D0h] [rbp+D0h] BYREF
  const struct CVisualTree **v407; // [rsp+1D8h] [rbp+D8h]
  char *v408; // [rsp+1E0h] [rbp+E0h]
  _BYTE v409[32]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v410; // [rsp+208h] [rbp+108h] BYREF
  int v411; // [rsp+210h] [rbp+110h]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v3 = *((_QWORD *)this + 237);
  v4 = 0;
  v5 = *((_QWORD *)this + 236);
  p_Blink = 0LL;
  v7 = *(_QWORD *)a2;
  v394 = 0;
  *(_QWORD *)&v405 = v3;
  v386 = a3;
  v385 = a2;
  v381 = this;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    p_Blink = (struct CVisualTree *)(v5 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        p_Blink = (struct CVisualTree *)&Flink[-23].Blink;
      }
    }
  }
LABEL_3:
  *a3 = 0;
  v11 = *(_QWORD *)a2;
  v384 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v11 + 184))(a2) )
    v384 = p_Blink;
  v12 = *(_DWORD **)(v5 + 232);
  if ( (*v12 & 0x4000000) != 0 )
  {
    v204 = (unsigned int)v12[1];
    v205 = v12 + 2;
    for ( i = 0; i < (unsigned int)v204; ++v205 )
    {
      if ( *v205 == 6 )
        break;
      ++i;
    }
    v207 = i >= (unsigned int)v204 ? 0LL : (__int64 *)((char *)v12 + v204 + 8LL * i - (((_BYTE)v204 + 15) & 7) + 15);
    v208 = *v207;
    if ( *v207 )
    {
      v209 = *(_QWORD *)(v208 + 64);
      if ( v209 )
      {
        if ( *(_BYTE *)(v209 + 96) )
        {
          v210 = (CBspPreComputeHelper *)detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::reserve_region(
                                           this,
                                           0x823EE08FB823EE09uLL
                                         * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
          CBspPreComputeHelper::CBspPreComputeHelper(v210);
          *(_QWORD *)(v211 + 360) = 0LL;
          *(_QWORD *)(v211 + 376) = 0LL;
          *(_DWORD *)(v211 + 368) = 0;
          *(_DWORD *)(v211 + 384) = 0;
          *(_QWORD *)(v211 + 392) = 0LL;
          *(_QWORD *)(v211 + 408) = 0LL;
          *(_DWORD *)(v211 + 400) = 0;
          *(_DWORD *)(v211 + 416) = 0;
          *(_QWORD *)(v211 + 424) = v208 + 104;
          *(_QWORD *)(v211 + 432) = v208;
          *(_QWORD *)(v211 + 440) = 0LL;
          *(_WORD *)(v211 + 448) = 0;
          v212 = *((_QWORD *)this + 1);
          v213 = *(const void ***)(v212 - 24);
          if ( a2 != (const struct CVisualTree *)v213 )
          {
            if ( (int)CThreadContext::RegisterGraphWalkRoot(v213[8]) < 0 )
            {
              *(_BYTE *)(v212 - 7) = 1;
              v327 = *(_QWORD *)this;
              v328 = *((_QWORD *)this + 1);
              while ( v327 != v328 )
              {
                CDirtyRegion::SetFullDirty(*(CDirtyRegion **)(v327 + 424));
                v327 += 456LL;
              }
              return 0LL;
            }
            *(_BYTE *)(v212 - 8) = 1;
          }
          *(_DWORD *)(v212 - 96) = 0;
          *(_DWORD *)(v212 - 64) = 0;
          *(_DWORD *)(v212 - 16) = 0;
          v214 = *(_BYTE **)(v212 - 24);
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v214 + 232LL))(v214);
          CDirtyRegion::Initialize((CDirtyRegion *)(v214 + 104), v214[4714] == 0);
          v215 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v214 + 216LL))(v214);
          if ( v215 )
            (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v215 + 24LL))(v215, v214);
        }
      }
    }
  }
  v13 = *((_QWORD *)this + 1);
  v14 = *(_QWORD *)this;
  v389 = *(_QWORD *)this;
  while ( v14 != v13 )
  {
    v15 = *(_QWORD *)(v14 + 432);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 184LL))(v15) )
    {
      UnusedTreeData = (struct CTreeData *)(v5 + 336);
      goto LABEL_10;
    }
    v72 = *(_QWORD *)(v5 + 232);
    if ( *(int *)v72 < 0 )
    {
      v73 = *(unsigned int *)(v72 + 4);
      v74 = (_BYTE *)(v72 + 8);
      for ( j = 0LL; (unsigned int)j < (unsigned int)v73; ++v74 )
      {
        if ( *v74 == 1 )
          break;
        j = (unsigned int)(j + 1);
      }
      v76 = (unsigned int)j >= (unsigned int)v73 ? 0LL : (_QWORD **)(v72 + v73 + 15 + 8 * j - (((_BYTE)v73 + 15) & 7));
      v77 = *v76;
      if ( *v76 )
      {
        v78 = (_QWORD *)*v77;
        if ( (_QWORD *)*v77 != v77 )
        {
          while ( 1 )
          {
            UnusedTreeData = (struct CTreeData *)(v78 - 45);
            if ( v78[4] == v15 )
              break;
            v78 = (_QWORD *)*v78;
            if ( v78 == v77 )
              goto LABEL_106;
          }
LABEL_10:
          if ( UnusedTreeData )
            goto LABEL_11;
        }
      }
    }
LABEL_106:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v5);
    if ( UnusedTreeData )
    {
      v297 = *(_DWORD **)(v5 + 232);
      if ( (*v297 & 0x8000000) != 0 )
      {
        v298 = *(_QWORD *)(v5 + 232);
        *v297 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v298, 5LL);
        if ( Slot < *(_DWORD *)(v300 + 4) )
          *(_BYTE *)(Slot + v300 + 8) = 0;
      }
      v81 = *(void ***)UnusedTreeData;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v80 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x190uLL);
      UnusedTreeData = v80;
      if ( !v80 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      CTreeData::CTreeData(v80);
      v81 = &CVisualTreeData::`vftable';
      *((_QWORD *)UnusedTreeData + 49) = 0LL;
      *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    }
    ((void (__fastcall *)(struct CTreeData *, __int64, __int64))v81[1])(UnusedTreeData, v15, v5);
LABEL_11:
    if ( !*(_DWORD *)(v14 + 444) && !*(_BYTE *)(*(_QWORD *)(v14 + 424) + 4420LL) )
    {
      v17 = 0LL;
      if ( g_pComposition )
        v17 = *((_QWORD *)g_pComposition + 62);
      *((_QWORD *)UnusedTreeData + 29) = v17;
    }
    v14 += 456LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 93LL) )
  {
    v296 = *(_BYTE *)(v5 + 96);
    if ( v296 < 0 )
      *(_BYTE *)(v5 + 96) = v296 | 4;
  }
  v18 = v381;
  v19 = (_DWORD *)((char *)v381 + 1392);
  if ( *(char *)(v5 + 104) < 0 )
  {
    LODWORD(v383) = *(_DWORD *)(v5 + 212);
    v329 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push((char *)v381 + 1392, &v383);
    v330 = v329;
    if ( v329 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v329,
        v375);
      return v330;
    }
  }
  v20 = 0LL;
  if ( *v19 )
    v20 = (_DWORD *)(*((_QWORD *)v381 + 176) + 4LL * (unsigned int)(*v19 - 1));
  if ( *(_DWORD *)(v5 + 108) != *v20 )
  {
    *(_DWORD *)(v5 + 108) = *(_DWORD *)CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::GetTopByReference(v19);
    CVisual::OnOuterTransformChanged((CVisual *)v5);
  }
  v21 = v386;
  if ( ((*(_DWORD *)(v5 + 108) - 1) & 0xFFFFFFFD) == 0 )
    *v386 = 1;
  if ( *(int *)(v5 + 268) > 0 || *(int *)(v5 + 264) > 0 )
    *v21 = 1;
  v22 = 0LL;
  if ( g_pComposition )
    v22 = *((_QWORD *)g_pComposition + 62);
  if ( *(_QWORD *)(v5 + 328) != v22 )
  {
    v23 = *(_QWORD *)(v5 + 88);
    if ( !v23 || (*(_BYTE *)(v23 + 96) & 1) != 0 )
    {
      v24 = *(float *)(v5 + 124);
      v25 = 0.0;
      v26 = *(float *)(v5 + 128);
      v27 = 0.0;
      v28 = *(float *)(v5 + 140);
      v29 = *(float *)(v5 + 144);
      if ( v23 )
      {
        v25 = *(float *)(v23 + 140);
        v27 = *(float *)(v23 + 144);
      }
      v30 = *(_QWORD *)(v5 + 224);
      v31 = (int *)(v30 + 12);
      if ( (*(_DWORD *)(v30 + 4) & 0x10000000) != 0 )
      {
        v301 = *v31;
        v302 = (int *)(v30 + 12);
        if ( (*v31 & 0x7F000000) != 0x4000000 )
        {
          do
          {
            v302 = (int *)((char *)v302 + (v301 & 0xFFFFFF) + 4);
            v301 = *v302;
          }
          while ( (*v302 & 0x7F000000) != 0x4000000 );
        }
        v32 = *((float *)v302 + 3);
        *(_QWORD *)&v399.x = *(_QWORD *)(v302 + 1);
      }
      else
      {
        v32 = 0.0;
        *(_QWORD *)&v399.x = 0LL;
      }
      v399.z = v32;
      v33 = (float)(v399.x * v25) + *(float *)(v5 + 112);
      v34 = (float)(v399.y * v27) + *(float *)(v5 + 116);
      *(float *)(v5 + 124) = v33;
      *(float *)(v5 + 128) = v34;
      if ( (*(_DWORD *)(v30 + 4) & 0x20000000) != 0 )
      {
        for ( k = *v31; (*v31 & 0x7F000000) != 0x3000000; k = *v31 )
          v31 = (int *)((char *)v31 + (k & 0xFFFFFF) + 4);
        *(_QWORD *)&v404 = *(_QWORD *)(v31 + 1);
      }
      else
      {
        *(_QWORD *)&v404 = 0LL;
      }
      v35 = (float)(*(float *)&v404 * v25) + *(float *)(v5 + 132);
      v36 = (float)(*((float *)&v404 + 1) * v27) + *(float *)(v5 + 136);
      *(float *)(v5 + 140) = v35;
      *(float *)(v5 + 144) = v36;
      if ( v35 < 0.0 )
      {
        *(_DWORD *)(v5 + 140) = 0;
        v35 = 0.0;
      }
      if ( v36 < 0.0 )
      {
        *(_DWORD *)(v5 + 144) = 0;
        v36 = 0.0;
      }
      v37 = v24 != v33 || v26 != v34;
      if ( v28 == v35 && v29 == v36 )
      {
        v38 = 0;
      }
      else
      {
        v274 = *(_QWORD *)(v5 + 248);
        v38 = 1;
        if ( v274 && *(_BYTE *)(v274 + 136) )
          CVisual::OnClipChanged((CVisual *)v5);
        CVisual::OnLayoutChanged((CVisual *)v5);
      }
      if ( v37 )
      {
        *(_QWORD *)(v5 + 584) = 0LL;
        v223 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v223 < 0 )
        {
          v224 = *(unsigned int *)(v223 + 4);
          v225 = (_BYTE *)(v223 + 8);
          for ( m = 0LL; (unsigned int)m < (unsigned int)v224; ++v225 )
          {
            if ( *v225 == 1 )
              break;
            m = (unsigned int)(m + 1);
          }
          if ( (unsigned int)m >= (unsigned int)v224 )
            v227 = 0LL;
          else
            v227 = (_QWORD ***)(v223 + v224 + 15 + 8 * m - (((_BYTE)v224 + 15) & 7));
          v228 = *v227;
          if ( *v227 )
          {
            for ( n = *v228; n != v228; n = (_QWORD *)*n )
              *(n - 14) = 0LL;
          }
        }
        *(_BYTE *)(v5 + 497) = 1;
        v230 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v230 < 0 )
        {
          v231 = *(unsigned int *)(v230 + 4);
          v232 = (_BYTE *)(v230 + 8);
          for ( ii = 0LL; (unsigned int)ii < (unsigned int)v231; ++v232 )
          {
            if ( *v232 == 1 )
              break;
            ii = (unsigned int)(ii + 1);
          }
          if ( (unsigned int)ii >= (unsigned int)v231 )
            v234 = 0LL;
          else
            v234 = (_QWORD ***)(v231 + 15 + v230 + 8 * ii - (((_BYTE)v231 + 15) & 7));
          v235 = *v234;
          if ( *v234 )
          {
            for ( jj = *v235; jj != v235; jj = (_QWORD *)*jj )
              *((_BYTE *)jj - 199) = 1;
          }
        }
      }
      else if ( !v38 )
      {
        goto LABEL_50;
      }
      *(_BYTE *)(v5 + 96) |= 1u;
LABEL_50:
      v18 = v381;
      *(_QWORD *)(v5 + 328) = v22;
    }
  }
  v39 = (CPreComputeContext *)((char *)v18 + 1520);
  if ( (unsigned int)((__int64)(*(_QWORD *)(v5 + 288) - *(_QWORD *)(v5 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v5 + 312) - *(_QWORD *)(v5 + 304)) >> 4) )
  {
    *(_QWORD *)&v404 = 0x100000000LL;
    v282 = &v404;
    do
    {
      v283 = *(_DWORD *)v282;
      for ( kk = 0; kk < (unsigned int)CVisual::GetLightsCount((_QWORD *)v5, v283); ++kk )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v285, kk, v283);
        v287 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v385,
                 v5) )
          {
            v288 = CLightStack::Push((__int64)v39, v287, v283);
            v290 = v288;
            if ( v288 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v289, 0LL, 0, v288, 0x4Bu, 0LL);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2B2,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v290,
                v376);
              return v290;
            }
          }
        }
      }
      v282 = (__int128 *)((char *)v282 + 4);
    }
    while ( v282 != (__int128 *)((char *)&v404 + 8) );
    v3 = v405;
    v4 = 0;
    v18 = v381;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x2000000) != 0 )
  {
    v331 = *(_BYTE *)(v5 + 96);
    if ( (v331 & 0xC0) != 0 )
      *(_BYTE *)(v5 + 96) = v331 | 4;
  }
  if ( v3 && (*(_BYTE *)(v3 + 96) & 2) != 0 )
    *(_BYTE *)(v5 + 96) |= 2u;
  v40 = v385;
  if ( (*(_BYTE *)(v5 + 96) & 6) == 2 && CVisual::IsAffectedByNonAmbientLights((CVisual *)v5, v385, v39) )
    *(_BYTE *)(v5 + 96) = *(_BYTE *)(v5 + 96) ^ 2 | 4;
  if ( (*(_BYTE *)(v5 + 272) & 1) != 0
    && ((v237 = *(_QWORD *)(v389 + 424), *(_BYTE *)(v237 + 4420))
      ? (__int128 *)(UnoptimizedBounds = &v402,
                     v402 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite)
      : (UnoptimizedBounds = (__int128 *)CDirtyRegion::GetUnoptimizedBounds(v237, &v401)),
        CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
          (char *)v18 + 1760,
          UnoptimizedBounds),
        (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v40 + 184LL))(v40)) )
  {
    v239 = v5;
    v240 = *(float *)&FLOAT_1_0;
    v241 = v5;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v239 + 103) & 1) == 0 || (*(_BYTE *)(v239 + 102) & 2) != 0 )
        goto LABEL_390;
      v242 = *(float *)&FLOAT_1_0;
      if ( (**(_DWORD **)(v239 + 232) & 0x400000) != 0 )
      {
        EffectInternal = CVisual::GetEffectInternal((CVisual *)v239);
        if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               58LL) )
        {
          v242 = *((float *)EffectInternal + 20);
        }
      }
      v243 = *((_QWORD *)v40 + 8);
      v244 = fminf(1.0, fmaxf(v242, 0.0));
      if ( v239 == v243 )
      {
        v247 = *(float *)&FLOAT_1_0;
      }
      else
      {
        v245 = *(_QWORD *)(v239 + 224);
        if ( (*(_DWORD *)(v245 + 4) & 0x8000000) != 0 )
        {
          v305 = *(_DWORD *)(v245 + 12);
          v306 = (int *)(v245 + 12);
          if ( (v305 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v306 = (int *)((char *)v306 + (v305 & 0xFFFFFF) + 4);
              v305 = *v306;
            }
            while ( (*v306 & 0x7F000000) != 0x5000000 );
          }
          LODWORD(v383) = v306[1];
          v246 = *(float *)&v383;
        }
        else
        {
          v246 = *(float *)&FLOAT_1_0;
        }
        v247 = fminf(1.0, fmaxf(v246, 0.0));
      }
      v240 = v240 * (float)(v244 * v247);
      if ( COERCE_FLOAT(LODWORD(v240) & _xmm) < 0.0000011920929 )
      {
LABEL_390:
        v41 = v381;
        goto LABEL_60;
      }
      if ( v239 == v243 )
        break;
      if ( !v241
        || (v241 = *(_QWORD *)(v241 + 88)) == 0
        || v239 != v241 && (v241 = *(_QWORD *)(v241 + 88), v239 != v241) )
      {
        v239 = *(_QWORD *)(v239 + 88);
        if ( v239 )
          continue;
      }
      goto LABEL_390;
    }
    v41 = v381;
    *(_QWORD *)&v401 = 0LL;
    v254 = *(const struct CVisualTree **)(*(_QWORD *)v381 + 432LL);
    lpMem = v409;
    v407 = (const struct CVisualTree **)v409;
    v408 = &v410;
    *((_QWORD *)&v401 + 1) = v254;
    v255 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       &lpMem,
                       0LL,
                       1LL);
    *v255 = v401;
    TreeData = CVisual::FindTreeData((CVisual *)v5, *(v407 - 1));
    if ( TreeData )
      BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, (const struct CVisualTreePath *)&lpMem);
    else
      BackdropVisualImage = 0LL;
    v258 = lpMem;
    v259 = ((char *)v407 - (_BYTE *)lpMem) >> 4;
    if ( v259 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&lpMem,
        0LL,
        v259);
      v258 = lpMem;
    }
    lpMem = 0LL;
    if ( v258 != v409 && v258 )
    {
      v332 = GetProcessHeap();
      HeapFree(v332, 0, v258);
    }
    if ( BackdropVisualImage )
    {
      if ( *((_QWORD *)BackdropVisualImage + 18) != *((_QWORD *)v254 + 8) )
      {
        v333 = CVisual::FindTreeData((CVisual *)v5, v254);
        if ( v333 )
        {
          if ( (__int64)(*((_QWORD *)v333 + 22) - *((_QWORD *)v333 + 21)) >> 3 )
            detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
              (char *)v333 + 168,
              0LL);
        }
      }
    }
    *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)v254 + 5480,
                 (__int64)(*((_QWORD *)v254 + 686) - *((_QWORD *)v254 + 685)) >> 3) = v5;
  }
  else
  {
    v41 = v381;
  }
LABEL_60:
  v42 = v386;
  if ( (*(_BYTE *)(v5 + 96) & 0xD3) != 0 )
    *v386 = 1;
  v43 = *(_DWORD **)(v5 + 232);
  if ( (*v43 & 0x400000) != 0 )
  {
    v198 = (unsigned int)v43[1];
    v199 = v43 + 2;
    for ( mm = 0LL; (unsigned int)mm < (unsigned int)v198; ++v199 )
    {
      if ( *v199 == 10 )
        break;
      mm = (unsigned int)(mm + 1);
    }
    if ( (unsigned int)mm >= (unsigned int)v198 )
      v201 = 0LL;
    else
      v201 = (_QWORD *)((char *)v43 + 8 * mm - (((_BYTE)v198 + 15) & 7) + v198 + 15);
    v202 = (_QWORD *)*v201;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v201 + 56LL))(*v201, 187LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v202 + 56LL))(v202, 58LL) )
        goto LABEL_63;
      v202 = (_QWORD *)v202[11];
    }
    if ( v202 )
      ++*(_DWORD *)(v13 - 16);
  }
LABEL_63:
  v44 = *(_BYTE *)(v5 + 96);
  v45 = (CMILMatrix *)&CMILMatrix::Identity;
  if ( (v44 & 4) != 0 )
  {
    v155 = (_DWORD *)(v13 - 12);
    if ( (v44 & 1) != 0 && !*v155 )
    {
      v156 = *(_QWORD *)v41;
      v157 = *((_QWORD *)v41 + 1);
      while ( v156 != v157 )
      {
        if ( !*(_DWORD *)(v156 + 444) && !*(_BYTE *)(*(_QWORD *)(v156 + 424) + 4420LL) )
        {
          v158 = *(_DWORD *)(v156 + 360);
          v403 = 0LL;
          v402 = 0LL;
          if ( v158 )
            v45 = (CMILMatrix *)(*(_QWORD *)(v156 + 376) + 68LL * (unsigned int)(v158 - 1));
          CMILMatrix::Transform3DBoundsHelper<1>(v45);
          if ( *(_DWORD *)(v156 + 440) )
            LOBYTE(v159) = 1;
          else
            v159 = 0LL;
          CVisual::AdjustNodeWorldBounds(v5, &v402, v159);
          v160 = *(_DWORD *)(v156 + 392);
          if ( v160 )
          {
            v161 = (_OWORD *)(*(_QWORD *)(v156 + 408) + 16LL * (unsigned int)(v160 - 1));
            v162 = *v161;
            v163 = *(float *)&v402 <= COERCE_FLOAT(*v161);
            v401 = *v161;
            if ( !v163 )
              LODWORD(v162) = v402;
            v164 = *((float *)&v401 + 1);
            v165 = *((float *)&v401 + 1);
            if ( *((float *)&v402 + 1) > *((float *)&v401 + 1) )
            {
              v164 = *((float *)&v402 + 1);
              v165 = *((float *)&v402 + 1);
            }
            v166 = *((float *)&v401 + 2);
            v167 = *((float *)&v401 + 2);
            if ( *((float *)&v401 + 2) > *((float *)&v402 + 2) )
            {
              v166 = *((float *)&v402 + 2);
              v167 = *((float *)&v402 + 2);
            }
            v168 = *((float *)&v401 + 3);
            v169 = *((float *)&v401 + 3);
            if ( *((float *)&v401 + 3) > *((float *)&v402 + 3) )
            {
              v168 = *((float *)&v402 + 3);
              v169 = *((float *)&v402 + 3);
            }
            if ( v167 <= *(float *)&v162 || v168 <= v165 )
            {
              v166 = 0.0;
              v164 = 0.0;
              LODWORD(v162) = 0;
              v169 = 0.0;
            }
          }
          else
          {
            LODWORD(v162) = v402;
            v164 = *((float *)&v402 + 1);
            v166 = *((float *)&v402 + 2);
            v169 = *((float *)&v402 + 3);
          }
          v400 = v169;
          v399.z = v166;
          v399.y = v164;
          LODWORD(v399.x) = v162;
          if ( v166 > *(float *)&v162 && v169 > v164 )
          {
            v170 = *(CDirtyRegion **)(v156 + 424);
            v171 = 0;
            if ( !*((_BYTE *)v170 + 4420) )
            {
              if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v162
                 || v166 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
                && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v164
                 || v169 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
              {
                v172 = CDirtyRegion::_Add(v170, v5, 1u, (__int64)&v399);
                v171 = v172;
                if ( v172 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v173, 0LL, 0, v172, 0x1B8u, 0LL);
              }
              else
              {
                CDirtyRegion::SetFullDirty(v170);
              }
            }
            if ( (v171 & 0x80000000) != 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x625,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v171,
                v375);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x314,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v171,
                v377);
              return v171;
            }
          }
          v45 = (CMILMatrix *)&CMILMatrix::Identity;
        }
        v156 += 456LL;
      }
      v42 = v386;
    }
    ++*v155;
  }
  v46 = v384;
  if ( !v384 )
    goto LABEL_144;
  v47 = *(_DWORD *)(v5 + 96);
  if ( (v47 & 0x10000) == 0 )
  {
    if ( *v42 )
      goto LABEL_67;
    if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 && (v47 & 0x2000) != 0 )
    {
      *v42 = 1;
      goto LABEL_67;
    }
    if ( (v47 & 0x4000) == 0 )
    {
LABEL_144:
      if ( *v42 )
        goto LABEL_67;
      goto LABEL_145;
    }
    v175 = v385;
    v176 = 0;
    v177 = 0LL;
    if ( v5 == *((_QWORD *)v385 + 8) )
      goto LABEL_599;
    v178 = *(_DWORD **)(v5 + 232);
    if ( (*v178 & 0x1000000) != 0 )
    {
      v334 = (unsigned int)v178[1];
      v335 = v178 + 2;
      for ( nn = 0; nn < (unsigned int)v334; ++v335 )
      {
        if ( *v335 == 8 )
          break;
        ++nn;
      }
      if ( nn >= (unsigned int)v334 )
        v337 = 0LL;
      else
        v337 = (_QWORD **)((char *)v178 + 8LL * nn - (((_BYTE)v334 + 15) & 7) + v334 + 15);
      if ( *v337 )
        v177 = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v337 + 184LL))(**v337);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v175 + 184LL))(v175) )
    {
      v179 = (struct _LIST_ENTRY **)(v5 + 336);
      goto LABEL_283;
    }
    v338 = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( !v338 )
      goto LABEL_683;
    v339 = v338->Flink;
    if ( v338->Flink == v338 )
      goto LABEL_683;
    while ( 1 )
    {
      v179 = &v339[-23].Blink;
      if ( (struct CVisualTree *)v339[2].Flink == v175 )
        break;
      v339 = v339->Flink;
      if ( v339 == v338 )
        goto LABEL_286;
    }
LABEL_283:
    if ( v179 && v179[32] != v179[33][1].Flink[31].Flink && v177 )
    {
      v177 = CVisual::FindTreeData(v177, v175);
      v176 = 1;
    }
    else
    {
LABEL_683:
    {
LABEL_286:
      v180 = *(CVisual **)(v5 + 88);
      v177 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v175 + 184LL))(v175) )
      {
        v177 = (CVisual *)((char *)v180 + 336);
      }
      else
      {
        v340 = CVisual::GetTreeDataListHead(v180);
        if ( v340 )
        {
          v341 = v340->Flink;
          if ( v340->Flink != v340 )
          {
            while ( (struct CVisualTree *)v341[2].Flink != v175 )
            {
              v341 = v341->Flink;
              if ( v341 == v340 )
                goto LABEL_288;
            }
            v177 = (struct CTreeData *)&v341[-23].Blink;
          }
        }
      }
    }
LABEL_288:
      v46 = v384;
    }
    if ( !v177 )
    {
LABEL_599:
      v181 = 0LL;
      if ( g_pComposition )
        v181 = *((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v181 = *((_QWORD *)v177 + 31);
    }
    if ( *((_QWORD *)v46 + 31) < v181 )
      CVisual::UpdateWorldTransform((CVisual *)v5, v175, v46, v176, v177);
    v42 = v386;
    if ( *((_QWORD *)v46 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 33) + 16LL) + 496LL) )
      *v386 = 1;
    v4 = 1;
    goto LABEL_144;
  }
  *v42 = 1;
LABEL_67:
  *(_DWORD *)(v5 + 96) &= 0xFFFC00FF;
  *(_BYTE *)(v5 + 96) = *(_DWORD *)(v5 + 96) | 0x10;
  if ( !*v42 )
  {
LABEL_145:
    if ( (*(_BYTE *)(v5 + 272) & 5) == 0 && ((*(_BYTE *)(v5 + 96) & 8) == 0 || *(_DWORD *)(v13 - 12)) )
    {
      v82 = v381;
      goto LABEL_113;
    }
  }
  v48 = v393;
  v49 = v392;
  v50 = v391;
  v51 = *((_QWORD *)v381 + 1);
  v52 = *(_QWORD *)v381;
  v53 = v390;
  v54 = v380;
  *(_QWORD *)&v399.x = v51;
  while ( 2 )
  {
    if ( v52 != v51 )
    {
      v55 = 0LL;
      if ( v5 == *(_QWORD *)(*(_QWORD *)(v13 - 24) + 64LL) )
        v56 = 0LL;
      else
        v56 = *(_QWORD *)(v5 + 88);
      v57 = *(_QWORD *)(v5 + 248) == 0LL;
      v398 = 0;
      *(_QWORD *)&v404 = 0LL;
      v58 = !v57
         && (*(_BYTE *)(v5 + 102) & 1) == 0
         && (!v56 || *(_DWORD *)(v56 + 108) != 1)
         && (*(_DWORD *)(v5 + 108) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v5 + 80)));
      v59 = *(struct CManipulationManager **)(v52 + 432);
      v60 = v397;
      v379 = v58;
      v383 = v59;
      if ( !v58 )
        v60 = 0LL;
      v61 = *(_QWORD *)v59;
      *(_QWORD *)&v405 = v60;
      if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(v61 + 184))(v59) )
      {
        v63 = v5 + 336;
        goto LABEL_78;
      }
      v106 = *(_QWORD *)(v5 + 232);
      if ( *(int *)v106 >= 0 )
        goto LABEL_614;
      v107 = *(unsigned int *)(v106 + 4);
      v62 = (_QWORD *)(v106 + 8);
      for ( i1 = 0LL; (unsigned int)i1 < (unsigned int)v107; v62 = (_QWORD *)((char *)v62 + 1) )
      {
        if ( *(_BYTE *)v62 == 1 )
          break;
        i1 = (unsigned int)(i1 + 1);
      }
      if ( (unsigned int)i1 >= (unsigned int)v107 )
      {
        v109 = 0LL;
      }
      else
      {
        LODWORD(v62) = v107 + 15;
        v109 = (_QWORD *)(v106 + v107 + 15 + 8 * i1 - (((_BYTE)v107 + 15) & 7));
      }
      v110 = (_QWORD *)*v109;
      if ( !*v109 )
        goto LABEL_614;
      v62 = (_QWORD *)*v110;
      if ( (_QWORD *)*v110 == v110 )
        goto LABEL_614;
      while ( 1 )
      {
        v63 = (__int64)(v62 - 45);
        if ( (struct CManipulationManager *)v62[4] == v59 )
          break;
        v62 = (_QWORD *)*v62;
        if ( v62 == v110 )
          goto LABEL_614;
      }
LABEL_78:
      if ( v63 )
      {
        v64 = 0;
        v382 = 0;
        if ( v5 == *((_QWORD *)v59 + 8) )
          goto LABEL_277;
        v65 = *(_DWORD **)(v5 + 232);
        v66 = 0LL;
        if ( (*v65 & 0x1000000) != 0 )
        {
          v292 = (unsigned int)v65[1];
          v293 = v65 + 2;
          for ( i2 = 0; i2 < (unsigned int)v292; ++v293 )
          {
            if ( *v293 == 8 )
              break;
            ++i2;
          }
          if ( i2 >= (unsigned int)v292 )
            v295 = 0LL;
          else
            v295 = (_QWORD **)((char *)v65 + 8LL * i2 - (((_BYTE)v292 + 15) & 7) + v292 + 15);
          if ( *v295 )
            v66 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v295 + 184LL))(**v295);
        }
        if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v59 + 184LL))(v59) )
        {
          v67 = (_QWORD *)(v5 + 336);
          goto LABEL_83;
        }
        v111 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v111 >= 0 )
          goto LABEL_684;
        v112 = *(unsigned int *)(v111 + 4);
        v113 = (_BYTE *)(v111 + 8);
        for ( i3 = 0LL; (unsigned int)i3 < (unsigned int)v112; ++v113 )
        {
          if ( *v113 == 1 )
            break;
          i3 = (unsigned int)(i3 + 1);
        }
        v115 = (unsigned int)i3 >= (unsigned int)v112
             ? 0LL
             : (_QWORD **)(v111 + v112 + 15 + 8 * i3 - (((_BYTE)v112 + 15) & 7));
        v116 = *v115;
        if ( !*v115 )
          goto LABEL_684;
        v117 = (_QWORD *)*v116;
        if ( (_QWORD *)*v116 == v116 )
          goto LABEL_684;
        while ( 1 )
        {
          v67 = v117 - 45;
          if ( (struct CManipulationManager *)v117[4] == v59 )
            break;
          v117 = (_QWORD *)*v117;
          if ( v117 == v116 )
            goto LABEL_86;
        }
LABEL_83:
        if ( v67 && v67[32] != *(_QWORD *)(*(_QWORD *)(v67[33] + 16LL) + 496LL) && v66 )
        {
          v55 = CVisual::FindTreeData(v66, v59);
          v64 = 1;
        }
        else
        {
LABEL_684:
        {
LABEL_86:
          v68 = *(_QWORD *)(v5 + 88);
          v55 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v59 + 184LL))(v59) )
          {
            v55 = (struct CTreeData *)(v68 + 336);
          }
          else
          {
            v118 = *(_QWORD *)(v68 + 232);
            if ( *(int *)v118 < 0 )
            {
              v119 = *(unsigned int *)(v118 + 4);
              v120 = (_BYTE *)(v118 + 8);
              for ( i4 = 0LL; (unsigned int)i4 < (unsigned int)v119; ++v120 )
              {
                if ( *v120 == 1 )
                  break;
                i4 = (unsigned int)(i4 + 1);
              }
              v122 = (unsigned int)i4 >= (unsigned int)v119
                   ? 0LL
                   : (_QWORD **)(v119 + 15 + v118 + 8 * i4 - (((_BYTE)v119 + 15) & 7));
              v123 = *v122;
              if ( *v122 )
              {
                v124 = (_QWORD *)*v123;
                if ( (_QWORD *)*v123 != v123 )
                {
                  while ( (struct CManipulationManager *)v124[4] != v59 )
                  {
                    v124 = (_QWORD *)*v124;
                    if ( v124 == v123 )
                      goto LABEL_88;
                  }
                  v55 = (struct CTreeData *)(v124 - 45);
                }
              }
            }
          }
        }
LABEL_88:
          v64 = v382;
        }
        if ( !v55 )
        {
LABEL_277:
          v69 = 0LL;
          if ( g_pComposition )
            v69 = *((_QWORD *)g_pComposition + 62);
        }
        else
        {
          v69 = *((_QWORD *)v55 + 31);
        }
        if ( *(_QWORD *)(v63 + 248) < v69 )
        {
          v129 = (struct CTreeData *)((char *)v55 + 288);
          v130 = (struct CMILMatrix *)v395;
          if ( !v55 )
            v129 = 0LL;
          v411 = 0;
          v57 = *(_QWORD *)(v5 + 248) == 0LL;
          v396 = 0;
          if ( v57 )
            v130 = 0LL;
          CVisual::CalcTransform((CVisual *)v5, v383, v129, &v380, (struct CMILMatrix *)&lpMem, v130);
          if ( v64 || !v129 )
          {
            LOBYTE(v131) = 1;
          }
          else if ( v380 )
          {
            IsEqual = CMILMatrix::IsEqualTo<0>((float *)v129, (float *)&lpMem);
            v131 = IsEqual;
            LOBYTE(v131) = !IsEqual;
          }
          else
          {
            LOBYTE(v131) = 0;
          }
          v132 = v395;
          if ( !*(_QWORD *)(v5 + 248) )
            v132 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, LPVOID *, _BOOL8, _BYTE *))(*(_QWORD *)v63 + 48LL))(
                 v63,
                 &lpMem,
                 v131,
                 v132) )
          {
            v133 = *(_DWORD **)(v5 + 232);
            if ( (*v133 & 0x800000) != 0 )
            {
              v134 = (unsigned int)v133[1];
              v135 = v133 + 2;
              for ( i5 = 0LL; (unsigned int)i5 < (unsigned int)v134; ++v135 )
              {
                if ( *v135 == 9 )
                  break;
                i5 = (unsigned int)(i5 + 1);
              }
              if ( (unsigned int)i5 >= (unsigned int)v134 )
                v137 = 0LL;
              else
                v137 = (_QWORD *)((char *)v133 + 8 * i5 - (((_BYTE)v134 + 15) & 7) + v134 + 15);
              if ( *v137 && (*(_BYTE *)(v5 + 101) & 0x40) != 0 )
              {
                v383 = 0LL;
                v342 = *(CComposition **)(v5 + 16);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v383);
                ManipulationManager = CComposition::GetManipulationManager(v342, &v383);
                if ( ManipulationManager >= 0 )
                  CManipulationManager::NotifyVisualPropertyChange(
                    v383,
                    (struct CVisual *)v5,
                    (const struct CMILMatrix *)&lpMem);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v383);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v63 + 248) )
          ModuleFailFastForHRESULT(2291674884LL, retaddr);
        v53 = *(_OWORD *)(v63 + 288);
        v70 = v405;
        v71 = *(_DWORD *)(v63 + 352);
        v54 = *(_BYTE *)(v63 + 11);
        v390 = v53;
        v394 = v71;
        v50 = *(_OWORD *)(v63 + 304);
        v49 = *(_OWORD *)(v63 + 320);
        v391 = v50;
        v392 = v49;
        v48 = *(_OWORD *)(v63 + 336);
        v393 = v48;
        if ( (_QWORD)v405 )
        {
          v138 = *(_QWORD *)(v63 + 272);
          if ( v138 )
          {
            v139 = *(_OWORD *)(v138 + 16);
            *(_OWORD *)v405 = *(_OWORD *)v138;
            v140 = *(_OWORD *)(v138 + 32);
            *(_OWORD *)(v70 + 16) = v139;
            v141 = *(_OWORD *)(v138 + 48);
            v142 = *(_DWORD *)(v138 + 64);
            *(_OWORD *)(v70 + 32) = v140;
            *(_OWORD *)(v70 + 48) = v141;
          }
          else
          {
            v142 = *(_DWORD *)(v63 + 352);
            *(_OWORD *)v405 = v53;
            *(_OWORD *)(v70 + 16) = v50;
            *(_OWORD *)(v70 + 32) = v49;
            *(_OWORD *)(v70 + 48) = v48;
          }
          *(_DWORD *)(v70 + 64) = v142;
        }
      }
      else
      {
LABEL_614:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v62, 0LL, 0, -2003292412, 0x6ADu, 0LL);
      }
      if ( !v379 )
      {
LABEL_95:
        if ( !v54 )
        {
LABEL_96:
          v51 = *(_QWORD *)&v399.x;
          v52 += 456LL;
          continue;
        }
        if ( *(_DWORD *)(v52 + 360) != *(_DWORD *)(v52 + 364) )
        {
LABEL_188:
          v125 = v394;
          v126 = 68LL * *(unsigned int *)(v52 + 360);
          v127 = *(_QWORD *)(v52 + 376);
          *(_OWORD *)(v126 + v127) = v53;
          *(_OWORD *)(v126 + v127 + 16) = v50;
          *(_OWORD *)(v126 + v127 + 32) = v49;
          *(_OWORD *)(v126 + v127 + 48) = v48;
          *(_DWORD *)(v126 + v127 + 64) = v125;
          ++*(_DWORD *)(v52 + 360);
          v128 = *(_DWORD *)(v52 + 384);
          if ( v128 <= *(_DWORD *)(v52 + 360) )
            v128 = *(_DWORD *)(v52 + 360);
          *(_DWORD *)(v52 + 384) = v128;
          goto LABEL_515;
        }
        v216 = 2LL * *(unsigned int *)(v52 + 364);
        if ( v216 > 0xFFFFFFFF )
        {
          v349 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, -2147024362, 0x64u, 0LL);
        }
        else
        {
          if ( (unsigned int)v216 <= 8 )
            LODWORD(v216) = 8;
          v217 = v216;
          if ( (unsigned int)v216 == 8LL )
            v218 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v218 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v216;
          if ( v218 <= 0x44 )
          {
            v349 = -2147024809;
          }
          else
          {
            v219 = GetProcessHeap();
            v220 = HeapAlloc(v219, 0, 68LL * (unsigned int)v216);
            if ( v220 )
            {
              v221 = 68LL * *(unsigned int *)(v52 + 360);
              if ( v221 <= 0xFFFFFFFF )
              {
                memcpy_0(v220, *(const void **)(v52 + 376), (unsigned int)v221);
                v222 = *(void **)(v52 + 376);
                if ( v222 )
                {
                  v307 = GetProcessHeap();
                  HeapFree(v307, 0, v222);
                }
                *(_QWORD *)(v52 + 376) = v220;
                *(_DWORD *)(v52 + 364) = v216;
                goto LABEL_188;
              }
              v349 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v221, 0LL, 0, -2147024362, 0x6Du, 0LL);
              v350 = GetProcessHeap();
              HeapFree(v350, 0, v220);
              goto LABEL_628;
            }
            v349 = -2147024882;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v217, 0LL, 0, v349, 0x6Bu, 0LL);
        }
LABEL_628:
        MilInstrumentationCheckHR_MaybeFailFast(v351, 0LL, 0, v349, 0x36u, 0LL);
LABEL_515:
        v310 = (_QWORD *)v404;
        if ( !(_QWORD)v404 )
        {
          v311 = *(_QWORD *)(v52 + 432);
          v310 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v311 + 184LL))(v311) )
          {
            v310 = (_QWORD *)(v5 + 336);
          }
          else
          {
            v312 = *(_QWORD *)(v5 + 232);
            if ( *(int *)v312 < 0 )
            {
              v313 = *(unsigned int *)(v312 + 4);
              v314 = (_BYTE *)(v312 + 8);
              for ( i6 = 0LL; (unsigned int)i6 < (unsigned int)v313; ++v314 )
              {
                if ( *v314 == 1 )
                  break;
                i6 = (unsigned int)(i6 + 1);
              }
              v316 = (unsigned int)i6 >= (unsigned int)v313
                   ? 0LL
                   : (_QWORD **)(v313 + 15 + v312 + 8 * i6 - (((_BYTE)v313 + 15) & 7));
              v317 = *v316;
              if ( *v316 )
              {
                v318 = (_QWORD *)*v317;
                if ( (_QWORD *)*v317 != v317 )
                {
                  while ( v318[4] != v311 )
                  {
                    v318 = (_QWORD *)*v318;
                    if ( v318 == v317 )
                      goto LABEL_518;
                  }
                  v310 = v318 - 45;
                }
              }
            }
          }
        }
LABEL_518:
        *((_BYTE *)v310 + 8) = 1;
        goto LABEL_96;
      }
      v143 = *(CGeometry **)(v5 + 248);
      v387 = 0LL;
      v388 = 0;
      v402 = 0LL;
      ShapeData = CGeometry::GetShapeData(v143, (const struct D2D_SIZE_F *)(v5 + 140), (struct CShapePtr *)&v387);
      v146 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v145, 0LL, 0, ShapeData, 0x62u, 0LL);
      }
      else
      {
        v147 = v387;
        v148 = -2003292412;
        if ( !v387 )
          goto LABEL_228;
        v149 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v387)[6])(
                 v387,
                 &v402,
                 0LL);
        v148 = v149;
        v146 = v149;
        if ( v149 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v150, 0LL, 0, v149, 0x140u, 0LL);
        }
        else
        {
          v147 = v387;
LABEL_228:
          v146 = v148;
          if ( v148 >= 0 )
          {
LABEL_229:
            if ( v146 == -2003304438 )
            {
              v146 = 0;
              v402 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            }
            if ( v388 && v147 )
              (**v147)(v147, 1LL);
            v387 = 0LL;
            v388 = 0;
            if ( (v146 & 0x80000000) != 0 )
            {
              v352 = 552LL;
              goto LABEL_634;
            }
            v404 = 0LL;
            CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v397, (struct MilRectF *)&v402);
            v151 = *(_DWORD *)(v52 + 392);
            v405 = 0LL;
            if ( v151 )
              v152 = *(_OWORD *)(*(_QWORD *)(v52 + 408) + 16LL * (unsigned int)(v151 - 1));
            else
              v152 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v405 = v152;
            v401 = v404;
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v405, &v401);
            if ( *(_DWORD *)(v52 + 392) == *(_DWORD *)(v52 + 396) )
            {
              v248 = 2LL * *(unsigned int *)(v52 + 396);
              if ( v248 > 0xFFFFFFFF )
              {
                v346 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v153, 0LL, 0, -2147024362, 0x64u, 0LL);
                v146 = -2147024362;
                goto LABEL_632;
              }
              if ( (unsigned int)v248 <= 8 )
                LODWORD(v248) = 8;
              if ( (unsigned int)v248 == 8LL )
                v249 = 0x1FFFFFFFFFFFFFFFLL;
              else
                v249 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v248;
              if ( v249 <= 0x10 )
              {
                v344 = -2147024809;
LABEL_622:
                v346 = v344;
                MilInstrumentationCheckHR_MaybeFailFast(v153, 0LL, 0, v344, 0x6Bu, 0LL);
LABEL_532:
                v146 = v346;
LABEL_632:
                MilInstrumentationCheckHR_MaybeFailFast(v348, 0LL, 0, v346, 0x31u, 0LL);
                v352 = 559LL;
LABEL_634:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v352,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                  (const char *)v146,
                  v375);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x364,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                  (const char *)v146,
                  v378);
                return v146;
              }
              v250 = GetProcessHeap();
              v251 = HeapAlloc(v250, 0, 16LL * (unsigned int)v248);
              if ( !v251 )
              {
                v344 = -2147024882;
                goto LABEL_622;
              }
              v252 = 16LL * *(unsigned int *)(v52 + 392);
              if ( v252 > 0xFFFFFFFF )
              {
                v346 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
                v347 = GetProcessHeap();
                HeapFree(v347, 0, v251);
                goto LABEL_532;
              }
              memcpy_0(v251, *(const void **)(v52 + 408), (unsigned int)v252);
              v253 = *(void **)(v52 + 408);
              if ( v253 )
              {
                v345 = GetProcessHeap();
                HeapFree(v345, 0, v253);
              }
              *(_QWORD *)(v52 + 408) = v251;
              *(_DWORD *)(v52 + 396) = v248;
            }
            *(_OWORD *)(*(_QWORD *)(v52 + 408) + 16LL * *(unsigned int *)(v52 + 392)) = v405;
            v154 = *(_DWORD *)(v52 + 416);
            if ( v154 <= ++*(_DWORD *)(v52 + 392) )
              v154 = *(_DWORD *)(v52 + 392);
            *(_DWORD *)(v52 + 416) = v154;
            v319 = *(_QWORD *)(v52 + 432);
            v320 = 0LL;
            *(_QWORD *)&v404 = 0LL;
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v319 + 184LL))(v319) )
            {
              v320 = (_QWORD *)(v5 + 336);
              goto LABEL_535;
            }
            v321 = *(_QWORD *)(v5 + 232);
            if ( *(int *)v321 < 0 )
            {
              v322 = *(unsigned int *)(v321 + 4);
              v70 = v321 + 8;
              for ( i7 = 0LL; (unsigned int)i7 < (unsigned int)v322; ++v70 )
              {
                if ( *(_BYTE *)v70 == 1 )
                  break;
                i7 = (unsigned int)(i7 + 1);
              }
              if ( (unsigned int)i7 >= (unsigned int)v322 )
              {
                v324 = 0LL;
              }
              else
              {
                LODWORD(v70) = v322 + 15;
                v324 = (_QWORD **)(v322 + 15 + v321 + 8 * i7 - (((_BYTE)v322 + 15) & 7));
              }
              v325 = *v324;
              if ( *v324 )
              {
                v326 = (_QWORD *)*v325;
                if ( (_QWORD *)*v325 != v325 )
                {
                  while ( v326[4] != v319 )
                  {
                    v326 = (_QWORD *)*v326;
                    if ( v326 == v325 )
                      goto LABEL_536;
                  }
                  v320 = v326 - 45;
LABEL_535:
                  *(_QWORD *)&v404 = v320;
                }
              }
            }
LABEL_536:
            *((_BYTE *)v320 + 9) = 1;
            goto LABEL_95;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v147, 0LL, 0, v148, 0x63u, 0LL);
      }
      v147 = v387;
      goto LABEL_229;
    }
    break;
  }
  v4 = 1;
  v82 = v381;
  if ( (*(_BYTE *)(v5 + 96) & 8) != 0 )
    CPreComputeContext::CollectAdditionalDirtyRectsForSubTrees(v381, (struct CVisual *)v5);
  v46 = v384;
LABEL_113:
  if ( v46 )
  {
    if ( !v4
      && ((v101 = *(_DWORD **)(v5 + 232), (*v101 & 0x800000) != 0)
       && (v303 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v101, 9LL)) != 0
       && (v304 = *(_QWORD *)(v303 + 104)) != 0
       && *(_QWORD *)(v304 + 64)
       || (*(_BYTE *)(v5 + 102) & 0x10) != 0) )
    {
      v83 = v385;
      CVisual::EnsureWorldTransform((CVisual *)v5, v385, v46);
    }
    else
    {
      v83 = v385;
    }
    if ( (*(_BYTE *)(v5 + 102) & 0x20) != 0 )
    {
      v353 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v83 + 216LL))(v83);
      if ( v353 )
      {
        LOBYTE(v354) = *(_DWORD *)(v13 - 12) != 0;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v353 + 40LL))(v353, v5, v354);
      }
    }
    v84 = *(_DWORD **)(v5 + 232);
    if ( (*v84 & 0x800000) == 0 )
      goto LABEL_685;
    v182 = (unsigned int)v84[1];
    v183 = v84 + 2;
    v184 = 0;
    if ( (_DWORD)v182 )
    {
      v185 = v84 + 2;
      do
      {
        if ( *v185 == 9 )
          break;
        ++v184;
        ++v185;
      }
      while ( v184 < (unsigned int)v182 );
    }
    v186 = v184 >= (unsigned int)v182 ? 0LL : (__int64)v84 + v182 + 8LL * v184 - (((_BYTE)v182 + 15) & 7) + 15;
    if ( *(_QWORD *)v186 && (v187 = *(_QWORD *)(*(_QWORD *)v186 + 104LL)) != 0 && *(_QWORD *)(v187 + 64) )
    {
      v188 = 0LL;
      for ( i8 = 0; i8 < (unsigned int)v182; ++v183 )
      {
        if ( *v183 == 9 )
          break;
        ++i8;
      }
      if ( i8 >= (unsigned int)v182 )
        v190 = 0LL;
      else
        v190 = (__int64)v84 + 8LL * i8 - (((_BYTE)v182 + 15) & 7) + v182 + 15;
      if ( *(_QWORD *)v190 )
      {
        v191 = *(_QWORD *)(*(_QWORD *)v190 + 104LL);
        if ( v191 )
          v188 = *(_QWORD *)(v191 + 64);
      }
      *(_QWORD *)&v399.x = v188;
      CWatermarkStack<void *,2,2,10>::Push((char *)v82 + 1488, &v399);
      v192 = *(_BYTE *)(v5 + 100) | 8;
      *(_BYTE *)(v5 + 100) = v192;
      v193 = (v192 & 0x20) != 0;
      if ( v193 != *((_BYTE *)v82 + 1960) )
      {
        *((_BYTE *)v82 + 1960) = v193;
        goto LABEL_313;
      }
    }
    else
    {
LABEL_685:
      if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 && !*((_BYTE *)v82 + 1960) )
      {
        *((_BYTE *)v82 + 1960) = 1;
LABEL_313:
        *(_BYTE *)(v5 + 100) |= 0x10u;
      }
    }
  }
  if ( *(char *)(v5 + 102) < 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x40000) != 0 )
    {
      v275 = CVisual::CalculateWorldRenderingScale((CVisual *)v5);
      if ( v275 > 0.00000011920929 )
      {
        *(float *)&v383 = CVisual::GetWorldRenderingScaleOverride((CVisual *)v5) / v275;
        v276 = CWatermarkStack<float,2,2,10>::Push((char *)v82 + 1424, &v383);
        v277 = v276;
        if ( v276 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3BF,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v276,
            v375);
          return v277;
        }
        *(_BYTE *)(v5 + 100) |= 2u;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x20000) != 0 )
    {
      CVisual::GetWorldUpVectorOverride((CVisual *)v5, (struct D2D_VECTOR_3F *)&v405);
      CMILMatrix::Transform3DVector((CMILMatrix *)&v390, &v399, (const struct D2D_VECTOR_3F *)&v405);
      y = v399.y;
      x = v399.x;
      v357 = sqrtf_0((float)(y * y) + (float)(x * x));
      if ( v357 > 0.00000011920929 )
      {
        *(float *)&v384 = x / v357;
        *((float *)&v384 + 1) = y / v357;
        v358 = CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)v82 + 1456, &v384);
        v359 = v358;
        if ( v358 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3D7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v358,
            v375);
          return v359;
        }
        *(_BYTE *)(v5 + 100) |= 4u;
      }
    }
  }
  if ( (*(_BYTE *)(v5 + 102) & 0x10) != 0
    && v46
    && *((_QWORD *)v46 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 33) + 16LL) + 496LL) )
  {
    TopByReference = CWatermarkStack<D2D_VECTOR_2F,2,2,10>::GetTopByReference((char *)v82 + 1456);
    v280 = (float *)CWatermarkStack<float,64,2,10>::GetTopByReference((char *)v82 + 1424, v279, TopByReference);
    CVisual::IssueContextUpdateNotification((CVisual *)v5, *v280, v281);
  }
  v85 = *(_DWORD **)(v5 + 232);
  if ( (*v85 & 0x200000) != 0 )
  {
    v260 = (unsigned int)v85[1];
    v261 = v85 + 2;
    for ( i9 = 0LL; (unsigned int)i9 < (unsigned int)v260; ++v261 )
    {
      if ( *v261 == 11 )
        break;
      i9 = (unsigned int)(i9 + 1);
    }
    if ( (unsigned int)i9 >= (unsigned int)v260 )
      v263 = 0LL;
    else
      v263 = (CWindowBackgroundTreatment **)((char *)v85 + 8 * i9 - (((_BYTE)v260 + 15) & 7) + v260 + 15);
    v264 = *v263;
    CWindowBackgroundTreatment::InvalidateExistingBounds(*v263);
    v265 = v389;
    *((_BYTE *)v264 + 302) = 1;
    v266 = *(_DWORD *)(v265 + 360);
    if ( v266 )
      v267 = (void *)(*(_QWORD *)(v265 + 376) + 68LL * (unsigned int)(v266 - 1));
    else
      v267 = &CMILMatrix::Identity;
    CWindowBackgroundTreatment::SetWorldTransform(v264, v267, 1LL);
    if ( *((_QWORD *)v264 + 38) )
    {
      v269 = *(_QWORD *)(v268 + 424);
      v270 = &v401;
      if ( *(_BYTE *)(v269 + 4420) )
        v401 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      else
        v270 = (__int128 *)CDirtyRegion::GetUnoptimizedBounds(v269, &v401);
      CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
        (char *)v82 + 1760,
        v270);
      v271 = v385;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v385 + 184LL))(v385) )
      {
        if ( CVisualTree::_IsInTree(v271, v5, 2) )
          CPreComputeContext::AddVisualToBVIPreRenderList(v82, (struct CVisual *)v5);
      }
    }
  }
  if ( CPreComputeContext::s_depthSortingEnabled )
    CDepthSortingPreComputeHelper::PreComputePreSubgraph(
      (CPreComputeContext *)((char *)v82 + 1856),
      (struct CVisual *)v5);
  v86 = *(_QWORD *)v82;
  v87 = *((_QWORD *)v82 + 1);
  while ( 2 )
  {
    if ( v86 != v87 )
    {
      Parent = CPreComputeContext::SubTreeContext::GetParent(
                 (CPreComputeContext::SubTreeContext *)v86,
                 (struct CVisual *)v5);
      v89 = *(_DWORD **)(v5 + 232);
      v90 = Parent;
      v91 = *(struct CVisualTree **)(v86 + 432);
      v92 = 0;
      v384 = v91;
      if ( (*v89 & 0x20000000) != 0 )
      {
        v360 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v89, 3LL);
        if ( v360 && *(_DWORD *)(v360 + 24) )
          CVisual::ReleaseBspPolygonList((CVisual *)v5);
        v91 = v384;
      }
      v93 = (_DWORD *)((char *)v90 + 108);
      if ( v90 )
      {
        if ( *v93 == 1 )
        {
          v361 = CBspPreComputeHelper::PushStacksForBspChildVisual(
                   (CBspPreComputeHelper *)v86,
                   v91,
                   (struct CVisual *)v5);
          v92 = v361;
          if ( v361 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v362, 0LL, 0, v361, 0x4Bu, 0LL);
LABEL_666:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x422,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)(unsigned int)v92,
              v375);
            return (unsigned int)v92;
          }
        }
      }
      v94 = *(_DWORD *)(v5 + 108) == 1;
      v95 = v90 && *v93 == 1;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5) )
        goto LABEL_319;
      v97 = *(_DWORD **)(v5 + 232);
      if ( (*v97 & 0x400000) == 0 )
        goto LABEL_134;
      v194 = (unsigned int)v97[1];
      v195 = v97 + 2;
      for ( i10 = 0LL; (unsigned int)i10 < (unsigned int)v194; ++v195 )
      {
        if ( *v195 == 10 )
          break;
        i10 = (unsigned int)(i10 + 1);
      }
      v197 = (unsigned int)i10 >= (unsigned int)v194
           ? 0LL
           : (_QWORD *)((char *)v97 + v194 + 8 * i10 - (((_BYTE)v194 + 15) & 7) + 15);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v197 + 56LL))(*v197, 61LL) )
LABEL_319:
        v98 = 1;
      else
LABEL_134:
        v98 = 0;
      if ( !v94 )
        goto LABEL_136;
      if ( v95 )
      {
        if ( !v98 )
        {
LABEL_136:
          ++*(_DWORD *)(v86 + 352);
          if ( v92 < 0 )
            goto LABEL_666;
          v86 += 456LL;
          continue;
        }
      }
      else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v5 + 80)) )
      {
        goto LABEL_136;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_P3D_BUILDING_BSPTREE_Start,
          v96,
          1LL,
          &v401);
      v92 = CBspPreComputeHelper::PushStacksForBspRootVisual((CBspPreComputeHelper *)v86, v384, (struct CVisual *)v5);
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v363, 0LL, 0, v92, 0x51u, 0LL);
        goto LABEL_666;
      }
      goto LABEL_136;
    }
    break;
  }
  if ( (*(_BYTE *)(v5 + 96) & 1) == 0 )
    goto LABEL_139;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 166LL) )
  {
    v364 = CSceneVisual::Get3DContentBounds(v5, v5 + 172);
    v365 = v364;
    if ( v364 >= 0 )
      goto LABEL_139;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v364,
      v375);
    return v365;
  }
  else
  {
    v102 = *(_QWORD *)v5;
    v402 = 0LL;
    v103 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v102 + 224))(v5, &v402);
    v104 = v103;
    if ( v103 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v103,
        v375);
      return v104;
    }
    else
    {
      if ( (**(_DWORD **)(v5 + 232) & 0x20000) != 0 )
      {
        ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(v5);
        if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
        {
          v309 = *(_DWORD *)(v5 + 144);
          DWORD2(v401) = *(_DWORD *)(v5 + 140);
          HIDWORD(v401) = v309;
          *(_QWORD *)&v401 = 0LL;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v402, (float *)&v401);
        }
      }
      v105 = v402;
      *(_OWORD *)(v5 + 172) = v402;
      *(_QWORD *)(v5 + 188) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v401 = v105;
LABEL_139:
      v99 = *(_QWORD *)(v5 + 256);
      if ( v99 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 56LL))(v99, 180LL) )
      {
        v366 = *(_QWORD *)v381;
        v367 = *((_QWORD *)v381 + 1);
        while ( v366 != v367 )
        {
          v401 = 0LL;
          CBaseClipStack::Top(v366 + 392, &v401);
          v368 = CVisual::FindTreeData((CVisual *)v5, *(const struct CVisualTree **)(v366 + 432));
          CTreeData::SetSuperWetInkClip(v368, &v401);
          v366 += 456LL;
        }
      }
      if ( dword_1803E0760
        && (unsigned __int8)tlgKeywordOn(&dword_1803E0760, 0LL)
        && *v386 == (_BYTE)v369
        && (*(_DWORD *)(v5 + 264) > v369 || *(_DWORD *)(v5 + 268) > v369) )
      {
        v370 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v399, word_180338FC0);
        v371 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)&lpMem, v385);
        v372 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v405, "PreCompute-BailWithBackdropsStillInSubtree");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v372, v5, v385, v371, v370);
        v373 = lpMem;
        v374 = ((char *)v407 - (_BYTE *)lpMem) >> 4;
        if ( v374 )
        {
          detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&lpMem,
            0LL,
            v374);
          v373 = lpMem;
        }
        lpMem = 0LL;
        if ( v373 == v409 )
          v373 = 0LL;
        operator delete(v373);
      }
      return 0LL;
    }
  }
}
