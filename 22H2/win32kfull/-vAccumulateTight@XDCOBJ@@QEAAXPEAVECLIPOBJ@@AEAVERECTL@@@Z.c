/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C000C9F0 (NtGdiFastPolyPolyline.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C001E16C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C002C900 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00F3A70 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A8594 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiUpdateColors @ 0x1C02D2A60 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6E10 (NtGdiSetPixel.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5ED4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  struct _RECTL *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v11; // [rsp+38h] [rbp-18h] BYREF

  v3 = *a3;
  v5 = *(_DWORD **)this;
  v11 = (struct _RECTL)v3;
  v6 = v5[10] & 1;
  v11.left = _mm_cvtsi128_si32(v3) - v5[2 * v6 + 254];
  v11.right = v3.m128i_i32[2] - v5[2 * v6 + 254];
  v11.top = v3.m128i_i32[1] - v5[2 * v6 + 255];
  v11.bottom = v3.m128i_i32[3] - v5[2 * v6 + 255];
  if ( (v5[9] & 0x40) != 0 )
  {
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v5 + 270)) )
      *v7 = v11;
    else
      ERECTL::operator|=(v7, &v11);
    v10 = *(_QWORD *)(*(_QWORD *)this + 1184LL);
    if ( v10 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
      if ( v9 && v8 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v8, &v11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v9, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v8, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v10, (struct RGNOBJ *)&v9);
          *(_QWORD *)(*(_QWORD *)this + 1184LL) = v10;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    }
  }
}
