__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  int v4; // r15d
  float v8; // xmm11_4
  float v9; // xmm9_4
  float v10; // xmm12_4
  float v11; // xmm10_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __m128 v15; // xmm13
  __m128 v16; // xmm13
  int v17; // edx
  char *v18; // rdi
  char *v19; // rsi
  bool v20; // cl
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  char v26; // al
  float v27; // xmm2_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float *v36; // r8
  unsigned int v37; // r10d
  unsigned int v38; // edi
  unsigned int v39; // ecx
  __int64 v40; // rdx
  unsigned int v41; // r9d
  __int64 v42; // rsi
  float *v43; // rsi
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm3_4
  unsigned int v47; // eax
  unsigned int v48; // eax
  char *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r11d
  float v52; // xmm2_4
  float v53; // xmm4_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  bool v56; // al
  float v57; // xmm1_4
  float v58; // xmm2_4
  unsigned int v59; // r12d
  __int64 v60; // rdx
  float *v61; // r8
  float *v62; // rdx
  float *v63; // rcx
  __int64 v64; // r9
  float v65; // xmm2_4
  char v66; // al
  float v67; // xmm1_4
  __int64 v68; // rdx
  __int64 v69; // rcx
  float *v70; // r8
  float *v71; // rsi
  float *v72; // rax
  __int64 v73; // rcx
  float v74; // xmm1_4
  char v75; // dl
  float *v77; // rax
  float v78; // xmm1_4
  float v79; // xmm2_4
  float v80; // xmm3_4
  unsigned int v81; // r14d
  float v82; // xmm4_4
  unsigned int v83; // edi
  float v84; // xmm1_4
  bool v85; // cc
  unsigned int v86; // r10d
  float v87; // xmm1_4
  float v88; // xmm2_4
  unsigned int v89; // r14d
  unsigned int v90; // r15d
  unsigned int v91; // r12d
  float v92; // xmm1_4
  float v93; // xmm3_4
  float *v94; // r10
  float *v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rax
  float v98; // xmm2_4
  char v99; // cl
  float v100; // xmm1_4
  float v101; // xmm1_4
  float v102; // xmm3_4
  float v103; // xmm1_4
  float v104; // xmm1_4
  float v105; // xmm2_4
  char v106; // cl
  float v107; // xmm1_4
  float v108; // xmm1_4
  float *v109; // r9
  float *v110; // r8
  float *v111; // r10
  unsigned int v112; // eax
  __int64 v113; // r14
  float v114; // xmm1_4
  char v115; // al
  float v116; // xmm2_4
  float v117; // xmm1_4
  float v118; // xmm1_4
  char v119; // al
  __int64 v120; // rcx
  char *v121; // rsi
  __int64 v122; // rax
  float v123; // xmm2_4
  float v124; // xmm2_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm2_4
  char *v128; // rax
  unsigned int v129; // ecx
  __int64 v130; // rax
  int v131; // edx
  int v132; // ecx
  unsigned int v133; // ecx
  unsigned int v134; // [rsp+40h] [rbp-C0h]
  __int64 v135; // [rsp+48h] [rbp-B8h]
  __m128 X; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a3;
  v134 = 0;
  v135 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a4) )
  {
    McTemplateU0pdffff_EventWriteTransfer(
      v132,
      v131,
      a2,
      v4,
      *(_DWORD *)a4,
      *(_DWORD *)(a4 + 4),
      *(_DWORD *)(a4 + 8),
      *(_DWORD *)(a4 + 12));
  }
  X = *(__m128 *)a4;
  if ( !*((_BYTE *)this + 4420) )
  {
    v8 = X.m128_f32[2];
    v9 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] || (v10 = X.m128_f32[3], v11 = X.m128_f32[1], X.m128_f32[3] < X.m128_f32[1]) )
    {
      CDirtyRegion::SetFullDirty(this);
      return v134;
    }
    if ( *((float *)this + 1100) > X.m128_f32[0] )
      v9 = *((float *)this + 1100);
    v12 = X.m128_f32[1];
    if ( *((float *)this + 1101) > X.m128_f32[1] )
    {
      v11 = *((float *)this + 1101);
      v12 = v11;
    }
    v13 = X.m128_f32[2];
    if ( X.m128_f32[2] > *((float *)this + 1102) )
    {
      v8 = *((float *)this + 1102);
      v13 = v8;
    }
    v14 = X.m128_f32[3];
    if ( X.m128_f32[3] > *((float *)this + 1103) )
    {
      v10 = *((float *)this + 1103);
      v14 = v10;
    }
    if ( v13 <= v9 || v14 <= v12 )
    {
      v10 = 0.0;
      v8 = 0.0;
      v11 = 0.0;
      v9 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
    }
    if ( v13 > v9 && v14 > v11 )
    {
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
        v9 = (float)(int)floorf_0(v9);
      X.m128_f32[0] = v9;
      if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 8388608.0 )
        v11 = (float)(int)floorf_0(v11);
      X.m128_f32[1] = v11;
      if ( COERCE_FLOAT(LODWORD(v8) & _xmm) < 8388608.0 )
        v8 = (float)(int)ceilf_0(v8);
      X.m128_f32[2] = v8;
      if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
        v10 = (float)(int)ceilf_0(v10);
      v15 = _mm_shuffle_ps(X, X, 147);
      v15.m128_f32[0] = v10;
      v16 = _mm_shuffle_ps(v15, v15, 57);
      X = v16;
      if ( a2 )
      {
        v17 = *((_DWORD *)this + 1098);
        v18 = (char *)this + 2824;
        if ( v17 == 32 )
        {
          v128 = (char *)DefaultHeap::Alloc(0x610uLL);
          v19 = v128;
          if ( !v128 )
          {
            v134 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, -2147024882, 0x1Bu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v133, 0LL, 0, -2147024882, 0x205u, 0LL);
            return v134;
          }
          memset_0(v128, 0, 0x610uLL);
          `vector constructor iterator'(
            v19 + 16,
            48LL,
            32LL,
            (void (__fastcall *)(char *))CDirtyRegionAnnotation::CDirtyRegionAnnotation);
          v130 = *(_QWORD *)v18;
          if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
            goto LABEL_208;
          *(_QWORD *)v19 = v130;
          v17 = 0;
          *((_QWORD *)v19 + 1) = v18;
          *(_QWORD *)(v130 + 8) = v19;
          *(_QWORD *)v18 = v19;
        }
        else
        {
          v19 = *(char **)v18;
        }
        v134 = 0;
        *((_DWORD *)this + 1098) = v17 + 1;
        v135 = (__int64)&v19[48 * v17 + 16];
        *(_QWORD *)(v135 + 16) = a2;
        *(_BYTE *)(v135 + 40) = v4;
        *(__m128 *)(v135 + 24) = v16;
        *(_QWORD *)(v135 + 8) = 0LL;
        *(_QWORD *)v135 = 0LL;
      }
      v20 = v8 <= v9 || v10 <= v11;
      v21 = 0.0;
      v22 = (float)(v10 - v11) * (float)(v8 - v9);
      v23 = (float)((float)(v10 - v11) * 0.5) + v11;
      v24 = (float)((float)(v8 - v9) * 0.5) + v9;
      if ( *((_BYTE *)this + 1964) )
      {
        if ( !v20 )
        {
          *((float *)this + 584) = FLOAT_3_4028235e38;
          v26 = *((_BYTE *)this + 1980);
LABEL_38:
          if ( v26 )
          {
            *((float *)this + 585) = FLOAT_3_4028235e38;
          }
          else
          {
            v27 = (float)((float)(*((float *)this + 492) - v24) * (float)(*((float *)this + 492) - v24))
                + (float)((float)(*((float *)this + 493) - v23) * (float)(*((float *)this + 493) - v23));
            if ( v27 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 494)) / v27;
            *((float *)this + 585) = v21;
            v21 = 0.0;
          }
          if ( *((_BYTE *)this + 1996) )
          {
            *((float *)this + 586) = FLOAT_3_4028235e38;
          }
          else
          {
            v28 = (float)((float)(*((float *)this + 496) - v24) * (float)(*((float *)this + 496) - v24))
                + (float)((float)(*((float *)this + 497) - v23) * (float)(*((float *)this + 497) - v23));
            if ( v28 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 498)) / v28;
            *((float *)this + 586) = v21;
            v21 = 0.0;
          }
          if ( *((_BYTE *)this + 2012) )
          {
            *((float *)this + 587) = FLOAT_3_4028235e38;
          }
          else
          {
            v29 = (float)((float)(*((float *)this + 500) - v24) * (float)(*((float *)this + 500) - v24))
                + (float)((float)(*((float *)this + 501) - v23) * (float)(*((float *)this + 501) - v23));
            if ( v29 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 502)) / v29;
            *((float *)this + 587) = v21;
            v21 = 0.0;
          }
          if ( *((_BYTE *)this + 2028) )
          {
            *((float *)this + 588) = FLOAT_3_4028235e38;
          }
          else
          {
            v30 = (float)((float)(*((float *)this + 504) - v24) * (float)(*((float *)this + 504) - v24))
                + (float)((float)(*((float *)this + 505) - v23) * (float)(*((float *)this + 505) - v23));
            if ( v30 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 506)) / v30;
            *((float *)this + 588) = v21;
            v21 = 0.0;
          }
          if ( *((_BYTE *)this + 2044) )
          {
            *((float *)this + 589) = FLOAT_3_4028235e38;
          }
          else
          {
            v31 = (float)((float)(*((float *)this + 508) - v24) * (float)(*((float *)this + 508) - v24))
                + (float)((float)(*((float *)this + 509) - v23) * (float)(*((float *)this + 509) - v23));
            if ( v31 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 510)) / v31;
            *((float *)this + 589) = v21;
            v21 = 0.0;
          }
          if ( *((_BYTE *)this + 2060) )
          {
            v21 = FLOAT_3_4028235e38;
          }
          else
          {
            v32 = (float)((float)(*((float *)this + 512) - v24) * (float)(*((float *)this + 512) - v24))
                + (float)((float)(*((float *)this + 513) - v23) * (float)(*((float *)this + 513) - v23));
            if ( v32 != 0.0 )
              v21 = (float)(v22 + *((float *)this + 514)) / v32;
          }
LABEL_61:
          *((float *)this + 590) = v21;
          v33 = 0.0;
          if ( *((_BYTE *)this + 2076) )
          {
            if ( !v20 )
              v33 = FLOAT_3_4028235e38;
          }
          else if ( !v20 )
          {
            v34 = (float)((float)(*((float *)this + 516) - v24) * (float)(*((float *)this + 516) - v24))
                + (float)((float)(*((float *)this + 517) - v23) * (float)(*((float *)this + 517) - v23));
            if ( v34 != 0.0 )
              v33 = (float)(v22 + *((float *)this + 518)) / v34;
          }
          v35 = FLOAT_N1_0;
          v36 = (float *)((char *)this + 2344);
          *((float *)this + 591) = v33;
          v37 = 0;
          v38 = 0;
          v39 = 8;
          v40 = 584LL;
          do
          {
            v41 = 0;
            v42 = 0LL;
            if ( v39 < 4 )
              goto LABEL_67;
            v77 = v36;
            do
            {
              v78 = *(v77 - 2);
              v79 = v35;
              v80 = v35;
              if ( v78 > v35 )
                v35 = *(v77 - 2);
              v81 = v41;
              v82 = v35;
              if ( v78 <= v79 )
                v81 = v38;
              v83 = v39;
              v85 = v78 <= v80;
              v84 = *(v77 - 1);
              if ( v85 )
                v83 = v37;
              if ( v84 > v35 )
                v35 = *(v77 - 1);
              v85 = v84 <= v82;
              v86 = v41 + 1;
              v87 = *v77;
              v88 = v35;
              if ( v85 )
                v86 = v81;
              v89 = v39;
              if ( v85 )
                v89 = v83;
              if ( v87 > v35 )
                v35 = *v77;
              v85 = v87 <= v88;
              v90 = v41 + 2;
              v91 = v39;
              v92 = v77[1];
              v93 = v35;
              if ( v85 )
              {
                v90 = v86;
                v91 = v89;
              }
              if ( v92 > v35 )
                v35 = v77[1];
              v38 = v41 + 3;
              v37 = v39;
              if ( v92 <= v93 )
              {
                v38 = v90;
                v37 = v91;
              }
              v42 += 4LL;
              v77 += 4;
              v41 += 4;
            }
            while ( v41 < v39 - 3 );
            if ( v41 < v39 )
            {
LABEL_67:
              v43 = (float *)((char *)this + 4 * v42 + 4 * v40);
              do
              {
                v44 = *v43;
                v45 = v35;
                v46 = v35;
                if ( *v43 > v35 )
                  v35 = *v43;
                v47 = v41;
                if ( v44 <= v45 )
                  v47 = v38;
                v38 = v47;
                v48 = v39;
                if ( v44 <= v46 )
                  v48 = v37;
                ++v43;
                ++v41;
                v37 = v48;
              }
              while ( v41 < v39 );
            }
            v40 -= 8LL;
            v36 -= 8;
            --v39;
          }
          while ( v39 );
          if ( v37 == 8 )
          {
            if ( !v135 )
            {
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                (float *)this + 4 * v38 + 424,
                X.m128_f32);
              v10 = X.m128_f32[3];
              v8 = X.m128_f32[2];
              v11 = X.m128_f32[1];
              v9 = X.m128_f32[0];
              goto LABEL_80;
            }
            v49 = (char *)this + 16 * v38 + 1824;
            v50 = *(_QWORD *)v49;
            if ( *(char **)(*(_QWORD *)v49 + 8LL) == v49 )
            {
              *(_QWORD *)v135 = v50;
              *(_QWORD *)(v135 + 8) = v49;
              *(_QWORD *)(v50 + 8) = v135;
              *(_QWORD *)v49 = v135;
LABEL_80:
              X.m128_u64[0] = __PAIR64__(LODWORD(v11), LODWORD(v9));
              X.m128_u64[1] = __PAIR64__(LODWORD(v10), LODWORD(v8));
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                X.m128_f32,
                (float *)this + 4 * v38 + 392);
              v52 = X.m128_f32[2];
              v53 = X.m128_f32[0];
              if ( X.m128_f32[2] <= X.m128_f32[0] )
                return v134;
              v54 = X.m128_f32[3];
              v55 = X.m128_f32[1];
              if ( X.m128_f32[3] <= X.m128_f32[1]
                || X.m128_f32[0] >= *((float *)this + 4 * v38 + 392)
                && X.m128_f32[1] >= *((float *)this + 4 * v38 + 393)
                && *((float *)this + 4 * v38 + 394) >= X.m128_f32[2]
                && *((float *)this + 4 * v38 + 395) >= X.m128_f32[3] )
              {
                return v134;
              }
              *((__m128 *)this + v38 + 98) = X;
              v56 = v52 <= v53 || v54 <= v55;
              *((_BYTE *)this + 16 * v38 + 1964) = v56;
              v57 = v54 - v55;
              v58 = v52 - v53;
              *((float *)this + 4 * v38 + 490) = v57 * v58;
              *((float *)this + 4 * v38 + 489) = (float)(v57 * 0.5) + v55;
              *((float *)this + 4 * v38 + 488) = (float)(v58 * 0.5) + v53;
              if ( v38 >= 3 )
              {
                v94 = (float *)((char *)this + 32 * v38 + 2088);
                v95 = (float *)((char *)this + 1956);
                v96 = (v38 - 3) / 3 + 1;
                v97 = (unsigned int)v96;
                v59 = 3 * v96;
                v60 = 3 * v96;
                do
                {
                  v98 = 0.0;
                  v99 = *((_BYTE *)this + 16 * v38 + 1964);
                  if ( *((_BYTE *)v95 + 8) )
                  {
                    if ( !v99 )
                      v98 = FLOAT_3_4028235e38;
                  }
                  else if ( !v99 )
                  {
                    v100 = *v95 - *((float *)this + 4 * v38 + 489);
                    v101 = (float)(v100 * v100)
                         + (float)((float)(*(v95 - 1) - *((float *)this + 4 * v38 + 488))
                                 * (float)(*(v95 - 1) - *((float *)this + 4 * v38 + 488)));
                    if ( v101 != 0.0 )
                      v98 = (float)(*((float *)this + 4 * v38 + 490) + v95[1]) / v101;
                  }
                  *(v94 - 2) = v98;
                  v102 = 0.0;
                  if ( !*((_BYTE *)this + 16 * v38 + 1964) )
                  {
                    if ( *((_BYTE *)v95 + 24) )
                    {
                      v102 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      v103 = v95[4] - *((float *)this + 4 * v38 + 489);
                      v104 = (float)(v103 * v103)
                           + (float)((float)(v95[3] - *((float *)this + 4 * v38 + 488))
                                   * (float)(v95[3] - *((float *)this + 4 * v38 + 488)));
                      if ( v104 != 0.0 )
                        v102 = (float)(*((float *)this + 4 * v38 + 490) + v95[5]) / v104;
                    }
                  }
                  *(v94 - 1) = v102;
                  v105 = 0.0;
                  v106 = *((_BYTE *)this + 16 * v38 + 1964);
                  if ( *((_BYTE *)v95 + 40) )
                  {
                    if ( !v106 )
                      v105 = FLOAT_3_4028235e38;
                  }
                  else if ( !v106 )
                  {
                    v107 = v95[8] - *((float *)this + 4 * v38 + 489);
                    v108 = (float)(v107 * v107)
                         + (float)((float)(v95[7] - *((float *)this + 4 * v38 + 488))
                                 * (float)(v95[7] - *((float *)this + 4 * v38 + 488)));
                    if ( v108 != 0.0 )
                      v105 = (float)(*((float *)this + 4 * v38 + 490) + v95[9]) / v108;
                  }
                  *v94 = v105;
                  v95 += 12;
                  v94 += 3;
                  --v97;
                }
                while ( v97 );
                if ( v59 >= v38 )
                  goto LABEL_97;
              }
              else
              {
                if ( !v38 )
                {
LABEL_97:
                  v68 = v38 + 1;
                  if ( (unsigned int)v68 < v51 )
                  {
                    v69 = (unsigned int)v68;
                    if ( v51 - (unsigned int)v68 < 4 )
                      goto LABEL_99;
                    v109 = (float *)((char *)this + 16 * (unsigned int)v68 + 1956);
                    v110 = (float *)((char *)this + 16 * v38 + 1952);
                    v111 = (float *)((char *)this + 32 * v68 + 4 * v38 + 2112);
                    v112 = ((unsigned int)(4 - v68) >> 2) + 1;
                    v113 = v112;
                    v69 = v68 + 4LL * v112;
                    LODWORD(v68) = v68 + 4 * v112;
                    do
                    {
                      v114 = 0.0;
                      v115 = *((_BYTE *)v110 + 12);
                      if ( *((_BYTE *)v109 + 8) )
                      {
                        if ( !v115 )
                          v114 = FLOAT_3_4028235e38;
                      }
                      else if ( !v115 )
                      {
                        v124 = (float)((float)(*v109 - v110[1]) * (float)(*v109 - v110[1]))
                             + (float)((float)(*(v109 - 1) - *v110) * (float)(*(v109 - 1) - *v110));
                        if ( v124 != 0.0 )
                          v114 = (float)(v110[2] + v109[1]) / v124;
                      }
                      *(v111 - 8) = v114;
                      v116 = 0.0;
                      if ( !*((_BYTE *)v110 + 12) )
                      {
                        if ( *((_BYTE *)v109 + 24) )
                        {
                          v116 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v125 = (float)((float)(v109[4] - v110[1]) * (float)(v109[4] - v110[1]))
                               + (float)((float)(v109[3] - *v110) * (float)(v109[3] - *v110));
                          if ( v125 != 0.0 )
                            v116 = (float)(v110[2] + v109[5]) / v125;
                        }
                      }
                      *v111 = v116;
                      v117 = 0.0;
                      if ( !*((_BYTE *)v110 + 12) )
                      {
                        if ( *((_BYTE *)v109 + 40) )
                        {
                          v117 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v126 = (float)((float)(v109[8] - v110[1]) * (float)(v109[8] - v110[1]))
                               + (float)((float)(v109[7] - *v110) * (float)(v109[7] - *v110));
                          if ( v126 != 0.0 )
                            v117 = (float)(v110[2] + v109[9]) / v126;
                        }
                      }
                      v111[8] = v117;
                      v118 = 0.0;
                      v119 = *((_BYTE *)v110 + 12);
                      if ( *((_BYTE *)v109 + 56) )
                      {
                        if ( !v119 )
                          v118 = FLOAT_3_4028235e38;
                      }
                      else if ( !v119 )
                      {
                        v127 = (float)((float)(v109[12] - v110[1]) * (float)(v109[12] - v110[1]))
                             + (float)((float)(v109[11] - *v110) * (float)(v109[11] - *v110));
                        if ( v127 != 0.0 )
                          v118 = (float)(v110[2] + v109[13]) / v127;
                      }
                      v111[16] = v118;
                      v109 += 16;
                      v111 += 32;
                      --v113;
                    }
                    while ( v113 );
                    if ( (unsigned int)v68 < v51 )
                    {
LABEL_99:
                      v70 = (float *)((char *)this + 16 * v69 + 1956);
                      v71 = (float *)((char *)this + 16 * v38 + 1952);
                      v72 = (float *)((char *)this + 32 * v69 + 4 * v38 + 2080);
                      v73 = v51 - (unsigned int)v68;
                      do
                      {
                        v74 = 0.0;
                        v75 = *((_BYTE *)v71 + 12);
                        if ( *((_BYTE *)v70 + 8) )
                        {
                          if ( !v75 )
                            v74 = FLOAT_3_4028235e38;
                        }
                        else if ( !v75 )
                        {
                          v123 = (float)((float)(*v70 - v71[1]) * (float)(*v70 - v71[1]))
                               + (float)((float)(*(v70 - 1) - *v71) * (float)(*(v70 - 1) - *v71));
                          if ( v123 != 0.0 )
                            v74 = (float)(v71[2] + v70[1]) / v123;
                        }
                        *v72 = v74;
                        v70 += 4;
                        v72 += 8;
                        --v73;
                      }
                      while ( v73 );
                    }
                  }
                  return v134;
                }
                v59 = 0;
                v60 = 0LL;
              }
              v61 = (float *)((char *)this + 32 * v38 + 4 * v60 + 2080);
              v62 = (float *)((char *)this + 16 * v60 + 1956);
              v63 = (float *)((char *)this + 16 * v38 + 1952);
              v64 = v38 - v59;
              do
              {
                v65 = 0.0;
                v66 = *((_BYTE *)v63 + 12);
                if ( *((_BYTE *)v62 + 8) )
                {
                  if ( !v66 )
                    v65 = FLOAT_3_4028235e38;
                }
                else if ( !v66 )
                {
                  v67 = (float)((float)(*v62 - v63[1]) * (float)(*v62 - v63[1]))
                      + (float)((float)(*(v62 - 1) - *v63) * (float)(*(v62 - 1) - *v63));
                  if ( v67 != 0.0 )
                    v65 = (float)(v62[1] + v63[2]) / v67;
                }
                *v61 = v65;
                v62 += 4;
                ++v61;
                --v64;
              }
              while ( v64 );
              goto LABEL_97;
            }
          }
          else
          {
            CDirtyRegion::Merge(this, v37, v38);
            *((__m128 *)this + v38 + 98) = v16;
            CDirtyRegion::CalcDirtyRegionCachedData(v120, (__int64)&X);
            CDirtyRegion::UpdateAcceleration(this, v38);
            if ( !v135 )
            {
              *((__m128 *)this + v38 + 106) = v16;
              return v134;
            }
            v121 = (char *)this + 16 * v38 + 1824;
            v122 = *(_QWORD *)v121;
            if ( *(char **)(*(_QWORD *)v121 + 8LL) == v121 )
            {
              *(_QWORD *)v135 = v122;
              *(_QWORD *)(v135 + 8) = v121;
              *(_QWORD *)(v122 + 8) = v135;
              *(_QWORD *)v121 = v135;
              return v134;
            }
          }
LABEL_208:
          __fastfail(3u);
        }
      }
      else if ( !v20 )
      {
        v25 = (float)((float)(*((float *)this + 488) - v24) * (float)(*((float *)this + 488) - v24))
            + (float)((float)(*((float *)this + 489) - v23) * (float)(*((float *)this + 489) - v23));
        if ( v25 != 0.0 )
          v21 = (float)(v22 + *((float *)this + 490)) / v25;
        *((float *)this + 584) = v21;
        v21 = 0.0;
        v26 = *((_BYTE *)this + 1980);
        goto LABEL_38;
      }
      *((_DWORD *)this + 584) = 0;
      *((_DWORD *)this + 585) = 0;
      *((_DWORD *)this + 586) = 0;
      *((_DWORD *)this + 587) = 0;
      *((_DWORD *)this + 588) = 0;
      *((_DWORD *)this + 589) = 0;
      goto LABEL_61;
    }
  }
  return v134;
}
