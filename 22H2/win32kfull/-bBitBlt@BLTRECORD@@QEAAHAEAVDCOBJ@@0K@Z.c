/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6B38
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B853C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C01222AC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01458A4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B248 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028D580 (GrePlgBlt.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00AB8BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5990 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00B8D30 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  __int64 result; // rax
  DC *v9; // rdx
  XDCOBJ *v10; // r10
  int v11; // r12d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct REGION *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // r10d
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r11
  int v23; // r8d
  struct ECLIPOBJ *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  int (*v27)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r11
  _DWORD *v33; // r12
  int v34; // edx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  DC *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r9d
  int v42; // r11d
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  struct REGION *v47; // rax
  __m128i v48; // xmm6
  int v49; // edx
  int v50; // r8d
  __int64 v51; // r9
  int v52; // r10d
  struct ECLIPOBJ *v53; // rdx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  int v59; // eax
  int v60; // r14d
  __int64 v61; // r8
  BOOL (__stdcall *v62)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v63; // rax
  __int64 v64; // rcx
  bool v65; // cf
  __int64 v66; // rax
  __int64 v67; // rdx
  _BYTE *v68; // r8
  __int64 v69; // rcx
  __m128i *v70; // rax
  __int64 v71; // r9
  __int64 v72; // rsi
  struct SURFACE *v73; // rax
  SURFACE *v74; // rcx
  char *v75; // rbx
  __int64 v76; // rdi
  int (*v77)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v78; // r9
  __int64 v79; // r10
  __int64 v80; // r11
  __int64 v81; // r9
  char v82; // r8
  char v83; // al
  __int64 v84; // r11
  __int64 v85; // rcx
  bool v86; // al
  __int64 v87; // r11
  __int64 v88; // rcx
  int v89; // r9d
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  __int64 v93; // rcx
  struct REGION *v94; // rax
  __int128 v95; // xmm6
  __int64 v96; // rax
  struct SURFACE *v97; // rax
  struct SURFACE *v98; // rax
  char v99; // r8
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned int v103; // r11d
  int v104; // r9d
  int v105; // r10d
  int v106; // edx
  int v107; // r8d
  __int64 v108; // r11
  int v109; // r13d
  int v110; // r15d
  struct ECLIPOBJ *v111; // rdx
  __int64 v112; // rax
  int v113; // eax
  int v114; // eax
  int v115; // r15d
  __int64 v116; // r11
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rsi
  __int64 v120; // r14
  struct SURFACE *v121; // rax
  SURFACE *v122; // rcx
  char *v123; // rbx
  __int64 v124; // rdi
  int (*v125)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v126; // r9
  __int64 v127; // r10
  __int64 v128; // r11
  struct DCOBJ *v129; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v130[3]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v131; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v132[4]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v133; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v134; // [rsp+D0h] [rbp-38h]
  __int64 v135; // [rsp+E8h] [rbp-20h]
  int v136; // [rsp+F0h] [rbp-18h]
  int v137; // [rsp+118h] [rbp+10h]
  __int64 v138; // [rsp+128h] [rbp+20h]
  _BYTE v139[4]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v140; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v141; // [rsp+170h] [rbp+68h]
  __int64 v142; // [rsp+188h] [rbp+80h]
  int v143; // [rsp+190h] [rbp+88h]
  int v144; // [rsp+1B8h] [rbp+B0h]
  __int64 v145; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  v129 = a3;
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  result = DC::bTightenRao(*a2);
  if ( (_DWORD)result )
  {
    v9 = *a2;
    if ( *((_QWORD *)*a2 + 62) )
    {
      v10 = v129;
      v11 = a4 & 0xD4;
      if ( !v11 || *(_QWORD *)(*(_QWORD *)v129 + 496LL) )
      {
        if ( (*((_DWORD *)v9 + 9) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
          v9 = *a2;
        }
        v12 = 1;
        v13 = *((_DWORD *)v9 + 10) & 1LL;
        *(_DWORD *)v4 += *((_DWORD *)v9 + 2 * v13 + 254);
        *((_DWORD *)v4 + 2) += *((_DWORD *)v9 + 2 * v13 + 254);
        *((_DWORD *)v4 + 1) += *((_DWORD *)v9 + 2 * v13 + 255);
        *((_DWORD *)v4 + 3) += *((_DWORD *)v9 + 2 * v13 + 255);
        v14 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
        if ( !v11 )
        {
          v15 = XDCOBJ::prgnEffRao(a2);
          v134 = 0LL;
          v135 = 0LL;
          v136 = 0;
          v137 = 1;
          v138 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v132, v15, v4, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v133) )
            return v12;
          if ( *((int *)this + 46) < 0 )
          {
            v16 = *((_DWORD *)this + 48);
            *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
            *((_DWORD *)this + 50) = v16;
          }
          if ( *((int *)this + 47) < 0 )
          {
            v17 = *((_DWORD *)this + 49);
            *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
            *((_DWORD *)this + 51) = v17;
          }
          if ( !BLTRECORD::pSurfMskOut(this) )
            goto LABEL_19;
          v20 = *((_DWORD *)this + 48);
          if ( v20 >= 0 )
          {
            v21 = *((_DWORD *)this + 49);
            if ( v21 >= 0 )
            {
              v22 = *((_QWORD *)this + 10);
              if ( *(_DWORD *)(v22 + 56) - v20 >= (int)abs32(v18) && *(_DWORD *)(v22 + 60) - v21 >= (int)abs32(v19) )
              {
                v23 = v133.m128i_i32[0] + v20 - *(_DWORD *)v4;
                *((_DWORD *)this + 49) = v133.m128i_i32[1] + v21 - *((_DWORD *)this + 39);
                *((_DWORD *)this + 48) = v23;
LABEL_19:
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v24 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v24]) & 0xE8) == 0
                    || (v25 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v25 + 120) & 0x100) == 0 )
                  {
                    *(__m128i *)&v130[1] = v133;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v24, (__m128i *)&v130[1]);
                  }
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v26 = *((_QWORD *)this + 12);
                BLTRECORD::pSurfMskOut(this);
                v27 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v27)(
                         v30,
                         0LL,
                         v28,
                         v132,
                         0LL,
                         v4,
                         0LL,
                         v31,
                         v26,
                         v29,
                         *((_DWORD *)this + 54));
              }
            }
          }
LABEL_112:
          EngSetLastError(0x57u);
          return 0;
        }
        v33 = (_DWORD *)((char *)this + 184);
        v34 = *((_DWORD *)this + 46);
        v35 = *((_DWORD *)this + 47);
        if ( v34 >= *((_DWORD *)this + 44) )
          v34 = *((_DWORD *)this + 44);
        *v33 = v34;
        if ( v35 >= *((_DWORD *)this + 45) )
          v35 = *((_DWORD *)this + 45);
        *((_DWORD *)this + 47) = v35;
        if ( *((_DWORD *)this + 44) > v34 )
        {
          v36 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v36;
        }
        if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
        {
          v37 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v37;
        }
        v38 = *a2;
        v39 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 496LL) == *((_QWORD *)*a2 + 62) )
        {
          v40 = *((_QWORD *)this + 9);
          v41 = 0;
          v42 = 0;
          v43 = *(_QWORD *)(v40 + 48);
          if ( v43 && v40 == *(_QWORD *)(v43 + 2552) && (*(_DWORD *)(v43 + 40) & 0x20000) != 0 )
          {
            v41 = *(_DWORD *)(v43 + 2584);
            v42 = *(_DWORD *)(v43 + 2588);
          }
          v44 = *(_DWORD *)v4 - *(_DWORD *)(v39 + 8 * (*(_DWORD *)(v39 + 40) & 1LL) + 1016) - *v33;
          *((_DWORD *)this + 44) = v44;
          v45 = *((_DWORD *)this + 39)
              - *(_DWORD *)(*(_QWORD *)v10 + 8 * (*(_DWORD *)(*(_QWORD *)v10 + 40LL) & 1LL) + 1020)
              - *((_DWORD *)this + 47);
          v131.m128i_i32[0] = v44 + v41;
          *((_DWORD *)this + 45) = v45;
          v46 = *((_QWORD *)this + 8);
          v131.m128i_i32[1] = v45 + v42;
          v131.m128i_i32[2] = v41 + v44 + *(_DWORD *)(v46 + 56);
          v131.m128i_i32[3] = v42 + v45 + *(_DWORD *)(v46 + 60);
          ERECTL::operator*=(v131.m128i_i32, (int *)v4);
          v47 = XDCOBJ::prgnEffRao(a2);
          v134 = 0LL;
          v135 = 0LL;
          v136 = 0;
          v137 = 1;
          v138 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v132, v47, (struct ERECTL *)&v131, 0);
          v48 = v133;
          v131 = v133;
          if ( ERECTL::bEmpty((ERECTL *)&v131) )
            return v12;
          if ( BLTRECORD::pSurfMskOut(this) )
          {
            v49 = *((_DWORD *)this + 48);
            if ( v49 < 0 )
              goto LABEL_112;
            v50 = *((_DWORD *)this + 49);
            if ( v50 < 0 )
              goto LABEL_112;
            v51 = *((_QWORD *)this + 10);
            if ( *(_DWORD *)(v51 + 56) - v49 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
              goto LABEL_112;
            v52 = *((_DWORD *)this + 39);
            if ( *(_DWORD *)(v51 + 60) - v50 < *((_DWORD *)this + 41) - v52 )
              goto LABEL_112;
            *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v48) + v49 - *(_DWORD *)v4;
            *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v48, 4)) + v50 - v52;
          }
          if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
          {
            v53 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
            if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v53]) & 0xE8) == 0
              || (v54 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v54 + 120) & 0x100) == 0 )
            {
              *(__m128i *)&v130[1] = v48;
              XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v53, (__m128i *)&v130[1]);
            }
          }
          v55 = v131.m128i_i32[0];
          v56 = v131.m128i_i32[0] - *((_DWORD *)this + 44);
          v57 = v131.m128i_i32[1];
          v58 = v131.m128i_i32[1];
          *v33 = v56;
          v59 = v58 - *((_DWORD *)this + 45);
          *((_DWORD *)this + 47) = v59;
          if ( v56 >= v55 )
            v131.m128i_i32[2] += v56 - v55;
          else
            v131.m128i_i32[0] = v56;
          if ( v59 >= v57 )
            v131.m128i_i32[3] += v59 - v57;
          else
            v131.m128i_i32[1] = v59;
          ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
          v60 = *((_DWORD *)this + 54);
          if ( v60 != 52428 )
          {
            v72 = *((_QWORD *)this + 12);
            v73 = BLTRECORD::pSurfMskOut(this);
            v74 = (SURFACE *)*((_QWORD *)this + 8);
            v75 = (char *)this + 192;
            v76 = ((unsigned __int64)v73 + 24) & -(__int64)(v73 != 0LL);
            v77 = SURFACE::pfnBitBlt(v74);
            return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, _DWORD *, char *, __int64, __int64, int))v77)(
                     v79,
                     v80,
                     v76,
                     v132,
                     0LL,
                     &v133,
                     v33,
                     v75,
                     v72,
                     v78,
                     v60);
          }
          v61 = *((_QWORD *)this + 8);
          if ( (*(_DWORD *)(v61 + 112) & 0x400) != 0 )
            v62 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2840);
          else
            v62 = EngCopyBits;
          v63 = *((_QWORD *)this + 9);
          v64 = v63 + 24;
          v65 = v63 != 0;
          v66 = v61 + 24;
          v67 = v64 & -(__int64)v65;
          v65 = v61 != 0;
          v68 = v132;
          v69 = v66 & -(__int64)v65;
          v70 = &v133;
          v71 = 0LL;
          return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v62)(
                   v69,
                   v67,
                   v68,
                   v71,
                   v70,
                   (char *)this + 184);
        }
        v81 = *((unsigned int *)v38 + 9);
        v82 = 0;
        if ( (v81 & 0x200) == 0 || !v14 || (v83 = 1, (*(_DWORD *)(v14 + 40) & 0x20000) == 0) )
          v83 = 0;
        v84 = *((_QWORD *)v38 + 6);
        v85 = *(_QWORD *)(v39 + 48);
        if ( v84 != v85 && !v83 )
        {
          if ( (v81 & 0x4000) != 0 || (*(_DWORD *)(v39 + 36) & 0x4000) != 0 )
            v82 = 1;
          v86 = (*(_DWORD *)(v84 + 40) & 0x8000) != 0 || (*(_DWORD *)(v85 + 40) & 0x8000) != 0;
          if ( !v82 || v86 )
          {
            v97 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
            if ( *((_WORD *)v97 + 50) != (_WORD)v87 || *((_QWORD *)v97 + 3) != v87 )
            {
              v98 = XDCOBJ::pSurfaceEff(v10);
              if ( *((_WORD *)v98 + 50) != (_WORD)v87 || *((_QWORD *)v98 + 3) != v87 )
              {
                if ( v99
                  && (unsigned int)dword_1C032A3D8 > 5
                  && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x400000000000LL) )
                {
                  v130[0] = v103 | 0x200000000LL;
                  v130[1] = 0x1000000LL;
                  LODWORD(v129) = 80812;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v100,
                    (int)&unk_1C02F401A,
                    v101,
                    v102,
                    (__int64)&v129,
                    (__int64)&v130[1],
                    (__int64)v130 + 4,
                    (__int64)v130);
                }
                EngSetLastError(0x57u);
                return 0;
              }
            }
            goto LABEL_79;
          }
          TraceLoggingWriteUnsupportedGdiUsage(23LL, *(unsigned int *)(v39 + 36), v81, 0LL, 0LL);
          v10 = v129;
        }
        LODWORD(v87) = 0;
LABEL_79:
        v88 = *((_QWORD *)this + 9);
        v89 = v87;
        v90 = *(_QWORD *)(v88 + 48);
        if ( v90 && v88 == *(_QWORD *)(v90 + 2552) && (*(_DWORD *)(v90 + 40) & 0x20000) != 0 )
        {
          v89 = *(_DWORD *)(v90 + 2584);
          LODWORD(v87) = *(_DWORD *)(v90 + 2588);
        }
        v91 = *(_DWORD *)v4 - *(_DWORD *)(*(_QWORD *)v10 + 8 * (*(_DWORD *)(*(_QWORD *)v10 + 40LL) & 1LL) + 1016) - *v33;
        *((_DWORD *)this + 44) = v91;
        v92 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)v10 + 8 * (*(_DWORD *)(*(_QWORD *)v10 + 40LL) & 1LL) + 1020)
            - *((_DWORD *)this + 47);
        v131.m128i_i32[0] = v89 + v91;
        *((_DWORD *)this + 45) = v92;
        v93 = *((_QWORD *)this + 9);
        v131.m128i_i32[1] = v87 + v92;
        v131.m128i_i32[2] = v91 + v89 + *(_DWORD *)(v93 + 56);
        v131.m128i_i32[3] = v92 + v87 + *(_DWORD *)(v93 + 60);
        ERECTL::operator*=(v131.m128i_i32, (int *)v4);
        v94 = XDCOBJ::prgnEffRao(a2);
        v144 = 1;
        v141 = 0LL;
        v142 = 0LL;
        v143 = 0;
        v145 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v139, v94, (struct ERECTL *)&v131, 0);
        v95 = v140;
        v131 = (__m128i)v140;
        if ( ERECTL::bEmpty((ERECTL *)&v131) )
          return v12;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v96 = *((_QWORD *)this + 10);
        else
          v96 = 0LL;
        v104 = DWORD1(v140);
        v105 = v140;
        if ( v96 )
        {
          v106 = *((_DWORD *)this + 48);
          if ( v106 < 0 )
            goto LABEL_112;
          v107 = *((_DWORD *)this + 49);
          if ( v107 < 0 )
            goto LABEL_112;
          v108 = *((_QWORD *)this + 10);
          v109 = *(_DWORD *)v4;
          if ( *(_DWORD *)(v108 + 56) - v106 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            goto LABEL_112;
          v110 = *((_DWORD *)this + 39);
          if ( *(_DWORD *)(v108 + 60) - v107 < *((_DWORD *)this + 41) - v110 )
            goto LABEL_112;
          *((_DWORD *)this + 48) = v140 + v106 - v109;
          *((_DWORD *)this + 49) = v104 + v107 - v110;
        }
        *v33 = v105 - *((_DWORD *)this + 44);
        *((_DWORD *)this + 47) = v104 - *((_DWORD *)this + 45);
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v111 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v111]) & 0xE8) == 0
            || (v112 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v112 + 120) & 0x100) == 0 )
          {
            *(_OWORD *)&v130[1] = v95;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v111, (__m128i *)&v130[1]);
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)v129 + 36LL) & 1) != 0 )
        {
          v113 = *((_DWORD *)this + 44);
          v131.m128i_i32[0] -= v113;
          v131.m128i_i32[2] -= v113;
          v114 = *((_DWORD *)this + 45);
          v131.m128i_i32[1] -= v114;
          v131.m128i_i32[3] -= v114;
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v115 = *((_DWORD *)this + 54);
        if ( v115 != 52428 )
        {
          v119 = *((_QWORD *)this + 12);
          v120 = *((_QWORD *)this + 11);
          v121 = BLTRECORD::pSurfMskOut(this);
          v122 = (SURFACE *)*((_QWORD *)this + 8);
          v123 = (char *)this + 192;
          v124 = ((unsigned __int64)v121 + 24) & -(__int64)(v121 != 0LL);
          v125 = SURFACE::pfnBitBlt(v122);
          return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v125)(
                   v127,
                   v128,
                   v124,
                   v139,
                   v120,
                   &v140,
                   v33,
                   v123,
                   v119,
                   v126,
                   v115);
        }
        v116 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v116 + 112) & 0x400) != 0 )
          v62 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2840);
        else
          v62 = EngCopyBits;
        v117 = *((_QWORD *)this + 9);
        v71 = *((_QWORD *)this + 11);
        v118 = v117 + 24;
        v65 = v117 != 0;
        v70 = (__m128i *)&v140;
        v67 = v118 & -(__int64)v65;
        v69 = (v116 + 24) & -(__int64)(v116 != 0);
        v68 = v139;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v62)(
                 v69,
                 v67,
                 v68,
                 v71,
                 v70,
                 (char *)this + 184);
      }
    }
    return 1LL;
  }
  return result;
}
