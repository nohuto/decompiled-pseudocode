/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C004D240 (GreExtSelectClipRgnInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0050FF4 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0051040 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00510A0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00510F0 (UntrapAppContainerRenderingWrap.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0051140 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D2CA8 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D32E4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00DEA84 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0279074 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreResetDCInternal @ 0x1C02B0050 (GreResetDCInternal.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C014CFA4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C014CFF2 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax

  *((_QWORD *)this + 62) = a2;
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    DC::vSetDpiScaling(
      v3,
      _mm_unpacklo_ps((__m128)*(unsigned int *)(v2 + 660), (__m128)*(unsigned int *)(v2 + 664)).m128_u64[0]);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 520);
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 36) |= 0x10u;
      *(_QWORD *)(v3 + 524) = 0LL;
      *(_QWORD *)(v3 + 532) = 0LL;
      *(_DWORD *)(v3 + 520) = v4 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue((DC *)v3);
    }
  }
}
