/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00912D0
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058BC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008D3E0 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0091AA8 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0091AD0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00F39C4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027773C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1C0294064 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0295BEC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0295E50 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, DC **a2, struct DCOBJ *a3, unsigned int a4, unsigned __int8 a5)
{
  _QWORD *v8; // rcx
  __int64 *v9; // r11
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r10
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rbx
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r13
  char v26; // dl
  char v27; // al
  int *v28; // r13
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  char *v33; // r12
  int v34; // ecx
  int v35; // r8d
  __int32 v36; // r9d
  struct SURFACE *v37; // rax
  XDCOBJ *v38; // r11
  struct SURFACE *v39; // rax
  char v40; // dl
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  _DWORD *v44; // r9
  struct ERECTL *v45; // r10
  struct DCOBJ *v46; // r11
  int v47; // edx
  int v48; // ecx
  DC *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct REGION *v53; // rax
  struct ERECTL *v54; // r10
  struct ECLIPOBJ *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r11
  __int64 v58; // rdx
  _DWORD *v59; // rax
  BOOL (__stdcall *v60)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r14
  int v61; // r10d
  int v62; // ecx
  char *v63; // rbx
  int v64; // r8d
  struct ERECTL *v65; // r12
  _QWORD *v66; // r9
  char *v67; // r8
  int v68; // r11d
  DC *v69; // rax
  __int16 v70; // cx
  __int64 v71; // r15
  char *v72; // rax
  char v73; // [rsp+70h] [rbp-90h]
  __m128i v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+88h] [rbp-78h] BYREF
  int v76; // [rsp+8Ch] [rbp-74h] BYREF
  int v77; // [rsp+90h] [rbp-70h] BYREF
  int v78; // [rsp+94h] [rbp-6Ch] BYREF
  int v79; // [rsp+98h] [rbp-68h] BYREF
  int v80; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v82[4]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v83[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+40h]

  v74.m128i_i64[0] = (__int64)a3;
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 144));
  if ( (v10 & 0xD4) == 0 )
  {
    BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 23));
    v15 = 0;
    if ( BLTRECORD::pSurfMskOut(v11) )
    {
      if ( *v12 < 0
        || *(int *)(v13 + 188) < 0
        || (v16 = *(_QWORD *)(v13 + 80), *((_DWORD *)this + 48) > *(_DWORD *)(v16 + 56))
        || *((_DWORD *)this + 49) > *(_DWORD *)(v16 + 60) )
      {
LABEL_7:
        EngSetLastError(0x57u);
        return 0LL;
      }
    }
    v74.m128i_i64[0] = 0LL;
    v74.m128i_i8[8] = 0;
    v74.m128i_i32[3] = 0;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v74, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v74);
        return v15;
      }
      v14 = (_DWORD *)((char *)this + 144);
    }
    v18 = *((_DWORD *)this + 38) + *((_DWORD *)this + 42) - *v14;
    *((_DWORD *)this + 45) = *((_DWORD *)this + 39) + *((_DWORD *)this + 43) - *((_DWORD *)this + 37);
    *((_DWORD *)this + 44) = v18;
    v15 = BLTRECORD::bBitBlt(this, a2, (struct DCOBJ *)a2, a4);
    goto LABEL_12;
  }
  v19 = 0LL;
  v20 = *((unsigned int *)*a2 + 9);
  v21 = *(_QWORD *)(v8[8] + 48LL);
  if ( (v20 & 0x200) == 0 || !v21 || (v22 = 1, (*(_DWORD *)(v21 + 40) & 0x20000) == 0) )
    v22 = 0;
  v23 = *v9;
  v24 = *((_QWORD *)*a2 + 6);
  v73 = v22;
  v25 = *(_QWORD *)(*v9 + 48);
  if ( v24 != v25 && !v22 )
  {
    if ( (v20 & 0x4000) != 0 || (v26 = 0, _bittest((const signed __int32 *)(v23 + 36), 0xEu)) )
      v26 = 1;
    if ( _bittest((const signed __int32 *)(v24 + 40), 0xFu)
      || (v27 = 0, _bittest((const signed __int32 *)(v25 + 40), 0xFu)) )
    {
      v27 = 1;
    }
    if ( !v26 || v27 )
    {
      v37 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
      if ( *((_WORD *)v37 + 50) || *((_QWORD *)v37 + 3) )
      {
        v39 = XDCOBJ::pSurfaceEff(v38);
        if ( *((_WORD *)v39 + 50) || *((_QWORD *)v39 + 3) )
        {
          if ( v40
            && (unsigned int)dword_1C0357098 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
          {
            v75 = 0;
            v76 = 1;
            v74.m128i_i64[0] = 0x1000000LL;
            v77 = 80812;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v41,
              (unsigned int)&unk_1C03200B1,
              v42,
              v43,
              (__int64)&v77,
              (__int64)&v74,
              (__int64)&v76,
              (__int64)&v75);
          }
          goto LABEL_7;
        }
      }
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(22LL, *(unsigned int *)(v23 + 36), v20);
    }
  }
  v28 = (int *)((char *)this + 184);
  v29 = *((_DWORD *)this + 46);
  v30 = *((_DWORD *)this + 48);
  if ( v29 > v30 )
  {
    *v28 = v30 + 1;
    *((_DWORD *)this + 48) = v29 + 1;
  }
  v31 = *((_DWORD *)this + 47);
  v32 = *((_DWORD *)this + 49);
  if ( v31 > v32 )
  {
    *((_DWORD *)this + 47) = v32 + 1;
    *((_DWORD *)this + 49) = v31 + 1;
  }
  v33 = (char *)this + 80;
  if ( (*((_DWORD *)this + 53) & 0x10000) != 0
    && *(_QWORD *)v33
    && (*v28 < 0
     || *((int *)this + 47) < 0
     || *((_DWORD *)this + 48) > *(_DWORD *)(*(_QWORD *)v33 + 56LL)
     || *((_DWORD *)this + 49) > *(_DWORD *)(*(_QWORD *)v33 + 60LL)) )
  {
    if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000000LL) )
    {
      v77 = *((_DWORD *)this + 45);
      v76 = *((_DWORD *)this + 44);
      v75 = *((_DWORD *)this + 43);
      v78 = *((_DWORD *)this + 42);
      v79 = *((_DWORD *)this + 49);
      v80 = *((_DWORD *)this + 48);
      LODWORD(v81) = *((_DWORD *)this + 47);
      v74.m128i_i32[0] = v36;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v34,
        (unsigned int)&unk_1C032015F,
        v35,
        v36,
        (__int64)&v74,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v75,
        (__int64)&v76,
        (__int64)&v77);
    }
    goto LABEL_7;
  }
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 168));
  if ( a5 != 4
    && *(_DWORD *)(*((_QWORD *)*a2 + 122) + 208LL) != 2
    && !BLTRECORD::pSurfMskOut(this)
    && (*((_DWORD *)this + 53) & 0x18) == 0 )
  {
    v47 = *v44 + *((_DWORD *)this + 38) - *((_DWORD *)this + 44) - *(_DWORD *)v45;
    v48 = *((_DWORD *)this + 39) + *((_DWORD *)this + 43) - *((_DWORD *)this + 45) - *((_DWORD *)this + 37);
    if ( (unsigned int)(v47 + 1) <= 2 && (unsigned int)(v48 + 1) <= 2 )
      return BLTRECORD::bBitBlt(this, (struct DCOBJ *)a2, v46, a4, v47, v48);
  }
  if ( !*((_QWORD *)*a2 + 62) || !*(_QWORD *)(*(_QWORD *)v46 + 496LL) )
    return 1LL;
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)a2, v45);
  v49 = *a2;
  v50 = *((_DWORD *)*a2 + 10) & 1LL;
  *(_DWORD *)v45 += *((_DWORD *)*a2 + 2 * v50 + 254);
  *((_DWORD *)v45 + 2) += *((_DWORD *)v49 + 2 * v50 + 254);
  *((_DWORD *)v45 + 1) += *((_DWORD *)v49 + 2 * v50 + 255);
  *((_DWORD *)v45 + 3) += *((_DWORD *)v49 + 2 * v50 + 255);
  v51 = *(_QWORD *)v46;
  v52 = *(_DWORD *)(*(_QWORD *)v46 + 40LL) & 1LL;
  *v44 += *(_DWORD *)(*(_QWORD *)v46 + 8 * v52 + 1016);
  v44[2] += *(_DWORD *)(v51 + 8 * v52 + 1016);
  v44[1] += *(_DWORD *)(v51 + 8 * v52 + 1020);
  v44[3] += *(_DWORD *)(v51 + 8 * v52 + 1020);
  v53 = XDCOBJ::prgnEffRao(a2);
  v84 = 0LL;
  v85 = 0;
  v86 = 1;
  v87 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v82, v53, v54, 0);
  if ( ERECTL::bEmpty((ERECTL *)v83) )
    return 1LL;
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0
    && ((a4 & 0xE8) == 0 || (v56 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v56 + 120) & 0x100) == 0) )
  {
    v74 = v83[0];
    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v55, &v74);
  }
  v57 = *((_QWORD *)this + 8);
  v58 = *((_QWORD *)this + 9);
  v59 = *(_DWORD **)(v58 + 48);
  if ( (*(_DWORD *)(v57 + 112) & 0x2000) != 0 )
    v60 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v21 + 3216);
  else
    v60 = EngStretchBltROP;
  if ( !v73 )
  {
    if ( a5 == 4 && (*(_BYTE *)(v21 + 1792) & 0x10) == 0 )
      v60 = EngStretchBltROP;
    v74.m128i_i64[0] = (__int64)this + 80;
    v61 = 0;
    if ( *(_WORD *)(v58 + 100) == 1 && (v74.m128i_i64[0] = (__int64)this + 80, v59) && (v59[10] & 0x20000) != 0 )
    {
      v62 = v59[640];
      v63 = (char *)this + 168;
      if ( *((_DWORD *)this + 42) < v62
        || (v64 = v59[641], *((_DWORD *)this + 43) < v64)
        || *((_DWORD *)this + 44) > *(_DWORD *)(v58 + 56) + v62
        || *((_DWORD *)this + 45) > v64 + *(_DWORD *)(v58 + 60) )
      {
        v61 = 1;
      }
      v74.m128i_i64[0] = (__int64)this + 80;
      if ( !v61 )
        goto LABEL_88;
    }
    else
    {
      v63 = (char *)this + 168;
      if ( *((int *)this + 42) >= 0
        && *((int *)this + 43) >= 0
        && *((_DWORD *)this + 44) <= *(_DWORD *)(v58 + 56)
        && *((_DWORD *)this + 45) <= *(_DWORD *)(v58 + 60) )
      {
LABEL_88:
        v65 = (BLTRECORD *)((char *)this + 144);
        if ( v57 == v58 && (unsigned int)bIntersect(v63, (char *)this + 144) )
          v60 = EngStretchBltROP;
        goto LABEL_93;
      }
    }
    v60 = EngStretchBltROP;
    goto LABEL_88;
  }
  v63 = (char *)this + 168;
  v65 = (BLTRECORD *)((char *)this + 144);
LABEL_93:
  BLTRECORD::vMirror(this, v65);
  v67 = 0LL;
  ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
  v68 = *((_DWORD *)this + 52);
  v74.m128i_i64[0] = *((_QWORD *)this + 12);
  v69 = *a2;
  v70 = *((_WORD *)*a2 + 89);
  v71 = (__int64)*a2 + 1192;
  v72 = (char *)v69 + 176;
  if ( v70 >= 0 )
    v67 = v72;
  v81 = *((_QWORD *)this + 11);
  if ( v68 != 52428 && (*((_DWORD *)this + 53) & 0x10000) != 0 && *v66 )
    v19 = *v66 + 24LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, char *, __int64, struct ERECTL *, char *, char *, _DWORD, __int64, int))v60)(
           (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
           (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
           v19,
           v82,
           v81,
           v67,
           v71,
           v65,
           v63,
           (char *)this + 184,
           a5,
           v74.m128i_i64[0],
           v68);
}
