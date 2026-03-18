/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C008F660 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01388F0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C008DA00 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008DC2C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  __int64 result; // rax
  int v9; // r13d
  DC *v10; // rdx
  XDCOBJ *v11; // r10
  int v12; // r12d
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct REGION *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // r10d
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r11
  int v24; // r8d
  struct ECLIPOBJ *v25; // rdx
  __int64 v26; // rax
  int (*v27)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v28; // ebx
  __int64 v29; // rdi
  int (*v30)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  struct SURFACE *v31; // rax
  __int64 v32; // r11
  int *v34; // r12
  int v35; // edx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  DC *v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rcx
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
  int v60; // esi
  __int64 v61; // rdi
  BOOL (__stdcall *v62)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  _BYTE *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __m128i *v66; // rax
  __int64 v67; // r9
  int (*v68)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbx
  struct SURFACE *v69; // rax
  __int64 v70; // r11
  __int64 v71; // r8
  char v72; // dl
  char v73; // al
  __int64 v74; // r11
  __int64 v75; // rcx
  bool v76; // al
  __int64 v77; // r11
  __int64 v78; // rcx
  int v79; // r9d
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // rcx
  struct REGION *v84; // rax
  __int128 v85; // xmm6
  struct SURFACE *v86; // rax
  int v87; // r9d
  int v88; // r10d
  int v89; // edx
  int v90; // r8d
  __int64 v91; // r11
  int v92; // r13d
  int v93; // r15d
  struct ECLIPOBJ *v94; // rdx
  __int64 v95; // rax
  int v96; // eax
  int v97; // eax
  int v98; // r15d
  __int64 v99; // rsi
  struct SURFACE *v100; // rax
  struct SURFACE *v101; // rax
  char v102; // dl
  int v103; // r8d
  int v104; // r9d
  int v105; // r11d
  __int64 v106; // rax
  __int64 v107; // rcx
  bool v108; // cf
  int (*v109)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v110; // rbx
  int (*v111)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rdi
  struct SURFACE *v112; // rax
  __int64 v113; // r11
  __int64 v114; // [rsp+68h] [rbp-A0h] BYREF
  struct DCOBJ *v115; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v116[3]; // [rsp+78h] [rbp-90h] BYREF
  int v117[6]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v118[4]; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v119; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v120; // [rsp+F8h] [rbp-10h]
  int v121; // [rsp+100h] [rbp-8h]
  int v122; // [rsp+128h] [rbp+20h]
  __int64 v123; // [rsp+138h] [rbp+30h]
  _BYTE v124[4]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v125[4]; // [rsp+14Ch] [rbp+44h] BYREF
  __int64 v126; // [rsp+198h] [rbp+90h]
  int v127; // [rsp+1A0h] [rbp+98h]
  int v128; // [rsp+1C8h] [rbp+C0h]
  __int64 v129; // [rsp+1D8h] [rbp+D0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  v115 = a3;
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  result = DC::bTightenRao(*a2);
  v9 = 0;
  if ( (_DWORD)result )
  {
    v10 = *a2;
    if ( *((_QWORD *)*a2 + 62) )
    {
      v11 = v115;
      v12 = a4 & 0xD4;
      if ( !v12 || *(_QWORD *)(*(_QWORD *)v115 + 496LL) )
      {
        if ( (*((_DWORD *)v10 + 9) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
          v10 = *a2;
        }
        v13 = 1;
        v14 = *((_DWORD *)v10 + 10) & 1LL;
        *(_DWORD *)v4 += *((_DWORD *)v10 + 2 * v14 + 254);
        *((_DWORD *)v4 + 2) += *((_DWORD *)v10 + 2 * v14 + 254);
        *((_DWORD *)v4 + 1) += *((_DWORD *)v10 + 2 * v14 + 255);
        *((_DWORD *)v4 + 3) += *((_DWORD *)v10 + 2 * v14 + 255);
        v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
        if ( !v12 )
        {
          v16 = XDCOBJ::prgnEffRao(a2);
          v120 = 0LL;
          v121 = 0;
          v122 = 1;
          v123 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v118, v16, v4, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v119) )
            return v13;
          if ( *((int *)this + 46) < 0 )
          {
            v17 = *((_DWORD *)this + 48);
            *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
            *((_DWORD *)this + 50) = v17;
          }
          if ( *((int *)this + 47) < 0 )
          {
            v18 = *((_DWORD *)this + 49);
            *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
            *((_DWORD *)this + 51) = v18;
          }
          if ( !BLTRECORD::pSurfMskOut(this) )
            goto LABEL_19;
          v21 = *((_DWORD *)this + 48);
          if ( v21 >= 0 )
          {
            v22 = *((_DWORD *)this + 49);
            if ( v22 >= 0 )
            {
              v23 = *((_QWORD *)this + 10);
              if ( *(_DWORD *)(v23 + 56) - v21 >= (int)abs32(v19) && *(_DWORD *)(v23 + 60) - v22 >= (int)abs32(v20) )
              {
                v24 = v119.m128i_i32[0] + v21 - *(_DWORD *)v4;
                *((_DWORD *)this + 49) = v119.m128i_i32[1] + v22 - *((_DWORD *)this + 39);
                *((_DWORD *)this + 48) = v24;
LABEL_19:
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v25 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v25]) & 0xE8) == 0
                    || (v26 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v26 + 120) & 0x100) == 0 )
                  {
                    *(__m128i *)&v116[1] = v119;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v25, (__m128i *)&v116[1]);
                  }
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v27 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                v28 = *((_DWORD *)this + 54);
                v29 = *((_QWORD *)this + 12);
                v30 = v27;
                v31 = BLTRECORD::pSurfMskOut(this);
                return ((unsigned int (__fastcall *)(__int64, _QWORD, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, char *, __int64, char *, int))v30)(
                         (v32 + 24) & -(__int64)(v32 != 0),
                         0LL,
                         ((unsigned __int64)v31 + 24) & -(__int64)(v31 != 0LL),
                         v118,
                         0LL,
                         v4,
                         0LL,
                         (char *)this + 192,
                         v29,
                         (char *)this + 208,
                         v28);
              }
            }
          }
LABEL_110:
          EngSetLastError(0x57u);
          return 0;
        }
        v34 = (int *)((char *)this + 184);
        v35 = *((_DWORD *)this + 46);
        v36 = *((_DWORD *)this + 47);
        if ( v35 >= *((_DWORD *)this + 44) )
          v35 = *((_DWORD *)this + 44);
        *v34 = v35;
        if ( v36 >= *((_DWORD *)this + 45) )
          v36 = *((_DWORD *)this + 45);
        *((_DWORD *)this + 47) = v36;
        if ( *((_DWORD *)this + 44) > v35 )
        {
          v37 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v37;
        }
        if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
        {
          v38 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v38;
        }
        v39 = *a2;
        v40 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 496LL) == *((_QWORD *)*a2 + 62) )
        {
          v41 = *((_QWORD *)this + 9);
          v42 = 0;
          v43 = *(_QWORD *)(v41 + 48);
          if ( v43 && v41 == *(_QWORD *)(v43 + 2528) )
          {
            if ( _bittest((const signed __int32 *)(v43 + 40), 0x11u) )
            {
              v42 = *(_DWORD *)(v43 + 2560);
              v9 = *(_DWORD *)(v43 + 2564);
            }
            else
            {
              v9 = 0;
            }
          }
          v44 = *(_DWORD *)v4 - *(_DWORD *)(v40 + 8 * (*(_DWORD *)(v40 + 40) & 1LL) + 1016) - v35;
          *((_DWORD *)this + 44) = v44;
          v45 = *((_DWORD *)this + 39)
              - *(_DWORD *)(*(_QWORD *)v11 + 8 * (*(_DWORD *)(*(_QWORD *)v11 + 40LL) & 1LL) + 1020)
              - *((_DWORD *)this + 47);
          v117[0] = v44 + v42;
          *((_DWORD *)this + 45) = v45;
          v46 = *((_QWORD *)this + 8);
          v117[1] = v45 + v9;
          v117[2] = v42 + v44 + *(_DWORD *)(v46 + 56);
          v117[3] = v9 + v45 + *(_DWORD *)(v46 + 60);
          ERECTL::operator*=(v117, (int *)v4);
          v47 = XDCOBJ::prgnEffRao(a2);
          v122 = 1;
          v120 = 0LL;
          v121 = 0;
          v123 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v118, v47, (struct ERECTL *)v117, 0);
          v48 = v119;
          *(__m128i *)v117 = v119;
          if ( ERECTL::bEmpty((ERECTL *)v117) )
            return v13;
          if ( BLTRECORD::pSurfMskOut(this) )
          {
            v49 = *((_DWORD *)this + 48);
            if ( v49 < 0 )
              goto LABEL_110;
            v50 = *((_DWORD *)this + 49);
            if ( v50 < 0 )
              goto LABEL_110;
            v51 = *((_QWORD *)this + 10);
            if ( *(_DWORD *)(v51 + 56) - v49 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
              goto LABEL_110;
            v52 = *((_DWORD *)this + 39);
            if ( *(_DWORD *)(v51 + 60) - v50 < *((_DWORD *)this + 41) - v52 )
              goto LABEL_110;
            *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v48) + v49 - *(_DWORD *)v4;
            *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v48, 4)) + v50 - v52;
          }
          if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
          {
            v53 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
            if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v53]) & 0xE8) == 0
              || (v54 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v54 + 120) & 0x100) == 0 )
            {
              *(__m128i *)&v116[1] = v48;
              XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v53, (__m128i *)&v116[1]);
            }
          }
          v55 = v117[0];
          v56 = v117[0] - *((_DWORD *)this + 44);
          v57 = v117[1];
          v58 = v117[1];
          *v34 = v56;
          v59 = v58 - *((_DWORD *)this + 45);
          *((_DWORD *)this + 47) = v59;
          if ( v56 >= v55 )
            v117[2] += v56 - v55;
          else
            v117[0] = v56;
          if ( v59 >= v57 )
            v117[3] += v59 - v57;
          else
            v117[1] = v59;
          ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
          v60 = *((_DWORD *)this + 54);
          v61 = *((_QWORD *)this + 8);
          if ( v60 != 52428 )
          {
            v68 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
            v69 = BLTRECORD::pSurfMskOut(this);
            return ((unsigned int (__fastcall *)(__int64, __int64, unsigned __int64, _BYTE *, _QWORD, __m128i *, char *, char *, __int64, char *, int))v68)(
                     (v61 + 24) & -(__int64)(v61 != 0),
                     (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
                     ((unsigned __int64)v69 + 24) & -(__int64)(v69 != 0LL),
                     v118,
                     0LL,
                     &v119,
                     (char *)this + 184,
                     (char *)this + 192,
                     v70,
                     (char *)this + 208,
                     v60);
          }
          if ( (*(_DWORD *)(v61 + 112) & 0x400) != 0 )
            v62 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816);
          else
            v62 = EngCopyBits;
          v63 = v118;
          v64 = (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
          v65 = (v61 + 24) & -(__int64)(v61 != 0);
          v66 = &v119;
          v67 = 0LL;
          return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v62)(
                   v65,
                   v64,
                   v63,
                   v67,
                   v66,
                   (char *)this + 184);
        }
        v71 = *((unsigned int *)v39 + 9);
        v72 = 0;
        if ( (v71 & 0x200) == 0 || !v15 || (v73 = 1, !_bittest((const signed __int32 *)(v15 + 40), 0x11u)) )
          v73 = 0;
        v74 = *((_QWORD *)v39 + 6);
        v75 = *(_QWORD *)(v40 + 48);
        if ( v74 != v75 && !v73 )
        {
          if ( (v71 & 0x4000) != 0 || (*(_DWORD *)(v40 + 36) & 0x4000) != 0 )
            v72 = 1;
          v76 = _bittest((const signed __int32 *)(v74 + 40), 0xFu) || _bittest((const signed __int32 *)(v75 + 40), 0xFu);
          if ( !v72 || v76 )
          {
            v100 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
            if ( *((_WORD *)v100 + 50) != (_WORD)v77 || *((_QWORD *)v100 + 3) != v77 )
            {
              v101 = XDCOBJ::pSurfaceEff(v11);
              if ( *((_WORD *)v101 + 50) != (_WORD)v77 || *((_QWORD *)v101 + 3) != v77 )
              {
                if ( v102
                  && (unsigned int)dword_1C03263F8 > 5
                  && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
                {
                  LODWORD(v114) = v105;
                  LODWORD(v116[0]) = 2;
                  v116[1] = 0x1000000LL;
                  LODWORD(v115) = 80812;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (unsigned int)&dword_1C03263F8,
                    (unsigned int)&unk_1C02F2504,
                    v103,
                    v104,
                    (__int64)&v115,
                    (__int64)&v116[1],
                    (__int64)v116,
                    (__int64)&v114);
                }
                EngSetLastError(0x57u);
                return 0;
              }
            }
            goto LABEL_80;
          }
          TraceLoggingWriteUnsupportedGdiUsage(23LL, *(unsigned int *)(v40 + 36), v71);
          v11 = v115;
        }
        LODWORD(v77) = 0;
LABEL_80:
        v78 = *((_QWORD *)this + 9);
        v79 = v77;
        v80 = *(_QWORD *)(v78 + 48);
        if ( v80 && v78 == *(_QWORD *)(v80 + 2528) && _bittest((const signed __int32 *)(v80 + 40), 0x11u) )
        {
          v79 = *(_DWORD *)(v80 + 2560);
          LODWORD(v77) = *(_DWORD *)(v80 + 2564);
        }
        v81 = *(_DWORD *)v4 - *(_DWORD *)(*(_QWORD *)v11 + 8 * (*(_DWORD *)(*(_QWORD *)v11 + 40LL) & 1LL) + 1016) - *v34;
        *((_DWORD *)this + 44) = v81;
        v82 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)v11 + 8 * (*(_DWORD *)(*(_QWORD *)v11 + 40LL) & 1LL) + 1020)
            - *((_DWORD *)this + 47);
        v117[0] = v79 + v81;
        *((_DWORD *)this + 45) = v82;
        v83 = *((_QWORD *)this + 9);
        v117[1] = v77 + v82;
        v117[2] = v81 + v79 + *(_DWORD *)(v83 + 56);
        v117[3] = v82 + v77 + *(_DWORD *)(v83 + 60);
        ERECTL::operator*=(v117, (int *)v4);
        v84 = XDCOBJ::prgnEffRao(a2);
        v126 = 0LL;
        v127 = 0;
        v128 = 1;
        v129 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v124, v84, (struct ERECTL *)v117, 0);
        v85 = v125[0];
        *(_OWORD *)v117 = v125[0];
        if ( ERECTL::bEmpty((ERECTL *)v117) )
          return v13;
        v86 = BLTRECORD::pSurfMskOut(this);
        v87 = DWORD1(v125[0]);
        v88 = v125[0];
        if ( v86 )
        {
          v89 = *((_DWORD *)this + 48);
          if ( v89 < 0 )
            goto LABEL_110;
          v90 = *((_DWORD *)this + 49);
          if ( v90 < 0 )
            goto LABEL_110;
          v91 = *((_QWORD *)this + 10);
          v92 = *(_DWORD *)v4;
          if ( *(_DWORD *)(v91 + 56) - v89 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            goto LABEL_110;
          v93 = *((_DWORD *)this + 39);
          if ( *(_DWORD *)(v91 + 60) - v90 < *((_DWORD *)this + 41) - v93 )
            goto LABEL_110;
          *((_DWORD *)this + 48) = LODWORD(v125[0]) + v89 - v92;
          *((_DWORD *)this + 49) = v87 + v90 - v93;
        }
        *v34 = v88 - *((_DWORD *)this + 44);
        *((_DWORD *)this + 47) = v87 - *((_DWORD *)this + 45);
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v94 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v94]) & 0xE8) == 0
            || (v95 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v95 + 120) & 0x100) == 0 )
          {
            *(_OWORD *)&v116[1] = v85;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v94, (__m128i *)&v116[1]);
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)v115 + 36LL) & 1) != 0 )
        {
          v96 = *((_DWORD *)this + 44);
          v117[0] -= v96;
          v117[2] -= v96;
          v97 = *((_DWORD *)this + 45);
          v117[1] -= v97;
          v117[3] -= v97;
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v98 = *((_DWORD *)this + 54);
        v99 = *((_QWORD *)this + 8);
        if ( v98 != 52428 )
        {
          v109 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
          v110 = *((_QWORD *)this + 11);
          v111 = v109;
          v112 = BLTRECORD::pSurfMskOut(this);
          return ((unsigned int (__fastcall *)(__int64, __int64, unsigned __int64, _BYTE *, __int64, _OWORD *, char *, char *, __int64, char *, int))v111)(
                   (v99 + 24) & -(__int64)(v99 != 0),
                   (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
                   ((unsigned __int64)v112 + 24) & -(__int64)(v112 != 0LL),
                   v124,
                   v110,
                   v125,
                   (char *)this + 184,
                   (char *)this + 192,
                   v113,
                   (char *)this + 208,
                   v98);
        }
        if ( (*(_DWORD *)(v99 + 112) & 0x400) != 0 )
          v62 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816);
        else
          v62 = EngCopyBits;
        v106 = *((_QWORD *)this + 9);
        v67 = *((_QWORD *)this + 11);
        v107 = v106 + 24;
        v108 = v106 != 0;
        v66 = (__m128i *)v125;
        v64 = v107 & -(__int64)v108;
        v65 = (v99 + 24) & -(__int64)(v99 != 0);
        v63 = v124;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v62)(
                 v65,
                 v64,
                 v63,
                 v67,
                 v66,
                 (char *)this + 184);
      }
    }
    return 1LL;
  }
  return result;
}
