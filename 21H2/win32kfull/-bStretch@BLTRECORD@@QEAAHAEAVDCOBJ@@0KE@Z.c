/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C008CE54 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C008DA00 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C008E7D8 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C008F660 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1C028C0B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028DB08 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct ERECTL *v5; // r14
  _QWORD *v8; // rcx
  __int64 *v9; // r11
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v19; // eax
  char *v20; // rsi
  __int64 v21; // r8
  unsigned int v22; // r12d
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
  int v43; // r8d
  int v44; // r9d
  _DWORD *v45; // r9
  struct DCOBJ *v46; // r11
  unsigned int v47; // r10d
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct REGION *v54; // rax
  struct ECLIPOBJ *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdx
  _DWORD *v59; // rax
  BOOL (__stdcall *v60)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r14
  int v61; // ecx
  char *v62; // rbx
  int v63; // r8d
  bool v64; // cc
  __int64 v65; // r9
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // r11d
  __int64 v69; // r12
  __int16 v70; // cx
  __int64 v71; // r15
  __int64 v72; // rax
  struct SURFACE *v73; // rax
  char v74; // [rsp+70h] [rbp-90h]
  unsigned int v75; // [rsp+74h] [rbp-8Ch] BYREF
  int v76; // [rsp+78h] [rbp-88h] BYREF
  int v77; // [rsp+7Ch] [rbp-84h] BYREF
  __m128i v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+90h] [rbp-70h] BYREF
  int v80; // [rsp+94h] [rbp-6Ch] BYREF
  int v81; // [rsp+98h] [rbp-68h] BYREF
  int v82; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE v83[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v84[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v85; // [rsp+F0h] [rbp-10h]
  int v86; // [rsp+F8h] [rbp-8h]
  int v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+130h] [rbp+30h]

  v5 = (BLTRECORD *)((char *)this + 152);
  v75 = a4;
  v78.m128i_i64[0] = (__int64)a3;
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
    v78.m128i_i64[0] = 0LL;
    v78.m128i_i8[8] = 0;
    v78.m128i_i32[3] = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v78, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v78);
        return v16;
      }
      v15 = v75;
    }
    v19 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v19;
    v16 = BLTRECORD::bBitBlt(this, a2, a2, v15);
    goto LABEL_12;
  }
  v20 = 0LL;
  v21 = *(unsigned int *)(*(_QWORD *)a2 + 36LL);
  v22 = 1;
  v23 = *(_QWORD *)(v8[8] + 48LL);
  if ( (v21 & 0x200) == 0 || !v23 || (v24 = 1, (*(_DWORD *)(v23 + 40) & 0x20000) == 0) )
    v24 = 0;
  v25 = *v9;
  v26 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v74 = v24;
  v27 = *(_QWORD *)(*v9 + 48);
  if ( v26 != v27 && !v24 )
  {
    if ( (v21 & 0x4000) != 0 || (v28 = 0, _bittest((const signed __int32 *)(v25 + 36), 0xEu)) )
      v28 = 1;
    if ( _bittest((const signed __int32 *)(v26 + 40), 0xFu)
      || (v29 = 0, _bittest((const signed __int32 *)(v27 + 40), 0xFu)) )
    {
      v29 = 1;
    }
    if ( !v28 || v29 )
    {
      v39 = XDCOBJ::pSurfaceEff(a2);
      if ( *((_WORD *)v39 + 50) || *((_QWORD *)v39 + 3) )
      {
        v41 = XDCOBJ::pSurfaceEff(v40);
        if ( *((_WORD *)v41 + 50) || *((_QWORD *)v41 + 3) )
        {
          if ( v42
            && (unsigned int)dword_1C03263F8 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
          {
            v75 = 0;
            v76 = 1;
            v78.m128i_i64[0] = 0x1000000LL;
            v77 = 80812;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C03263F8,
              (unsigned int)&unk_1C02F2504,
              v43,
              v44,
              (__int64)&v77,
              (__int64)&v78,
              (__int64)&v76,
              (__int64)&v75);
          }
          goto LABEL_40;
        }
      }
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(22LL, *(unsigned int *)(v25 + 36), v21);
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
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v48 = *v45 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
      v49 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
      if ( (unsigned int)(v48 + 1) <= 2 && (unsigned int)(v49 + 1) <= 2 )
      {
        LODWORD(v20) = BLTRECORD::bBitBlt(this, a2, v46, v47, v48, v49);
        return (unsigned int)v20;
      }
    }
    v50 = *(_QWORD *)a2;
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)v46 + 496LL) )
    {
      LODWORD(v20) = 1;
      return (unsigned int)v20;
    }
    if ( (*(_DWORD *)(v50 + 36) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate(a2, v5);
      v50 = *(_QWORD *)a2;
    }
    v51 = *(_DWORD *)(v50 + 40) & 1LL;
    *(_DWORD *)v5 += *(_DWORD *)(v50 + 8 * v51 + 1016);
    *((_DWORD *)v5 + 2) += *(_DWORD *)(v50 + 8 * v51 + 1016);
    *((_DWORD *)v5 + 1) += *(_DWORD *)(v50 + 8 * v51 + 1020);
    *((_DWORD *)v5 + 3) += *(_DWORD *)(v50 + 8 * v51 + 1020);
    v52 = *(_QWORD *)v46;
    v53 = *(_DWORD *)(*(_QWORD *)v46 + 40LL) & 1LL;
    *v45 += *(_DWORD *)(*(_QWORD *)v46 + 8 * v53 + 1016);
    v45[2] += *(_DWORD *)(v52 + 8 * v53 + 1016);
    v45[1] += *(_DWORD *)(v52 + 8 * v53 + 1020);
    v45[3] += *(_DWORD *)(v52 + 8 * v53 + 1020);
    v54 = XDCOBJ::prgnEffRao((DC **)a2);
    v85 = 0LL;
    v86 = 0;
    v87 = 1;
    v88 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v83, v54, v5, 0);
    if ( ERECTL::bEmpty((ERECTL *)v84) )
      return v22;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((v75 & 0xE8) == 0 || (v56 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v56 + 120) & 0x100) == 0) )
    {
      v78 = v84[0];
      XDCOBJ::vAccumulateTight(a2, v55, &v78);
    }
    v57 = *((_QWORD *)this + 8);
    v58 = *((_QWORD *)this + 9);
    v59 = *(_DWORD **)(v58 + 48);
    if ( (*(_DWORD *)(v57 + 112) & 0x2000) != 0 )
      v60 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v23 + 3216);
    else
      v60 = EngStretchBltROP;
    if ( v74 )
    {
      v62 = (char *)this + 176;
LABEL_91:
      BLTRECORD::vMirror(this, (BLTRECORD *)((char *)this + 152));
      v66 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v67 = *(_QWORD *)a2;
      v68 = *((_DWORD *)this + 54);
      v69 = *((_QWORD *)this + 12);
      v70 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
      v71 = *(_QWORD *)a2 + 1192LL;
      v72 = v67 + 176;
      if ( v70 >= 0 )
        v66 = v72;
      v78.m128i_i64[0] = *((_QWORD *)this + 11);
      if ( v68 != 52428 )
      {
        v73 = BLTRECORD::pSurfMskOut(this);
        if ( v73 )
          v20 = (char *)v73 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, __int64, __int64, __int64, __int64, char *, char *, _DWORD, __int64, int))v60)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
               v20,
               v83,
               v78.m128i_i64[0],
               v66,
               v71,
               v65,
               v62,
               (char *)this + 192,
               a5,
               v69,
               v68);
    }
    if ( a5 == 4 && (*(_BYTE *)(v23 + 1792) & 0x10) == 0 )
      v60 = EngStretchBltROP;
    if ( *(_WORD *)(v58 + 100) == 1 && v59 && (v59[10] & 0x20000) != 0 )
    {
      v61 = v59[640];
      v62 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v61 )
        goto LABEL_85;
      v63 = v59[641];
      if ( *((_DWORD *)this + 45) < v63 || *((_DWORD *)this + 46) > *(_DWORD *)(v58 + 56) + v61 )
        goto LABEL_85;
      v64 = *((_DWORD *)this + 47) <= v63 + *(_DWORD *)(v58 + 60);
    }
    else
    {
      v62 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v58 + 56) )
        goto LABEL_85;
      v64 = *((_DWORD *)this + 47) <= *(_DWORD *)(v58 + 60);
    }
    if ( v64 )
    {
LABEL_86:
      if ( v57 == v58 && (unsigned int)bIntersect(v62, (char *)this + 152) )
        v60 = EngStretchBltROP;
      goto LABEL_91;
    }
LABEL_85:
    v60 = EngStretchBltROP;
    goto LABEL_86;
  }
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
  {
    v77 = *((_DWORD *)this + 47);
    v76 = *((_DWORD *)this + 46);
    v75 = *((_DWORD *)this + 45);
    v79 = *((_DWORD *)this + 44);
    v80 = *((_DWORD *)this + 51);
    v81 = *((_DWORD *)this + 50);
    v82 = *((_DWORD *)this + 49);
    v78.m128i_i32[0] = v38;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v36,
      (unsigned int)&unk_1C02F25B2,
      v37,
      v38,
      (__int64)&v78,
      (__int64)&v82,
      (__int64)&v81,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v75,
      (__int64)&v76,
      (__int64)&v77);
  }
LABEL_40:
  EngSetLastError(0x57u);
  return (unsigned int)v20;
}
