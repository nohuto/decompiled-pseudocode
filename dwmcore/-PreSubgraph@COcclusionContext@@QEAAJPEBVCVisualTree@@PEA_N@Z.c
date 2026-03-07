__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v6; // rax
  _QWORD *v8; // r14
  __int64 v9; // r8
  __int64 *v10; // r8
  __int64 *v11; // r15
  void **j; // rax
  void *v13; // r13
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  struct _LIST_ENTRY *k; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // r15
  _BYTE *v21; // rbx
  struct CComposition *v22; // r8
  __int64 v23; // rax
  float *v24; // rdx
  char v25; // bl
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  CMILMatrix *v30; // rcx
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm1_4
  int v35; // eax
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm3_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  unsigned __int64 v43; // rdx
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  bool v48; // r14
  _DWORD *v49; // rdx
  char v50; // al
  float v51; // xmm7_4
  __int64 v52; // rax
  float v53; // xmm1_4
  _BYTE *v54; // r14
  _DWORD *v55; // r8
  __int64 v56; // rax
  struct CTreeData *v57; // r14
  void *v58; // rbx
  unsigned int v59; // eax
  _OWORD *v60; // r13
  CVisual *v61; // r15
  __int64 v62; // rax
  _QWORD *v63; // rcx
  _QWORD *v64; // rbx
  _DWORD *v65; // rdx
  CVisual *v66; // r14
  _QWORD *v67; // rdx
  __int64 v68; // r13
  unsigned __int64 v69; // rax
  unsigned int v70; // ecx
  __int128 v71; // xmm1
  __int128 v72; // xmm1
  _BYTE *v73; // r15
  CGeometry *v74; // rcx
  __int64 v75; // rcx
  int v76; // eax
  bool v77; // al
  unsigned int v78; // r12d
  __int64 v80; // rax
  __int64 v81; // rbx
  unsigned __int8 v82; // dl
  __int64 v83; // rax
  void *v84; // rbx
  int v85; // r8d
  __int64 v86; // rcx
  __int128 v87; // xmm1
  __int64 v88; // rdx
  int v89; // eax
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  unsigned int v92; // eax
  const struct CMILMatrix *v93; // r12
  struct CMILMatrix *v94; // rax
  _BOOL8 v95; // r8
  _BYTE *v96; // r9
  _DWORD *v97; // rdx
  __int64 v98; // rcx
  _BYTE *v99; // r8
  unsigned int mm; // eax
  _QWORD *v101; // r8
  __int64 v102; // r15
  struct _LIST_ENTRY *v103; // rbx
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *v105; // rax
  struct _LIST_ENTRY *v106; // r11
  __int64 v107; // rax
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  int v111; // eax
  int v112; // eax
  unsigned int v113; // ecx
  void (__fastcall ***v114)(void *, __int64); // rcx
  bool v115; // bl
  CGeometry *v116; // rcx
  int ShapeData; // eax
  unsigned int v118; // ecx
  unsigned int v119; // ecx
  int v120; // ebx
  int v121; // eax
  int v122; // eax
  __int128 v123; // xmm0
  unsigned int v124; // ecx
  __int64 v125; // rax
  void *v126; // rbx
  int v127; // r12d
  unsigned int v128; // eax
  unsigned int v129; // ecx
  unsigned int v130; // ecx
  int v131; // r12d
  int v132; // eax
  __int128 v133; // xmm0
  unsigned int v134; // ecx
  __int64 v135; // rax
  void *v136; // rbx
  int v137; // r12d
  unsigned int v138; // eax
  unsigned int v139; // ecx
  __int64 v140; // rax
  void *v141; // rbx
  int v142; // r8d
  unsigned int v143; // eax
  unsigned int v144; // ecx
  __int64 v145; // rax
  void *v146; // rbx
  unsigned int v147; // eax
  bool IsEqual; // al
  __int64 v149; // rdx
  _QWORD *v150; // rcx
  __int64 v151; // rax
  struct _LIST_ENTRY *Blink; // r10
  struct _LIST_ENTRY *v153; // r11
  _QWORD *v154; // rbx
  __int64 v155; // rax
  _BYTE *v156; // rcx
  __int64 n; // rdx
  _QWORD *v158; // rdx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // rax
  _BYTE *v162; // rcx
  __int64 i; // rdx
  _QWORD **v164; // rdx
  _QWORD *v165; // rax
  _QWORD *v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 ii; // rdx
  _QWORD *v170; // rdx
  _QWORD *v171; // rax
  __int64 v172; // r8
  __int64 v173; // rax
  _BYTE *v174; // rcx
  __int64 kk; // rdx
  _QWORD **v176; // rdx
  _QWORD *v177; // rax
  _QWORD *v178; // rcx
  unsigned int Slot; // eax
  __int64 v180; // r10
  __int64 v181; // rcx
  _QWORD **v182; // rdx
  _QWORD *v183; // rax
  _QWORD *v184; // rcx
  struct CTreeData *TreeData; // rax
  int v186; // edx
  __int64 *v187; // r13
  int v188; // r12d
  unsigned int nn; // r15d
  _QWORD *v190; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v192; // r14
  int v193; // eax
  char *v194; // rdx
  struct _LIST_ENTRY *v195; // r8
  __int64 v196; // r8
  _BYTE *v197; // rbx
  struct CEffect *v198; // rax
  struct CEffect *EffectInternal; // rbx
  __int64 v200; // rcx
  _BYTE *v201; // r9
  __int64 jj; // r8
  _QWORD **v203; // r8
  CFilterEffect *v204; // rbx
  unsigned int v205; // r14d
  int v206; // eax
  unsigned int v207; // ecx
  unsigned __int64 v208; // rcx
  void *v209; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *m; // rcx
  unsigned int v212; // r14d
  int v213; // eax
  unsigned int v214; // ecx
  unsigned __int64 v215; // rax
  void *v216; // rbx
  unsigned int v217; // r14d
  int v218; // eax
  unsigned int v219; // ecx
  unsigned __int64 v220; // rax
  void *v221; // rbx
  unsigned int v222; // r14d
  int v223; // eax
  unsigned int v224; // ecx
  unsigned __int64 v225; // rax
  void *v226; // rbx
  unsigned int v227; // r14d
  int v228; // eax
  unsigned int v229; // ecx
  unsigned __int64 v230; // rax
  void *v231; // rbx
  unsigned int v232; // r14d
  int v233; // eax
  void *v234; // rbx
  bool IsOpaque; // al
  HANDLE ProcessHeap; // rax
  __int128 v237; // xmm1
  HANDLE v238; // rax
  unsigned int v239; // ecx
  HANDLE v240; // rax
  unsigned int v241; // ecx
  HANDLE v242; // rax
  unsigned int v243; // ecx
  HANDLE v244; // rax
  int v245; // eax
  HANDLE v246; // rax
  int v247; // [rsp+20h] [rbp-E0h]
  bool v248; // [rsp+30h] [rbp-D0h]
  int v249; // [rsp+34h] [rbp-CCh]
  int v250; // [rsp+34h] [rbp-CCh]
  bool v251; // [rsp+38h] [rbp-C8h] BYREF
  char v252; // [rsp+39h] [rbp-C7h] BYREF
  bool v253; // [rsp+3Ah] [rbp-C6h] BYREF
  char v254; // [rsp+3Bh] [rbp-C5h]
  void *v255[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualTree *v256; // [rsp+50h] [rbp-B0h]
  __int64 v257; // [rsp+58h] [rbp-A8h] BYREF
  float v258; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v259; // [rsp+70h] [rbp-90h] BYREF
  __int128 v260; // [rsp+80h] [rbp-80h]
  __int128 v261; // [rsp+90h] [rbp-70h]
  __int128 v262; // [rsp+A0h] [rbp-60h]
  int v263; // [rsp+B0h] [rbp-50h]
  float v264[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v265[64]; // [rsp+110h] [rbp+10h] BYREF
  int v266; // [rsp+150h] [rbp+50h]
  _BYTE v267[64]; // [rsp+160h] [rbp+60h] BYREF
  int v268; // [rsp+1A0h] [rbp+A0h]
  void *v269[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v270; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v271; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v272; // [rsp+1E0h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v3 = *((_QWORD *)this + 9);
  v4 = *((_DWORD *)this + 358) == 0;
  v258 = *((float *)this + 358);
  v6 = *(_QWORD *)a2;
  v248 = v4;
  v269[0] = a3;
  v256 = a2;
  v8 = 0LL;
  v249 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v6 + 184))(a2) )
  {
    v8 = (_QWORD *)(v3 + 336);
  }
  else
  {
    v160 = *(_QWORD *)(v3 + 232);
    if ( *(int *)v160 < 0 )
    {
      v161 = *(unsigned int *)(v160 + 4);
      v162 = (_BYTE *)(v160 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v161; ++v162 )
      {
        if ( *v162 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v164 = (unsigned int)i >= (unsigned int)v161
           ? 0LL
           : (_QWORD **)(v160 + v161 + 15 + 8 * i - (((_BYTE)v161 + 15) & 7));
      v165 = *v164;
      if ( *v164 )
      {
        v166 = (_QWORD *)*v165;
        if ( (_QWORD *)*v165 != v165 )
        {
          while ( (const struct CVisualTree *)v166[4] != a2 )
          {
            v166 = (_QWORD *)*v166;
            if ( v166 == v165 )
              goto LABEL_3;
          }
          v8 = v166 - 45;
        }
      }
    }
  }
LABEL_3:
  v9 = *((_QWORD *)this + 177);
  if ( v9 )
    v10 = (__int64 *)(v9 + 1888);
  else
    v10 = (__int64 *)&CBackdropVisualImageKey::sc_NoBVIKey;
  v11 = v8 + 25;
  for ( j = (void **)v8[25]; ; ++j )
  {
    if ( j == (void **)v8[26] )
      goto LABEL_253;
    v13 = *j;
    v14 = *v10;
    v255[0] = v13;
    if ( *((_QWORD *)v13 + 1) == v14 && *((_QWORD *)v13 + 2) == v10[1] )
      break;
  }
  if ( v13 )
  {
    v15 = v8 + 33;
LABEL_11:
    *((_BYTE *)v13 + 25) = 10;
    goto LABEL_12;
  }
LABEL_253:
  v15 = v8 + 33;
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *))(*(_QWORD *)v8[33] + 344LL))(v8[33], &v257, v10);
  v13 = (void *)v257;
  v149 = (__int64)(v8[26] - v8[25]) >> 3;
  v255[0] = (void *)v257;
  v150 = detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
           (detail::liberal_expansion_policy *)(v8 + 25),
           v149);
  v151 = v257;
  v257 = 0LL;
  *v150 = v151;
  if ( v257 )
    std::default_delete<COcclusionInfo>::operator()((__int64)v150, (__int64 (__fastcall ***)(_QWORD, __int64))v257);
  if ( v13 )
    goto LABEL_11;
LABEL_12:
  k = *(struct _LIST_ENTRY **)(*v15 + 16LL);
  Flink = k[31].Flink;
  if ( (struct _LIST_ENTRY *)v8[30] != Flink )
  {
    v8[30] = Flink;
    v18 = *v11;
    while ( v18 != v8[26] )
    {
      k = *(struct _LIST_ENTRY **)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
        && k[1].Flink == (struct _LIST_ENTRY *)qword_1803E6E90
        || (v4 = BYTE1(k[1].Blink) == 1, --BYTE1(k[1].Blink), !v4) )
      {
        v18 += 8LL;
      }
      else
      {
        v81 = (v18 - *v11) >> 3;
        detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
          v8 + 25,
          v81,
          1LL);
        v18 = *v11 + 8 * v81;
      }
    }
  }
  v4 = *((_QWORD *)this + 177) == 0LL;
  v19 = -1;
  v20 = *((_QWORD *)this + 10);
  *(_QWORD *)&v270 = v20;
  if ( v4 )
    goto LABEL_19;
  v102 = *((_QWORD *)this + 2);
  v103 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v102 + 8) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v103->Flink[11].Blink)(v103) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v3 + 336);
LABEL_182:
    if ( p_Blink )
    {
      for ( k = p_Blink[21]; k != p_Blink[22]; k = (struct _LIST_ENTRY *)((char *)k + 8) )
      {
        v194 = *(char **)v102;
        v195 = k->Flink[112].Flink;
        if ( (((*(_QWORD *)(v102 + 8) - *(_QWORD *)v102) ^ ((char *)k->Flink[112].Blink - (char *)v195)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        {
          v196 = (char *)v195 - v194;
          while ( &v194[v196] != (char *)k->Flink[112].Blink )
          {
            if ( *(_QWORD *)&v194[v196] != *(_QWORD *)v194 || *(_QWORD *)&v194[v196 + 8] != *((_QWORD *)v194 + 1) )
              goto LABEL_424;
            v194 += 16;
          }
          k->Flink[124].Flink = p_Blink[33][1].Flink[31].Flink;
          v105 = k->Flink;
          goto LABEL_186;
        }
LABEL_424:
        ;
      }
    }
    goto LABEL_185;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
  if ( TreeDataListHead )
  {
    for ( m = TreeDataListHead->Flink; m != TreeDataListHead; m = m->Flink )
    {
      p_Blink = &m[-23].Blink;
      if ( m[2].Flink == v103 )
        goto LABEL_182;
    }
  }
LABEL_185:
  LODWORD(k) = 0;
  v105 = 0LL;
LABEL_186:
  v106 = (struct _LIST_ENTRY *)*((_QWORD *)this + 177);
  if ( v105 == v106 )
  {
    v197 = v269[0];
    v77 = v248;
    v78 = 0;
    *((_BYTE *)this + 1424) = 1;
    *v197 = 0;
    goto LABEL_126;
  }
  if ( !*((_BYTE *)this + 1424) )
  {
    Blink = v106[122].Blink;
    v153 = v106[123].Flink;
    if ( Blink == v153 )
    {
LABEL_262:
      v77 = v248;
      v78 = 0;
      *(_BYTE *)v269[0] = 0;
      goto LABEL_126;
    }
    v154 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      if ( (struct _LIST_ENTRY *)v3 == Blink->Flink )
      {
        k = Blink->Blink;
        if ( ((((char *)Blink[1].Flink - (char *)k) ^ (v154[1] - *v154)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_261:
      Blink += 4;
      if ( Blink == v153 )
        goto LABEL_262;
    }
    v159 = *v154 - (_QWORD)k;
    while ( (struct _LIST_ENTRY *)((char *)k + v159) != (struct _LIST_ENTRY *)v154[1] )
    {
      if ( *(struct _LIST_ENTRY **)((char *)&k->Flink + v159) != k->Flink
        || *(struct _LIST_ENTRY **)((char *)&k->Blink + v159) != k->Blink )
      {
        goto LABEL_261;
      }
      ++k;
    }
  }
  v20 = v270;
  v13 = v255[0];
LABEL_19:
  if ( !v13 )
  {
    v78 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)k, 0LL, 0, -2147024882, 0x10Eu, 0LL);
    return v78;
  }
  *((_BYTE *)v13 + 24) &= 0xF0u;
  v21 = v269[0];
  v22 = g_pComposition;
  *((_DWORD *)v13 + 7) = *((_DWORD *)this + 357);
  *v21 = 1;
  if ( *((_BYTE *)v22 + 1274) )
  {
    if ( !CVisual::HasProtectedContent((CVisual *)v3) )
    {
      v22 = g_pComposition;
      goto LABEL_21;
    }
    v77 = v248;
    v78 = 0;
    *v21 = 0;
LABEL_126:
    if ( !v77 )
      ++*((_DWORD *)this + 358);
    return v78;
  }
LABEL_21:
  v23 = *((_QWORD *)v256 + 8);
  if ( v3 == v23 )
  {
    if ( v23 )
      v24 = (float *)((char *)v256 + 72);
    else
      v24 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v24 = (float *)(v3 + 148);
  }
  v25 = 0;
  LODWORD(v26) = (v24[5] <= v24[4]) + 1;
  if ( v24[2] > *v24 )
    LODWORD(v26) = v24[5] <= v24[4];
  v27 = v26 + 1;
  if ( v24[3] > v24[1] )
    v27 = v26;
  if ( v27 > 1 )
  {
LABEL_132:
    v19 = 0;
    goto LABEL_133;
  }
  v28 = *((_DWORD *)this + 368);
  if ( !v28 || (v26 = (unsigned int)(v28 - 1), (v19 = *(_DWORD *)(*((_QWORD *)this + 186) + 4 * v26)) != 0) )
  {
    v29 = *((_DWORD *)this + 8);
    v272 = 0LL;
    v271 = 0LL;
    if ( v29 )
      v30 = (CMILMatrix *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v29 - 1));
    else
      v30 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v30);
    v31 = *(float *)&v271;
    v32 = *((float *)&v271 + 2);
    if ( *((float *)&v271 + 2) > *(float *)&v271 )
    {
      v33 = *((float *)&v271 + 3);
      v34 = *((float *)&v271 + 1);
      if ( *((float *)&v271 + 3) > *((float *)&v271 + 1) )
      {
        v35 = *((_DWORD *)this + 36);
        if ( v35 )
        {
          v271 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v35 - 1));
          v36 = *(float *)&v271;
          if ( v31 > *(float *)&v271 )
            v36 = v31;
          v37 = *((float *)&v271 + 1);
          v38 = *((float *)&v271 + 1);
          if ( v34 > *((float *)&v271 + 1) )
          {
            v37 = v34;
            v38 = v34;
          }
          v39 = *((float *)&v271 + 2);
          v40 = *((float *)&v271 + 2);
          if ( *((float *)&v271 + 2) > v32 )
          {
            v39 = v32;
            v40 = v32;
          }
          v41 = *((float *)&v271 + 3);
          v42 = *((float *)&v271 + 3);
          if ( *((float *)&v271 + 3) > v33 )
          {
            v41 = v33;
            v42 = v33;
          }
          v33 = v42;
          if ( v40 <= v36 || v41 <= v38 )
          {
            v39 = 0.0;
            v37 = 0.0;
            v36 = 0.0;
            v33 = 0.0;
          }
          v31 = v36;
          v34 = v37;
          v32 = v39;
        }
        v43 = *((_QWORD *)this + 128);
        LODWORD(v26) = 0;
        if ( v43 )
        {
          do
          {
            if ( ((v19 >> v26) & 1) != 0 )
            {
              v44 = v31;
              if ( *((float *)this + 4 * (unsigned int)v26 + 258) > v31 )
                v44 = *((float *)this + 4 * (unsigned int)v26 + 258);
              v45 = v34;
              if ( *((float *)this + 4 * (unsigned int)v26 + 259) > v34 )
                v45 = *((float *)this + 4 * (unsigned int)v26 + 259);
              v46 = v32;
              if ( v32 > *((float *)this + 4 * (unsigned int)v26 + 260) )
                v46 = *((float *)this + 4 * (unsigned int)v26 + 260);
              v47 = v33;
              if ( v33 > *((float *)this + 4 * (unsigned int)v26 + 261) )
                v47 = *((float *)this + 4 * (unsigned int)v26 + 261);
              if ( v46 <= v44 || v47 <= v45 )
              {
                v45 = 0.0;
                v44 = 0.0;
                v46 = 0.0;
                v47 = 0.0;
              }
              if ( v46 > v44 && v47 > v45 )
                goto LABEL_60;
              v19 &= ~(1 << v26);
            }
            LODWORD(v26) = v26 + 1;
          }
          while ( (unsigned int)v26 < v43 );
        }
      }
    }
    v22 = g_pComposition;
    goto LABEL_132;
  }
LABEL_133:
  if ( *((_BYTE *)this + 1206) )
  {
LABEL_60:
    if ( v258 != 0.0 )
      goto LABEL_84;
    if ( (*(_BYTE *)(v3 + 102) & 2) != 0
      || (*(_DWORD *)(v3 + 96) & 0x100) == 0
      || (*(_BYTE *)(v3 + 101) & 0x18) != 0
      || ((*(_DWORD *)(v3 + 200) - 2) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_179;
    }
    if ( *(_DWORD *)(v3 + 108) == 1 )
      v25 = 1;
    v48 = v20 && *(_DWORD *)(v20 + 108) == 1;
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3) )
    {
      v49 = *(_DWORD **)(v3 + 232);
      if ( (*v49 & 0x400000) == 0 )
      {
LABEL_72:
        v50 = 0;
LABEL_73:
        if ( v25 )
        {
          if ( v48 )
          {
            if ( v50 )
              goto LABEL_179;
          }
          else if ( (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 80)) )
          {
            goto LABEL_179;
          }
        }
        v51 = *(float *)&FLOAT_1_0;
        if ( (*v49 & 0x400000) != 0 )
        {
          EffectInternal = CVisual::GetEffectInternal((CVisual *)v3);
          if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                 EffectInternal,
                 58LL) )
          {
            v51 = *((float *)EffectInternal + 20);
          }
        }
        if ( fminf(1.0, fmaxf(v51, 0.0)) >= 1.0 )
        {
          if ( v3 == *((_QWORD *)v256 + 8) )
            goto LABEL_490;
          v52 = *(_QWORD *)(v3 + 224);
          if ( (*(_DWORD *)(v52 + 4) & 0x8000000) != 0 )
          {
            v186 = *(_DWORD *)(v52 + 12);
            v26 = v52 + 12;
            if ( (v186 & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v26 += (v186 & 0xFFFFFF) + 4LL;
                v186 = *(_DWORD *)v26;
              }
              while ( (*(_DWORD *)v26 & 0x7F000000) != 0x5000000 );
            }
            v258 = *(float *)(v26 + 4);
            v53 = v258;
          }
          else
          {
            v53 = *(float *)&FLOAT_1_0;
          }
          if ( fminf(1.0, fmaxf(v53, 0.0)) >= 1.0 )
          {
LABEL_490:
            if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3) )
            {
              if ( (**(_DWORD **)(v3 + 232) & 0x400000) == 0
                || (v204 = CVisual::GetEffectInternal((CVisual *)v3),
                    !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v204 + 56LL))(v204, 61LL))
                || (IsOpaque = CFilterEffect::IsOpaque(v204, (const struct CVisual *)v3)) )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v256 + 184LL))(v256) )
                {
                  TreeData = CVisual::FindTreeData((CVisual *)v3, v256);
                  if ( TreeData )
                  {
                    v26 = *(_QWORD *)(*((_QWORD *)TreeData + 33) + 16LL);
                    if ( *((_QWORD *)TreeData + 32) != *(_QWORD *)(v26 + 496) )
                      goto LABEL_84;
                    goto LABEL_179;
                  }
                }
                LODWORD(v26) = v248;
LABEL_84:
                v54 = v269[0];
                goto LABEL_85;
              }
            }
          }
        }
LABEL_179:
        v248 = 0;
        goto LABEL_84;
      }
      v198 = CVisual::GetEffectInternal((CVisual *)v3);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v198 + 56LL))(v198, 61LL) )
      {
        v49 = *(_DWORD **)(v3 + 232);
        goto LABEL_72;
      }
    }
    v49 = *(_DWORD **)(v3 + 232);
    v50 = 1;
    goto LABEL_73;
  }
  v248 = 0;
  v80 = 0LL;
  if ( v22 )
    v80 = *((_QWORD *)v22 + 62);
  v4 = v8[29] == v80;
  v54 = v269[0];
  if ( !v4 )
    *(_BYTE *)v269[0] = 0;
LABEL_85:
  v55 = *(_DWORD **)(v3 + 232);
  if ( (*v55 & 0x2000000) != 0 )
    goto LABEL_269;
  LODWORD(v26) = *(_DWORD *)(*(_QWORD *)(v3 + 224) + 4LL);
  if ( (v26 & 0x2000000) != 0 || (v26 & 0x4000000) != 0 )
    goto LABEL_269;
  if ( (*v55 & 0x400000) != 0 )
  {
    v155 = (unsigned int)v55[1];
    v156 = v55 + 2;
    for ( n = 0LL; (unsigned int)n < (unsigned int)v155; ++v156 )
    {
      if ( *v156 == 10 )
        break;
      n = (unsigned int)(n + 1);
    }
    v158 = (unsigned int)n >= (unsigned int)v155
         ? 0LL
         : (_QWORD *)((char *)v55 + v155 + 8 * n - (((_BYTE)v155 + 15) & 7) + 15);
    if ( *v158 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v158 + 56LL))(*v158, 61LL) )
      goto LABEL_269;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 93LL)
    && (*(_QWORD *)(v3 + 712) || *(_QWORD *)(v3 + 704)) )
  {
LABEL_269:
    ++*((_DWORD *)this + 359);
    *((_BYTE *)this + 1206) = 0;
  }
  if ( *v54 != 1 )
    goto LABEL_124;
  v56 = *((unsigned int *)this + 369);
  v57 = 0LL;
  v58 = 0LL;
  v269[0] = 0LL;
  if ( *((_DWORD *)this + 368) == (_DWORD)v56 )
  {
    v212 = 2 * v56;
    if ( (unsigned __int64)(2 * v56) > 0xFFFFFFFF )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_95;
    }
    if ( v212 <= 0x40 )
      v212 = 64;
    v213 = HrMalloc(4uLL, v212, v269);
    if ( v213 < 0 )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v214, 0LL, 0, v213, 0x6Bu, 0LL);
      v58 = v269[0];
      goto LABEL_95;
    }
    v215 = 4LL * *((unsigned int *)this + 368);
    if ( v215 > 0xFFFFFFFF )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v214, 0LL, 0, -2147024362, 0x6Du, 0LL);
      v58 = v269[0];
      goto LABEL_95;
    }
    v216 = v269[0];
    memcpy_0(v269[0], *((const void **)this + 186), (unsigned int)v215);
    operator delete(*((void **)this + 186));
    *((_DWORD *)this + 369) = v212;
    v57 = 0LL;
    *((_QWORD *)this + 186) = v216;
    v58 = 0LL;
  }
  *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * *((unsigned int *)this + 368)) = v19;
  v59 = *((_DWORD *)this + 374);
  if ( v59 <= ++*((_DWORD *)this + 368) )
    v59 = *((_DWORD *)this + 368);
  *((_DWORD *)this + 374) = v59;
LABEL_95:
  if ( v58 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v58);
  }
  *((_BYTE *)v13 + 24) |= 1u;
  if ( v19 || *((_BYTE *)this + 1206) )
  {
    v60 = v265;
    v61 = (CVisual *)*((_QWORD *)this + 9);
    if ( !*(_QWORD *)(v3 + 248) )
      v60 = 0LL;
    v269[0] = v60;
    v263 = 0;
    v62 = *(_QWORD *)v256;
    v266 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(v62 + 184))(v256) )
    {
      v64 = (_QWORD *)((char *)v61 + 336);
    }
    else
    {
      v167 = *((_QWORD *)v61 + 29);
      if ( *(int *)v167 >= 0 )
        goto LABEL_448;
      v168 = *(unsigned int *)(v167 + 4);
      v63 = (_QWORD *)(v167 + 8);
      for ( ii = 0LL; (unsigned int)ii < (unsigned int)v168; v63 = (_QWORD *)((char *)v63 + 1) )
      {
        if ( *(_BYTE *)v63 == 1 )
          break;
        ii = (unsigned int)(ii + 1);
      }
      if ( (unsigned int)ii >= (unsigned int)v168 )
      {
        v170 = 0LL;
      }
      else
      {
        LODWORD(v63) = v168 + 15;
        v170 = (_QWORD *)(v167 + v168 + 15 + 8 * ii - (((_BYTE)v168 + 15) & 7));
      }
      v171 = (_QWORD *)*v170;
      if ( !*v170 )
        goto LABEL_448;
      v63 = (_QWORD *)*v171;
      if ( (_QWORD *)*v171 == v171 )
        goto LABEL_448;
      while ( 1 )
      {
        v64 = v63 - 45;
        if ( (struct CVisualTree *)v63[4] == v256 )
          break;
        v63 = (_QWORD *)*v63;
        if ( v63 == v171 )
          goto LABEL_448;
      }
    }
    if ( v64 )
    {
      v254 = 0;
      if ( v61 == *((CVisual **)v256 + 8) )
        goto LABEL_270;
      v65 = (_DWORD *)*((_QWORD *)v61 + 29);
      v66 = 0LL;
      if ( (*v65 & 0x1000000) != 0 )
      {
        v200 = (unsigned int)v65[1];
        v201 = v65 + 2;
        for ( jj = 0LL; (unsigned int)jj < (unsigned int)v200; ++v201 )
        {
          if ( *v201 == 8 )
            break;
          jj = (unsigned int)(jj + 1);
        }
        if ( (unsigned int)jj >= (unsigned int)v200 )
          v203 = 0LL;
        else
          v203 = (_QWORD **)((char *)v65 + v200 + 8 * jj - (((_BYTE)v200 + 15) & 7) + 15);
        if ( *v203 )
          v66 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD **, _BYTE *))(*(_QWORD *)**v203 + 184LL))(
                             **v203,
                             v65,
                             v203,
                             v201);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v256 + 184LL))(v256) )
      {
        v67 = (_QWORD *)((char *)v61 + 336);
      }
      else
      {
        v172 = *((_QWORD *)v61 + 29);
        if ( *(int *)v172 >= 0 )
          goto LABEL_110;
        v173 = *(unsigned int *)(v172 + 4);
        v174 = (_BYTE *)(v172 + 8);
        for ( kk = 0LL; (unsigned int)kk < (unsigned int)v173; ++v174 )
        {
          if ( *v174 == 1 )
            break;
          kk = (unsigned int)(kk + 1);
        }
        v176 = (unsigned int)kk >= (unsigned int)v173
             ? 0LL
             : (_QWORD **)(v173 + 15 + v172 + 8 * kk - (((_BYTE)v173 + 15) & 7));
        v177 = *v176;
        if ( !*v176 )
          goto LABEL_110;
        v178 = (_QWORD *)*v177;
        if ( (_QWORD *)*v177 == v177 )
          goto LABEL_110;
        while ( 1 )
        {
          v67 = v178 - 45;
          if ( (struct CVisualTree *)v178[4] == v256 )
            break;
          v178 = (_QWORD *)*v178;
          if ( v178 == v177 )
            goto LABEL_110;
        }
      }
      if ( v67 && v67[32] != *(_QWORD *)(*(_QWORD *)(v67[33] + 16LL) + 496LL) && v66 )
      {
        v57 = CVisual::FindTreeData(v66, v256);
        v254 = 1;
        goto LABEL_113;
      }
LABEL_110:
      v68 = *((_QWORD *)v61 + 11);
      v57 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v256 + 184LL))(v256) )
      {
        v57 = (struct CTreeData *)(v68 + 336);
      }
      else if ( **(int **)(v68 + 232) < 0 )
      {
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v68 + 232), 1LL);
        v181 = *(unsigned int *)(v180 + 4);
        v182 = Slot >= (unsigned int)v181 ? 0LL : (_QWORD **)(v181 + 15 + v180 + 8LL * Slot - (((_BYTE)v181 + 15) & 7));
        v183 = *v182;
        if ( *v182 )
        {
          v184 = (_QWORD *)*v183;
          if ( (_QWORD *)*v183 != v183 )
          {
            while ( (struct CVisualTree *)v184[4] != v256 )
            {
              v184 = (_QWORD *)*v184;
              if ( v184 == v183 )
                goto LABEL_112;
            }
            v57 = (struct CTreeData *)(v184 - 45);
          }
        }
      }
LABEL_112:
      v60 = v269[0];
LABEL_113:
      if ( v57 )
      {
        v69 = *((_QWORD *)v57 + 31);
LABEL_115:
        if ( v64[31] < v69 )
        {
          v93 = (struct CTreeData *)((char *)v57 + 288);
          v94 = (struct CMILMatrix *)v267;
          if ( !v57 )
            v93 = 0LL;
          v264[16] = 0.0;
          v4 = *((_QWORD *)v61 + 31) == 0LL;
          v268 = 0;
          if ( v4 )
            v94 = 0LL;
          CVisual::CalcTransform(v61, v256, v93, &v253, (struct CMILMatrix *)v264, v94);
          if ( v254 || !v93 )
          {
            LOBYTE(v95) = 1;
          }
          else if ( v253 )
          {
            IsEqual = CMILMatrix::IsEqualTo<0>((float *)v93, v264);
            v95 = IsEqual;
            LOBYTE(v95) = !IsEqual;
          }
          else
          {
            LOBYTE(v95) = 0;
          }
          v96 = v267;
          if ( !*((_QWORD *)v61 + 31) )
            v96 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, float *, _BOOL8, _BYTE *))(*v64 + 48LL))(
                 v64,
                 v264,
                 v95,
                 v96) )
          {
            v97 = (_DWORD *)*((_QWORD *)v61 + 29);
            if ( (*v97 & 0x800000) != 0 )
            {
              v98 = (unsigned int)v97[1];
              v99 = v97 + 2;
              for ( mm = 0; mm < (unsigned int)v98; ++v99 )
              {
                if ( *v99 == 9 )
                  break;
                ++mm;
              }
              if ( mm >= (unsigned int)v98 )
                v101 = 0LL;
              else
                v101 = (_QWORD *)((char *)v97 + v98 + 8LL * mm - (((_BYTE)v98 + 15) & 7) + 15);
              if ( *v101 )
                CVisual::NotifyMidManipulationPropertyChange(v61, (const struct CMILMatrix *)v264);
            }
          }
        }
        if ( !v64[31] )
          ModuleFailFastForHRESULT(2291674884LL, retaddr);
        v70 = *((unsigned __int8 *)v64 + 11);
        v263 = *((_DWORD *)v64 + 88);
        v71 = *((_OWORD *)v64 + 19);
        v259 = *((_OWORD *)v64 + 18);
        v260 = v71;
        v72 = *((_OWORD *)v64 + 21);
        v261 = *((_OWORD *)v64 + 20);
        v262 = v72;
        if ( v60 )
        {
          v107 = v64[34];
          if ( v107 )
          {
            v108 = *(_OWORD *)(v107 + 16);
            *v60 = *(_OWORD *)v107;
            v109 = *(_OWORD *)(v107 + 32);
            v60[1] = v108;
            v110 = *(_OWORD *)(v107 + 48);
            v111 = *(_DWORD *)(v107 + 64);
          }
          else
          {
            v111 = *((_DWORD *)v64 + 88);
            v237 = *((_OWORD *)v64 + 19);
            *v60 = *((_OWORD *)v64 + 18);
            v109 = *((_OWORD *)v64 + 20);
            v60[1] = v237;
            v110 = *((_OWORD *)v64 + 21);
          }
          v60[2] = v109;
          v60[3] = v110;
          *((_DWORD *)v60 + 16) = v111;
        }
LABEL_118:
        if ( !(_BYTE)v70 )
        {
          v73 = v255[0];
          goto LABEL_120;
        }
        if ( v248 )
        {
          if ( (char)v263 >> 6 )
          {
            v82 = (char)v263 >> 6 == 1;
          }
          else
          {
            v82 = CMILMatrix::IsAffine<1>((__int64)&v259, 1)
               && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v259 + 1) - 0.0) & _xmm) < 0.000081380211
               && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v260 - 0.0) & _xmm) < 0.000081380211;
            v70 = v82;
            LOBYTE(v70) = v263 & 0x3F | ((v82 << 7) - 64);
            LOBYTE(v263) = v70;
          }
          if ( !v82 && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(&v259) )
            v248 = 0;
        }
        v83 = *((unsigned int *)this + 9);
        v84 = 0LL;
        v85 = 0;
        v250 = 0;
        v269[0] = 0LL;
        if ( *((_DWORD *)this + 8) != (_DWORD)v83 )
          goto LABEL_149;
        v205 = 2 * v83;
        if ( (unsigned __int64)(2 * v83) > 0xFFFFFFFF )
        {
          v250 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, -2147024362, 0x64u, 0LL);
          v85 = -2147024362;
        }
        else
        {
          if ( v205 <= 8 )
            v205 = 8;
          v206 = HrMalloc(0x44uLL, v205, v269);
          v250 = v206;
          if ( v206 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v207, 0LL, 0, v206, 0x6Bu, 0LL);
          }
          else
          {
            v208 = 68LL * *((unsigned int *)this + 8);
            if ( v208 <= 0xFFFFFFFF )
            {
              v209 = v269[0];
              v250 = 0;
              memcpy_0(v269[0], *((const void **)this + 6), (unsigned int)v208);
              operator delete(*((void **)this + 6));
              *((_DWORD *)this + 9) = v205;
              *((_QWORD *)this + 6) = v209;
              v85 = 0;
              v84 = 0LL;
LABEL_149:
              v86 = *((_QWORD *)this + 6);
              v87 = v260;
              v88 = 68LL * *((unsigned int *)this + 8);
              v89 = v263;
              *(_OWORD *)(v88 + v86) = v259;
              v90 = v261;
              *(_OWORD *)(v88 + v86 + 16) = v87;
              v91 = v262;
              *(_OWORD *)(v88 + v86 + 32) = v90;
              *(_OWORD *)(v88 + v86 + 48) = v91;
              *(_DWORD *)(v88 + v86 + 64) = v89;
              v92 = *((_DWORD *)this + 14);
              if ( v92 <= ++*((_DWORD *)this + 8) )
                v92 = *((_DWORD *)this + 8);
              *((_DWORD *)this + 14) = v92;
              goto LABEL_152;
            }
            v250 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v208, 0LL, 0, -2147024362, 0x6Du, 0LL);
          }
          v85 = v250;
          v84 = v269[0];
        }
LABEL_152:
        if ( v84 )
        {
          v238 = GetProcessHeap();
          HeapFree(v238, 0, v84);
          v85 = v250;
        }
        if ( v85 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x36u, 0LL);
          v78 = v250;
          MilInstrumentationCheckHR_MaybeFailFast(v239, 0LL, 0, v250, 0x19Du, 0LL);
          return v78;
        }
        v73 = v255[0];
        v249 = v85;
        *((_BYTE *)v255[0] + 24) |= 4u;
LABEL_120:
        v74 = *(CGeometry **)(v3 + 248);
        if ( !v74 )
          goto LABEL_121;
        if ( !v248 )
        {
LABEL_207:
          v116 = *(CGeometry **)(v3 + 248);
          *(_QWORD *)&v271 = 0LL;
          BYTE8(v271) = 0;
          *(_OWORD *)v269 = 0LL;
          ShapeData = CGeometry::GetShapeData(v116, (const struct D2D_SIZE_F *)(v3 + 140), (struct CShapePtr *)&v271);
          v249 = ShapeData;
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, ShapeData, 0x56Au, 0LL);
            goto LABEL_480;
          }
          v119 = v271;
          v120 = -2003292412;
          if ( (_QWORD)v271
            && (v121 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD))(*(_QWORD *)v271 + 48LL))(v271, v269, 0LL),
                v249 = v121,
                v120 = v121,
                v121 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0, v121, 0x140u, 0LL);
          }
          else
          {
            v249 = v120;
            if ( v120 >= 0 )
            {
              CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v265, (struct MilRectF *)v269);
              v122 = *((_DWORD *)this + 36);
              v270 = 0LL;
              if ( v122 )
                v123 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v122 - 1));
              else
                v123 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v270 = v123;
              *(_OWORD *)v255 = *(_OWORD *)v269;
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v270, v255);
              v125 = *((unsigned int *)this + 37);
              v126 = 0LL;
              v127 = 0;
              v249 = 0;
              v255[0] = 0LL;
              if ( *((_DWORD *)this + 36) == (_DWORD)v125 )
              {
                v217 = 2 * v125;
                if ( (unsigned __int64)(2 * v125) > 0xFFFFFFFF )
                {
                  v127 = -2147024362;
                  v249 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, -2147024362, 0x64u, 0LL);
                  goto LABEL_217;
                }
                if ( v217 <= 8 )
                  v217 = 8;
                v218 = HrMalloc(0x10uLL, v217, v255);
                v249 = v218;
                v127 = v218;
                if ( v218 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v219, 0LL, 0, v218, 0x6Bu, 0LL);
                  v126 = v255[0];
                  goto LABEL_217;
                }
                v220 = 16LL * *((unsigned int *)this + 36);
                if ( v220 > 0xFFFFFFFF )
                {
                  v127 = -2147024362;
                  v249 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(v219, 0LL, 0, -2147024362, 0x6Du, 0LL);
                  v126 = v255[0];
                  goto LABEL_217;
                }
                v221 = v255[0];
                v127 = 0;
                v249 = 0;
                memcpy_0(v255[0], *((const void **)this + 20), (unsigned int)v220);
                operator delete(*((void **)this + 20));
                *((_DWORD *)this + 37) = v217;
                *((_QWORD *)this + 20) = v221;
                v126 = 0LL;
              }
              *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * *((unsigned int *)this + 36)) = v270;
              v128 = *((_DWORD *)this + 42);
              v129 = ++*((_DWORD *)this + 36);
              if ( v128 <= v129 )
                v128 = *((_DWORD *)this + 36);
              *((_DWORD *)this + 42) = v128;
LABEL_217:
              if ( v126 )
              {
                v240 = GetProcessHeap();
                HeapFree(v240, 0, v126);
              }
              if ( v127 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, v127, 0x31u, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(v241, 0LL, 0, v127, 0x570u, 0LL);
                goto LABEL_480;
              }
              if ( (_QWORD)v271 )
              {
                v249 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)v271 + 88LL))(v271, v269);
                v131 = v249;
                if ( v249 >= 0 )
                {
                  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v265, (struct MilRectF *)v269);
                  v132 = *((_DWORD *)this + 44);
                  v270 = 0LL;
                  if ( v132 )
                    v133 = *(_OWORD *)(*((_QWORD *)this + 24) + 16LL * (unsigned int)(v132 - 1));
                  else
                    v133 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  v270 = v133;
                  *(_OWORD *)v255 = *(_OWORD *)v269;
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v270, v255);
                  v135 = *((unsigned int *)this + 45);
                  v136 = 0LL;
                  v137 = 0;
                  v249 = 0;
                  v255[0] = 0LL;
                  if ( *((_DWORD *)this + 44) == (_DWORD)v135 )
                  {
                    v222 = 2 * v135;
                    if ( (unsigned __int64)(2 * v135) > 0xFFFFFFFF )
                    {
                      v137 = -2147024362;
                      v249 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, -2147024362, 0x64u, 0LL);
                      goto LABEL_228;
                    }
                    if ( v222 <= 8 )
                      v222 = 8;
                    v223 = HrMalloc(0x10uLL, v222, v255);
                    v249 = v223;
                    v137 = v223;
                    if ( v223 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v224, 0LL, 0, v223, 0x6Bu, 0LL);
                      v136 = v255[0];
                      goto LABEL_228;
                    }
                    v225 = 16LL * *((unsigned int *)this + 44);
                    if ( v225 > 0xFFFFFFFF )
                    {
                      v137 = -2147024362;
                      v249 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v224, 0LL, 0, -2147024362, 0x6Du, 0LL);
                      v136 = v255[0];
                      goto LABEL_228;
                    }
                    v226 = v255[0];
                    v137 = 0;
                    v249 = 0;
                    memcpy_0(v255[0], *((const void **)this + 24), (unsigned int)v225);
                    operator delete(*((void **)this + 24));
                    *((_DWORD *)this + 45) = v222;
                    *((_QWORD *)this + 24) = v226;
                    v136 = 0LL;
                  }
                  *(_OWORD *)(*((_QWORD *)this + 24) + 16LL * *((unsigned int *)this + 44)) = v270;
                  v138 = *((_DWORD *)this + 50);
                  v139 = ++*((_DWORD *)this + 44);
                  if ( v138 <= v139 )
                    v138 = *((_DWORD *)this + 44);
                  *((_DWORD *)this + 50) = v138;
LABEL_228:
                  if ( v136 )
                  {
                    v242 = GetProcessHeap();
                    HeapFree(v242, 0, v136);
                  }
                  if ( v137 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v139, 0LL, 0, v137, 0x31u, 0LL);
                    MilInstrumentationCheckHR_MaybeFailFast(v243, 0LL, 0, v137, 0x577u, 0LL);
                    goto LABEL_480;
                  }
                  v140 = *((unsigned int *)this + 361);
                  v141 = 0LL;
                  v142 = 0;
                  v249 = 0;
                  v255[0] = 0LL;
                  if ( *((_DWORD *)this + 360) != (_DWORD)v140 )
                    goto LABEL_232;
                  v227 = 2 * v140;
                  if ( (unsigned __int64)(2 * v140) > 0xFFFFFFFF )
                  {
                    v249 = -2147024362;
                    MilInstrumentationCheckHR_MaybeFailFast(v139, 0LL, 0, -2147024362, 0x64u, 0LL);
                    v142 = -2147024362;
                  }
                  else
                  {
                    if ( v227 <= 0x40 )
                      v227 = 64;
                    v228 = HrMalloc(4uLL, v227, v255);
                    v249 = v228;
                    if ( v228 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v229, 0LL, 0, v228, 0x6Bu, 0LL);
                    }
                    else
                    {
                      v230 = 4LL * *((unsigned int *)this + 360);
                      if ( v230 <= 0xFFFFFFFF )
                      {
                        v231 = v255[0];
                        v249 = 0;
                        memcpy_0(v255[0], *((const void **)this + 182), (unsigned int)v230);
                        operator delete(*((void **)this + 182));
                        *((_DWORD *)this + 361) = v227;
                        *((_QWORD *)this + 182) = v231;
                        v142 = 0;
                        v141 = 0LL;
LABEL_232:
                        *(_DWORD *)(*((_QWORD *)this + 182) + 4LL * *((unsigned int *)this + 360)) = 0;
                        v143 = *((_DWORD *)this + 366);
                        v144 = ++*((_DWORD *)this + 360);
                        if ( v143 <= v144 )
                          v143 = *((_DWORD *)this + 360);
                        *((_DWORD *)this + 366) = v143;
                        goto LABEL_235;
                      }
                      v249 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v229, 0LL, 0, -2147024362, 0x6Du, 0LL);
                    }
                    v142 = v249;
                    v141 = v255[0];
                  }
LABEL_235:
                  if ( v141 )
                  {
                    v244 = GetProcessHeap();
                    HeapFree(v244, 0, v141);
                    v142 = v249;
                  }
                  if ( v142 >= 0 )
                    goto LABEL_238;
                  MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v142, 0x579u, 0LL);
LABEL_480:
                  v142 = v249;
LABEL_238:
                  if ( BYTE8(v271) )
                  {
                    v144 = v271;
                    if ( (_QWORD)v271 )
                    {
                      (**(void (__fastcall ***)(_QWORD, __int64))v271)(v271, 1LL);
                      v142 = v249;
                    }
                  }
                  if ( v142 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v142, 0x1B4u, 0LL);
                    return (unsigned int)v249;
                  }
                  v73[24] |= 2u;
LABEL_121:
                  v75 = *(_QWORD *)(v3 + 256);
                  v252 = 1;
                  v251 = 0;
                  if ( !v75
                    || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v75 + 280LL))(v75, &v252, &v251),
                        v252) )
                  {
                    v76 = *(_DWORD *)(v3 + 104);
                    if ( (v76 & 0x10) != 0 )
                    {
                      v4 = *(_DWORD *)(v3 + 200) == 0;
                      v252 = 0;
                      v251 = !v4;
                    }
                    else
                    {
                      if ( (v76 & 4) == 0 )
                        goto LABEL_124;
                      v252 = 0;
                      v245 = v76 & 0x7C000;
                      if ( !v245 || (v251 = 1, v245 == 0x4000) )
                        v251 = 0;
                    }
                  }
                  v145 = *((unsigned int *)this + 377);
                  v146 = 0LL;
                  v255[0] = 0LL;
                  if ( *((_DWORD *)this + 376) != (_DWORD)v145 )
                    goto LABEL_245;
                  v232 = 2 * v145;
                  if ( (unsigned __int64)(2 * v145) > 0xFFFFFFFF )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, -2147024362, 0x64u, 0LL);
                  }
                  else
                  {
                    if ( v232 <= 0x40 )
                      v232 = 64;
                    v233 = HrMalloc(1uLL, v232, v255);
                    if ( v233 >= 0 )
                    {
                      v234 = v255[0];
                      memcpy_0(v255[0], *((const void **)this + 190), *((unsigned int *)this + 376));
                      operator delete(*((void **)this + 190));
                      *((_QWORD *)this + 190) = v234;
                      v146 = 0LL;
                      *((_DWORD *)this + 377) = v232;
LABEL_245:
                      *(_BYTE *)(*((unsigned int *)this + 376) + *((_QWORD *)this + 190)) = v251;
                      v147 = *((_DWORD *)this + 382);
                      if ( v147 <= ++*((_DWORD *)this + 376) )
                        v147 = *((_DWORD *)this + 376);
                      *((_DWORD *)this + 382) = v147;
                      goto LABEL_248;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v233, 0x6Bu, 0LL);
                    v146 = v255[0];
                  }
LABEL_248:
                  if ( v146 )
                  {
                    v246 = GetProcessHeap();
                    HeapFree(v246, 0, v146);
                  }
                  v73[24] |= 8u;
                  goto LABEL_124;
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x12E,
                  (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\geometry\\Shape.h",
                  (const char *)0x88982F04LL,
                  v247);
                v131 = -2003292412;
                v249 = -2003292412;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v131, 0x575u, 0LL);
              goto LABEL_480;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0, v120, 0x56Eu, 0LL);
          goto LABEL_480;
        }
        v255[0] = 0LL;
        LOBYTE(v255[1]) = 0;
        v112 = CGeometry::GetShapeData(v74, (const struct D2D_SIZE_F *)(v3 + 140), (struct CShapePtr *)v255);
        v78 = v112;
        if ( v112 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v113, 0LL, 0, v112, 0x558u, 0LL);
          v115 = v253;
          goto LABEL_200;
        }
        v114 = (void (__fastcall ***)(void *, __int64))v255[0];
        if ( v255[0] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v255[0] + 16LL))(v255[0]) )
          {
LABEL_372:
            v114 = (void (__fastcall ***)(void *, __int64))v255[0];
            goto LABEL_373;
          }
          v114 = (void (__fastcall ***)(void *, __int64))v255[0];
          if ( v255[0] )
          {
            if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v255[0] + 72LL))(v255[0]) )
            {
              v115 = 1;
LABEL_200:
              v114 = (void (__fastcall ***)(void *, __int64))v255[0];
              goto LABEL_201;
            }
            goto LABEL_372;
          }
        }
LABEL_373:
        v115 = 0;
LABEL_201:
        if ( LOBYTE(v255[1]) && v114 )
          (**v114)(v114, 1LL);
        if ( (v78 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v114, 0LL, 0, v78, 0x1AAu, 0LL);
          return v78;
        }
        if ( !v115 )
          v248 = 0;
        goto LABEL_207;
      }
LABEL_270:
      v69 = 0LL;
      if ( g_pComposition )
        v69 = *((_QWORD *)g_pComposition + 62);
      goto LABEL_115;
    }
LABEL_448:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v63, 0LL, 0, -2003292412, 0x6ADu, 0LL);
    v70 = v253;
    goto LABEL_118;
  }
LABEL_124:
  v77 = v248;
  if ( v248 )
  {
    if ( (unsigned int)((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 280)) >> 4)
      || (unsigned int)((__int64)(*(_QWORD *)(v3 + 312) - *(_QWORD *)(v3 + 304)) >> 4) )
    {
      v257 = 0x100000000LL;
      v187 = &v257;
LABEL_334:
      v188 = *(_DWORD *)v187;
      for ( nn = 0; ; ++nn )
      {
        if ( nn >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v3, v188) )
        {
          v187 = (__int64 *)((char *)v187 + 4);
          if ( v187 == (__int64 *)&v258 )
            goto LABEL_131;
          goto LABEL_334;
        }
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v190, nn, v188);
        v192 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v256,
                 v3) )
          {
            v193 = CLightStack::Push((__int64)this + 208, v192, v188);
            if ( v193 < 0 )
              break;
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v193, 0x4Bu, 0LL);
    }
LABEL_131:
    v77 = v248;
  }
  v78 = v249;
  if ( v249 >= 0 )
    goto LABEL_126;
  return v78;
}
