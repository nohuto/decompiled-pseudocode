__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // rsi
  int v6; // eax
  int v8; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int32 v16; // edx
  __int32 *v17; // r12
  int v18; // eax
  int v19; // ecx
  DC *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r11d
  int v29; // r10d
  __int64 v30; // rax
  int v31; // r8d
  __int32 v32; // r9d
  int v33; // edx
  __int32 v34; // r10d
  int v35; // eax
  __int64 v36; // rcx
  int v37; // r11d
  int v38; // r8d
  __int32 v39; // eax
  int v40; // eax
  int v41; // eax
  DC *v42; // rdx
  struct REGION *v43; // r10
  __m128i v44; // xmm1
  int v45; // edx
  __int32 v46; // r8d
  __int64 v47; // rdx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v52; // r11
  int v53; // r9d
  int v54; // r10d
  int v55; // esi
  int v56; // ecx
  int v57; // eax
  int v58; // esi
  int (*v59)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbx
  struct SURFACE *v60; // rax
  __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // r10
  __int64 v64; // r11
  char *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  int v69; // eax
  struct REGION *v70; // rax
  int *v71; // rbx
  int v72; // ecx
  int v73; // ecx
  int v74; // edx
  int v75; // r8d
  int v76; // r9d
  int v77; // ecx
  __int64 v78; // r10
  int v79; // eax
  struct ECLIPOBJ *v80; // rdx
  __int64 v81; // rax
  struct SURFACE *v82; // rax
  int v83; // edx
  __int64 v84; // r9
  __int64 v85; // r10
  __int64 (__fastcall *v86)(__int64, _QWORD, char *, _BYTE *, _QWORD, struct ERECTL *, _QWORD, int *, __int64, char *, int); // r11
  __int64 v87; // rcx
  char *v88; // r8
  int v89; // ecx
  int v90; // ecx
  __int64 v91; // rcx
  int v92; // r10d
  int v93; // r11d
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  __int64 v97; // rcx
  struct REGION *v98; // rax
  __m128i v99; // xmm1
  int v100; // edx
  int v101; // r8d
  __int64 v102; // r9
  int v103; // r10d
  int v104; // eax
  struct ECLIPOBJ *v105; // rdx
  __int64 v106; // rax
  __int32 v107; // r8d
  __int32 v108; // ecx
  __int32 v109; // edx
  __int32 v110; // eax
  __int32 v111; // eax
  int v112; // r15d
  __int64 v113; // rsi
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdx
  struct SURFACE *v118; // rax
  __int64 v119; // r10
  __int64 (__fastcall *v120)(__int64, __int64, char *, _BYTE *, _QWORD, __m128i *, __int32 *, char *, __int64, char *, int); // r11
  __int64 v121; // rcx
  char *v122; // r8
  __int64 v123; // rdx
  bool v124; // zf
  __int64 v125; // rcx
  bool v126; // r10
  bool v127; // al
  struct SURFACE *v128; // rax
  struct SURFACE *v129; // rax
  char v130; // r10
  int v131; // ecx
  int v132; // r8d
  int v133; // r9d
  int v134; // eax
  struct ECLIPOBJ *v135; // rdx
  __int64 v136; // rax
  int v137; // [rsp+60h] [rbp-A0h] BYREF
  int v138; // [rsp+64h] [rbp-9Ch] BYREF
  int v139; // [rsp+68h] [rbp-98h] BYREF
  __m128i v140; // [rsp+70h] [rbp-90h] BYREF
  __m128i v141; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v142[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v143; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v144; // [rsp+E0h] [rbp-20h]
  int v145; // [rsp+E8h] [rbp-18h]
  int v146; // [rsp+110h] [rbp+10h]
  __int64 v147; // [rsp+120h] [rbp+20h]
  _BYTE v148[4]; // [rsp+130h] [rbp+30h] BYREF
  __m128i v149; // [rsp+134h] [rbp+34h] BYREF
  __int64 v150; // [rsp+180h] [rbp+80h]
  int v151; // [rsp+188h] [rbp+88h]
  int v152; // [rsp+1B0h] [rbp+B0h]
  __int64 v153; // [rsp+1C0h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 144);
  v6 = *((_DWORD *)this + 36);
  v8 = *((_DWORD *)this + 38);
  if ( v6 > v8 )
  {
    *(_DWORD *)v4 = v8;
    *((_DWORD *)v4 + 2) = v6;
  }
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 3);
  if ( v11 > v12 )
  {
    *((_DWORD *)v4 + 1) = v12;
    *((_DWORD *)v4 + 3) = v11;
  }
  if ( !(unsigned int)DC::bTightenRao(*a2) )
    return 0LL;
  if ( !*((_QWORD *)*a2 + 62) )
    return 1LL;
  v13 = a4 & 0xD4;
  if ( v13 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
      return 1LL;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
  v14 = (__int64)*a2 + 8 * (*((_DWORD *)*a2 + 10) & 1);
  *(_DWORD *)v4 += *(_DWORD *)(v14 + 1016);
  *((_DWORD *)v4 + 2) += *(_DWORD *)(v14 + 1016);
  *((_DWORD *)v4 + 1) += *(_DWORD *)(v14 + 1020);
  *((_DWORD *)v4 + 3) += *(_DWORD *)(v14 + 1020);
  v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
  if ( v13 )
  {
    v16 = *((_DWORD *)this + 42);
    v17 = (__int32 *)((char *)this + 176);
    if ( *((_DWORD *)this + 44) < v16 )
      v16 = *((_DWORD *)this + 44);
    v18 = *((_DWORD *)this + 45);
    *v17 = v16;
    v19 = *((_DWORD *)this + 43);
    if ( v18 < v19 )
      v19 = v18;
    *((_DWORD *)this + 45) = v19;
    if ( *((_DWORD *)this + 42) > v16 )
    {
      v89 = *((_DWORD *)this + 46);
      *((_DWORD *)this + 46) = *((_DWORD *)this + 48);
      *((_DWORD *)this + 48) = v89;
    }
    if ( *((_DWORD *)this + 43) > *((_DWORD *)this + 45) )
    {
      v90 = *((_DWORD *)this + 47);
      *((_DWORD *)this + 47) = *((_DWORD *)this + 49);
      *((_DWORD *)this + 49) = v90;
    }
    v20 = *a2;
    v21 = *(_QWORD *)a3;
    if ( *(_QWORD *)(*(_QWORD *)a3 + 496LL) != *((_QWORD *)*a2 + 62) )
    {
      v22 = *((unsigned int *)v20 + 9);
      v23 = (v22 & 0x200) != 0 && v15 && (*(_DWORD *)(v15 + 40) & 0x20000) != 0;
      v24 = *((_QWORD *)v20 + 6);
      v25 = 0LL;
      v26 = *(_QWORD *)(v21 + 48);
      if ( v24 != v26 && !v23 )
      {
        v126 = (v22 & 0x4000) != 0 || (*(_DWORD *)(v21 + 36) & 0x4000) != 0;
        v127 = (*(_DWORD *)(v24 + 40) & 0x8000) != 0 || (*(_DWORD *)(v26 + 40) & 0x8000) != 0;
        if ( !v126 || v127 )
        {
          v128 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v128 + 50) || *((_QWORD *)v128 + 3) )
          {
            v129 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v129 + 50) || *((_QWORD *)v129 + 3) )
            {
              if ( v130
                && (unsigned int)dword_1C0357098 > 5
                && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
              {
                v137 = 0;
                v139 = 2;
                v140.m128i_i64[0] = 0x1000000LL;
                v138 = 80812;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v131,
                  (unsigned int)&unk_1C03200B1,
                  v132,
                  v133,
                  (__int64)&v138,
                  (__int64)&v140,
                  (__int64)&v139,
                  (__int64)&v137);
              }
              goto LABEL_156;
            }
          }
        }
        else
        {
          TraceLoggingWriteUnsupportedGdiUsage(23LL, *(unsigned int *)(v21 + 36), v22);
        }
      }
      v27 = *((_QWORD *)this + 9);
      v28 = 0;
      v29 = 0;
      v137 = 0;
      v30 = *(_QWORD *)(v27 + 48);
      if ( v30 && v27 == *(_QWORD *)(v30 + 2528) && (*(_DWORD *)(v30 + 40) & 0x20000) != 0 )
      {
        v29 = *(_DWORD *)(v30 + 2564);
        v28 = *(_DWORD *)(v30 + 2560);
        v137 = v29;
      }
      v31 = *(_DWORD *)v4 - *(_DWORD *)(*(_QWORD *)a3 + 8LL * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1) + 1016) - *v17;
      *((_DWORD *)this + 42) = v31;
      v32 = v28 + v31;
      v33 = *((_DWORD *)this + 37)
          - *(_DWORD *)(*(_QWORD *)a3 + 8LL * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1) + 1020)
          - *((_DWORD *)this + 45);
      *((_DWORD *)this + 43) = v33;
      v34 = v33 + v29;
      v35 = *(_DWORD *)v4;
      v36 = *((_QWORD *)this + 9);
      v141.m128i_i64[0] = __PAIR64__(v34, v32);
      v37 = v31 + *(_DWORD *)(v36 + 56) + v28;
      v141.m128i_i32[2] = v37;
      v38 = v33 + v137 + *(_DWORD *)(v36 + 60);
      if ( v35 > v32 )
        v32 = v35;
      v39 = *((_DWORD *)v4 + 1);
      v141.m128i_i32[0] = v32;
      if ( v39 > v34 )
        v34 = v39;
      v40 = *((_DWORD *)v4 + 2);
      v141.m128i_i32[1] = v34;
      if ( v40 < v37 )
        v37 = v40;
      v41 = *((_DWORD *)v4 + 3);
      v141.m128i_i32[2] = v37;
      if ( v41 < v38 )
        v38 = v41;
      v141.m128i_i32[3] = v38;
      if ( v37 < v32 )
      {
        v141.m128i_i32[0] = v37;
      }
      else if ( v38 < v34 )
      {
        v141.m128i_i32[1] = v38;
      }
      v42 = *a2;
      if ( *((_QWORD *)*a2 + 146) && (*((_DWORD *)v42 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(*a2)
        || *((_QWORD *)v42 + 144) )
      {
        v43 = DC::prgnRao(v42);
      }
      else if ( !*((_QWORD *)v42 + 145) || (*((_DWORD *)v42 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v42) )
      {
        v43 = (struct REGION *)*((_QWORD *)v42 + 143);
      }
      v150 = 0LL;
      v151 = 0;
      v152 = 1;
      v153 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v148, v43, (struct ERECTL *)&v141, 0);
      v44 = v149;
      v45 = _mm_cvtsi128_si32(v149);
      v141 = v149;
      if ( v45 != _mm_cvtsi128_si32(_mm_srli_si128(v149, 8))
        && v149.m128i_i32[1] != _mm_srli_si128(v149, 8).m128i_i32[1] )
      {
        v46 = v149.m128i_i32[1];
        if ( (*((_DWORD *)this + 53) & 0x10000) == 0 )
          goto LABEL_46;
        v52 = *((_QWORD *)this + 10);
        if ( !v52 )
          goto LABEL_46;
        v53 = *((_DWORD *)this + 46);
        if ( v53 >= 0 )
        {
          v54 = *((_DWORD *)this + 47);
          if ( v54 >= 0 )
          {
            v55 = *(_DWORD *)v4;
            v56 = *(_DWORD *)(v52 + 56) - v53;
            v57 = *((_DWORD *)this + 38) - v55;
            v138 = v55;
            if ( v56 >= v57 )
            {
              v58 = *((_DWORD *)this + 37);
              if ( *(_DWORD *)(v52 + 60) - v54 >= *((_DWORD *)this + 39) - v58 )
              {
                *((_DWORD *)this + 46) = v45 + v53 - v138;
                *((_DWORD *)this + 47) = v46 + v54 - v58;
LABEL_46:
                *v17 = v45 - *((_DWORD *)this + 42);
                *((_DWORD *)this + 45) = v46 - *((_DWORD *)this + 43);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v134 = *((_DWORD *)this + 52);
                  v135 = (struct ECLIPOBJ *)(unsigned __int8)v134;
                  if ( ((gajRop3[BYTE1(v134)] | gajRop3[(unsigned __int8)v134]) & 0xE8) == 0
                    || (v136 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v136 + 120) & 0x100) == 0 )
                  {
                    v140 = v44;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v135, (struct ERECTL *)&v140);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v68 = *((_DWORD *)this + 42);
                  v141.m128i_i32[0] -= v68;
                  v141.m128i_i32[2] -= v68;
                  v69 = *((_DWORD *)this + 43);
                  v141.m128i_i32[1] -= v69;
                  v141.m128i_i32[3] -= v69;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v47 = *((_QWORD *)this + 8);
                if ( *((_DWORD *)this + 52) == 52428 )
                {
                  if ( (*(_DWORD *)(v47 + 112) & 0x400) != 0 )
                    v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816);
                  else
                    v48 = EngCopyBits;
                  v49 = *((_QWORD *)this + 9);
                  if ( v49 )
                    v50 = v49 + 24;
                  else
                    v50 = 0LL;
                  if ( v47 )
                    v25 = v47 + 24;
                  return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, __m128i *, char *))v48)(
                           v25,
                           v50,
                           v148,
                           *((_QWORD *)this + 11),
                           &v149,
                           (char *)this + 176);
                }
                else
                {
                  v59 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                  v60 = BLTRECORD::pSurfMskOut(this);
                  if ( v60 )
                    v65 = (char *)v60 + 24;
                  else
                    v65 = 0LL;
                  v66 = *((_QWORD *)this + 9);
                  if ( v66 )
                    v67 = v66 + 24;
                  else
                    v67 = 0LL;
                  if ( v61 )
                    v25 = v61 + 24;
                  return ((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, __int64, __m128i *, __int32 *, char *, __int64, char *, int))v59)(
                           v25,
                           v67,
                           v65,
                           v148,
                           v64,
                           &v149,
                           v17,
                           (char *)this + 184,
                           v63,
                           (char *)this + 200,
                           v62);
                }
              }
            }
          }
        }
LABEL_156:
        EngSetLastError(0x57u);
        return 0LL;
      }
      return 1LL;
    }
    v91 = *((_QWORD *)this + 9);
    v92 = 0;
    v93 = 0;
    v94 = *(_QWORD *)(v91 + 48);
    if ( v94 && v91 == *(_QWORD *)(v94 + 2528) && (*(_DWORD *)(v94 + 40) & 0x20000) != 0 )
    {
      v92 = *(_DWORD *)(v94 + 2560);
      v93 = *(_DWORD *)(v94 + 2564);
    }
    v95 = *(_DWORD *)v4 - *(_DWORD *)(v21 + 8LL * (*(_DWORD *)(v21 + 40) & 1) + 1016) - v16;
    *((_DWORD *)this + 42) = v95;
    v96 = *((_DWORD *)this + 37)
        - *(_DWORD *)(*(_QWORD *)a3 + 8LL * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1) + 1020)
        - *((_DWORD *)this + 45);
    v141.m128i_i32[0] = v95 + v92;
    *((_DWORD *)this + 43) = v96;
    v97 = *((_QWORD *)this + 8);
    v141.m128i_i32[1] = v96 + v93;
    v141.m128i_i32[2] = v92 + v95 + *(_DWORD *)(v97 + 56);
    v141.m128i_i32[3] = v93 + v96 + *(_DWORD *)(v97 + 60);
    ERECTL::operator*=(&v141, v4);
    v98 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    v144 = 0LL;
    v145 = 0;
    v146 = 1;
    v147 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v98, (struct ERECTL *)&v141, 0);
    v99 = v143;
    v141 = v143;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v141) )
      return 1LL;
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v100 = *((_DWORD *)this + 46);
      if ( v100 < 0 )
        goto LABEL_156;
      v101 = *((_DWORD *)this + 47);
      if ( v101 < 0 )
        goto LABEL_156;
      v102 = *((_QWORD *)this + 10);
      if ( *(_DWORD *)(v102 + 56) - v100 < *((_DWORD *)this + 38) - *(_DWORD *)v4 )
        goto LABEL_156;
      v103 = *((_DWORD *)this + 37);
      if ( *(_DWORD *)(v102 + 60) - v101 < *((_DWORD *)this + 39) - v103 )
        goto LABEL_156;
      *((_DWORD *)this + 46) = _mm_cvtsi128_si32(v99) + v100 - *(_DWORD *)v4;
      *((_DWORD *)this + 47) = _mm_cvtsi128_si32(_mm_srli_si128(v99, 4)) + v101 - v103;
    }
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v104 = *((_DWORD *)this + 52);
      v105 = (struct ECLIPOBJ *)(unsigned __int8)v104;
      if ( ((gajRop3[BYTE1(v104)] | gajRop3[(unsigned __int8)v104]) & 0xE8) == 0
        || (v106 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v106 + 120) & 0x100) == 0 )
      {
        v140 = v99;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v105, (struct ERECTL *)&v140);
      }
    }
    v107 = v141.m128i_i32[0];
    v108 = v141.m128i_i32[0] - *((_DWORD *)this + 42);
    v109 = v141.m128i_i32[1];
    v110 = v141.m128i_i32[1];
    *v17 = v108;
    v111 = v110 - *((_DWORD *)this + 43);
    *((_DWORD *)this + 45) = v111;
    if ( v108 >= v107 )
      v141.m128i_i32[2] += v108 - v107;
    else
      v141.m128i_i32[0] = v108;
    if ( v111 >= v109 )
      v141.m128i_i32[3] += v111 - v109;
    else
      v141.m128i_i32[1] = v111;
    ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
    v112 = *((_DWORD *)this + 52);
    v113 = *((_QWORD *)this + 8);
    if ( v112 == 52428 )
    {
      if ( (*(_DWORD *)(v113 + 112) & 0x400) != 0 )
        v114 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816);
      else
        v114 = EngCopyBits;
      v115 = *((_QWORD *)this + 9);
      v116 = v113 + 24;
      v117 = v115 + 24;
      if ( !v115 )
        v117 = 0LL;
      if ( !v113 )
        v116 = 0LL;
      return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, __m128i *, char *))v114)(
               v116,
               v117,
               v142,
               0LL,
               &v143,
               (char *)this + 176);
    }
    else
    {
      SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
      v118 = BLTRECORD::pSurfMskOut(this);
      v121 = *((_QWORD *)this + 9);
      v122 = (char *)v118 + 24;
      v123 = v121 + 24;
      if ( !v118 )
        v122 = 0LL;
      v124 = v121 == 0;
      v125 = v113 + 24;
      if ( v124 )
        v123 = 0LL;
      if ( !v113 )
        v125 = 0LL;
      return v120(v125, v123, v122, v142, 0LL, &v143, v17, (char *)this + 184, v119, (char *)this + 200, v112);
    }
  }
  else
  {
    v70 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    v146 = 1;
    v144 = 0LL;
    v145 = 0;
    v147 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v70, v4, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v143) )
      return 1LL;
    v71 = (int *)((char *)this + 184);
    if ( *((int *)this + 44) < 0 )
    {
      v72 = *v71;
      *v71 = *((_DWORD *)this + 48);
      *((_DWORD *)this + 48) = v72;
    }
    if ( *((int *)this + 45) < 0 )
    {
      v73 = *((_DWORD *)this + 47);
      *((_DWORD *)this + 47) = *((_DWORD *)this + 49);
      *((_DWORD *)this + 49) = v73;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v76 = *v71;
      if ( *v71 < 0 )
        goto LABEL_156;
      v77 = *((_DWORD *)this + 47);
      if ( v77 < 0 )
        goto LABEL_156;
      if ( v74 < 0 )
        v74 = -v74;
      v78 = *((_QWORD *)this + 10);
      if ( *(_DWORD *)(v78 + 56) - v76 < v74 )
        goto LABEL_156;
      if ( v75 < 0 )
        v75 = -v75;
      if ( *(_DWORD *)(v78 + 60) - v77 < v75 )
        goto LABEL_156;
      *v71 = v143.m128i_i32[0] + v76 - *(_DWORD *)v4;
      *((_DWORD *)this + 47) = v143.m128i_i32[1] + v77 - *((_DWORD *)this + 37);
    }
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v79 = *((_DWORD *)this + 52);
      v80 = (struct ECLIPOBJ *)(unsigned __int8)v79;
      if ( ((gajRop3[BYTE1(v79)] | gajRop3[(unsigned __int8)v79]) & 0xE8) == 0
        || (v81 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v81 + 120) & 0x100) == 0 )
      {
        v140 = v143;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v80, (struct ERECTL *)&v140);
      }
    }
    ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
    SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
    v82 = BLTRECORD::pSurfMskOut(this);
    v87 = v84 + 24;
    v88 = (char *)v82 + 24;
    if ( !v82 )
      v88 = 0LL;
    if ( !v84 )
      v87 = 0LL;
    return v86(v87, 0LL, v88, v142, 0LL, v4, 0LL, v71, v85, (char *)this + 200, v83);
  }
}
