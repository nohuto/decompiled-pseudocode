CHolographicInteropTarget *__fastcall CHolographicInteropTarget::CHolographicInteropTarget(
        CHolographicInteropTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 10) = &CHolographicInteropTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CHolographicInteropTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 20) = &CHolographicInteropTarget::`vbtable'{for `ICapabilitiesContributorTarget'};
  *((_QWORD *)this + 38) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 41) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 40) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 41) + 4LL) + 328) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 144) = &IMonitorTarget::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 4LL) + v2 + 152) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 8LL) + v2 + 152) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 12LL) + v2 + 152) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 160) + 4LL) + v2 + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 160) + 8LL) + v2 + 160) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)v2 = &CHolographicInteropTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 72) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 144) = &CHolographicInteropTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 4LL) + v2 + 80) = &CHolographicInteropTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 8LL) + v2 + 80) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 12LL) + v2 + 80) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 80) + 4LL);
  *(_DWORD *)(v3 + v2 + 76) = v3 - 200;
  v4 = *(int *)(*(_QWORD *)(v2 + 80) + 8LL);
  *(_DWORD *)(v4 + v2 + 76) = v4 - 216;
  v5 = *(int *)(*(_QWORD *)(v2 + 80) + 12LL);
  *(_DWORD *)(v5 + v2 + 76) = v5 - 240;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_OWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_DWORD *)(v2 + 216) = 0;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 236) = 0LL;
  *(_QWORD *)(v2 + 244) = 0LL;
  return (CHolographicInteropTarget *)v2;
}
