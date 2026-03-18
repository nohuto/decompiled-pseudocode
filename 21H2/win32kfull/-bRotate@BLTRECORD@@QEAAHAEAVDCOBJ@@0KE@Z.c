/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C008DA00 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     LongLongMult @ 0x1C015DFD4 (LongLongMult.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C02893A0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0289C18 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0289E9C (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028A100 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028A17C (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028A214 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028DC9C (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX v9; // ecx
  unsigned int v10; // edi
  struct _POINTFIX v11; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rax
  struct _POINTFIX *v15; // r13
  ERECTL *v16; // r9
  unsigned int v17; // r14d
  FIX x; // ecx
  struct _POINTFIX v19; // rcx
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
  unsigned int v36; // ebx
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // r10d
  struct _POINTFIX *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct REGION *v47; // rax
  struct ECLIPOBJ *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r10
  struct _POINTFIX v52; // r8
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r14
  __int64 v54; // rax
  __int64 v55; // r11
  __int16 v56; // cx
  __int64 v57; // rsi
  __int64 v58; // rax
  bool v59; // zf
  struct SURFACE *v60; // rax
  char *v61; // r10
  __m128i v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  char v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+7Ch] [rbp-84h]
  int v66; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+84h] [rbp-7Ch]
  int v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+8Ch] [rbp-74h]
  _BYTE v70[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v71[4]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+20h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v15 = this + 22;
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    ERECTL::vOrder(v16);
    v17 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = this[24].x;
      this[24].x = this[25].x;
      this[25].x = x;
    }
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( this[24].x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v19 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v19 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v19 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 && BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      v20 = this[10];
      v21 = this[23].x - v15->x;
      v22 = *(_DWORD *)(*(_QWORD *)&v20 + 56LL);
      v23 = this[23].y - this[22].y;
      v24 = this[24].x;
      v25 = *(_DWORD *)(*(_QWORD *)&v20 + 60LL);
      y = (unsigned int)this[24].y;
      LODWORD(v63) = this[22].y;
      if ( v22 >= v24 && v25 >= (unsigned int)y && v22 - v24 >= v21 && v25 - (unsigned int)y >= v23 )
      {
        v15 = this + 22;
      }
      else
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
        v15 = this + 22;
        v32 = (v31 - v30) / v28;
        if ( v23 > v32 )
          this[23].y = v63 + v32;
      }
    }
    v33 = *(_QWORD *)a3;
    v34 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v35 = this[27].x;
      if ( v35 == 52428 || v35 == 43724 )
      {
        if ( *(_QWORD *)(v34 + 496) && *(_QWORD *)(v33 + 496) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v66);
          v38 = v69 + 1;
          v39 = *(_QWORD *)a2;
          v40 = v68 + 1;
          ++v69;
          ++v68;
          if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v66);
            v38 = v69;
            v39 = *(_QWORD *)a2;
            v40 = v68;
          }
          v41 = this + 15;
          v42 = *(_DWORD *)(v39 + 40) & 1LL;
          this[15].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[15].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[16].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[16].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[17].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[17].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[18].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[18].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          v43 = *(_QWORD *)a3;
          v44 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL;
          v15->x += *(_DWORD *)(*(_QWORD *)a3 + 8 * v44 + 1016);
          v15[1].x += *(_DWORD *)(v43 + 8 * v44 + 1016);
          v15->y += *(_DWORD *)(v43 + 8 * v44 + 1020);
          v15[1].y += *(_DWORD *)(v43 + 8 * v44 + 1020);
          v45 = *(_QWORD *)a2;
          v46 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL;
          v66 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v46 + 1016);
          v68 = *(_DWORD *)(v45 + 8 * v46 + 1016) + v40;
          v67 += *(_DWORD *)(v45 + 8 * v46 + 1020);
          v69 = *(_DWORD *)(v45 + 8 * v46 + 1020) + v38;
          v47 = XDCOBJ::prgnEffRao((DC **)a2);
          v72 = 0LL;
          v73 = 0;
          v74 = 1;
          v75 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v70, v47, (struct ERECTL *)&v66, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v71) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v62 = v71[0];
              XDCOBJ::vAccumulateTight(a2, v48, &v62);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            v49 = this[17].x - (__int64)v41->x;
            v50 = this[16].y - (__int64)this[15].y;
            v62.m128i_i64[0] = 0LL;
            v63 = 0LL;
            if ( (int)LongLongMult(v50, v49, &v62) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v41->x, &v63) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( v62.m128i_i64[0] != v63 )
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v52 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v52 + 112LL) & 4) != 0 )
                v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v51 + 3224);
              else
                v53 = EngPlgBlt;
              v54 = *(_QWORD *)a2;
              v55 = 0LL;
              v56 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
              v57 = *(_QWORD *)a2 + 1192LL;
              v58 = v54 + 176;
              if ( v56 >= 0 )
                v55 = v58;
              v59 = this[27].x == 52428;
              *(struct _POINTFIX *)v62.m128i_i8 = this[11];
              if ( v59 || (v60 = BLTRECORD::pSurfMskOut((BLTRECORD *)this), v61 = (char *)v60 + 24, !v60) )
                v61 = 0LL;
              return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, __int64, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v53)(
                       (*(_QWORD *)&v52 + 24LL) & -(__int64)(v52 != 0LL),
                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                       v61,
                       v70,
                       v62.m128i_i64[0],
                       v55,
                       v57,
                       &this[15],
                       v15,
                       &this[24],
                       a5);
            }
          }
        }
        return v17;
      }
      else
      {
        v63 = 0LL;
        v64 = 0;
        v65 = 0;
        v62.m128i_i64[0] = 0LL;
        v62.m128i_i8[8] = 0;
        v62.m128i_i32[3] = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v62,
                             (struct SURFMEM *)&v63,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v36 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v37 = *(_QWORD *)a2;
          *(_DWORD *)(v37 + 36) |= 0x10u;
          *(_QWORD *)(v37 + 1128) = 0LL;
        }
        else
        {
          v36 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v62);
        SURFMEM::~SURFMEM((SURFMEM *)&v63);
        return v36;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
  {
    v9 = this[24].x;
    this[24].x = this[25].x;
    this[25].x = v9;
  }
  v10 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( this[24].x < 0 )
      goto LABEL_9;
    if ( this[24].y < 0 )
      goto LABEL_9;
    v11 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v11 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v11 + 60LL) )
      goto LABEL_9;
  }
  v62.m128i_i64[0] = 0LL;
  v62.m128i_i8[8] = 0;
  v62.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v62, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v13 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v14 = *(_QWORD *)a2;
      *(_DWORD *)(v14 + 36) |= 0x10u;
      *(_QWORD *)(v14 + 1128) = 0LL;
      v10 = v13;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v62);
  return v10;
}
