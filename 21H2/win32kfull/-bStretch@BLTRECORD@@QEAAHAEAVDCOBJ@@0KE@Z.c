/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B889C
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028DBB0 (GrePlgBlt.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0030648 (_tlgKeywordOn.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00ABABC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00B9048 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00B9090 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00B90AC (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C012262C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1C028E414 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028FE10 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, DC **a2, struct DCOBJ *a3, int a4, unsigned __int8 a5)
{
  struct ERECTL *v5; // r15
  _QWORD *v8; // rcx
  __int64 *v9; // r11
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  char v15; // r10
  unsigned int v16; // r14d
  __int64 v17; // rcx
  int v19; // eax
  char *v20; // r14
  unsigned int v21; // r12d
  __int64 v22; // r8
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r13
  char v28; // dl
  char v29; // al
  int *v30; // r13
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // r8d
  __int32 v38; // r9d
  struct SURFACE *v39; // rax
  XDCOBJ *v40; // r11
  struct SURFACE *v41; // rax
  char v42; // dl
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v46; // r9
  struct DCOBJ *v47; // r11
  unsigned int v48; // r10d
  int v49; // ecx
  int v50; // edx
  DC *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct REGION *v55; // rax
  struct ECLIPOBJ *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r10
  __int64 v59; // rdx
  _DWORD *v60; // rax
  BOOL (__stdcall *v61)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  int v62; // ecx
  char *v63; // r8
  int v64; // r9d
  bool v65; // cc
  struct ERECTL *v66; // rbx
  __int64 v67; // r8
  DC *v68; // r11
  int v69; // r12d
  struct SURFACE *v70; // rax
  char v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+7Ch] [rbp-84h] BYREF
  __m128i v75; // [rsp+80h] [rbp-80h] BYREF
  int v76; // [rsp+90h] [rbp-70h] BYREF
  int v77; // [rsp+94h] [rbp-6Ch] BYREF
  int v78; // [rsp+98h] [rbp-68h] BYREF
  int v79; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE v80[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v81[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+30h]

  v5 = (BLTRECORD *)((char *)this + 152);
  v72 = a4;
  v75.m128i_i64[0] = (__int64)a3;
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) == 0 )
  {
    BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
    v16 = 0;
    if ( BLTRECORD::pSurfMskOut(v11) )
    {
      if ( *v12 < 0
        || *(int *)(v13 + 196) < 0
        || (v17 = *(_QWORD *)(v13 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v17 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v17 + 60) )
      {
        EngSetLastError(0x57u);
        return 0LL;
      }
    }
    v75.m128i_i64[0] = 0LL;
    v75.m128i_i8[8] = 0;
    v75.m128i_i32[3] = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v75, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v75);
        return v16;
      }
      v15 = v72;
    }
    v19 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v19;
    v16 = BLTRECORD::bBitBlt(this, a2, (struct DCOBJ *)a2, v15);
    goto LABEL_12;
  }
  v20 = 0LL;
  v21 = 1;
  v22 = *((unsigned int *)*a2 + 9);
  v23 = *(_QWORD *)(v8[8] + 48LL);
  if ( (v22 & 0x200) == 0 || !v23 || (v24 = 1, (*(_DWORD *)(v23 + 40) & 0x20000) == 0) )
    v24 = 0;
  v25 = *v9;
  v26 = *((_QWORD *)*a2 + 6);
  v71 = v24;
  v27 = *(_QWORD *)(*v9 + 48);
  if ( v26 != v27 && !v24 )
  {
    if ( (v22 & 0x4000) != 0 || (v28 = 0, (*(_DWORD *)(v25 + 36) & 0x4000) != 0) )
      v28 = 1;
    if ( (*(_DWORD *)(v26 + 40) & 0x8000) != 0 || (v29 = 0, (*(_DWORD *)(v27 + 40) & 0x8000) != 0) )
      v29 = 1;
    if ( !v28 || v29 )
    {
      v39 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
      if ( *((_WORD *)v39 + 50) || *((_QWORD *)v39 + 3) )
      {
        v41 = XDCOBJ::pSurfaceEff(v40);
        if ( *((_WORD *)v41 + 50) || *((_QWORD *)v41 + 3) )
        {
          if ( v42 && (unsigned int)dword_1C032B3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3D8, 0x400000000000LL) )
          {
            v72 = 0;
            v73 = 1;
            v75.m128i_i64[0] = 0x1000000LL;
            v74 = 80812;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v43,
              (int)&unk_1C02F50FA,
              v44,
              v45,
              (__int64)&v74,
              (__int64)&v75,
              (__int64)&v73,
              (__int64)&v72);
          }
          goto LABEL_40;
        }
      }
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(22LL, *(unsigned int *)(v25 + 36), v22, 0LL, 0LL);
    }
  }
  v30 = (int *)((char *)this + 192);
  v31 = *((_DWORD *)this + 48);
  v32 = *((_DWORD *)this + 50);
  if ( v31 > v32 )
  {
    *v30 = v32 + 1;
    *((_DWORD *)this + 50) = v31 + 1;
  }
  v33 = *((_DWORD *)this + 49);
  v34 = *((_DWORD *)this + 51);
  if ( v33 > v34 )
  {
    *((_DWORD *)this + 49) = v34 + 1;
    *((_DWORD *)this + 51) = v33 + 1;
  }
  if ( !BLTRECORD::pSurfMskOut(this)
    || *v30 >= 0
    && *((int *)this + 49) >= 0
    && (v35 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) <= *(_DWORD *)(v35 + 56))
    && *((_DWORD *)this + 51) <= *(_DWORD *)(v35 + 60) )
  {
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*((_QWORD *)*a2 + 122) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v49 = *v46 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
      if ( (unsigned int)(v49 + 1) <= 2 )
      {
        v50 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v50 + 1) <= 2 )
        {
          LODWORD(v20) = BLTRECORD::bBitBlt(this, (struct DCOBJ *)a2, v47, v48, v49, v50);
          return (unsigned int)v20;
        }
      }
    }
    v51 = *a2;
    if ( !*((_QWORD *)*a2 + 62) || !*(_QWORD *)(*(_QWORD *)v47 + 496LL) )
    {
      LODWORD(v20) = 1;
      return (unsigned int)v20;
    }
    if ( (*((_DWORD *)v51 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)a2, v5);
      v51 = *a2;
    }
    v52 = *((_DWORD *)v51 + 10) & 1LL;
    *(_DWORD *)v5 += *((_DWORD *)v51 + 2 * v52 + 254);
    *((_DWORD *)v5 + 2) += *((_DWORD *)v51 + 2 * v52 + 254);
    *((_DWORD *)v5 + 1) += *((_DWORD *)v51 + 2 * v52 + 255);
    *((_DWORD *)v5 + 3) += *((_DWORD *)v51 + 2 * v52 + 255);
    v53 = *(_QWORD *)v47;
    v54 = *(_DWORD *)(*(_QWORD *)v47 + 40LL) & 1LL;
    *v46 += *(_DWORD *)(*(_QWORD *)v47 + 8 * v54 + 1016);
    v46[2] += *(_DWORD *)(v53 + 8 * v54 + 1016);
    v46[1] += *(_DWORD *)(v53 + 8 * v54 + 1020);
    v46[3] += *(_DWORD *)(v53 + 8 * v54 + 1020);
    v55 = XDCOBJ::prgnEffRao(a2);
    v82 = 0LL;
    v83 = 0LL;
    v84 = 0;
    v85 = 1;
    v86 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v80, v55, v5, 0);
    if ( ERECTL::bEmpty((ERECTL *)v81) )
      return v21;
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0
      && ((v72 & 0xE8) == 0 || (v57 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v57 + 120) & 0x100) == 0) )
    {
      v75 = v81[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v56, &v75);
    }
    v58 = *((_QWORD *)this + 8);
    v59 = *((_QWORD *)this + 9);
    v60 = *(_DWORD **)(v59 + 48);
    if ( (*(_DWORD *)(v58 + 112) & 0x2000) != 0 )
      v61 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v23 + 3240);
    else
      v61 = EngStretchBltROP;
    if ( v71 )
    {
      v66 = (BLTRECORD *)((char *)this + 152);
LABEL_91:
      BLTRECORD::vMirror(this, v66);
      v67 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v68 = *a2;
      v69 = *((_DWORD *)this + 54);
      if ( *((__int16 *)*a2 + 89) >= 0 )
        v67 = (__int64)*a2 + 176;
      if ( v69 != 52428 )
      {
        v70 = BLTRECORD::pSurfMskOut(this);
        if ( v70 )
          v20 = (char *)v70 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, _QWORD, char *, _BYTE *, _QWORD, __int64, char *, char *, char *, char *, _DWORD, _QWORD, int))v61)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64),
               v20,
               v80,
               *((_QWORD *)this + 11),
               v67,
               (char *)v68 + 1200,
               (char *)this + 152,
               (char *)this + 176,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v69);
    }
    if ( a5 == 4 && (*(_BYTE *)(v23 + 1824) & 0x10) == 0 )
      v61 = EngStretchBltROP;
    if ( *(_WORD *)(v59 + 100) == 1 && v60 && (v60[10] & 0x20000) != 0 )
    {
      v62 = v60[646];
      v63 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v62 )
        goto LABEL_85;
      v64 = v60[647];
      if ( *((_DWORD *)this + 45) < v64 || *((_DWORD *)this + 46) > *(_DWORD *)(v59 + 56) + v62 )
        goto LABEL_85;
      v65 = *((_DWORD *)this + 47) <= v64 + *(_DWORD *)(v59 + 60);
    }
    else
    {
      v63 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v59 + 56) )
        goto LABEL_85;
      v65 = *((_DWORD *)this + 47) <= *(_DWORD *)(v59 + 60);
    }
    if ( v65 )
    {
LABEL_86:
      v66 = (BLTRECORD *)((char *)this + 152);
      if ( v58 == v59 && (unsigned int)bIntersect(v63, (char *)this + 152) )
        v61 = EngStretchBltROP;
      goto LABEL_91;
    }
LABEL_85:
    v61 = EngStretchBltROP;
    goto LABEL_86;
  }
  if ( (unsigned int)dword_1C032B3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3D8, 0x200000000000LL) )
  {
    v74 = *((_DWORD *)this + 47);
    v73 = *((_DWORD *)this + 46);
    v72 = *((_DWORD *)this + 45);
    v76 = *((_DWORD *)this + 44);
    v77 = *((_DWORD *)this + 51);
    v78 = *((_DWORD *)this + 50);
    v79 = *((_DWORD *)this + 49);
    v75.m128i_i32[0] = v38;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v36,
      (unsigned int)&unk_1C02F513D,
      v37,
      v38,
      (__int64)&v75,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v72,
      (__int64)&v73,
      (__int64)&v74);
  }
LABEL_40:
  EngSetLastError(0x57u);
  return (unsigned int)v20;
}
