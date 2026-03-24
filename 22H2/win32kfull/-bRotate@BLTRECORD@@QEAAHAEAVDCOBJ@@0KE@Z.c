/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B248
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028D580 (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00AB8BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6B38 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00B8D30 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C015695C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     LongLongMult @ 0x1C016B088 (LongLongMult.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C028B120 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028B960 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028BBC4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028BE28 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028BEA4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028BF3C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028F970 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX v9; // ecx
  unsigned int v10; // esi
  struct _POINTFIX v11; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  ERECTL *v15; // r9
  unsigned int v16; // r14d
  FIX x; // ecx
  char *v18; // rsi
  struct _POINTFIX v19; // rcx
  _DWORD *v20; // r11
  struct _POINTFIX v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  __int64 y; // r13
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 v30; // rdx
  unsigned int v31; // r11d
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r10
  FIX v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r10
  ERECTL *v40; // r11
  struct _POINTFIX *v41; // r13
  __int64 v42; // rcx
  struct REGION *v43; // rax
  struct ECLIPOBJ *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r10
  __int64 v48; // r14
  __int64 v49; // rdx
  struct SURFACE *v50; // rax
  struct _POINTFIX v51; // r8
  struct _POINTFIX *v53; // [rsp+60h] [rbp-A0h] BYREF
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __m128i v57; // [rsp+78h] [rbp-88h] BYREF
  char v58[8]; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+94h] [rbp-6Ch]
  _BYTE v61[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v62[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+30h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v53 = this + 22;
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    ERECTL::vOrder(v15);
    v16 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = this[24].x;
      this[24].x = this[25].x;
      this[25].x = x;
    }
    v18 = 0LL;
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
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v21 = this[10];
        v22 = this[23].x - *v20;
        v23 = *(_DWORD *)(*(_QWORD *)&v21 + 56LL);
        v24 = this[23].y - this[22].y;
        v25 = this[24].x;
        y = (unsigned int)this[24].y;
        LODWORD(v56) = this[22].y;
        if ( v23 < v25
          || (v27 = *(_DWORD *)(*(_QWORD *)&v21 + 60LL), v27 < (unsigned int)y)
          || v23 - v25 < v22
          || v27 - (unsigned int)y < v24 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v21 + 96LL) != 1 )
            goto LABEL_9;
          if ( *(_WORD *)(*(_QWORD *)&v21 + 100LL) )
            goto LABEL_9;
          if ( v23 < v22 )
            goto LABEL_9;
          if ( v25 + 7 < v25 )
            goto LABEL_9;
          v28 = (v25 + 7) >> 3;
          v29 = abs32(*(_DWORD *)(*(_QWORD *)&v21 + 88LL));
          v30 = y * v29;
          if ( v30 > 0xFFFFFFFF )
            goto LABEL_9;
          v31 = v30 + v28;
          if ( (unsigned int)v30 + v28 < v28 )
            goto LABEL_9;
          v32 = *(_DWORD *)(*(_QWORD *)&v21 + 64LL);
          if ( v31 >= v32 )
            goto LABEL_9;
          v33 = (v32 - v31) / v29;
          if ( v24 > v33 )
            this[23].y = v56 + v33;
        }
      }
    }
    v34 = *(_QWORD *)a3;
    v35 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v36 = this[27].x;
      if ( v36 == 52428 || v36 == 43724 )
      {
        if ( *(_QWORD *)(v35 + 496) && *(_QWORD *)(v34 + 496) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)v58);
          ++v59;
          ++v60;
          if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)v58);
            v39 = *(_QWORD *)a2;
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
          ERECTL::bOffsetAdd(
            v40,
            (const struct _POINTL *)(*(_QWORD *)a3 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL)),
            0);
          ERECTL::bOffsetAdd(
            (ERECTL *)v58,
            (const struct _POINTL *)(*(_QWORD *)a2 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL)),
            0);
          v43 = XDCOBJ::prgnEffRao((DC **)a2);
          v63 = 0LL;
          v64 = 0LL;
          v65 = 0;
          v66 = 1;
          v67 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v61, v43, (struct ERECTL *)v58, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v62) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v57 = v62[0];
              XDCOBJ::vAccumulateTight(a2, v44, &v57);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            v45 = this[17].x - (__int64)v41->x;
            v46 = this[16].y - (__int64)this[15].y;
            v57.m128i_i64[0] = 0LL;
            v56 = 0LL;
            if ( (int)LongLongMult(v46, v45, &v57) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v41->x, &v56) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( v57.m128i_i64[0] != v56 )
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v48 = 0LL;
              v49 = *(_QWORD *)a2;
              if ( *(__int16 *)(*(_QWORD *)a2 + 178LL) >= 0 )
                v48 = *(_QWORD *)a2 + 176LL;
              if ( this[27].x != 52428 )
              {
                v50 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                if ( v50 )
                  v18 = (char *)v50 + 24;
              }
              v51 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v51 + 112LL) & 4) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))(v47 + 3248))(
                                       (*(_QWORD *)&v51 + 24LL) & -(__int64)(v51 != 0LL),
                                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                       v18,
                                       v61,
                                       *(_QWORD *)&this[11],
                                       v48,
                                       v49 + 1200,
                                       v41,
                                       v53,
                                       this + 24,
                                       a5);
              else
                return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))EngPlgBlt)(
                                       (*(_QWORD *)&v51 + 24LL) & -(__int64)(v51 != 0LL),
                                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                       v18,
                                       v61,
                                       *(_QWORD *)&this[11],
                                       v48,
                                       v49 + 1200,
                                       v41,
                                       v53,
                                       &this[24],
                                       a5);
            }
          }
        }
        return v16;
      }
      else
      {
        v57.m128i_i64[0] = 0LL;
        v57.m128i_i8[8] = 0;
        v57.m128i_i32[3] = 0;
        v53 = 0LL;
        v54 = 0;
        v55 = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v53,
                             (struct SURFMEM *)&v57,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v37 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v38 = *(_QWORD *)a2;
          *(_DWORD *)(v38 + 36) |= 0x10u;
          *(_QWORD *)(v38 + 1136) = 0LL;
        }
        else
        {
          v37 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v53);
        SURFMEM::~SURFMEM((SURFMEM *)&v57);
        return v37;
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
  v53 = 0LL;
  v54 = 0;
  v55 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v53, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v13 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v14 = *(_QWORD *)a2;
      *(_DWORD *)(v14 + 36) |= 0x10u;
      *(_QWORD *)(v14 + 1136) = 0LL;
      v10 = v13;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v53);
  return v10;
}
