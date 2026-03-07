__int64 __fastcall CCpuClippingData::Update(
        __int64 a1,
        const struct CVisualTree *a2,
        __int64 a3,
        const struct CScopedClipStack *a4,
        struct CShape *a5,
        struct CMILMatrix *a6,
        __int64 a7,
        enum D2D1_ANTIALIAS_MODE a8,
        int a9)
{
  struct CMILMatrix *v10; // rdx
  struct CShape *v12; // rcx
  __int64 v13; // rdi
  int v16; // eax
  __int64 v17; // rcx
  struct CMILMatrix *v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // r13
  _QWORD *v21; // rsi
  CVisual *v22; // r13
  _DWORD *v23; // r8
  _QWORD *v24; // rdx
  int v25; // esi
  char v26; // r12
  struct CShape *v27; // rdx
  CCpuClippingData::CpuClipRealization **v28; // r8
  char v29; // r9
  bool v30; // cl
  CTransform3D *v31; // rcx
  struct CMILMatrix *v32; // rax
  CCpuClippingData::CpuClipRealization *v33; // rsi
  CCpuClippingData::CpuClipRealization **v34; // rsi
  struct CComposition *v35; // rax
  CTransform3D *v37; // rax
  int v38; // eax
  float v39; // xmm1_4
  char v40; // si
  CTransform3D *v41; // rcx
  void **v42; // rax
  CCpuClippingData::CpuClipRealization *v43; // rdx
  int v44; // ecx
  CCpuClippingData::CpuClipRealization *v45; // r9
  char v46; // r8
  float v47; // xmm2_4
  CCpuClippingData::CpuClipRealization *v48; // rcx
  _DWORD *v49; // rax
  char v50; // al
  CTransform3D *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  void *v54; // rax
  bool v55; // cl
  struct CMILMatrix *v56; // r11
  struct CMILMatrix *v57; // r10
  __int64 v58; // rdx
  char v59; // al
  bool v60; // al
  struct CMILMatrix *v61; // rdx
  __int64 v62; // r11
  _DWORD *v63; // r8
  char v64; // dl
  unsigned __int64 v65; // r9
  char v66; // r10
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  struct CMILMatrix *v70; // r11
  char v71; // al
  float v72; // xmm1_4
  char v73; // al
  bool v74; // al
  _BYTE *v75; // rsi
  char v76; // al
  struct CMILMatrix *v77; // rsi
  char v78; // al
  bool v79; // cl
  int v80; // eax
  int v81; // xmm0_4
  int v82; // xmm1_4
  char v83; // al
  char v84; // al
  char v85; // al
  bool v86; // r8
  float v87; // xmm0_4
  char v88; // cl
  const struct CMILMatrix *Matrix; // rax
  float *v90; // r10
  float v91; // xmm2_4
  float *v92; // rdx
  bool v93; // al
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm1
  int v99; // eax
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int64 v102; // r8
  __int64 v103; // rax
  _BYTE *v104; // rdx
  __int64 k; // rcx
  _QWORD **v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rax
  _BYTE *v111; // rdx
  __int64 i; // rcx
  _QWORD **v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v117; // rax
  void *v118; // rcx
  void *v119; // r8
  char v120; // al
  struct CShape *v121; // r8
  CMILMatrix *v122; // rcx
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm3_4
  int v126; // ecx
  _QWORD *v127; // rax
  int v128; // eax
  __int64 v129; // rdx
  _BYTE *v130; // rax
  __int64 j; // rcx
  _QWORD **v132; // rcx
  _QWORD *v133; // rcx
  int WorldTransform; // eax
  unsigned int v135; // r13d
  float v136; // xmm0_4
  int updated; // eax
  unsigned int v138; // ebx
  float v139; // xmm8_4
  float v140; // xmm7_4
  float v141; // xmm6_4
  CMILMatrix *v142; // rcx
  struct CEffect *v143; // rax
  __int64 v144; // r13
  struct CTreeData *TreeData; // rax
  const struct CMILMatrix *v146; // rax
  char v147; // al
  const struct CMILMatrix *v148; // rax
  char v149; // al
  float v150; // xmm0_4
  char IsTranslateAndScaleIgnore; // al
  float v152; // xmm0_4
  _BYTE *v153; // r11
  float v154; // xmm0_4
  int v155; // xmm1_4
  float v156; // xmm6_4
  float v157; // xmm7_4
  int v158; // xmm0_4
  int v159; // xmm1_4
  int v160; // xmm0_4
  int v161; // xmm1_4
  int v162; // xmm0_4
  int v163; // xmm1_4
  int v164; // xmm0_4
  int v165; // xmm1_4
  int v166; // xmm0_4
  int v167; // xmm1_4
  CMILMatrix *v168; // rax
  float *v169; // rax
  _OWORD *v170; // rax
  int v171; // [rsp+20h] [rbp-E0h]
  int v172; // [rsp+20h] [rbp-E0h]
  char v173; // [rsp+40h] [rbp-C0h]
  bool v174; // [rsp+41h] [rbp-BFh] BYREF
  bool v175; // [rsp+42h] [rbp-BEh]
  bool v176; // [rsp+43h] [rbp-BDh]
  _DWORD *v177; // [rsp+48h] [rbp-B8h]
  float *v178; // [rsp+50h] [rbp-B0h]
  struct CMILMatrix *v179; // [rsp+58h] [rbp-A8h]
  void *EffectInternal; // [rsp+60h] [rbp-A0h]
  CTransform3D *v181; // [rsp+68h] [rbp-98h]
  CMILMatrix *v182; // [rsp+70h] [rbp-90h]
  struct CShape *v183; // [rsp+78h] [rbp-88h]
  struct CMILMatrix *v184; // [rsp+80h] [rbp-80h]
  CCpuClippingData::CpuClipRealization *v185; // [rsp+88h] [rbp-78h] BYREF
  int v186; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v187; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v188[6]; // [rsp+A0h] [rbp-60h] BYREF
  int v189; // [rsp+D0h] [rbp-30h]
  int v190; // [rsp+D4h] [rbp-2Ch]
  int v191; // [rsp+E0h] [rbp-20h]
  __int128 v192; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v193; // [rsp+100h] [rbp+0h]
  __int128 v194; // [rsp+110h] [rbp+10h]
  __int128 v195; // [rsp+120h] [rbp+20h]
  int v196; // [rsp+130h] [rbp+30h]
  char v197[48]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v198[64]; // [rsp+170h] [rbp+70h] BYREF
  int v199; // [rsp+1B0h] [rbp+B0h]
  _BYTE v200[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v201; // [rsp+200h] [rbp+100h]
  char v202[64]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v203; // [rsp+250h] [rbp+150h] BYREF
  int v204; // [rsp+260h] [rbp+160h]
  int v205; // [rsp+264h] [rbp+164h]
  _DWORD v206[6]; // [rsp+268h] [rbp+168h] BYREF
  _DWORD v207[6]; // [rsp+280h] [rbp+180h] BYREF
  float v208[6]; // [rsp+298h] [rbp+198h] BYREF
  __int128 v209; // [rsp+2B0h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v10 = a6;
  v12 = a5;
  v13 = 0LL;
  v183 = a5;
  v184 = a6;
  if ( g_pComposition && *(_QWORD *)a1 < *((_QWORD *)g_pComposition + 62) || a7 )
    goto LABEL_3;
  if ( !*(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 32) == 1 )
  {
    v144 = *(_QWORD *)(a1 + 64) != 0LL;
    if ( *((_QWORD *)a2 + 8) != a3 )
    {
      TreeData = CVisual::FindTreeData(*(CVisual **)(a3 + 88), a2);
      v12 = v183;
      v10 = v184;
      v144 += *((unsigned int *)TreeData + 36);
    }
    if ( *(_DWORD *)(a1 + 56) != v144 )
    {
LABEL_3:
      v16 = *(_DWORD *)(a1 + 32);
      v17 = *((_QWORD *)a4 + 1);
      v174 = v16 == 0;
      LODWORD(v182) = v16;
      if ( v17 != *(_QWORD *)a4 && *(_QWORD *)(v17 - 176) )
        v181 = *(CTransform3D **)(*((_QWORD *)a4 + 234) - 40LL);
      else
        v181 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v179 = 0LL;
      v199 = 0;
      if ( *((_QWORD *)a2 + 8) == a3 )
      {
        v175 = 1;
        if ( !a7 )
          goto LABEL_229;
        v18 = *(struct CMILMatrix **)(a7 + 40);
        v19 = (_QWORD *)a7;
        v179 = v18;
        *(_BYTE *)(a1 + 73) = 1;
LABEL_22:
        if ( v18 )
        {
          v25 = a9;
          goto LABEL_24;
        }
LABEL_229:
        v25 = a9;
        if ( a9 <= 2 )
          v25 = 2;
LABEL_24:
        v26 = *(_BYTE *)(a1 + 72);
        if ( v183 && v18 )
        {
          if ( v181 )
          {
            if ( *(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 73) || v19[3] > *(_QWORD *)(a1 + 24) )
            {
              v191 = 0;
              v26 = 0;
              CVisual::GetRootTransform((CVisual *)a3, (struct CMILMatrix *)v188, 1, v175);
              if ( !CCpuClippingData::IsScopePreservingTransform((const struct CMILMatrix *)v188) )
                goto LABEL_129;
              CMILMatrix::Multiply((CMILMatrix *)v188, v179);
              v209 = 0LL;
              v128 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, _QWORD))(*(_QWORD *)v183 + 48LL))(
                       v183,
                       &v209,
                       0LL);
              LODWORD(v177) = v128;
              if ( v128 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x146,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
                  (const char *)(unsigned int)v128,
                  v171);
                return (unsigned int)v177;
              }
              CCpuClip::CCpuClip((CCpuClip *)&v192);
              CCpuClip::Initialize((CCpuClip *)&v192, v181, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
              *(_QWORD *)&v203 = v188[0];
              *((_QWORD *)&v203 + 1) = v188[2];
              v204 = v189;
              v205 = v190;
              v26 = (unsigned __int8)CCpuClip::FullyContains(&v192, &v209, &v203) != 0;
              CShapePtr::Release((CShapePtr *)v197);
            }
            if ( v26 )
            {
              if ( v25 > 2 )
                goto LABEL_144;
              v25 = 2;
              goto LABEL_130;
            }
          }
          else
          {
            if ( v25 <= 2 )
              v25 = 2;
            v26 = 0;
          }
        }
        else
        {
          v26 = 0;
          if ( !v183 )
            goto LABEL_26;
        }
LABEL_129:
        if ( v25 > 2 )
        {
LABEL_144:
          v183 = 0LL;
          goto LABEL_26;
        }
LABEL_130:
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 248) + 208LL))(
                *(_QWORD *)(a3 + 248),
                0LL) )
        {
LABEL_143:
          v25 = 3;
          goto LABEL_144;
        }
        if ( v25 != 2
          || !(*(unsigned __int8 (__fastcall **)(struct CShape *, int *))(*(_QWORD *)v183 + 64LL))(v183, &v186)
          || v186 != 1 )
        {
LABEL_26:
          v27 = v183;
          v28 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
          v29 = v26;
          if ( (*(_QWORD *)(a1 + 64) != 0LL) != (v183 != 0LL) )
          {
            v30 = 0;
            *(_BYTE *)(a1 + 74) = 1;
            v173 = 0;
            goto LABEL_50;
          }
          if ( (_DWORD)v182 )
          {
            if ( v25 > *(_DWORD *)(a1 + 32) )
            {
              v30 = 0;
              v173 = 0;
              goto LABEL_50;
            }
            if ( *(_BYTE *)(a1 + 73) && v25 <= 1 || *(_BYTE *)(a1 + 75) && v25 <= 2 )
            {
              v30 = 0;
              v173 = 0;
              goto LABEL_51;
            }
            if ( *(_BYTE *)(a1 + 72) != v26 )
            {
              v30 = 0;
              v173 = 0;
              goto LABEL_50;
            }
          }
          v30 = 0;
          v173 = 0;
          if ( !v174 )
            goto LABEL_33;
LABEL_50:
          if ( v25 == 4 )
          {
            v38 = 4;
            goto LABEL_66;
          }
LABEL_51:
          v174 = 0;
          if ( !CCommonRegistryData::EnableCpuClipping )
          {
            v38 = 4;
            goto LABEL_66;
          }
          if ( v25 == 3 )
          {
            v38 = 3;
            goto LABEL_66;
          }
          if ( (**(_DWORD **)(a3 + 232) & 0x400000) == 0 )
            goto LABEL_59;
          EffectInternal = CVisual::GetEffectInternal((CVisual *)a3);
          if ( (*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                 EffectInternal,
                 187LL) )
          {
            v37 = (CTransform3D *)EffectInternal;
          }
          else
          {
            if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                    EffectInternal,
                    58LL) )
            {
LABEL_58:
              v27 = v183;
              v29 = v26;
              v30 = v174;
LABEL_59:
              v38 = 3 - (v27 != 0LL);
              LODWORD(v177) = v38;
              if ( v25 == 2 )
                goto LABEL_66;
              v39 = *(float *)(a3 + 120);
              if ( *(float *)(a3 + 124) == 0.0 && *(float *)(a3 + 128) == 0.0 && v39 == 0.0 )
              {
                v40 = 0;
              }
              else
              {
                v40 = v30;
                v173 = v30;
                v26 = v29;
                if ( v39 != 0.0 )
                {
                  v173 = v30;
                  v26 = v29;
                  goto LABEL_66;
                }
              }
              v41 = *(CTransform3D **)(a3 + 240);
              if ( !v41
                || (Matrix = CTransform3D::GetMatrix(v41, (const struct D2D_SIZE_F *)(a3 + 140)),
                    (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(Matrix))
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(v90[14] - 0.0) & _xmm) < 0.000081380211
                && (v173 = v40,
                    v91 = (float)(v90[5] * *v90) - (float)(v90[4] * v90[1]),
                    COERCE_FLOAT(COERCE_UNSIGNED_INT(v91 - 0.0) & _xmm) >= 0.00000011920929)
                && (v173 = v40, _finite((float)(1.0 / v91))) )
              {
                v38 = 1;
              }
              else
              {
                v38 = (int)v177;
              }
LABEL_66:
              v28 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
              v27 = v183;
              if ( *(_DWORD *)(a1 + 32) != v38 )
              {
                *(_DWORD *)(a1 + 32) = v38;
                *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 588);
                v173 = 1;
              }
LABEL_33:
              if ( *(_DWORD *)(a1 + 32) == 1 )
              {
                if ( *(_BYTE *)(a1 + 73) || *(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) )
                  v173 = 1;
                v31 = v181;
                v32 = v179;
              }
              else
              {
                if ( *(_DWORD *)(a1 + 32) != 2 )
                {
                  v19 = 0LL;
                  v179 = 0LL;
                  v177 = 0LL;
                  v178 = 0LL;
                  goto LABEL_39;
                }
                if ( *(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) )
                  v173 = 1;
                v32 = 0LL;
                v31 = 0LL;
                v179 = 0LL;
                v19 = 0LL;
                v181 = 0LL;
              }
              v177 = v19;
              v178 = (float *)v32;
              if ( v27 )
              {
                v174 = *(_BYTE *)(a1 + 74);
                if ( *v28 )
                {
                  v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
                }
                else
                {
                  v127 = std::make_unique<CCpuClippingData::CpuClipRealization,,0>(&v185);
                  v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
                  std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator=<std::default_delete<CCpuClippingData::CpuClipRealization>,0>(
                    a1 + 64,
                    v127);
                  EffectInternal = v185;
                  if ( v185 )
                  {
                    CCpuClippingData::CpuClipRealization::~CpuClipRealization(v185);
                    operator delete(EffectInternal, 0x88uLL);
                  }
                  v27 = v183;
                  v31 = v181;
                  v174 = 1;
                }
                v80 = CCpuClippingData::CpuClipRealization::Update(
                        *v34,
                        (struct CVisual *)a3,
                        v27,
                        v184,
                        v31,
                        a8,
                        &v174);
                LODWORD(v182) = v80;
                if ( v80 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1DE,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
                    (const char *)(unsigned int)v80,
                    v171);
                  return (unsigned int)v182;
                }
                if ( v174 )
                {
                  *(_BYTE *)(a1 + 74) = 1;
                  goto LABEL_68;
                }
LABEL_42:
                if ( !v173 )
                {
LABEL_43:
                  v35 = g_pComposition;
                  *(_BYTE *)(a1 + 72) = v26;
                  *(_WORD *)(a1 + 73) = 0;
                  *(_BYTE *)(a1 + 75) = 0;
                  if ( v35 )
                    v13 = *((_QWORD *)v35 + 62);
                  *(_QWORD *)a1 = v13;
                  return 0LL;
                }
LABEL_68:
                v42 = (void **)(a1 + 40);
                if ( *(_DWORD *)(a1 + 32) == 4 )
                {
                  v118 = *v42;
                  *v42 = 0LL;
                  if ( !v118 )
                    goto LABEL_70;
                }
                else
                {
                  if ( *v42 )
                    goto LABEL_70;
                  ProcessHeap = GetProcessHeap();
                  v117 = HeapAlloc(ProcessHeap, 0, 0x44uLL);
                  v118 = v117;
                  if ( !v117 )
                    ModuleFailFastForHRESULT(2147942414LL, retaddr);
                  *((_DWORD *)v117 + 16) = 0;
                  v42 = (void **)(a1 + 40);
                  if ( (_BYTE **)(a1 + 40) != &v187 )
                  {
                    v119 = *v42;
                    *v42 = v118;
                    if ( !v119 )
                      goto LABEL_70;
                    v118 = v119;
                  }
                }
                operator delete(v118, 0x44uLL);
                v42 = (void **)(a1 + 40);
LABEL_70:
                v43 = (CCpuClippingData::CpuClipRealization *)*v42;
                EffectInternal = v43;
                if ( !v43 )
                  goto LABEL_104;
                v44 = *(_DWORD *)(a1 + 32);
                if ( v44 != 1 )
                {
                  v126 = v44 - 2;
                  if ( v126 )
                  {
                    if ( v126 != 1 )
                      wil::details::in1diag3::FailFast_Hr(
                        retaddr,
                        (void *)0x2F6,
                        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
                        (const char *)0x8000FFFFLL,
                        v171);
                    CMILMatrix::SetToIdentity(v43);
                  }
                  else
                  {
                    CMILMatrix::SetToIdentity(*v34);
                    CVisual::GetRootTransform((CVisual *)a3, *(struct CMILMatrix **)(a1 + 40), 0, 1);
                  }
LABEL_104:
                  v62 = *((_QWORD *)a2 + 588);
                  *(_QWORD *)(a1 + 16) = v62;
                  if ( v19 && (v63 = v19 + 7, *((_DWORD *)v19 + 14)) )
                  {
                    v64 = 1;
                  }
                  else
                  {
                    v64 = 0;
                    v63 = v177 + 14;
                  }
                  v65 = *(_QWORD *)(a1 + 24);
                  v66 = 0;
                  v67 = *(_QWORD *)(a1 + 8);
                  *(_QWORD *)(a1 + 48) = a3;
                  *(_DWORD *)(a1 + 56) = 0;
                  if ( v65 < v67 )
                  {
                    *(_QWORD *)(a1 + 24) = v67;
                    v66 = 1;
                    v65 = v67;
                  }
                  if ( *(_DWORD *)(a1 + 32) == 1 )
                  {
                    *(_QWORD *)(a1 + 48) = v19[6];
                    v68 = v19[3];
                    if ( v65 < v68 )
                    {
                      *(_QWORD *)(a1 + 24) = v68;
                      v66 = 1;
                    }
                    if ( v64 )
                    {
                      *(_DWORD *)(a1 + 56) = *v63;
                      if ( *(_BYTE *)(a1 + 73) )
                      {
                        *(_QWORD *)(a1 + 24) = v62;
                        v66 = 1;
                      }
                    }
                  }
                  else if ( *(_DWORD *)(a1 + 32) != 2 )
                  {
LABEL_118:
                    if ( *v34 )
                    {
                      CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)*v34 + 96));
                      wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)*v34 + 120);
                    }
                    goto LABEL_43;
                  }
                  if ( *(_BYTE *)(a1 + 74) )
                  {
                    *(_QWORD *)(a1 + 24) = v62;
                    v66 = 1;
                  }
                  if ( v64 || *v34 )
                  {
                    if ( *(_BYTE *)(a1 + 75) )
                      *(_QWORD *)(a1 + 24) = v62;
                    if ( *v34 )
                      ++*(_DWORD *)(a1 + 56);
                  }
                  if ( !v66 )
                    goto LABEL_43;
                  goto LABEL_118;
                }
                v45 = v43;
                if ( *v34 )
                  v45 = *v34;
                v182 = v45;
                *(_QWORD *)v45 = 1065353216LL;
                *((_QWORD *)v45 + 1) = 0LL;
                *((_DWORD *)v45 + 4) = 0;
                *(_QWORD *)((char *)v45 + 20) = 1065353216LL;
                *(_QWORD *)((char *)v45 + 28) = 0LL;
                *((_DWORD *)v45 + 9) = 0;
                *((_QWORD *)v45 + 5) = 1065353216LL;
                *((_QWORD *)v45 + 6) = 0LL;
                *((_DWORD *)v45 + 14) = 0;
                *((_DWORD *)v45 + 15) = 1065353216;
                v46 = *((_BYTE *)v45 + 65) & 0xD0 | 7;
                *((_BYTE *)v45 + 65) = *((_BYTE *)v45 + 65) & 0xC0 | 0x17;
                *((_BYTE *)v45 + 64) = 85;
                if ( !v175 )
                {
                  v47 = *(float *)(a3 + 124);
                  if ( v47 != 0.0 || *(float *)(a3 + 128) != 0.0 || *(float *)(a3 + 120) != 0.0 )
                  {
                    v81 = *(_DWORD *)(a3 + 128);
                    v82 = *(_DWORD *)(a3 + 120);
                    *((float *)v45 + 12) = v47;
                    *((_DWORD *)v45 + 13) = v81;
                    *((_DWORD *)v45 + 14) = v82;
                    *((_BYTE *)v45 + 64) = 84;
                    *((_BYTE *)v45 + 65) = v46 | 0x13;
                  }
                  v48 = *(CCpuClippingData::CpuClipRealization **)(a3 + 240);
                  v185 = v48;
                  if ( v48 )
                  {
                    v92 = (float *)(a3 + 140);
                    v93 = (*((_BYTE *)v48 + 32) & 1) != 0;
                    if ( a3 != -140 )
                    {
                      if ( (*((_BYTE *)v48 + 32) & 1) == 0
                        && *((_BYTE *)v48 + 156)
                        && (*((float *)v48 + 37) != *v92 || *((float *)v48 + 38) != *(float *)(a3 + 144)) )
                      {
                        v93 = 1;
                      }
                      *(_QWORD *)((char *)v48 + 148) = *(_QWORD *)v92;
                    }
                    if ( v93 )
                    {
                      (*(void (__fastcall **)(CCpuClippingData::CpuClipRealization *, float *, __int64))(*(_QWORD *)v48 + 200LL))(
                        v48,
                        v92,
                        (__int64)v48 + 80);
                      v48 = v185;
                      v45 = v182;
                      *((_DWORD *)v185 + 8) &= ~1u;
                    }
                    v94 = *((_OWORD *)v48 + 5);
                    v95 = *((_OWORD *)v48 + 6);
                    v196 = *((_DWORD *)v48 + 36);
                    v192 = v94;
                    v96 = *((_OWORD *)v48 + 7);
                    v193 = v95;
                    v97 = *((_OWORD *)v48 + 8);
                    v194 = v96;
                    v195 = v97;
                    CMILMatrix::Multiply((CMILMatrix *)&v192, v45);
                    v45 = v182;
                    v98 = v193;
                    v99 = v196;
                    v43 = (CCpuClippingData::CpuClipRealization *)EffectInternal;
                    *(_OWORD *)v182 = v192;
                    v100 = v194;
                    *((_OWORD *)v45 + 1) = v98;
                    v101 = v195;
                    *((_OWORD *)v45 + 2) = v100;
                    *((_OWORD *)v45 + 3) = v101;
                    *((_DWORD *)v45 + 16) = v99;
                  }
                }
                if ( v43 != v45 )
                  goto LABEL_277;
                v49 = *(_DWORD **)(a3 + 232);
                v181 = 0LL;
                if ( (*v49 & 0x400000) != 0 )
                {
                  EffectInternal = CVisual::GetEffectInternal((CVisual *)a3);
                  v50 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                          EffectInternal,
                          187LL);
                  v51 = (CTransform3D *)EffectInternal;
                  if ( !v50 )
                  {
                    if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                            EffectInternal,
                            58LL) )
                      goto LABEL_85;
                    v51 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
                  }
                  v181 = v51;
                  if ( v51 )
                  {
                    if ( *(_DWORD *)(a3 + 108) != 2 )
                      goto LABEL_337;
                    v52 = *(_QWORD *)(a3 + 88);
                    goto LABEL_86;
                  }
                }
LABEL_85:
                v52 = *(_QWORD *)(a3 + 88);
                if ( *(_DWORD *)(a3 + 108) == 1 )
                {
                  v174 = 0;
                  goto LABEL_87;
                }
LABEL_86:
                v174 = 1;
LABEL_87:
                v175 = v52 && *(_DWORD *)(v52 + 108) == 1;
                v53 = *(_QWORD *)(a3 + 80);
                if ( (v53 & 2) != 0 )
                  v54 = *(void **)(v53 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  v54 = (void *)(*(_QWORD *)(a3 + 80) & 1LL);
                EffectInternal = v54;
                v176 = (**(_DWORD **)(a3 + 232) & 0x400000) != 0
                    && (v143 = CVisual::GetEffectInternal((CVisual *)a3),
                        (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v143 + 56LL))(
                          v143,
                          61LL));
                v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 216LL))(a3) != 0;
                if ( !v174 )
                  goto LABEL_335;
                if ( !v175 )
                {
LABEL_96:
                  v56 = v179;
                  v57 = (struct CMILMatrix *)v177;
                  v58 = (__int64)v178;
                  v51 = v181;
                  v45 = v182;
LABEL_97:
                  if ( !v51 )
                    goto LABEL_98;
                  v148 = CTransform3D::GetMatrix(v51, (const struct D2D_SIZE_F *)(a3 + 140));
                  CMILMatrix::Multiply(v148, v182, v182);
                  v45 = v182;
LABEL_277:
                  v58 = (__int64)v178;
                  v57 = (struct CMILMatrix *)v177;
                  v56 = v179;
LABEL_98:
                  v59 = (char)(*((_BYTE *)v45 + 64) << 6) >> 6;
                  v185 = (CCpuClippingData::CpuClipRealization *)v58;
                  v184 = v57;
                  if ( v59 )
                  {
                    v60 = v59 == 1;
                    goto LABEL_100;
                  }
                  v83 = (char)(16 * *((_BYTE *)v45 + 65)) >> 6;
                  if ( v83 )
                  {
                    if ( v83 != 1 )
                      goto LABEL_180;
LABEL_173:
                    EffectInternal = (void *)v58;
                    v184 = v57;
                    v84 = CMILMatrix::ProducesUniformZ<1>(v45);
                    v45 = v182;
                    if ( !v84 )
                    {
                      v58 = (__int64)v178;
                      goto LABEL_180;
                    }
                    v85 = (char)(4 * *((_BYTE *)v182 + 64)) >> 6;
                    v179 = v56;
                    v177 = v57;
                    if ( v85 )
                    {
                      v58 = (__int64)EffectInternal;
                      v178 = (float *)EffectInternal;
                      v86 = v85 == 1;
LABEL_176:
                      if ( v86 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v45 + 10) - 1.0) & _xmm) < 0.000081380211 )
                      {
                        v87 = *((float *)v45 + 12);
                        v178 = (float *)v58;
                        v177 = v57;
                        v179 = v56;
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v87 - 0.0) & _xmm) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v45 + 13) - 0.0) & _xmm) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v45 + 14) - 0.0) & _xmm) < 0.000081380211 )
                        {
                          v60 = 1;
                          v88 = 1;
                          goto LABEL_181;
                        }
                        v179 = v56;
                        v177 = v57;
                        v178 = (float *)v58;
                      }
LABEL_180:
                      v60 = 0;
                      v88 = 3;
LABEL_181:
                      *((_BYTE *)v45 + 64) &= 0xFCu;
                      *((_BYTE *)v45 + 64) |= v88;
LABEL_100:
                      v185 = (CCpuClippingData::CpuClipRealization *)v58;
                      EffectInternal = v57;
                      v184 = v56;
                      if ( v60 )
                      {
                        *(_OWORD *)v45 = *(_OWORD *)v56;
                        *((_OWORD *)v45 + 1) = *((_OWORD *)v56 + 1);
                        *((_OWORD *)v45 + 2) = *((_OWORD *)v56 + 2);
                        *((_OWORD *)v45 + 3) = *((_OWORD *)v56 + 3);
                        *((_DWORD *)v45 + 16) = *((_DWORD *)v56 + 16);
                        goto LABEL_102;
                      }
                      v73 = (char)(*((_BYTE *)v56 + 64) << 6) >> 6;
                      v183 = (struct CMILMatrix *)((char *)v56 + 64);
                      if ( v73 )
                      {
                        v74 = v73 == 1;
                        goto LABEL_152;
                      }
                      v120 = CMILMatrix::IsTranslate<1>((__int64)v56, v58);
                      v56 = v179;
                      if ( v120
                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v179 + 12) - 0.0) & _xmm) < 0.000081380211 )
                      {
                        v56 = v184;
                        v58 = (__int64)v185;
                        v178 = (float *)v185;
                        v57 = (struct CMILMatrix *)EffectInternal;
                        v136 = *((float *)v184 + 13);
                        v177 = EffectInternal;
                        v179 = v184;
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v136 - 0.0) & _xmm) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v184 + 14) - 0.0) & _xmm) < 0.000081380211 )
                        {
                          v74 = 1;
                          goto LABEL_238;
                        }
                        v179 = v184;
                        v177 = EffectInternal;
                        v178 = (float *)v185;
                      }
                      else
                      {
                        v58 = (__int64)v178;
                        v57 = (struct CMILMatrix *)v177;
                      }
                      v74 = 0;
LABEL_238:
                      v121 = v183;
                      v45 = v182;
                      v175 = v74;
                      *(_BYTE *)v183 &= 0xFCu;
                      *(_BYTE *)v121 |= (-1 - 2 * v74) & 3;
LABEL_152:
                      v185 = (CCpuClippingData::CpuClipRealization *)v58;
                      EffectInternal = v57;
                      if ( v74 )
                        goto LABEL_102;
                      v75 = (char *)v56 + 65;
                      v76 = (char)(16 * *((_BYTE *)v56 + 65)) >> 6;
                      v187 = (char *)v56 + 65;
                      if ( v76 )
                      {
                        if ( v76 != 1 )
                          goto LABEL_374;
                        goto LABEL_155;
                      }
                      if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v56, 0LL)
                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v56 + 8) - 0.0) & _xmm) < 0.000081380211 )
                      {
                        v58 = (__int64)v185;
                        v178 = (float *)v185;
                        v57 = (struct CMILMatrix *)EffectInternal;
                        v179 = v56;
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v56 + 9) - 0.0) & _xmm) < 0.000081380211 )
                        {
                          *v75 &= ~8u;
                          *v75 |= 4u;
LABEL_155:
                          v181 = (CTransform3D *)v58;
                          v184 = v57;
                          v77 = v56;
                          if ( (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v56) )
                          {
                            v177 = v57;
                            v78 = (char)(4 * *(_BYTE *)v183) >> 6;
                            if ( v78 )
                            {
                              v178 = (float *)v181;
                              v79 = v78 == 1;
LABEL_158:
                              if ( v79
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v77 + 10) - 1.0) & _xmm) < 0.000081380211 )
                              {
                                CMILMatrix::Translate(
                                  v182,
                                  *((float *)v77 + 12),
                                  *((float *)v77 + 13),
                                  *((float *)v77 + 14));
                                v45 = v182;
LABEL_161:
                                v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
                                goto LABEL_102;
                              }
LABEL_239:
                              v177 = v57;
                              if ( CMILMatrix::IsTranslate<1>((__int64)v182, v58) )
                              {
                                v122 = v182;
                                v123 = *((float *)v182 + 12);
                                v124 = *((float *)v182 + 13);
                                v125 = *((float *)v182 + 14);
                                *(_OWORD *)v182 = *(_OWORD *)v77;
                                *((_OWORD *)v122 + 1) = *((_OWORD *)v77 + 1);
                                *((_OWORD *)v122 + 2) = *((_OWORD *)v77 + 2);
                                *((_OWORD *)v122 + 3) = *((_OWORD *)v77 + 3);
                                *((_DWORD *)v122 + 16) = *((_DWORD *)v77 + 16);
                                CMILMatrix::PrependTranslate(v122, v123, v124, v125);
                                v45 = v182;
                                v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
                              }
                              else
                              {
                                if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v77) )
                                {
                                  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v182)
                                    && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v77) )
                                  {
                                    v155 = *((_DWORD *)v182 + 1);
                                    v156 = *((float *)v182 + 10);
                                    v157 = *((float *)v182 + 14);
                                    v207[0] = *(_DWORD *)v182;
                                    v158 = *((_DWORD *)v182 + 4);
                                    v207[1] = v155;
                                    v159 = *((_DWORD *)v182 + 5);
                                    v207[2] = v158;
                                    v160 = *((_DWORD *)v182 + 12);
                                    v207[3] = v159;
                                    v161 = *((_DWORD *)v182 + 13);
                                    v207[4] = v160;
                                    v162 = *(_DWORD *)v77;
                                    v207[5] = v161;
                                    v163 = *((_DWORD *)v77 + 1);
                                    v206[0] = v162;
                                    v164 = *((_DWORD *)v77 + 4);
                                    v206[1] = v163;
                                    v165 = *((_DWORD *)v77 + 5);
                                    v206[2] = v164;
                                    v166 = *((_DWORD *)v77 + 12);
                                    v206[3] = v165;
                                    v167 = *((_DWORD *)v77 + 13);
                                    v206[4] = v166;
                                    v206[5] = v167;
                                    D2D1::Matrix3x2F::SetProduct(
                                      (D2D1::Matrix3x2F *)v208,
                                      (const struct D2D1::Matrix3x2F *)v207,
                                      (const struct D2D1::Matrix3x2F *)v206);
                                    CMILMatrix::Set2DAffineMatrix(
                                      v168,
                                      v208[0],
                                      v208[1],
                                      v208[2],
                                      v208[3],
                                      v208[4],
                                      v208[5]);
                                    v169 = v178;
                                    v45 = v182;
                                    *((float *)v182 + 10) = v156 * v178[10];
                                    *((float *)v45 + 14) = (float)(v157 * v169[10]) + *((float *)v77 + 14);
                                  }
                                  else
                                  {
                                    v170 = (_OWORD *)Windows::Foundation::Numerics::operator*(v202, v182, v77);
                                    *(_OWORD *)v45 = *v170;
                                    *((_OWORD *)v45 + 1) = v170[1];
                                    *((_OWORD *)v45 + 2) = v170[2];
                                    *((_OWORD *)v45 + 3) = v170[3];
                                    *((_DWORD *)v45 + 16) = 0;
                                  }
                                  goto LABEL_161;
                                }
                                v139 = *((float *)v77 + 12);
                                v140 = *((float *)v77 + 13);
                                v141 = *((float *)v77 + 14);
                                CMILMatrix::Scale(v182, *(float *)v77, *((float *)v77 + 5), v178[10]);
                                CMILMatrix::Translate(v142, v139, v140, v141);
                                v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
                                v45 = v182;
                              }
LABEL_102:
                              v61 = *(struct CMILMatrix **)(a1 + 40);
                              if ( v61 != v45 )
                              {
                                CVisual::GetRootTransform((CVisual *)a3, v61, 0, 1);
                                CMILMatrix::Multiply(*(CMILMatrix **)(a1 + 40), v182);
                              }
                              goto LABEL_104;
                            }
                            v178 = (float *)v181;
                            if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v77) )
                            {
                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v77 - 1.0) & _xmm) >= 0.000081380211 )
                              {
                                v57 = v184;
                                v177 = v184;
                                v178 = (float *)v181;
                              }
                              else
                              {
                                v154 = *((float *)v77 + 5);
                                v57 = v184;
                                v178 = (float *)v181;
                                v177 = v184;
                                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v154 - 1.0) & _xmm) < 0.000081380211 )
                                {
                                  v79 = 1;
LABEL_370:
                                  *v153 &= 0xCFu;
                                  v58 = 4294967280LL;
                                  LOBYTE(v58) = (-16 - 32 * v79) & 0x30;
                                  *v153 |= v58;
                                  goto LABEL_158;
                                }
                                v177 = v184;
                                v178 = (float *)v181;
                              }
                            }
                            else
                            {
                              v57 = (struct CMILMatrix *)v177;
                            }
                            v79 = 0;
                            goto LABEL_370;
                          }
LABEL_374:
                          v77 = v179;
                          goto LABEL_239;
                        }
                        v77 = v56;
                        v178 = (float *)v185;
                      }
                      else
                      {
                        v57 = (struct CMILMatrix *)v177;
                        v77 = v179;
                      }
                      *v187 |= 0xCu;
                      goto LABEL_239;
                    }
                    v178 = (float *)EffectInternal;
                    IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v182);
                    v45 = v182;
                    if ( IsTranslateAndScaleIgnore )
                    {
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v182 - 1.0) & _xmm) >= 0.000081380211 )
                      {
                        v57 = v184;
                        v58 = (__int64)EffectInternal;
                        v177 = v184;
                        v178 = (float *)EffectInternal;
                        v179 = v56;
                      }
                      else
                      {
                        v58 = (__int64)EffectInternal;
                        v152 = *((float *)v182 + 5);
                        v57 = v184;
                        v178 = (float *)EffectInternal;
                        v177 = v184;
                        v179 = v56;
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v152 - 1.0) & _xmm) < 0.000081380211 )
                        {
                          v86 = 1;
LABEL_351:
                          *((_BYTE *)v182 + 64) &= 0xCFu;
                          *((_BYTE *)v45 + 64) |= (-16 - 32 * v86) & 0x30;
                          goto LABEL_176;
                        }
                        v179 = v56;
                        v177 = v184;
                        v178 = (float *)EffectInternal;
                      }
                    }
                    else
                    {
                      v57 = (struct CMILMatrix *)v177;
                      v58 = (__int64)v178;
                    }
                    v86 = 0;
                    goto LABEL_351;
                  }
                  v149 = CMILMatrix::IsAffine<1>(v45, 0LL);
                  v45 = v182;
                  if ( v149 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v182 + 8) - 0.0) & _xmm) < 0.000081380211 )
                  {
                    v58 = (__int64)v185;
                    v150 = *((float *)v182 + 9);
                    v57 = v184;
                    v178 = (float *)v185;
                    v177 = v184;
                    v179 = v56;
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v150 - 0.0) & _xmm) < 0.000081380211 )
                    {
                      *((_BYTE *)v182 + 65) &= ~8u;
                      *((_BYTE *)v45 + 65) |= 4u;
                      goto LABEL_173;
                    }
                    v179 = v56;
                    v177 = v184;
                    v178 = (float *)v185;
                  }
                  else
                  {
                    v58 = (__int64)v178;
                    v57 = (struct CMILMatrix *)v177;
                  }
                  *((_BYTE *)v182 + 65) |= 0xCu;
                  goto LABEL_180;
                }
                if ( !(_DWORD)EffectInternal )
                {
LABEL_335:
                  if ( !v175 || !v176 && !v55 )
                    goto LABEL_96;
                }
                v51 = v181;
LABEL_337:
                v45 = v182;
                v56 = v179;
                v57 = (struct CMILMatrix *)v177;
                v58 = (__int64)v178;
                v147 = *((_BYTE *)v182 + 64);
                *((_QWORD *)v182 + 4) = 0LL;
                *((_QWORD *)v45 + 5) = 0LL;
                *((_BYTE *)v45 + 64) = v147 & 0xF0 | 3;
                goto LABEL_97;
              }
LABEL_39:
              v33 = *v28;
              *v28 = 0LL;
              if ( v33 )
              {
                CCpuClippingData::CpuClipRealization::~CpuClipRealization(v33);
                operator delete(v33, 0x88uLL);
              }
              v34 = (CCpuClippingData::CpuClipRealization **)(a1 + 64);
              goto LABEL_42;
            }
            v37 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
          }
          if ( v37 )
          {
            v146 = CTransform3D::GetMatrix(v37, (const struct D2D_SIZE_F *)(a3 + 140));
            if ( !CCpuClippingData::IsScopePreservingTransform(v146) )
            {
              v38 = 3;
              goto LABEL_66;
            }
          }
          goto LABEL_58;
        }
        v70 = v184;
        v71 = *((char *)v184 + 64) >> 6;
        if ( v71 )
        {
          if ( v71 == 1 )
          {
LABEL_136:
            v203 = 0LL;
            if ( (*(int (__fastcall **)(struct CShape *, __int128 *, struct CMILMatrix *))(*(_QWORD *)v183 + 48LL))(
                   v183,
                   &v203,
                   v70) >= 0
              && (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v203
               || *((float *)&v203 + 2) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 2))
              && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v203 + 1)
               || *((float *)&v203 + 3) < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 3)) )
            {
              v72 = *((float *)&v203 + 2) <= *(float *)&v203 || *((float *)&v203 + 3) <= *((float *)&v203 + 1)
                  ? 0.0
                  : (float)(*((float *)&v203 + 3) - *((float *)&v203 + 1))
                  * (float)(*((float *)&v203 + 2) - *(float *)&v203);
              if ( v72 >= (float)CCommonRegistryData::CpuClipAreaThreshold )
                goto LABEL_143;
            }
            goto LABEL_26;
          }
        }
        else
        {
          LOBYTE(v69) = 1;
          if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v184, v69)
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v70 + 1) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v70 + 4) - 0.0) & _xmm) < 0.000081380211 )
          {
            *((_BYTE *)v70 + 64) &= 0x3Fu;
            *((_BYTE *)v70 + 64) |= 0x40u;
            goto LABEL_136;
          }
          *((_BYTE *)v70 + 64) |= 0xC0u;
        }
        if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v70) )
          goto LABEL_26;
        goto LABEL_136;
      }
      v175 = 0;
      if ( !*(_BYTE *)(v17 - 8) )
        goto LABEL_229;
      v20 = *(_QWORD *)(a3 + 88);
      v21 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        v21 = (_QWORD *)(v20 + 336);
      }
      else
      {
        v109 = *(_QWORD *)(v20 + 232);
        if ( *(int *)v109 < 0 )
        {
          v110 = *(unsigned int *)(v109 + 4);
          v111 = (_BYTE *)(v109 + 8);
          for ( i = 0LL; (unsigned int)i < (unsigned int)v110; ++v111 )
          {
            if ( *v111 == 1 )
              break;
            i = (unsigned int)(i + 1);
          }
          v113 = (unsigned int)i >= (unsigned int)v110
               ? 0LL
               : (_QWORD **)(v110 + 15 + v109 + 8 * i - (((_BYTE)v110 + 15) & 7));
          v114 = *v113;
          if ( v114 )
          {
            v115 = (_QWORD *)*v114;
            if ( (_QWORD *)*v114 != v114 )
            {
              while ( (const struct CVisualTree *)v115[4] != a2 )
              {
                v115 = (_QWORD *)*v115;
                if ( v115 == v114 )
                  goto LABEL_10;
              }
              v21 = v115 - 45;
            }
          }
        }
      }
LABEL_10:
      if ( v21[13] > *(_QWORD *)(a1 + 16) )
        *(_BYTE *)(a1 + 73) = 1;
      v22 = 0LL;
      if ( a3 == *((_QWORD *)a2 + 8) )
        goto LABEL_19;
      v23 = *(_DWORD **)(a3 + 232);
      if ( (*v23 & 0x1000000) != 0 )
      {
        v129 = (unsigned int)v23[1];
        v130 = v23 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v129; ++v130 )
        {
          if ( *v130 == 8 )
            break;
          j = (unsigned int)(j + 1);
        }
        if ( (unsigned int)j >= (unsigned int)v129 )
          v132 = 0LL;
        else
          v132 = (_QWORD **)((char *)v23 + v129 + 8 * j - (((_BYTE)v129 + 15) & 7) + 15);
        v133 = *v132;
        if ( v133 )
          v22 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v133 + 184LL))(*v133);
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        v24 = (_QWORD *)(a3 + 336);
      }
      else
      {
        v102 = *(_QWORD *)(a3 + 232);
        if ( *(int *)v102 >= 0 )
          goto LABEL_19;
        v103 = *(unsigned int *)(v102 + 4);
        v104 = (_BYTE *)(v102 + 8);
        for ( k = 0LL; (unsigned int)k < (unsigned int)v103; ++v104 )
        {
          if ( *v104 == 1 )
            break;
          k = (unsigned int)(k + 1);
        }
        v106 = (unsigned int)k >= (unsigned int)v103
             ? 0LL
             : (_QWORD **)(v103 + 15 + v102 + 8 * k - (((_BYTE)v103 + 15) & 7));
        v107 = *v106;
        if ( !v107 )
          goto LABEL_19;
        v108 = (_QWORD *)*v107;
        if ( (_QWORD *)*v107 == v107 )
          goto LABEL_19;
        while ( 1 )
        {
          v24 = v108 - 45;
          if ( (const struct CVisualTree *)v108[4] == a2 )
            break;
          v108 = (_QWORD *)*v108;
          if ( v108 == v107 )
            goto LABEL_19;
        }
      }
      if ( v24 && v24[32] != *(_QWORD *)(*(_QWORD *)(v24[33] + 16LL) + 496LL) && v22 )
      {
        v201 = 0;
        WorldTransform = CVisual::GetWorldTransform(v22, a2, 0, (struct CMILMatrix *)v200, 0LL, 0LL);
        v135 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
            (const char *)(unsigned int)WorldTransform,
            v171);
          return v135;
        }
        CMILMatrix::Multiply((CMILMatrix *)v200, (const struct CMILMatrix *)(*((_QWORD *)a4 + 1) - 152LL));
        if ( !CCpuClippingData::CalcScopeTransformFromWorld(
                (const struct CMILMatrix *)(*((_QWORD *)a4 + 1) - 84LL),
                (const struct CMILMatrix *)v200,
                (struct CMILMatrix *)v198)
          || !CCpuClippingData::IsScopePreservingTransform((const struct CMILMatrix *)v198) )
        {
          v18 = 0LL;
LABEL_21:
          v19 = v21 + 11;
          if ( v21 == (_QWORD *)-88LL )
            goto LABEL_229;
          goto LABEL_22;
        }
        v18 = (struct CMILMatrix *)v198;
LABEL_20:
        v179 = v18;
        goto LABEL_21;
      }
LABEL_19:
      v18 = (struct CMILMatrix *)v21[16];
      goto LABEL_20;
    }
  }
  if ( !*(_QWORD *)(a1 + 64) )
    return 0LL;
  updated = CCpuClippingData::UpdateOnlyCpuClipRealization(
              (CCpuClippingData::CpuClipRealization **)a1,
              a2,
              (CVisual **)a3,
              a4,
              v12,
              v10,
              a8);
  v138 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
    (const char *)(unsigned int)updated,
    v172);
  return v138;
}
