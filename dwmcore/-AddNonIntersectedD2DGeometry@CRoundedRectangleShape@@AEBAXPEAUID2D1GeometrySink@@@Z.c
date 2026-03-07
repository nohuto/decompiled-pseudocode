void __fastcall CRoundedRectangleShape::AddNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1GeometrySink *a2)
{
  __int64 v2; // rax
  struct ID2D1GeometrySink *v3; // r12
  CRoundedRectangleShape *v4; // r14
  void **v5; // rsi
  CMilPoint2F *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r9
  float *v13; // rax
  int v14; // eax
  __int64 v15; // r8
  float *v16; // rax
  __int64 v17; // r12
  char *v18; // r15
  unsigned int *v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  SIZE_T v25; // r14
  HANDLE ProcessHeap; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  _QWORD *v29; // rcx
  unsigned int *v30; // rdx
  char *v31; // rax
  __int64 v32; // xmm0_8
  char *v33; // rcx
  signed __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  int *v36; // rcx
  unsigned int *v37; // r15
  unsigned int *v38; // r13
  float *v39; // r12
  float v40; // xmm6_4
  CMilPoint2F *v41; // rbx
  __int64 v42; // rdi
  CMilPoint2F *v43; // rbx
  __int64 v44; // rdi
  CMilPoint2F *v45; // rbx
  __int64 v46; // rdi
  int v47; // ebx
  unsigned int v48; // xmm1_4
  char v49; // di
  unsigned int v50; // r11d
  unsigned int v51; // r10d
  _DWORD *v52; // r15
  int v53; // eax
  float v54; // xmm6_4
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  int v60; // xmm1_4
  __int64 v61; // rax
  CMilPoint2F *v62; // rdi
  __int64 v63; // rbx
  unsigned int v64; // r15d
  int *v65; // rbx
  int *v66; // r13
  __int64 v67; // rcx
  float v68; // xmm0_4
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r14
  unsigned int v74; // xmm0_4
  unsigned int v75; // xmm1_4
  __int64 v76; // rax
  __int64 v77; // rax
  __m128 v78; // xmm4
  __m128 v79; // xmm4
  __m128 v80; // xmm4
  __int64 v81; // rax
  unsigned int v82; // xmm0_4
  unsigned int v83; // xmm1_4
  __int64 v84; // rax
  LPVOID v85; // rax
  __int64 v86; // xmm0_8
  unsigned int *v87; // rax
  __int64 v88; // rbx
  char v89; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v90; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v91; // [rsp+48h] [rbp-C0h]
  void *v92; // [rsp+50h] [rbp-B8h] BYREF
  CRoundedRectangleShape *v93; // [rsp+58h] [rbp-B0h]
  __int64 v94; // [rsp+60h] [rbp-A8h]
  struct ID2D1GeometrySink *v95; // [rsp+68h] [rbp-A0h]
  _BYTE v96[24]; // [rsp+88h] [rbp-80h] BYREF
  int v97; // [rsp+A0h] [rbp-68h]
  int v98; // [rsp+A4h] [rbp-64h]
  float v99; // [rsp+A8h] [rbp-60h]
  float v100; // [rsp+B0h] [rbp-58h]
  float v101; // [rsp+B4h] [rbp-54h]
  float v102; // [rsp+B8h] [rbp-50h] BYREF
  float v103; // [rsp+BCh] [rbp-4Ch]
  float v104; // [rsp+C0h] [rbp-48h]
  float v105; // [rsp+C4h] [rbp-44h]
  float v106; // [rsp+C8h] [rbp-40h]
  float v107; // [rsp+CCh] [rbp-3Ch]
  float v108; // [rsp+D0h] [rbp-38h]
  float v109; // [rsp+D4h] [rbp-34h]
  int v110; // [rsp+D8h] [rbp-30h]
  float v111; // [rsp+DCh] [rbp-2Ch]
  float v112; // [rsp+E0h] [rbp-28h]
  __m128 v113; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v114; // [rsp+F8h] [rbp-10h]
  unsigned int v115[40]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v116[20]; // [rsp+1A8h] [rbp+A0h] BYREF
  void *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 2);
  v3 = a2;
  v95 = a2;
  v4 = this;
  v93 = this;
  v94 = v2;
  if ( *(float *)(v2 + 64) <= 0.0 )
  {
    v62 = (CMilPoint2F *)v115;
    v63 = 20LL;
    do
    {
      CMilPoint2F::CMilPoint2F(v62);
      v62 = (CMilPoint2F *)((char *)v62 + 8);
      --v63;
    }
    while ( v63 );
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v115);
    v64 = 0;
    v65 = (int *)&unk_180339394;
    v66 = dword_180375250;
    while ( 1 )
    {
      v67 = *((_QWORD *)v4 + 2) + 16LL;
      if ( !*(_BYTE *)(*((_QWORD *)v4 + 2) + 68LL) )
        v67 += 8LL * v64;
      v68 = *(float *)(v67 + 16);
      v69 = v67 + 16;
      if ( v68 > 0.0 && *(float *)(v69 + 4) > 0.0 )
        break;
      v81 = *v66;
      v82 = v115[2 * v81];
      v83 = v115[2 * v81 + 1];
      v84 = *(_QWORD *)v3;
      v90 = __PAIR64__(v83, v82);
      if ( v64 )
      {
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v84 + 80))(v3, v90);
LABEL_69:
        ++v64;
        ++v66;
        v65 += 4;
        if ( v64 >= 4 )
        {
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
          return;
        }
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v84 + 40))(v3, v90, 0LL);
        v64 = 1;
        ++v66;
        v65 += 4;
      }
    }
    v70 = *(v65 - 1);
    v71 = *v65;
    v72 = v65[1];
    v73 = v65[2];
    v74 = v115[2 * v70];
    v75 = v115[2 * v70 + 1];
    v76 = *(_QWORD *)v3;
    v91 = __PAIR64__(v75, v74);
    if ( v64 )
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v76 + 80))(v3, v91);
    else
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v76 + 40))(v3, v91, 0LL);
    v77 = *(_QWORD *)v3;
    v78 = _mm_shuffle_ps((__m128)v115[2 * v71], (__m128)v115[2 * v71], 225);
    v78.m128_f32[0] = *(float *)&v115[2 * v71 + 1];
    v79 = _mm_shuffle_ps(v78, v78, 198);
    v79.m128_f32[0] = *(float *)&v115[2 * v72];
    v80 = _mm_shuffle_ps(v79, v79, 39);
    v80.m128_f32[0] = *(float *)&v115[2 * v72 + 1];
    v114 = _mm_unpacklo_ps((__m128)v115[2 * v73], (__m128)v115[2 * v73 + 1]).m128_u64[0];
    v113 = _mm_shuffle_ps(v80, v80, 57);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __m128 *))(v77 + 88))(v3, &v113);
    v4 = v93;
    goto LABEL_69;
  }
  v5 = (void **)(v2 + 80);
  if ( *(_QWORD *)(v2 + 80) == *(_QWORD *)(v2 + 88) )
  {
    v6 = (CMilPoint2F *)v115;
    v7 = 20LL;
    do
    {
      CMilPoint2F::CMilPoint2F(v6);
      v6 = (CMilPoint2F *)((char *)v6 + 8);
      --v7;
    }
    while ( v7 );
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v115);
    v8 = 0;
    do
    {
      v9 = v8;
      LODWORD(v91) = v8 + 1;
      v10 = *((_QWORD *)v93 + 2);
      v11 = (v8 + 1) & 3;
      v12 = *(_BYTE *)(v10 + 68);
      v13 = (float *)(v10 + 32);
      if ( !v12 )
        v13 += 2 * v11;
      if ( *v13 <= 0.0 || v13[1] <= 0.0 )
        v14 = dword_180375250[v11];
      else
        v14 = *((_DWORD *)&unk_180339390 + 4 * v11);
      v15 = v14;
      v16 = (float *)(v10 + 32);
      if ( !v12 )
        v16 += 2 * v9;
      if ( *v16 <= 0.0 || v16[1] <= 0.0 )
      {
        v17 = dword_180375250[v9];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v115[2 * v17] - *(float *)&v115[2 * v15]) & _xmm) > 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v115[2 * v17 + 1] - *(float *)&v115[2 * v15 + 1]) & _xmm) > 0.0000011920929 )
        {
          v18 = (char *)v5[1];
          v19 = (unsigned int *)v5[2];
          if ( v18 == (char *)v19 )
          {
            v20 = (v18 - (_BYTE *)*v5) >> 3;
            if ( v20 == 0x1FFFFFFFFFFFFFFFLL )
              std::_Xlength_error("vector too long");
            v21 = v20 + 1;
            v22 = ((char *)v19 - (_BYTE *)*v5) >> 3;
            if ( v22 > 0x1FFFFFFFFFFFFFFFLL - (v22 >> 1) )
              goto LABEL_76;
            v23 = (v22 >> 1) + v22;
            v24 = v20 + 1;
            if ( v23 >= v21 )
              v24 = v23;
            if ( v24 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_76:
              std::_Throw_bad_array_new_length();
            v25 = 8 * v24;
            if ( 8 * v24 >= 0x1000 )
            {
              if ( v25 + 39 < v25 )
                goto LABEL_76;
              v85 = operator new(v25 + 39);
              if ( !v85 )
                _invalid_parameter_noinfo_noreturn();
              v27 = ((unsigned __int64)v85 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v27 - 8) = v85;
            }
            else if ( v25 )
            {
              ProcessHeap = GetProcessHeap();
              v27 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v25);
              if ( !v27 )
                ModuleFailFastForHRESULT(2147942414LL, retaddr);
            }
            else
            {
              v27 = 0LL;
            }
            v28 = 8 * v20;
            *(_QWORD *)(v28 + v27) = *(_QWORD *)&v115[2 * v17];
            v29 = (_QWORD *)v27;
            v30 = (unsigned int *)v5[1];
            v31 = (char *)*v5;
            if ( v18 == (char *)v30 )
            {
              for ( ; v31 != (char *)v30; ++v29 )
              {
                v32 = *(_QWORD *)v31;
                v31 += 8;
                *v29 = v32;
              }
            }
            else
            {
              for ( ; v31 != v18; ++v29 )
              {
                v86 = *(_QWORD *)v31;
                v31 += 8;
                *v29 = v86;
              }
              v87 = (unsigned int *)v5[1];
              if ( v18 != (char *)v87 )
              {
                v88 = v28 - (_QWORD)v18;
                do
                {
                  *(_QWORD *)&v18[v88 + 8 + v27] = *(_QWORD *)v18;
                  v18 += 8;
                }
                while ( v18 != (char *)v87 );
              }
            }
            v33 = (char *)*v5;
            if ( *v5 )
            {
              v34 = (_BYTE *)v5[2] - v33;
              v92 = *v5;
              v35 = v34 & 0xFFFFFFFFFFFFFFF8uLL;
              v90 = v35;
              if ( v35 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v92, &v90);
                v35 = v90;
                v33 = (char *)v92;
              }
              operator delete(v33, v35);
            }
            *v5 = (void *)v27;
            v5[1] = (void *)(v27 + 8 * v21);
            v5[2] = (void *)(v25 + v27);
          }
          else
          {
            *(_QWORD *)v18 = *(_QWORD *)&v115[2 * v17];
            v5[1] = (char *)v5[1] + 8;
          }
        }
      }
      else
      {
        v36 = (int *)((char *)&unk_180339390 + 16 * v9);
        v37 = &v115[2 * *v36];
        v38 = &v115[2 * v36[1]];
        v92 = &v115[2 * v36[2]];
        v39 = (float *)&v115[2 * v36[3]];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v39 - *(float *)&v115[2 * v15]) & _xmm) > 0.0000011920929
          || (v89 = 1, COERCE_FLOAT(COERCE_UNSIGNED_INT(v39[1] - *(float *)&v115[2 * v15 + 1]) & _xmm) > 0.0000011920929) )
        {
          v89 = 0;
        }
        v40 = *(float *)(v10 + 64);
        v41 = (CMilPoint2F *)v96;
        v42 = 4LL;
        do
        {
          CMilPoint2F::CMilPoint2F(v41);
          v41 = (CMilPoint2F *)((char *)v41 + 8);
          --v42;
        }
        while ( v42 );
        v43 = (CMilPoint2F *)&v102;
        v44 = 4LL;
        do
        {
          CMilPoint2F::CMilPoint2F(v43);
          v43 = (CMilPoint2F *)((char *)v43 + 8);
          --v44;
        }
        while ( v44 );
        v101 = (float)(v40 * v40) * 0.000099999997;
        v99 = fmaxf(v40, 0.0) * 6.0;
        v100 = v99 * 0.25;
        CBezierFlattener<float,CMilPoint2F>::SetPoints(
          (unsigned int)v96,
          (_DWORD)v37,
          (_DWORD)v38,
          (_DWORD)v92,
          (__int64)v39);
        v45 = (CMilPoint2F *)v116;
        v46 = 10LL;
        do
        {
          CMilPoint2F::CMilPoint2F(v45);
          v45 = (CMilPoint2F *)((char *)v45 + 8);
          --v46;
        }
        while ( v46 );
        v47 = 1;
        v48 = v37[1];
        v116[0] = *v37;
        v116[1] = v48;
        do
        {
          v49 = 1;
          v50 = 10 - v47;
          v51 = 0;
          v52 = &v116[2 * v47];
          v53 = v110;
          if ( v110 <= 1 )
          {
LABEL_51:
            if ( v51 < v50 )
            {
              if ( !v89 )
              {
                v60 = v98;
                v61 = v51++;
                v52[2 * v61] = v97;
                v52[2 * v61 + 1] = v60;
              }
              v49 = 0;
            }
          }
          else
          {
            while ( v51 < v50 )
            {
              v54 = v102 + v104;
              v110 = v53 - 1;
              v55 = (float)(v106 + v106) - v108;
              v56 = v103 + v105;
              v108 = v106;
              v57 = v112;
              v104 = v104 + v106;
              v106 = v55;
              v102 = v54;
              v105 = v105 + v107;
              v58 = v111 + v112;
              v103 = v56;
              v59 = (float)(v107 + v107) - v109;
              v109 = v107;
              *(float *)&v52[2 * v51] = v54;
              *(float *)&v52[2 * v51 + 1] = v56;
              v111 = v58;
              v107 = v59;
              if ( fmaxf(COERCE_FLOAT(LODWORD(v55) & _xmm), COERCE_FLOAT(LODWORD(v59) & _xmm)) <= v99 || v57 <= 0.001 )
              {
                while ( (unsigned __int8)CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(v96) )
                  ;
              }
              else
              {
                CBezierFlattener<float,CMilPoint2F>::HalveTheStep(v96);
              }
              v53 = v110;
              if ( v110 <= 1 )
                goto LABEL_51;
            }
          }
          std::vector<CMilPoint2F>::_Insert_range<CMilPoint2F *>(
            v5,
            *(_QWORD *)(v94 + 88),
            v116,
            &v116[2 * v51 + 2 * v47]);
          v47 = 0;
        }
        while ( v49 );
      }
      v8 = v91;
    }
    while ( (unsigned int)v91 < 4 );
    v3 = v95;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)v3 + 40LL))(
    v3,
    _mm_unpacklo_ps((__m128)*(unsigned int *)*v5, (__m128)*((unsigned int *)*v5 + 1)).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned int *, _QWORD))(*(_QWORD *)v3 + 48LL))(
    v3,
    (unsigned int *)*v5 + 2,
    (unsigned int)(((_BYTE *)v5[1] - (_BYTE *)*v5) >> 3) - 1);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
}
