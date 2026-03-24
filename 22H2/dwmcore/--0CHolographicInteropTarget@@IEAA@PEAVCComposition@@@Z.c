/*
 * XREFs of ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802574F4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802578D0 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800263C8 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::CHolographicInteropTarget(
        CHolographicInteropTarget *this,
        struct CComposition *a2)
{
  CHolographicInteropTarget *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CHolographicInteropTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 31) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 34) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 33) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 34) + 4LL) + 272) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)v2 + 17) = &IMonitorTarget::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 18) + 4LL) + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 18) + 8LL) + 144) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 18) + 12LL) + 144) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)v2 = &CHolographicInteropTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)v2 + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)v2 + 17) = &CHolographicInteropTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 9) + 4LL) + 72) = &CRadialGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 9) + 8LL) + 72) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 9) + 12LL) + 72) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)v2 + 9) + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 68) = v3 - 152;
  v4 = *(int *)(*((_QWORD *)v2 + 9) + 8LL);
  *(_DWORD *)((char *)v2 + v4 + 68) = v4 - 168;
  v5 = *(int *)(*((_QWORD *)v2 + 9) + 12LL);
  *(_DWORD *)((char *)v2 + v5 + 68) = v5 - 192;
  *((_QWORD *)v2 + 21) = 0LL;
  *((_QWORD *)v2 + 23) = 0LL;
  *((_QWORD *)v2 + 24) = 0LL;
  return v2;
}
