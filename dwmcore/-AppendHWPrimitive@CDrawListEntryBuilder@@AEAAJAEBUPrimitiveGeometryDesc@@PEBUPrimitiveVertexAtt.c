__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        struct D2D_MATRIX_3X2_F **a3)
{
  char v4; // bl
  CShape *v7; // r15
  void *v8; // rcx
  float v9; // xmm11_4
  float v10; // xmm12_4
  _QWORD *v11; // rax
  _BYTE *v12; // r12
  unsigned int v13; // xmm7_4
  unsigned int v14; // xmm8_4
  unsigned int v15; // xmm9_4
  unsigned int v16; // xmm10_4
  struct D2D_MATRIX_3X2_F *v17; // r9
  bool v18; // zf
  __int64 v19; // r8
  char v20; // di
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // xmm2_4
  unsigned int v26; // xmm3_4
  unsigned int v27; // xmm4_4
  unsigned int v28; // xmm5_4
  unsigned int v29; // r10d
  BOOL v30; // edi
  bool *v31; // rcx
  bool v32; // di
  char v33; // si
  _BYTE *v34; // rdi
  __int64 v35; // r8
  bool *v36; // rdi
  _BYTE *v37; // rdi
  __int64 v38; // rax
  char v39; // cl
  _BYTE *v40; // rcx
  _BYTE *v41; // rdx
  void *v42; // rsi
  void *v43; // rcx
  CShape **v45; // rdi
  __int64 *v46; // rbx
  const struct CMILMatrix *v47; // rdi
  int v49; // eax
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  CRectanglesShape *v54; // rax
  unsigned int v55; // xmm1_4
  CShape *v56; // rdi
  CMILMatrix *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  unsigned int v60; // ecx
  unsigned int v61; // xmm7_4
  unsigned int v62; // xmm8_4
  unsigned int v63; // xmm9_4
  unsigned int v64; // xmm10_4
  int v65; // eax
  __int64 v66; // rdx
  unsigned int v67; // ecx
  CRectanglesShape *v68; // rax
  __int64 v69; // rax
  unsigned int v70; // ecx
  unsigned int v71; // edi
  CPolygonBuilder **v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 *v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  unsigned int v78; // ecx
  CPolygonBuilder *v79; // rcx
  __int64 v80; // rdx
  CMeshCacheManager *v81; // rdi
  struct Mesh::VertexAAOffsetsResource *MeshAAOffsetsForRoundedRectangle; // rax
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  __int64 v85; // rbx
  _OWORD *v86; // rax
  LPVOID v87; // rdx
  __int64 v88; // r9
  bool *v89; // rcx
  __int64 v90; // rax
  __int128 v91; // xmm0
  struct Mesh::VertexAAOffsetDesc *v92; // rdx
  bool v93; // al
  int v94; // eax
  unsigned int v95; // ecx
  unsigned __int64 v96; // rdi
  unsigned int v97; // edx
  __int64 v98; // rcx
  struct CObjectCache *ObjectCache; // rdx
  _DWORD *v100; // rax
  int v101; // edi
  unsigned int v102; // ecx
  int v103; // eax
  unsigned int v104; // ecx
  CShape *v105; // rdi
  __m128 v106; // xmm4
  __m128 v107; // xmm4
  __m128 v108; // xmm4
  __m128 v109; // xmm1
  CMeshCacheManager *v110; // rcx
  int appended; // eax
  unsigned int v112; // ecx
  __int64 v113; // r9
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  int RectangleEdgeFlags; // eax
  unsigned __int64 v118; // rdx
  __int64 v119; // rbx
  _OWORD *v120; // rax
  unsigned int v121; // edx
  __int64 v122; // rcx
  __int64 v123; // rcx
  int v124; // xmm1_4
  char *v125; // rax
  int v126; // eax
  unsigned int v127; // ecx
  CMILMatrix *v128; // rax
  int v129; // eax
  unsigned int v130; // ecx
  unsigned int v131; // ecx
  int v132; // eax
  unsigned int v133; // ecx
  unsigned int v134; // ecx
  unsigned int v135; // ecx
  _BYTE *v136; // rcx
  __int64 v137; // r8
  bool *v138; // rcx
  _BYTE *v139; // rcx
  _BYTE *v140; // rcx
  __int64 v141; // r8
  bool *v142; // rcx
  _BYTE *v143; // rcx
  __int64 v144; // r8
  bool *v145; // rcx
  _BYTE *v146; // rcx
  _BYTE *v147; // rcx
  __int64 v148; // r8
  bool *v149; // rcx
  _BYTE *v150; // rcx
  __int64 v151; // r8
  bool *v152; // rcx
  _BYTE *v153; // rcx
  __int64 v154; // r8
  bool *v155; // rcx
  int v156; // eax
  unsigned int v157; // ecx
  _BYTE *v158; // rcx
  __int64 v159; // r8
  bool *v160; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v162; // rax
  HANDLE v163; // rax
  _BYTE *v164; // rcx
  __int64 v165; // r8
  bool *v166; // rcx
  char v167; // [rsp+38h] [rbp-D0h]
  char v168; // [rsp+39h] [rbp-CFh]
  char v169; // [rsp+39h] [rbp-CFh]
  char v170; // [rsp+3Ah] [rbp-CEh]
  char v171; // [rsp+3Bh] [rbp-CDh]
  char v172; // [rsp+3Bh] [rbp-CDh]
  char v173; // [rsp+3Ch] [rbp-CCh]
  char v174; // [rsp+3Dh] [rbp-CBh] BYREF
  bool v175; // [rsp+3Eh] [rbp-CAh]
  int v176; // [rsp+40h] [rbp-C8h] BYREF
  int v177; // [rsp+44h] [rbp-C4h] BYREF
  struct D2D_MATRIX_3X2_F *v178[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _D3DCOLORVALUE *v179; // [rsp+58h] [rbp-B0h] BYREF
  int v180; // [rsp+60h] [rbp-A8h]
  int v181; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v182; // [rsp+70h] [rbp-98h]
  bool v183[16]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v184; // [rsp+90h] [rbp-78h]
  _QWORD v185[3]; // [rsp+B0h] [rbp-58h] BYREF
  char v186; // [rsp+C8h] [rbp-40h]
  __int128 v187; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v188; // [rsp+E8h] [rbp-20h]
  __int128 v189; // [rsp+F8h] [rbp-10h]
  __int128 v190; // [rsp+108h] [rbp+0h]
  int v191; // [rsp+118h] [rbp+10h]
  int v192; // [rsp+128h] [rbp+20h] BYREF
  __int64 v193; // [rsp+130h] [rbp+28h]
  __int128 *v194; // [rsp+138h] [rbp+30h]
  D2D1_MATRIX_3X2_F *p_matrix; // [rsp+140h] [rbp+38h]
  void *v196; // [rsp+148h] [rbp+40h]
  bool *v197; // [rsp+150h] [rbp+48h]
  int v198; // [rsp+158h] [rbp+50h]
  char v199; // [rsp+15Ch] [rbp+54h]
  char v200; // [rsp+15Dh] [rbp+55h]
  __int16 v201; // [rsp+15Eh] [rbp+56h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+178h] [rbp+70h] BYREF
  CRectanglesShape *v203; // [rsp+198h] [rbp+90h] BYREF
  unsigned int v204; // [rsp+1A0h] [rbp+98h]
  unsigned int v205; // [rsp+1A4h] [rbp+9Ch]
  bool *v206[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v207[3]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v208; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v209; // [rsp+1F8h] [rbp+F0h] BYREF
  CShape *v210[2]; // [rsp+208h] [rbp+100h] BYREF
  struct D2D_MATRIX_3X2_F v211; // [rsp+218h] [rbp+110h] BYREF
  const unsigned int *v212; // [rsp+238h] [rbp+130h] BYREF
  void *v213; // [rsp+240h] [rbp+138h]
  void *v214; // [rsp+248h] [rbp+140h] BYREF
  _BYTE *v215; // [rsp+250h] [rbp+148h]
  int v216; // [rsp+258h] [rbp+150h]
  __int64 v217; // [rsp+25Ch] [rbp+154h]
  _BYTE v218[16]; // [rsp+268h] [rbp+160h] BYREF
  void *v219; // [rsp+278h] [rbp+170h]
  __int128 v220; // [rsp+288h] [rbp+180h] BYREF
  LPVOID v221; // [rsp+298h] [rbp+190h] BYREF
  _BYTE *v222; // [rsp+2A0h] [rbp+198h]
  char *v223; // [rsp+2A8h] [rbp+1A0h]
  _BYTE v224[160]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v225; // [rsp+350h] [rbp+248h] BYREF
  LPVOID lpMem; // [rsp+358h] [rbp+250h] BYREF
  _BYTE *v227; // [rsp+360h] [rbp+258h]
  char *v228; // [rsp+368h] [rbp+260h]
  _BYTE v229[1280]; // [rsp+370h] [rbp+268h] BYREF
  char v230; // [rsp+870h] [rbp+768h] BYREF
  __int128 v231; // [rsp+878h] [rbp+770h] BYREF
  __int128 v232; // [rsp+888h] [rbp+780h]
  char v233; // [rsp+898h] [rbp+790h]
  unsigned __int8 v234; // [rsp+899h] [rbp+791h]

  v212 = &CRectanglesShape::`vftable';
  v191 = 0;
  v214 = v218;
  v179 = 0LL;
  v215 = v218;
  v213 = 0LL;
  v4 = 0;
  v216 = 1;
  v217 = 1LL;
  v167 = 0;
  v220 = 0LL;
  v7 = 0LL;
  LOBYTE(v180) = 0;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v218);
  v8 = 0LL;
  v9 = 0.0;
  v10 = 0.0;
  v219 = 0LL;
  *(_OWORD *)&v211.m11 = *(_OWORD *)&_xmm;
  *(_QWORD *)&v211.m[2][0] = 0LL;
  if ( !*((_BYTE *)this + 4474) || (v11 = (_QWORD *)*((_QWORD *)this + 2), !*v11) && !v11[10] )
  {
    v12 = (char *)a2 + 24;
    goto LABEL_5;
  }
  v18 = (*((_BYTE *)a2 + 24) & 1) == 0;
  v12 = (char *)a2 + 24;
  *(_OWORD *)v210 = 0LL;
  if ( v18 )
  {
    *(_OWORD *)v210 = *(_OWORD *)a2;
  }
  else
  {
    v126 = (*(__int64 (__fastcall **)(_QWORD, CShape **, _QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, v210, 0LL);
    v24 = v126;
    if ( v126 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, v126, 0x31Du, 0LL);
      goto LABEL_58;
    }
  }
  v45 = (CShape **)*((_QWORD *)this + 2);
  if ( *((_BYTE *)this + 4473) )
    v178[0] = (struct D2D_MATRIX_3X2_F *)((char *)this + 56);
  else
    v178[0] = 0LL;
  v203 = 0LL;
  v208 = 0;
  if ( *((_BYTE *)v45 + 112) )
  {
    if ( !CShapePtr::IsAxisAlignedRectangle(v45 + 10)
      && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v45[10] + 8LL))(v45[10]) )
    {
      goto LABEL_92;
    }
    v46 = (__int64 *)v45[10];
    if ( v178[0] )
    {
      v128 = CMILMatrix::CMILMatrix((CMILMatrix *)&v181, v178[0]);
      v47 = (const struct CMILMatrix *)v206;
      *(_OWORD *)v206 = *(_OWORD *)v128;
      v207[0] = *((_OWORD *)v128 + 1);
      v207[1] = *((_OWORD *)v128 + 2);
      v207[2] = *((_OWORD *)v128 + 3);
      v208 = *((_DWORD *)v128 + 16);
    }
    else
    {
      v47 = v203;
    }
  }
  else
  {
    if ( (!(*(unsigned __int8 (__fastcall **)(CShape *, int *))(*(_QWORD *)*v45 + 64LL))(*v45, &v176) || v176 != 1)
      && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)*v45 + 8LL))(*v45) )
    {
      goto LABEL_92;
    }
    v46 = (__int64 *)*v45;
    v47 = (const struct CMILMatrix *)(v45 + 1);
    if ( v178[0] )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)&v192, v178[0]);
      CMILMatrix::Multiply((const struct CMILMatrix *)&v192, v47, (struct CMILMatrix *)v206);
      v47 = (const struct CMILMatrix *)v206;
    }
  }
  if ( v46 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*v46 + 8))(v46)
       ? CCpuClip::RectangleShapeFullyContains(v46, (struct MilRectF *)v210, v47)
       : CRoundedRectangleGeometryData::FillContainsRect(v46[2] + 16, (struct MilRectF *)v210, v47) )
    {
      v8 = v219;
      v4 = 0;
LABEL_5:
      v170 = 0;
      v171 = 0;
      if ( (*v12 & 1) != 0 )
      {
        v7 = *(CShape **)a2;
        CShapePtr::Release((CShapePtr *)&v179);
        v167 = 0;
      }
      else
      {
        v13 = *((_DWORD *)a2 + 3);
        v14 = *((_DWORD *)a2 + 2);
        v15 = *((_DWORD *)a2 + 1);
        v16 = *(_DWORD *)a2;
        HIDWORD(v217) = 0;
        if ( v214 != v215 )
        {
          operator delete(v214);
          v8 = v219;
          v214 = v215;
          LODWORD(v217) = v216;
        }
        if ( v8 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
          v219 = 0LL;
        }
        v203 = (CRectanglesShape *)__PAIR64__(v15, v16);
        v204 = v14;
        v205 = v13;
        DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          &v214,
          &v203,
          1LL);
        v7 = (CShape *)&v212;
      }
      goto LABEL_11;
    }
  }
LABEL_92:
  v54 = (CRectanglesShape *)*((_QWORD *)this + 2);
  v4 = 1;
  v170 = 1;
  v171 = 0;
  v203 = v54;
  if ( *((_BYTE *)v54 + 112) )
  {
    if ( !*((_QWORD *)v54 + 10) )
    {
      v129 = CCpuClip::ConvertContextDependentClipToLocal(v54);
      v24 = v129;
      if ( v129 < 0 )
      {
        v4 = 0;
        MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v129, 0x85u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, v24, 0x32Du, 0LL);
        goto LABEL_58;
      }
      v54 = v203;
    }
    v56 = (CShape *)*((_QWORD *)v54 + 10);
    v210[0] = v56;
    CMILMatrix::SetToIdentity((CMILMatrix *)&v187);
  }
  else
  {
    v55 = *((_DWORD *)v54 + 3);
    v56 = *(CShape **)v54;
    matrix.m11 = *((FLOAT *)v54 + 2);
    *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*((_DWORD *)v54 + 6), v55);
    *(_QWORD *)&matrix.m[1][1] = __PAIR64__(*((_DWORD *)v54 + 14), *((_DWORD *)v54 + 7));
    matrix.dy = *((FLOAT *)v54 + 15);
    v210[0] = v56;
    D2D1InvertMatrix(&matrix);
    v57 = CMILMatrix::CMILMatrix((CMILMatrix *)&v192, &matrix);
    v187 = *(_OWORD *)v57;
    v188 = *((_OWORD *)v57 + 1);
    v189 = *((_OWORD *)v57 + 2);
    v190 = *((_OWORD *)v57 + 3);
    v191 = *((_DWORD *)v57 + 16);
  }
  if ( *((_BYTE *)this + 4473) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v206, (const struct D2D_MATRIX_3X2_F *)((char *)this + 32));
    CMILMatrix::Multiply((CMILMatrix *)&v187, (const struct CMILMatrix *)v206);
  }
  v58 = (*(__int64 (__fastcall **)(CShape *, __int128 *, __int128 *))(*(_QWORD *)v56 + 48LL))(v56, &v220, &v187);
  v24 = v58;
  if ( v58 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v58, 0x336u, 0LL);
  }
  else if ( (*v12 & 1) != 0 )
  {
    v132 = CShape::Combine(*(_QWORD *)a2, v59, v210[0], &v187, 1, &v203);
    v24 = v132;
    if ( v132 >= 0 )
    {
      v7 = v203;
      CShapePtr::Release((CShapePtr *)&v179);
      goto LABEL_104;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v133, 0LL, 0, v132, 0x342u, 0LL);
  }
  else
  {
    v61 = *((_DWORD *)a2 + 3);
    v62 = *((_DWORD *)a2 + 2);
    v63 = *((_DWORD *)a2 + 1);
    v64 = *(_DWORD *)a2;
    LODWORD(v203) = *(_DWORD *)a2;
    HIDWORD(v203) = v63;
    v204 = v62;
    v205 = v61;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v203);
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v203, &v220) )
    {
      v105 = v210[0];
      v171 = 1;
      if ( CShape::IsAxisAlignedRectangle(v210[0]) && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v187) )
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)&v212, (const struct MilRectF *)&v220);
        CShapePtr::Release((CShapePtr *)&v179);
        v7 = (CShape *)&v212;
        v167 = 0;
        v173 = 0;
LABEL_12:
        if ( !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v7 + 16LL))(v7) )
        {
          v17 = (struct D2D_MATRIX_3X2_F *)v185;
          v168 = 0;
          v18 = (*v12 & 1) == 0;
          v19 = 0LL;
          v174 = 0;
          LODWORD(v179) = 0;
          v177 = 0;
          v186 = 0;
          v178[0] = (struct D2D_MATRIX_3X2_F *)v185;
          if ( v18 )
          {
            if ( *((_DWORD *)this + 3) == 1 )
            {
              v17 = 0LL;
              LODWORD(v179) = 0;
            }
            else
            {
              v17 = (struct D2D_MATRIX_3X2_F *)*((unsigned int *)a2 + 4);
              LODWORD(v179) = *((_DWORD *)a2 + 4);
            }
            v173 = 0;
            if ( v4 )
            {
              v69 = *((_QWORD *)this + 2);
              v70 = 50529027;
              v168 = 0;
              v173 = 0;
              v177 = 50529027;
              if ( *(_DWORD *)(v69 + 96) == 1 )
                v70 = 0;
              if ( v171 )
              {
                LODWORD(v179) = v70;
                v20 = 0;
                v170 = v4;
                v173 = 0;
                v168 = 0;
              }
              else
              {
                v209 = v220;
                *(_OWORD *)&matrix.m11 = v220;
                v71 = ~(unsigned int)ClipRectAndEdgeFlags(&matrix, v70, a2, v17, &v209, &v176) & 0x3030303;
                v177 = v71;
                if ( v7 && CShape::IsAxisAlignedRectangle(v7) )
                {
                  v20 = 0;
                  LODWORD(v179) = v176;
                  v170 = v4;
                }
                else
                {
                  *(_OWORD *)v178 = *(_OWORD *)a2;
                  if ( (v71 & 0x3000000) != 0 )
                    LODWORD(v178[0]) = -8388609;
                  if ( (v71 & 3) != 0 )
                    HIDWORD(v178[0]) = -8388609;
                  if ( (v71 & 0x300) != 0 )
                    LODWORD(v178[1]) = 2139095039;
                  if ( (v71 & 0x30000) != 0 )
                    HIDWORD(v178[1]) = 2139095039;
                  CEdgeFlagsMap::AddEdgeFlags(v185, v178, (unsigned int)v179, 0LL, LODWORD(FLOAT_0_000081380211));
                  v170 = v4;
                  v178[0] = (struct D2D_MATRIX_3X2_F *)v185;
                  v173 = v174;
                  v20 = v174;
                  v168 = v174;
                }
              }
LABEL_18:
              LOBYTE(v176) = 0;
              v181 = 1015021568;
              v221 = v224;
              v222 = v224;
              v223 = &v225;
              v206[0] = (bool *)v207 + 8;
              v206[1] = (bool *)v207 + 8;
              *(_QWORD *)&v207[0] = &v208;
              lpMem = v229;
              v227 = v229;
              v228 = &v230;
              v182 = 0LL;
              *(_OWORD *)v183 = 0LL;
              v184 = 0LL;
              if ( v7
                && (*(unsigned __int8 (__fastcall **)(CShape *, CShape **, __int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v7 + 64LL))(
                     v7,
                     v210,
                     v19,
                     v17)
                && LODWORD(v210[0]) == 1 )
              {
                if ( v211.m11 == 1.0 && v211.m12 == 0.0 && v211.m21 == 0.0 && v211.m22 == 1.0 && v9 == 0.0 && v10 == 0.0 )
                {
                  v209 = 0LL;
                  v21 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, &v209, 0LL);
                  v23 = v21;
                  v24 = v21;
                  if ( v21 >= 0 )
                  {
                    v25 = v209;
                    v26 = DWORD1(v209);
                    v27 = DWORD2(v209);
                    v28 = HIDWORD(v209);
                    v29 = (unsigned int)v179;
                    v182 = v209;
                    BYTE12(v184) = 1;
                    *(_DWORD *)v183 = (_DWORD)v179;
                    v183[4] = (v177 & 3) == 0;
                    v183[5] = (v177 & 0x300) == 0;
                    v183[6] = (v177 & 0x30000) == 0;
                    v183[7] = (v177 & 0x3000000) == 0;
                    v30 = 0;
                    if ( ((unsigned __int16)v179 & 0x300) != 0x300 )
                      v30 = ((unsigned __int8)v179 & 3) != 3 && ((unsigned int)v179 & 0x3000000) != 50331648;
                    LOBYTE(v30) = ((unsigned int)v179 & 0x30000) == 196608 || !v30;
                    v177 = v30;
                    if ( *((_BYTE *)this + 4475) && (*v12 & 2) != 0 )
                    {
                      v49 = (unsigned __int8)v176;
                      if ( (float)((float)(*((float *)&v209 + 3) - *((float *)&v209 + 1))
                                 * (float)(*((float *)&v209 + 2) - *(float *)&v209)) >= (float)CCommonRegistryData::MegaRectSize )
                        v49 = 1;
                      v176 = v49;
                    }
                    v31 = v206[0];
                    v172 = v4;
                    goto LABEL_32;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x140u, 0LL);
                  MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, v23, 0x3F5u, 0LL);
                  v136 = lpMem;
                  v137 = (v227 - (_BYTE *)lpMem) >> 5;
                  if ( v137 )
                  {
                    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &lpMem,
                      0LL,
                      v137);
                    v136 = lpMem;
                  }
                  lpMem = 0LL;
                  if ( v136 == v229 )
                    v136 = 0LL;
                  operator delete(v136);
                  v138 = v206[0];
                  if ( v206[1] != v206[0] )
                  {
                    detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                      v206,
                      0LL,
                      v206[1] - v206[0]);
                    v138 = v206[0];
                  }
                  v206[0] = 0LL;
                  if ( v138 == (bool *)((char *)v207 + 8) )
                    v138 = 0LL;
                  operator delete(v138);
                  v139 = v221;
                  if ( (v222 - (_BYTE *)v221) >> 2 )
                  {
                    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &v221,
                      0LL);
                    v139 = v221;
                  }
                  v221 = 0LL;
                  if ( v139 == v224 )
                    v139 = 0LL;
                  goto LABEL_356;
                }
                v168 = v20;
              }
              v72 = (CPolygonBuilder **)((char *)this + 144);
              v172 = v4;
              v73 = *((_QWORD *)this + 18);
              v173 = 1;
              if ( v73 )
              {
                v74 = *(_QWORD *)(v73 + 24);
                v75 = (__int64 *)(v73 + 16);
                v76 = (v74 - *v75) >> 3;
                if ( v76 )
                  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
                    v75,
                    0LL,
                    v76);
              }
              else
              {
                ObjectCache = CThreadContext::GetObjectCache(0LL);
                v100 = 0LL;
                v101 = *((_DWORD *)ObjectCache + 1);
                if ( v101 )
                {
                  v100 = (_DWORD *)*((_QWORD *)ObjectCache + 1);
                  *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v100;
                  *((_DWORD *)ObjectCache + 1) = v101 - 1;
                }
                if ( v100 || (v100 = DefaultHeap::Alloc(0x168uLL)) != 0LL )
                {
                  v100[2] = 0;
                  *(_QWORD *)v100 = &CPolygonBuilder::`vftable';
                  *((_QWORD *)v100 + 2) = v100 + 10;
                  *((_QWORD *)v100 + 3) = v100 + 10;
                  *((_QWORD *)v100 + 4) = v100 + 90;
                }
                else
                {
                  v100 = 0LL;
                }
                wil::com_ptr_t<CPolygonBuilder,wil::err_returncode_policy>::operator=((char *)this + 144, v100);
                if ( !*v72 )
                {
                  v24 = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(v102, 0LL, 0, -2147024882, 0x414u, 0LL);
                  v140 = lpMem;
                  v141 = (v227 - (_BYTE *)lpMem) >> 5;
                  if ( v141 )
                  {
                    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &lpMem,
                      0LL,
                      v141);
                    v140 = lpMem;
                  }
                  lpMem = 0LL;
                  if ( v140 == v229 )
                    v140 = 0LL;
                  operator delete(v140);
                  v142 = v206[0];
                  if ( v206[1] != v206[0] )
                  {
                    detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                      v206,
                      0LL,
                      v206[1] - v206[0]);
                    v142 = v206[0];
                  }
                  v206[0] = 0LL;
                  if ( v142 == (bool *)((char *)v207 + 8) )
                    v142 = 0LL;
                  operator delete(v142);
                  v139 = v221;
                  if ( (v222 - (_BYTE *)v221) >> 2 )
                  {
                    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &v221,
                      0LL);
                    v139 = v221;
                  }
                  v221 = 0LL;
                  if ( v139 == v224 )
                    v139 = 0LL;
                  goto LABEL_356;
                }
              }
              v77 = (*(__int64 (__fastcall **)(CShape *, CPolygonBuilder *, __int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v7 + 32LL))(
                      v7,
                      *v72,
                      v76,
                      v17);
              v24 = v77;
              if ( v77 >= 0 )
              {
                if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v211) )
                  CPolygonBuilder::Transform(*v72, &v211);
                v79 = *v72;
                BYTE12(v184) = 0;
                v177 = 0;
                v80 = (unsigned int)((__int64)(*((_QWORD *)v79 + 3) - *((_QWORD *)v79 + 2)) >> 3);
                *(_QWORD *)&v182 = (unsigned int)v80;
                *((_QWORD *)&v182 + 1) = *((_QWORD *)v79 + 2);
                detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
                  &v221,
                  v80,
                  &v177);
                v174 = 0;
                detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::resize(
                  v206,
                  v182,
                  &v174);
                v81 = 0LL;
                if ( g_pComposition )
                  v81 = (CMeshCacheManager *)*((_QWORD *)g_pComposition + 35);
                if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v7 + 8LL))(v7)
                  && (MeshAAOffsetsForRoundedRectangle = CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(
                                                           v81,
                                                           (const struct Mesh::MeshDesc *)&v181,
                                                           v7,
                                                           (const struct D2D1::Matrix3x2F *)&v211,
                                                           1)) != 0LL )
                {
                  v87 = (char *)MeshAAOffsetsForRoundedRectangle + 24;
                }
                else
                {
                  v84 = (v227 - (_BYTE *)lpMem) >> 5;
                  if ( (unsigned __int64)v182 <= v84 )
                  {
                    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &lpMem,
                      (32 * (__int64)v182) >> 5,
                      (v227 - ((_BYTE *)lpMem + 32 * v182)) >> 5);
                  }
                  else
                  {
                    v85 = v182 - v84;
                    v86 = (_OWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
                                      &lpMem,
                                      v84,
                                      v182 - v84);
                    if ( v85 )
                    {
                      *v86 = 0LL;
                      v86[1] = 0LL;
                      qmemcpy(v86 + 2, v86, 8 * ((unsigned __int64)(32 * v85 - 25) >> 3));
                    }
                  }
                  *(_QWORD *)&matrix.m11 = lpMem;
                  LODWORD(matrix.m22) = v182;
                  LODWORD(matrix.m21) = 32;
                  Mesh::CalcEdgeDirections(*((_QWORD *)&v182 + 1), v182, &matrix);
                  v87 = lpMem;
                }
                *(_QWORD *)&v183[8] = v87;
                if ( !v172 || *(_DWORD *)(*((_QWORD *)this + 2) + 96LL) == 1 )
                  v88 = 0LL;
                else
                  v88 = 3LL;
                v89 = (bool *)v221;
                v90 = (v222 - (_BYTE *)v221) >> 2;
                *(_QWORD *)&matrix.m11 = v90;
                if ( v90 == -1
                  || (*(_QWORD *)&matrix.m[1][0] = v221) == 0LL && v90
                  || (v91 = *(_OWORD *)&matrix.m11,
                      v89 = v206[0],
                      *(_QWORD *)&matrix.m11 = v206[1] - v206[0],
                      v231 = v91,
                      v206[1] - v206[0] == -1)
                  || (*(bool **)&matrix.m[1][0] = v206[0]) == 0LL && v206[1] )
                {
                  ((void (__fastcall *)(bool *, LPVOID, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
                    v89,
                    v87,
                    v83,
                    v88);
                  __debugbreak();
                }
                v232 = *(_OWORD *)&matrix.m11;
                LODWORD(matrix.m22) = v182;
                *(_QWORD *)&matrix.m11 = v87;
                LODWORD(matrix.m21) = 32;
                CEdgeFlagsMap::ResolveEdgeFlags(v178[0], (unsigned int)&matrix, DWORD2(v182), v88, (__int64)&v231, v181);
                v177 = v234;
                v170 = v168;
                v4 = v168;
                if ( v172 )
                {
                  v170 = v168;
                  if ( v233 )
                  {
                    v4 = 1;
                    v170 = 1;
                  }
                }
                v31 = v206[0];
                v29 = (unsigned int)v221;
                v28 = HIDWORD(v182);
                v27 = DWORD2(v182);
                v26 = DWORD1(v182);
                v25 = v182;
                *(_QWORD *)v183 = v221;
                *(bool **)&v184 = v206[0];
LABEL_32:
                if ( a3 )
                {
                  v178[0] = a3[2];
                  v179 = (struct _D3DCOLORVALUE *)a3;
                }
                else
                {
                  v178[0] = 0LL;
                  v179 = 0LL;
                }
                v32 = (*((_DWORD *)this + 6) & 0x2000) != 0;
                v33 = 0;
                v174 = v32;
                v169 = 0;
                if ( v4 && *(_QWORD *)(*((_QWORD *)this + 2) + 104LL) )
                {
                  v93 = (*v12 & 4) == 0;
                  v175 = v93;
                  if ( BYTE12(v184) )
                  {
                    *(_QWORD *)&v231 = __PAIR64__(v26, v25);
                    *((_QWORD *)&v231 + 1) = __PAIR64__(v26, v27);
                    *(_QWORD *)&v232 = __PAIR64__(v28, v27);
                    *((_QWORD *)&v232 + 1) = __PAIR64__(v28, v25);
                    DecomposeRectangleEdgeFlags(v29, &matrix.m[1][1], &matrix, &matrix.m[0][1], matrix.m[1]);
                    v201 = 0;
                    v194 = &v231;
                    p_matrix = &matrix;
                    v196 = &unk_1802DC1B0;
                    v197 = &v183[4];
                    v198 = DWORD2(v184);
                    v200 = BYTE13(v184);
                    v192 = v181;
                    v199 = 0;
                    v193 = 4LL;
                    appended = CDrawListEntryBuilder::AppendCpuClipAntialiasHWPrimitive(
                                 this,
                                 (const struct Mesh::MeshDesc *)&v192,
                                 (const struct PrimitiveVertexAttributesDesc *)a3,
                                 v175,
                                 v32,
                                 &v183[4]);
                    v24 = appended;
                    if ( appended < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, appended, 0x4A0u, 0LL);
                      v143 = lpMem;
                      v144 = (v227 - (_BYTE *)lpMem) >> 5;
                      if ( v144 )
                      {
                        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                          &lpMem,
                          0LL,
                          v144);
                        v143 = lpMem;
                      }
                      lpMem = 0LL;
                      if ( v143 == v229 )
                        v143 = 0LL;
                      operator delete(v143);
                      v145 = v206[0];
                      if ( v206[1] != v206[0] )
                      {
                        detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                          v206,
                          0LL,
                          v206[1] - v206[0]);
                        v145 = v206[0];
                      }
                      v206[0] = 0LL;
                      if ( v145 == (bool *)((char *)v207 + 8) )
                        v145 = 0LL;
                      operator delete(v145);
                      v146 = v221;
                      if ( (v222 - (_BYTE *)v221) >> 2 )
                      {
                        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                          &v221,
                          0LL);
                        v146 = v221;
                      }
                      v221 = 0LL;
                      if ( v146 == v224 )
                        v146 = 0LL;
                      goto LABEL_337;
                    }
                    v113 = 0LL;
                    v114 = 0LL;
                    v115 = 0LL;
                    if ( v183[6] )
                      v113 = 3LL;
                    v116 = 0LL;
                    if ( v183[5] )
                      v114 = 3LL;
                    if ( v183[4] )
                      v115 = 3LL;
                    if ( v183[7] )
                      v116 = 3LL;
                    RectangleEdgeFlags = MakeRectangleEdgeFlags(v116, v115, v114, v113);
                    if ( !RectangleEdgeFlags )
                      goto LABEL_35;
                    *(_DWORD *)v183 |= RectangleEdgeFlags;
                    v33 = 1;
                    v169 = 1;
                  }
                  else
                  {
                    v94 = CDrawListEntryBuilder::AppendCpuClipAntialiasHWPrimitive(
                            this,
                            (const struct Mesh::MeshDesc *)&v181,
                            (const struct PrimitiveVertexAttributesDesc *)a3,
                            v93,
                            v32,
                            v31);
                    v24 = v94;
                    if ( v94 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x4B9u, 0LL);
                      v147 = lpMem;
                      v148 = (v227 - (_BYTE *)lpMem) >> 5;
                      if ( v148 )
                      {
                        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                          &lpMem,
                          0LL,
                          v148);
                        v147 = lpMem;
                      }
                      lpMem = 0LL;
                      if ( v147 == v229 )
                        v147 = 0LL;
                      operator delete(v147);
                      v149 = v206[0];
                      if ( v206[1] != v206[0] )
                      {
                        detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                          v206,
                          0LL,
                          v206[1] - v206[0]);
                        v149 = v206[0];
                      }
                      v206[0] = 0LL;
                      if ( v149 == (bool *)((char *)v207 + 8) )
                        v149 = 0LL;
                      operator delete(v149);
                      v146 = v221;
                      if ( (v222 - (_BYTE *)v221) >> 2 )
                      {
                        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                          &v221,
                          0LL);
                        v146 = v221;
                      }
                      v221 = 0LL;
                      if ( v146 == v224 )
                        v146 = 0LL;
                      goto LABEL_337;
                    }
                    v96 = v182;
                    v97 = 0;
                    if ( !(_QWORD)v182 )
                      goto LABEL_35;
                    v98 = 0LL;
                    do
                    {
                      if ( v206[0][v98] )
                      {
                        v33 = 1;
                        *((_DWORD *)v221 + v98) = 3;
                        v96 = v182;
                      }
                      v98 = ++v97;
                    }
                    while ( v97 < v96 );
                    v169 = v33;
                    if ( !v33 )
                      goto LABEL_35;
                  }
                  LOBYTE(v177) = 1;
                }
LABEL_35:
                if ( !BYTE12(v184) )
                {
                  v92 = (struct Mesh::VertexAAOffsetDesc *)lpMem;
                  if ( *(LPVOID *)&v183[8] == lpMem )
                    goto LABEL_152;
                  v110 = 0LL;
                  if ( g_pComposition )
                    v110 = (CMeshCacheManager *)*((_QWORD *)g_pComposition + 35);
                  if ( !CMeshCacheManager::TryGetMeshAAOffsets(
                          v110,
                          (const struct Mesh::MeshDesc *)&v181,
                          v7,
                          (const struct D2D1::Matrix3x2F *)&v211,
                          0) )
                  {
                    v118 = (v227 - (_BYTE *)lpMem) >> 5;
                    if ( (unsigned __int64)v182 <= v118 )
                    {
                      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        (32 * (__int64)v182) >> 5,
                        (v227 - ((_BYTE *)lpMem + 32 * v182)) >> 5);
                    }
                    else
                    {
                      v119 = v182 - v118;
                      v120 = (_OWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
                                         &lpMem,
                                         v118,
                                         v182 - v118);
                      if ( v119 )
                      {
                        *v120 = 0LL;
                        v120[1] = 0LL;
                        qmemcpy(v120 + 2, v120, 8 * ((unsigned __int64)(32 * v119 - 25) >> 3));
                        v33 = v169;
                      }
                    }
                    v121 = 0;
                    if ( (_QWORD)v182 )
                    {
                      v122 = 0LL;
                      do
                      {
                        ++v121;
                        v123 = 32 * v122;
                        v124 = *(_DWORD *)(v123 + *(_QWORD *)&v183[8] + 4);
                        v125 = (char *)lpMem;
                        *(_DWORD *)((char *)lpMem + v123) = *(_DWORD *)(v123 + *(_QWORD *)&v183[8]);
                        *(_DWORD *)&v125[v123 + 4] = v124;
                        v122 = v121;
                      }
                      while ( v121 < (unsigned __int64)v182 );
                    }
                    v4 = v170;
                    *(_QWORD *)&v183[8] = lpMem;
                    Mesh::CalcVertexAAOffsets(
                      (const struct Mesh::MeshDesc *)&v181,
                      (struct Mesh::VertexAAOffsetDesc *)lpMem,
                      0);
                    goto LABEL_36;
                  }
                  v92 = (struct Mesh::VertexAAOffsetDesc *)lpMem;
                  if ( *(LPVOID *)&v183[8] == lpMem )
LABEL_152:
                    Mesh::CalcVertexAAOffsets((const struct Mesh::MeshDesc *)&v181, v92, 0);
                }
LABEL_36:
                if ( (_BYTE)v176 )
                {
                  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                            this,
                                            0,
                                            (struct CPrimitiveColor *)v178[0],
                                            v179);
                  v24 = BuiltHWPrimitiveEntry;
                  if ( BuiltHWPrimitiveEntry < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, BuiltHWPrimitiveEntry, 0x4F2u, 0LL);
                    v153 = lpMem;
                    v154 = (v227 - (_BYTE *)lpMem) >> 5;
                    if ( v154 )
                    {
                      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL,
                        v154);
                      v153 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v153 == v229 )
                      v153 = 0LL;
                    operator delete(v153);
                    v155 = v206[0];
                    if ( v206[1] != v206[0] )
                    {
                      detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                        v206,
                        0LL,
                        v206[1] - v206[0]);
                      v155 = v206[0];
                    }
                    v206[0] = 0LL;
                    if ( v155 == (bool *)((char *)v207 + 8) )
                      v155 = 0LL;
                    operator delete(v155);
                    v146 = v221;
                    if ( (v222 - (_BYTE *)v221) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &v221,
                        0LL);
                      v146 = v221;
                    }
                    v221 = 0LL;
                    if ( v146 == v224 )
                      v146 = 0LL;
                    goto LABEL_337;
                  }
                  BYTE13(v184) = (*v12 & 2) != 0;
                  DWORD2(v184) = 0;
                  CDrawListEntryBuilder::AppendHWGeometry(
                    this,
                    (const struct Mesh::MeshDesc *)&v181,
                    (const struct PrimitiveVertexAttributesDesc *)a3);
                  v52 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                          this,
                          8,
                          (struct CPrimitiveColor *)v178[0],
                          v179);
                  v24 = v52;
                  if ( v52 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x4FCu, 0LL);
                    v150 = lpMem;
                    v151 = (v227 - (_BYTE *)lpMem) >> 5;
                    if ( v151 )
                    {
                      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL,
                        v151);
                      v150 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v150 == v229 )
                      v150 = 0LL;
                    operator delete(v150);
                    v152 = v206[0];
                    if ( v206[1] != v206[0] )
                    {
                      detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                        v206,
                        0LL,
                        v206[1] - v206[0]);
                      v152 = v206[0];
                    }
                    v206[0] = 0LL;
                    if ( v152 == (bool *)((char *)v207 + 8) )
                      v152 = 0LL;
                    operator delete(v152);
                    v146 = v221;
                    if ( (v222 - (_BYTE *)v221) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &v221,
                        0LL);
                      v146 = v221;
                    }
                    v221 = 0LL;
                    if ( v146 == v224 )
                      v146 = 0LL;
                    goto LABEL_337;
                  }
                  BYTE13(v184) = 0;
                }
                else
                {
                  BYTE13(v184) = (*v12 & 2) != 0;
                }
                if ( (*v12 & 4) != 0 && (_BYTE)v177 )
                {
                  if ( !v33 || v174 )
                  {
                    DWORD2(v184) = 1;
                    *((_BYTE *)this + 4476) = 1;
                  }
                  else
                  {
                    *((_BYTE *)this + 4476) = 1;
                    DWORD2(v184) = 3;
                  }
                }
                else
                {
                  DWORD2(v184) = 0;
                }
                CDrawListEntryBuilder::AppendHWGeometry(
                  this,
                  (const struct Mesh::MeshDesc *)&v181,
                  (const struct PrimitiveVertexAttributesDesc *)a3);
                if ( *((_DWORD *)this + 1112) >= 0xC8u )
                {
                  v156 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                           this,
                           0,
                           (struct CPrimitiveColor *)v178[0],
                           v179);
                  v24 = v156;
                  if ( v156 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0, v156, 0x521u, 0LL);
                    v158 = lpMem;
                    v159 = (v227 - (_BYTE *)lpMem) >> 5;
                    if ( v159 )
                    {
                      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL,
                        v159);
                      v158 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v158 == v229 )
                      v158 = 0LL;
                    operator delete(v158);
                    v160 = v206[0];
                    if ( v206[1] != v206[0] )
                    {
                      detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                        v206,
                        0LL,
                        v206[1] - v206[0]);
                      v160 = v206[0];
                    }
                    v206[0] = 0LL;
                    if ( v160 == (bool *)((char *)v207 + 8) )
                      v160 = 0LL;
                    operator delete(v160);
                    v146 = v221;
                    if ( (v222 - (_BYTE *)v221) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &v221,
                        0LL);
                      v146 = v221;
                    }
                    v221 = 0LL;
                    if ( v146 == v224 )
                      v146 = 0LL;
LABEL_337:
                    operator delete(v146);
                    std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(v185);
LABEL_57:
                    v4 = v167;
                    goto LABEL_58;
                  }
                }
                v34 = lpMem;
                v35 = (v227 - (_BYTE *)lpMem) >> 5;
                if ( v35 )
                {
                  detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                    &lpMem,
                    0LL,
                    v35);
                  v34 = lpMem;
                }
                lpMem = 0LL;
                if ( v34 != v229 && v34 )
                {
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, v34);
                }
                v36 = v206[0];
                if ( v206[1] != v206[0] )
                  v206[1] = v206[0];
                v206[0] = 0LL;
                if ( v36 != (bool *)((char *)v207 + 8) && v36 )
                {
                  v162 = GetProcessHeap();
                  HeapFree(v162, 0, v36);
                }
                v37 = v221;
                v38 = (v222 - (_BYTE *)v221) >> 2;
                if ( v38 )
                  v222 -= 4 * v38;
                v221 = 0LL;
                if ( v37 != v224 && v37 )
                {
                  v163 = GetProcessHeap();
                  HeapFree(v163, 0, v37);
                }
                if ( v186 && v186 != -1 && v186 != 1 )
                {
                  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
                    v185,
                    v185,
                    *(_QWORD *)(v185[0] + 8LL));
                  std::_Deallocate<16,0>(v185[0], 48LL);
                }
                v39 = v172;
LABEL_53:
                if ( v4 && **((_QWORD **)this + 2) )
                  *((_BYTE *)this + 4472) = 1;
                if ( v39 )
                {
                  if ( v173 )
                    ++dword_1803E2ADC;
                  else
                    ++dword_1803E2AD8;
                }
                else
                {
                  ++dword_1803E2AD4;
                }
                v24 = 0;
                goto LABEL_57;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x41Bu, 0LL);
              v164 = lpMem;
              v165 = (v227 - (_BYTE *)lpMem) >> 5;
              if ( v165 )
              {
                detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
                  &lpMem,
                  0LL,
                  v165);
                v164 = lpMem;
              }
              lpMem = 0LL;
              if ( v164 == v229 )
                v164 = 0LL;
              operator delete(v164);
              v166 = v206[0];
              if ( v206[1] != v206[0] )
              {
                detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
                  v206,
                  0LL,
                  v206[1] - v206[0]);
                v166 = v206[0];
              }
              v206[0] = 0LL;
              if ( v166 == (bool *)((char *)v207 + 8) )
                v166 = 0LL;
              operator delete(v166);
              v139 = v221;
              if ( (v222 - (_BYTE *)v221) >> 2 )
              {
                detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                  &v221,
                  0LL);
                v139 = v221;
              }
              v221 = 0LL;
              if ( v139 == v224 )
                v139 = 0LL;
LABEL_356:
              operator delete(v139);
              std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(v185);
              goto LABEL_57;
            }
          }
          else
          {
            v170 = v4;
            v173 = 0;
            if ( *((_QWORD *)a2 + 1) )
              v17 = (struct D2D_MATRIX_3X2_F *)*((_QWORD *)a2 + 1);
            v178[0] = v17;
          }
          v20 = 0;
          goto LABEL_18;
        }
LABEL_190:
        v39 = v4;
        goto LABEL_53;
      }
      CShapePtr::Release((CShapePtr *)&v179);
      v7 = v105;
      v106 = _mm_shuffle_ps((__m128)(unsigned int)v187, (__m128)(unsigned int)v187, 225);
      v106.m128_f32[0] = *((float *)&v187 + 1);
      v167 = 0;
      v107 = _mm_shuffle_ps(v106, v106, 198);
      v107.m128_f32[0] = *(float *)&v188;
      v108 = _mm_shuffle_ps(v107, v107, 39);
      v109 = _mm_unpacklo_ps((__m128)(unsigned int)v190, (__m128)DWORD1(v190));
      v108.m128_f32[0] = *((float *)&v188 + 1);
      LODWORD(v10) = _mm_shuffle_ps(v109, v109, 85).m128_u32[0];
      *(_QWORD *)&v211.m[2][0] = v109.m128_u64[0];
      v9 = v109.m128_f32[0];
      *(__m128 *)&matrix.m11 = _mm_shuffle_ps(v108, v108, 57);
      *(_OWORD *)&v211.m11 = *(_OWORD *)&matrix.m11;
LABEL_11:
      v173 = 0;
      if ( !v7 )
        goto LABEL_190;
      goto LABEL_12;
    }
    HIDWORD(v217) = 0;
    DynArrayImpl<0>::ShrinkToSize(&v214, 16LL);
    if ( v219 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v219 + 16LL))(v219);
      v219 = 0LL;
    }
    *(_QWORD *)&v209 = __PAIR64__(v63, v64);
    *((_QWORD *)&v209 + 1) = __PAIR64__(v61, v62);
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &v214,
      &v209,
      1LL);
    v65 = CShape::TryOptimizedCombinePaths(&v212, 0LL, v210[0], &v187, 1, &v203);
    v176 = v65;
    v24 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v65, 0x1CCu, 0LL);
    }
    else
    {
      v68 = v203;
      if ( v203 )
      {
LABEL_103:
        v7 = v68;
LABEL_104:
        v167 = 1;
        goto LABEL_11;
      }
      v103 = CShape::D2DCombine(
               (__int64)&v212,
               v66,
               (__int64)v210[0],
               (__int64)&v187,
               D2D1_COMBINE_MODE_INTERSECT,
               &v203);
      v176 = v103;
      v24 = v103;
      if ( v103 >= 0 )
      {
        v68 = v203;
        goto LABEL_103;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x1D7u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v176, 0x36Cu, 0LL);
  }
  v4 = 0;
LABEL_58:
  v40 = v214;
  v41 = v215;
  v212 = &CRectanglesShape::`vftable';
  HIDWORD(v217) = 0;
  if ( v214 != v215 )
  {
    operator delete(v214);
    v41 = v215;
    v40 = v215;
    v214 = v215;
    LODWORD(v217) = v216;
  }
  v42 = v219;
  if ( v219 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v219 + 16LL))(v219);
    v41 = v215;
    v42 = 0LL;
    v40 = v214;
    v219 = 0LL;
  }
  if ( v40 != v41 )
  {
    operator delete(v40);
    v214 = v42;
  }
  v43 = v213;
  if ( v213 )
  {
    v213 = v42;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
  }
  if ( v4 && v7 )
    (**(void (__fastcall ***)(CShape *, __int64))v7)(v7, 1LL);
  return v24;
}
