/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C002CA18 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0043168 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreGradientFill @ 0x1C0087BF0 (GreGradientFill.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0088DC0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiSetPixel @ 0x1C012EFA0 (NtGdiSetPixel.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0137FE4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0138E34 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0139380 (NtGdiFastPolyPolyline.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     NtGdiUpdateColors @ 0x1C02B6B20 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B8670 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  _DWORD *v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  LONG v7; // r9d
  int v8; // ecx
  int v9; // r8d
  LONG v10; // r10d
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i v14; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(_DWORD **)this;
  v5 = *a3;
  v14 = v5;
  v6 = v3[10] & 1;
  v7 = _mm_cvtsi128_si32(v5) - v3[2 * v6 + 254];
  v14.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - v3[2 * v6 + 254];
  v14.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - v3[2 * v6 + 255];
  v14.m128i_i32[1] = v9;
  v14.m128i_i32[3] = v5.m128i_i32[3] - v3[2 * v6 + 255];
  if ( (v3[9] & 0x40) != 0 )
  {
    v10 = v3[270];
    if ( v10 == v3[272] || v3[271] == v3[273] )
    {
      *(__m128i *)(v3 + 270) = v14;
    }
    else
    {
      if ( v7 < v10 )
      {
        v3[270] = v7;
        v8 = v14.m128i_i32[2];
        v9 = v14.m128i_i32[1];
      }
      if ( v9 < v3[271] )
      {
        v3[271] = v9;
        v8 = v14.m128i_i32[2];
      }
      if ( v8 > v3[272] )
        v3[272] = v8;
      if ( v14.m128i_i32[3] > v3[273] )
        v3[273] = v14.m128i_i32[3];
    }
    v11 = *(_QWORD *)(*(_QWORD *)this + 1184LL);
    if ( v11 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      if ( v13[0] && v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v12, (struct _RECTL *)&v14);
        if ( RGNOBJ::bMerge((RGNOBJ *)v13, (struct RGNOBJ *)&v11, (struct RGNOBJ *)v12, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)v13);
          *(_QWORD *)(*(_QWORD *)this + 1184LL) = v11;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
    }
  }
}
