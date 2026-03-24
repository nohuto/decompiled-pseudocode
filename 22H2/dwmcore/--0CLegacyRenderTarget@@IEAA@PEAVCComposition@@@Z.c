/*
 * XREFs of ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180025DEC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016AAE0 (--0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1800260D0 (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x180026274 (--0IOverlayMonitorTarget@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800263C8 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::CLegacyRenderTarget(
        CLegacyRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  struct IOverlayMonitorTarget *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CLegacyRenderTarget *result; // rax

  if ( a3 )
  {
    *((_QWORD *)this + 9) = &CLegacyRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 18) = &CLegacyRenderTarget::`vbtable'{for `IMonitorTarget'};
    *((_QWORD *)this + 2331) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2334) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2333) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2334) + 4LL) + 18672) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((CLegacyRenderTarget *)((char *)this + 136));
  *((_QWORD *)this + 8) = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)v4 = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  v5 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 18552;
  v6 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v6 + 68) = v6 - 18568;
  v7 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v7 + 68) = v7 - 18592;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 1LL;
  *((_DWORD *)this + 56) = 3;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *(_QWORD *)((char *)this + 228) = 0LL;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 116) = 0;
  COverlayContext::COverlayContext((CLegacyRenderTarget *)((char *)this + 472), v4);
  *((_QWORD *)this + 2320) = 0LL;
  *((_DWORD *)this + 4642) = 0;
  *((_QWORD *)this + 2322) = 0LL;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 4646) = 0;
  *((_DWORD *)this + 4647) = 16777217;
  *((_WORD *)this + 9296) = 0;
  *((_BYTE *)this + 18594) = 0;
  *((_QWORD *)this + 2325) = 0LL;
  *((_QWORD *)this + 2326) = 0LL;
  *((_DWORD *)this + 63) = 1;
  *((_QWORD *)this + 33) = 1065353216LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)((char *)this + 284) = 1065353216LL;
  *(_QWORD *)((char *)this + 292) = 0LL;
  *((_DWORD *)this + 75) = 0;
  *((_QWORD *)this + 38) = 1065353216LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 1065353216;
  *((_WORD *)this + 164) = 32085;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 44) = 1065353216LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *(_QWORD *)((char *)this + 372) = 1065353216LL;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 1065353216;
  result = this;
  *((_WORD *)this + 198) = 32085;
  *((_OWORD *)this + 25) = _xmm;
  *((_WORD *)this + 232) = 32085;
  *((_OWORD *)this + 26) = _xmm;
  *((_OWORD *)this + 27) = _xmm;
  *((_OWORD *)this + 28) = _xmm;
  return result;
}
