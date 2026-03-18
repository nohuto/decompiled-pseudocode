/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00CBD30 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0062EA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0169B38 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0169B88 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
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
