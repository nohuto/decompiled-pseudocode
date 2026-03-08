/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058BC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008D3E0 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00F39C4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C02912E0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0291D14 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0291F78 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0291FF4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0292088 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     LongLongMult @ 0x1C0293DE4 (LongLongMult.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0295FEC (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct _POINTFIX *v9; // r15
  FIX v10; // ecx
  unsigned int v11; // esi
  struct _POINTFIX v12; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int x; // ecx
  char *v17; // rsi
  struct _POINTFIX v18; // rcx
  _DWORD *v19; // r10
  struct _POINTFIX v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 y; // r13
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned __int64 v29; // rdx
  unsigned int v30; // r11d
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  FIX v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // ebx
  ERECTL *v39; // r10
  __int64 v40; // rdx
  struct _POINTFIX *v41; // r13
  __int64 v42; // rcx
  struct REGION *v43; // rax
  struct ECLIPOBJ *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _POINTFIX v48; // r8
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r11
  __int64 v50; // rax
  __int64 v51; // r10
  struct _POINTFIX v52; // r12
  __int16 v53; // cx
  __int64 v54; // r14
  __int64 v55; // rax
  struct SURFACE *v56; // rax
  __m128i v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  char v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+7Ch] [rbp-84h]
  _BYTE v61[8]; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  _BYTE v64[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v65[4]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+120h] [rbp+20h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  v9 = this + 23;
  if ( (a4 & 0xD4) != 0 )
  {
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[21]);
    ERECTL::vOrder((ERECTL *)&this[23]);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = v9->x;
      v9->x = this[24].x;
      this[24].x = x;
    }
    v17 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( v9->x < 0 )
        goto LABEL_9;
      if ( this[23].y < 0 )
        goto LABEL_9;
      v18 = this[10];
      if ( this[24].x > *(_DWORD *)(*(_QWORD *)&v18 + 56LL) || this[24].y > *(_DWORD *)(*(_QWORD *)&v18 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v20 = this[10];
        v21 = this[22].x - *v19;
        v22 = *(_DWORD *)(*(_QWORD *)&v20 + 56LL);
        v23 = this[22].y - this[21].y;
        v24 = v9->x;
        v25 = *(_DWORD *)(*(_QWORD *)&v20 + 60LL);
        y = (unsigned int)this[23].y;
        LODWORD(v58) = this[21].y;
        if ( v22 < v24 || v25 < (unsigned int)y || v22 - v24 < v21 || v25 - (unsigned int)y < v23 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v20 + 96LL) != 1 )
            goto LABEL_9;
          if ( *(_WORD *)(*(_QWORD *)&v20 + 100LL) )
            goto LABEL_9;
          if ( v22 < v21 )
            goto LABEL_9;
          if ( v24 + 7 < v24 )
            goto LABEL_9;
          v27 = (v24 + 7) >> 3;
          v28 = abs32(*(_DWORD *)(*(_QWORD *)&v20 + 88LL));
          v29 = y * v28;
          if ( v29 > 0xFFFFFFFF )
            goto LABEL_9;
          v30 = v29 + v27;
          if ( (unsigned int)v29 + v27 < v27 )
            goto LABEL_9;
          v31 = *(_DWORD *)(*(_QWORD *)&v20 + 64LL);
          if ( v30 >= v31 )
            goto LABEL_9;
          v32 = (v31 - v30) / v28;
          if ( v23 > v32 )
            this[22].y = v58 + v32;
        }
      }
    }
    v33 = *(_QWORD *)a3;
    v34 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v35 = this[26].x;
      if ( v35 == 52428 || v35 == 43724 )
      {
        if ( !*(_QWORD *)(v34 + 496) || !*(_QWORD *)(v33 + 496) )
          return 1LL;
        BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)v61);
        ++v62;
        ++v63;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulate(a2, (struct ERECTL *)v61);
        v40 = *(_QWORD *)a2;
        v41 = this + 14;
        v42 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
        this[14].x += 16 * *(_DWORD *)(*(_QWORD *)a2 + 8 * v42 + 1016);
        this[14].y += 16 * *(_DWORD *)(v40 + 8 * v42 + 1020);
        this[15].x += 16 * *(_DWORD *)(v40 + 8 * v42 + 1016);
        this[15].y += 16 * *(_DWORD *)(v40 + 8 * v42 + 1020);
        this[16].x += 16 * *(_DWORD *)(v40 + 8 * v42 + 1016);
        this[16].y += 16 * *(_DWORD *)(v40 + 8 * v42 + 1020);
        this[17].x += 16 * *(_DWORD *)(v40 + 8 * v42 + 1016);
        this[17].y += 16 * *(_DWORD *)(v40 + 8 * v42 + 1020);
        ERECTL::bOffsetAdd(
          v39,
          (const struct _POINTL *)(*(_QWORD *)a3 + 8 * ((*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1) + 127LL)),
          0);
        ERECTL::bOffsetAdd(
          (ERECTL *)v61,
          (const struct _POINTL *)(*(_QWORD *)a2 + 8 * ((*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 127LL)),
          0);
        v43 = XDCOBJ::prgnEffRao((DC **)a2);
        v66 = 0LL;
        v67 = 0;
        v68 = 1;
        v69 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v64, v43, (struct ERECTL *)v61, 0);
        if ( ERECTL::bEmpty((ERECTL *)v65) )
          return 1LL;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
        {
          v57 = v65[0];
          XDCOBJ::vAccumulateTight(a2, v44, &v57);
        }
        v45 = *(_QWORD *)(*(_QWORD *)&this[8] + 48LL);
        BLTRECORD::vMirror((BLTRECORD *)this, this + 14);
        v46 = this[16].x - (__int64)v41->x;
        v47 = this[15].y - (__int64)this[14].y;
        v57.m128i_i64[0] = 0LL;
        v58 = 0LL;
        if ( (int)LongLongMult(v47, v46, &v57) < 0
          || (int)LongLongMult(this[16].y - (__int64)this[14].y, this[15].x - (__int64)v41->x, &v58) < 0 )
        {
          goto LABEL_9;
        }
        if ( v57.m128i_i64[0] == v58 )
        {
          return 1LL;
        }
        else
        {
          ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
          v48 = this[8];
          if ( (*(_DWORD *)(*(_QWORD *)&v48 + 112LL) & 4) != 0 )
            v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v45 + 3224);
          else
            v49 = EngPlgBlt;
          v50 = *(_QWORD *)a2;
          v51 = 0LL;
          v52 = this[11];
          v53 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
          v54 = *(_QWORD *)a2 + 1192LL;
          v55 = v50 + 176;
          if ( v53 >= 0 )
            v51 = v55;
          if ( this[26].x != 52428 )
          {
            v56 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
            if ( v56 )
              v17 = (char *)v56 + 24;
          }
          return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v49)(
                   (*(_QWORD *)&v48 + 24LL) & -(__int64)(v48 != 0LL),
                   (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                   v17,
                   v64,
                   v52,
                   v51,
                   v54,
                   &this[14],
                   &this[21],
                   &this[23],
                   a5);
        }
      }
      else
      {
        v58 = 0LL;
        v59 = 0;
        v60 = 0;
        v57.m128i_i64[0] = 0LL;
        v57.m128i_i8[8] = 0;
        v57.m128i_i32[3] = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v57,
                             (struct SURFMEM *)&v58,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[18]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 14)) )
        {
          v36 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v37 = *(_QWORD *)a2;
          v38 = v36;
          *(_DWORD *)(v37 + 36) |= 0x10u;
          *(_QWORD *)(v37 + 1128) = 0LL;
        }
        else
        {
          v38 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v57);
        SURFMEM::~SURFMEM((SURFMEM *)&v58);
        return v38;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[23]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
  {
    v10 = v9->x;
    v9->x = this[24].x;
    this[24].x = v10;
  }
  v11 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( v9->x < 0 )
      goto LABEL_9;
    if ( this[23].y < 0 )
      goto LABEL_9;
    v12 = this[10];
    if ( this[24].x > *(_DWORD *)(*(_QWORD *)&v12 + 56LL) || this[24].y > *(_DWORD *)(*(_QWORD *)&v12 + 60LL) )
      goto LABEL_9;
  }
  v57.m128i_i64[0] = 0LL;
  v57.m128i_i8[8] = 0;
  v57.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v57, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[18]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 14) )
    {
      v14 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v15 = *(_QWORD *)a2;
      *(_DWORD *)(v15 + 36) |= 0x10u;
      *(_QWORD *)(v15 + 1128) = 0LL;
      v11 = v14;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v57);
  return v11;
}
