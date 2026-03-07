void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        signed int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        struct EXFORMOBJ *a6,
        __m128i *a7,
        int a8,
        int a9,
        unsigned int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  RFONTOBJ *v18; // rsi
  bool v19; // zf
  struct EXFORMOBJ *v21; // r11
  int v23; // r13d
  int v24; // edx
  __m128i v25; // xmm6
  float v26; // xmm7_4
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // r9d
  char v33; // bp
  unsigned int v34; // r14d
  int v35; // r15d
  int *v36; // r12
  int v37; // ebx
  __int64 v38; // rdx
  _DWORD *v39; // r12
  int v40; // eax
  float v41; // r13d
  int *v42; // rbx
  __int64 v43; // rcx
  int v44; // edx
  unsigned int v45; // edx
  __int64 v46; // rcx
  float v47; // xmm1_4
  unsigned int v48; // r11d
  _DWORD *v49; // r8
  unsigned int v50; // r13d
  unsigned int v51; // edx
  __int64 v52; // r13
  __int64 v53; // rdx
  unsigned int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned int v57; // r10d
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rdx
  unsigned int v63; // r10d
  __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned int v66; // r10d
  __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned int v69; // r10d
  __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned int v72; // r10d
  __int64 v73; // rdx
  __int64 v74; // rdx
  unsigned int v75; // r10d
  __int64 v76; // rdx
  __int64 v77; // rdx
  unsigned int v78; // r10d
  __int64 v79; // rdx
  __int64 v80; // rdx
  unsigned int v81; // r10d
  __int64 v82; // rdx
  __int64 v83; // rdx
  _DWORD *v84; // r8
  __int64 v85; // r11
  __int64 v86; // rdx
  unsigned int v87; // r10d
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // ecx
  int v91; // r8d
  __int64 v92; // rax
  int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rax
  int v97; // eax
  __m128i *v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r8
  __m128i *v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  int *v104; // rax
  int v105; // r8d
  __int64 v106; // rax
  int *v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // r8
  int v110; // eax
  int v111; // edx
  float v112; // r13d
  __int64 v113; // rdx
  _DWORD *v114; // rax
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rdx
  int v120; // r9d
  ERECTL *v121; // r8
  int v122; // r14d
  int v123; // r15d
  int v124; // ecx
  int v125; // edx
  __int64 v126; // r8
  int v127; // ecx
  int v128; // edx
  __int64 v129; // r8
  int v130; // [rsp+50h] [rbp-68h]
  unsigned int v131; // [rsp+C0h] [rbp+8h]
  float v132; // [rsp+D0h] [rbp+18h] BYREF
  struct XDCOBJ *v133; // [rsp+D8h] [rbp+20h]

  v133 = a4;
  v132 = *(float *)&a3;
  v18 = a5;
  v19 = a8 == 0;
  v21 = a6;
  v23 = a10;
  v24 = 0;
  v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v26 = **(float **)a6;
  *(float *)this = *(float *)&a3;
  *((_QWORD *)this + 7) = v18;
  *((_DWORD *)this + 58) = 0;
  if ( !v19 )
    v24 = 1024;
  *((_DWORD *)this + 1) = v24;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 120LL) + 16LL);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 4) & 0x10) != 0 )
    {
      v24 |= 0x80u;
      *((_DWORD *)this + 1) = v24;
    }
    *((_DWORD *)this + 31) = a18;
    *((_DWORD *)this + 2) = 0;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 5) = a2;
    *(_QWORD *)((char *)this + 116) = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 84LL) & 4) != 0 )
    {
      *((_DWORD *)this + 1) = v24 | 0x100;
      RFONTOBJ::vFixUpGlyphIndices(v18, a2, a3);
    }
    v28 = *(_QWORD *)(*(_QWORD *)v18 + 104LL);
    if ( (*(_DWORD *)(v28 + 1792) & 0x40000) != 0 )
      *((_DWORD *)this + 58) |= 0x100u;
    v29 = (__int64)a17;
    if ( !a17 )
    {
      v29 = AllocFreeTmpBuffer((30 * a3 + 7) & 0xFFFFFFF8);
      if ( !v29 )
        return;
      *((_DWORD *)this + 58) |= 1u;
      *(float *)&a3 = v132;
      v21 = a6;
    }
    *((_QWORD *)this + 8) = v29;
    v30 = *(_DWORD **)v18;
    v31 = *(_DWORD *)(*(_QWORD *)v18 + 208LL);
    if ( v31 != 1 || (v30[179] & 4) != 0 )
      v32 = a9;
    else
      v32 = v30[98];
    v33 = a15;
    v34 = a13;
    v35 = a14;
    LODWORD(a5) = v32;
    if ( (a15 & 0x18) != 0 )
    {
      if ( (a15 & 0x18) == 8 )
      {
        v34 = a13 - v30[84];
        v35 = a14 - v30[85];
      }
    }
    else
    {
      v34 = a13 - v30[82];
      v35 = a14 - v30[83];
    }
    v36 = (int *)a7;
    if ( v23 && a7 && v31 == 1 && (v30[179] & 4) == 0 )
    {
      v97 = *(_DWORD *)(v28 + 40);
      v37 = a8;
      if ( (v97 & 1) != 0 )
      {
        v98 = a7;
        if ( a8 )
        {
          v104 = &a7->m128i_i32[2 * a3];
          if ( a7 < (__m128i *)v104 )
          {
            do
            {
              v98->m128i_i32[0] += v23;
              v98 = (__m128i *)((char *)v98 + 8);
            }
            while ( v98 < (__m128i *)v104 );
          }
        }
        else
        {
          v99 = a3;
          v100 = 0LL;
          v99 *= 4LL;
          v101 = (__m128i *)((char *)a7 + v99);
          v102 = v99 >> 2;
          if ( a7 > v101 )
            v102 = 0LL;
          if ( v102 >= 0x10 )
          {
            v103 = v102 & 0xFFFFFFFFFFFFFFF0uLL;
            do
            {
              v100 += 16LL;
              *v98 = _mm_add_epi32(v25, _mm_loadu_si128(v98));
              v98[1] = _mm_add_epi32(v25, _mm_loadu_si128(v98 + 1));
              v98[2] = _mm_add_epi32(v25, _mm_loadu_si128(v98 + 2));
              v98[3] = _mm_add_epi32(v25, _mm_loadu_si128(v98 + 3));
              v98 += 4;
            }
            while ( v100 < v103 );
          }
          for ( ; v98 < v101; v98 = (__m128i *)((char *)v98 + 4) )
            v98->m128i_i32[0] += v23;
        }
      }
    }
    else
    {
      v37 = a8;
    }
    v38 = *(_QWORD *)v18;
    if ( v32 | *(_DWORD *)(*(_QWORD *)v18 + 392LL)
      || (*(_DWORD *)(*(_QWORD *)v21 + 32LL) & 1) == 0
      || *(float *)(*(_QWORD *)v21 + 12LL) < 0.0
      || v26 < 0.0 )
    {
      if ( v37 )
      {
        if ( v32 != *(_DWORD *)(v38 + 432) && !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, v21, v32) )
          return;
        *((_DWORD *)this + 58) |= 8u;
        ESTROBJ::vCharPos_G4(this, v133, v18, v34, v35, v36);
      }
      else if ( v32 == *(_DWORD *)(*(_QWORD *)v18 + 392LL) )
      {
        if ( v36 )
          ESTROBJ::vCharPos_G1(this, v133, v18, v34, v35, v36, a16);
        else
          ESTROBJ::vCharPos_G2(this, v133, v18, v34, v35, v23, a11, a12, a16);
      }
      else
      {
        if ( v32 != *(_DWORD *)(v38 + 432) && !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, v21, v32) )
          return;
        v107 = a16;
        *((_DWORD *)this + 58) |= 8u;
        *((_DWORD *)this + 1) |= 0x200u;
        ESTROBJ::vCharPos_G3(this, v133, v18, v34, v35, v23, a11, a12, v36, v107);
      }
      v108 = *((_QWORD *)this + 10);
      v39 = (_DWORD *)((char *)this + 88);
      *((_QWORD *)this + 11) = v108;
      v109 = HIDWORD(v108);
      if ( (v33 & 6) != 0 )
      {
        if ( (v33 & 6) == 6 )
        {
          LODWORD(v108) = (int)v108 / 2;
          LODWORD(v109) = (int)v109 / 2;
          v110 = 0;
          v111 = 0;
        }
        else
        {
          v110 = -HIDWORD(v108);
          v111 = -(int)v108;
        }
        *((_DWORD *)this + 20) = v111;
        *((_DWORD *)this + 21) = v110;
        v112 = v132;
        v113 = LODWORD(v132);
        if ( v132 != 0.0 )
        {
          v114 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
          v115 = LODWORD(v132);
          do
          {
            *(v114 - 1) -= v108;
            *v114 -= v109;
            v114 += 6;
            --v115;
          }
          while ( v115 );
        }
        v34 -= v108;
        v35 -= v109;
      }
      else
      {
        v112 = v132;
        v113 = LODWORD(v132);
      }
      v116 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 18) = v34;
      *((_DWORD *)this + 19) = v35;
      if ( v112 != 0.0 )
      {
        v117 = v116 + 20;
        do
        {
          v118 = *(_DWORD *)(v117 - 4);
          v117 += 24LL;
          *(_DWORD *)(v117 - 28) = (v118 + 8) >> 4;
          *(_DWORD *)(v117 - 24) = (*(_DWORD *)(v117 - 24) + 8) >> 4;
          --v113;
        }
        while ( v113 );
      }
    }
    else
    {
      if ( v36 )
      {
        if ( v37 )
        {
          if ( (v33 & 0xA0) != 0 )
          {
            if ( v32 != *(_DWORD *)(v38 + 432) )
            {
              if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, v21, v32) )
                return;
              v21 = a6;
            }
            *((_DWORD *)this + 58) |= 8u;
          }
          ESTROBJ::vCharPos_H4(this, v133, v18, v34, v35, v36, LODWORD(v26), *(_DWORD *)(*(_QWORD *)v21 + 12LL));
        }
        else
        {
          ESTROBJ::vCharPos_H1(this, v133, v18, v34, v35, v36, LODWORD(v26));
        }
      }
      else if ( !*(_DWORD *)(v38 + 312) || a11 | v23 )
      {
        ESTROBJ::vCharPos_H3(this, v133, v18, v34, v35, v23, a11, a12, LODWORD(v26), 0LL);
      }
      else
      {
        ESTROBJ::vCharPos_H2(this, v133, v18, v34, v35, LODWORD(v26));
      }
      v39 = (_DWORD *)((char *)this + 88);
      v40 = *((_DWORD *)this + 20);
      *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
      if ( (v33 & 6) != 0 )
      {
        if ( (v33 & 6) == 6 )
        {
          v40 /= 2;
          v90 = 0;
        }
        else
        {
          v90 = -v40;
        }
        *((_DWORD *)this + 20) = v90;
        v91 = v40 + 8;
        v41 = v132;
        v92 = *((_QWORD *)this + 8);
        v93 = v91 >> 4;
        v94 = v92 + 24;
        *(_DWORD *)(v92 + 16) -= v93;
        v34 = 16 * *(_DWORD *)(v92 + 16);
        if ( !*((_DWORD *)this + 2) && LODWORD(v41) != 1 )
        {
          v95 = (unsigned int)(LODWORD(v41) - 1);
          do
          {
            v96 = v94;
            v94 += 24LL;
            *(_DWORD *)(v96 + 16) -= v93;
            --v95;
          }
          while ( v95 );
        }
      }
      else
      {
        v41 = v132;
      }
      v42 = a16;
      if ( a16 )
      {
        v46 = *((unsigned int *)this + 2);
        v47 = *(float *)(*(_QWORD *)v18 + 408LL);
        if ( !(_DWORD)v46 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
        {
          v48 = 0;
          v49 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
          v50 = LODWORD(v41) - 1;
          v131 = v50;
          if ( v50 >= 0xA )
          {
            v51 = (v50 - 10) / 0xA + 1;
            v52 = v51;
            v130 = 10 * v51;
            do
            {
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[4] - v34) * v47;
              v54 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v54 <= 0x9E )
              {
                v55 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v56 = v54 < 0x76 ? v55 >> (118 - (unsigned __int8)v54) : v55 << ((unsigned __int8)v54 - 118);
                v53 = (v56 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              *v42 = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[10] - v34) * v47;
              v57 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v57 <= 0x9E )
              {
                v58 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v59 = v57 < 0x76 ? v58 >> (118 - (unsigned __int8)v57) : v58 << ((unsigned __int8)v57 - 118);
                v53 = (v59 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[1] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[16] - v34) * v47;
              v60 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v60 <= 0x9E )
              {
                v61 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v62 = v60 < 0x76 ? v61 >> (118 - (unsigned __int8)v60) : v61 << ((unsigned __int8)v60 - 118);
                v53 = (v62 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[2] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[22] - v34) * v47;
              v63 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v63 <= 0x9E )
              {
                v64 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v65 = v63 < 0x76 ? v64 >> (118 - (unsigned __int8)v63) : v64 << ((unsigned __int8)v63 - 118);
                v53 = (v65 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[3] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[28] - v34) * v47;
              v66 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v66 <= 0x9E )
              {
                v67 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v68 = v66 < 0x76 ? v67 >> (118 - (unsigned __int8)v66) : v67 << ((unsigned __int8)v66 - 118);
                v53 = (v68 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[4] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[34] - v34) * v47;
              v69 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v69 <= 0x9E )
              {
                v70 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v71 = v69 < 0x76 ? v70 >> (118 - (unsigned __int8)v69) : v70 << ((unsigned __int8)v69 - 118);
                v53 = (v71 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[5] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[40] - v34) * v47;
              v72 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v72 <= 0x9E )
              {
                v73 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v74 = v72 < 0x76 ? v73 >> (118 - (unsigned __int8)v72) : v73 << ((unsigned __int8)v72 - 118);
                v53 = (v74 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[6] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[46] - v34) * v47;
              v75 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v75 <= 0x9E )
              {
                v76 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v77 = v75 < 0x76 ? v76 >> (118 - (unsigned __int8)v75) : v76 << ((unsigned __int8)v75 - 118);
                v53 = (v77 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[7] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[52] - v34) * v47;
              v78 = (unsigned __int8)(SLODWORD(v132) >> 23);
              if ( v78 <= 0x9E )
              {
                v79 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                v80 = v78 < 0x76 ? v79 >> (118 - (unsigned __int8)v78) : v79 << ((unsigned __int8)v78 - 118);
                v53 = (v80 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[8] = v53;
              LODWORD(v53) = 0;
              v132 = (float)(int)(16 * v49[58] - v34) * v47;
              v81 = (unsigned __int8)(SLODWORD(v132) >> 23);
              v46 = v81 - 118;
              if ( v81 <= 0x9E )
              {
                v82 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                if ( v81 < 0x76 )
                {
                  v46 = 118 - v81;
                  v83 = v82 >> (118 - (unsigned __int8)v81);
                }
                else
                {
                  v83 = v82 << ((unsigned __int8)v81 - 118);
                }
                v53 = (v83 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v53) = -(int)v53;
              }
              v42[9] = v53;
              v49 += 60;
              v42 += 10;
              --v52;
            }
            while ( v52 );
            v50 = v131;
            v48 = v130;
          }
          if ( v48 < v50 )
          {
            v84 = v49 + 4;
            v85 = v50 - v48;
            do
            {
              LODWORD(v86) = 0;
              v132 = (float)(int)(16 * *v84 - v34) * v47;
              v87 = (unsigned __int8)(SLODWORD(v132) >> 23);
              v46 = v87 - 118;
              if ( v87 <= 0x9E )
              {
                v88 = LODWORD(v132) & 0x7FFFFF | 0x800000LL;
                if ( v87 < 0x76 )
                {
                  v46 = 118 - v87;
                  v89 = v88 >> (118 - (unsigned __int8)v87);
                }
                else
                {
                  v89 = v88 << ((unsigned __int8)v87 - 118);
                }
                v86 = (v89 + 0x80000000LL) >> 32;
                if ( v132 < 0.0 )
                  LODWORD(v86) = -(int)v86;
              }
              *v42 = v86;
              v84 += 6;
              ++v42;
              --v85;
            }
            while ( v85 );
          }
          v132 = 0.0;
          bFToL(v46, &v132, 0LL);
          *(float *)v42 = v132;
        }
        else
        {
          v132 = 0.0;
          bFToL((unsigned int)(16 * v46), &v132, 0LL);
          if ( v41 != 0.0 )
          {
            v106 = LODWORD(v41);
            do
            {
              v105 += LODWORD(v132);
              *v42++ = v105;
              --v106;
            }
            while ( v106 );
          }
        }
      }
      v43 = *((_QWORD *)this + 8);
      v37 = a8;
      *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v43 + 16);
      *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v43 + 20);
    }
    if ( (v33 & 0xA0) != 0 )
    {
      *((_DWORD *)this + 58) |= v33 & 0xA0;
      v119 = *(_QWORD *)v18;
      if ( !((unsigned int)a5 | *(_DWORD *)(*(_QWORD *)v18 + 392LL) | v37)
        && (*(_DWORD *)(*(_QWORD *)a6 + 32LL) & 1) != 0 )
      {
        v120 = (*v39 + 8) >> 4;
        v121 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
        v122 = (int)(v34 + 8) >> 4;
        v123 = (v35 + 8) >> 4;
        if ( (v33 & 0x20) != 0 )
        {
          v124 = v122 + *(_DWORD *)(v119 + 280);
          *(_DWORD *)v121 = v124;
          *((_DWORD *)v121 + 2) = v124 + v120;
          v125 = v123 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
          *((_DWORD *)v121 + 1) = v125;
          *((_DWORD *)v121 + 3) = v125 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
          ERECTL::vOrder(v121);
          ++*((_DWORD *)this + 32);
          v119 = *(_QWORD *)v18;
          v121 = (ERECTL *)(v126 + 16);
        }
        if ( v33 < 0 )
        {
          v127 = v122 + *(_DWORD *)(v119 + 288);
          *(_DWORD *)v121 = v127;
          *((_DWORD *)v121 + 2) = v120 + v127;
          v128 = v123 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
          *((_DWORD *)v121 + 1) = v128;
          *((_DWORD *)v121 + 3) = v128 + *(_DWORD *)(*(_QWORD *)v18 + 308LL);
          ERECTL::vOrder(v121);
          ++*((_DWORD *)this + 32);
          v121 = (ERECTL *)(v129 + 16);
        }
        *(_QWORD *)v121 = 0LL;
        *((_QWORD *)v121 + 1) = 0LL;
      }
    }
    v44 = *((_DWORD *)this + 58);
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
      v45 = v44 | 0x200;
    else
      v45 = v44 & 0xFFFFFDFF;
    *((_DWORD *)this + 58) = v45;
  }
}
