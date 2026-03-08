/*
 * XREFs of ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x18025228C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801E65DC (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CVisualCapture *__fastcall CVisualCapture::CVisualCapture(CVisualCapture *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CVisualCapture *result; // rax
  const char *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v8 = 32;
  *((_QWORD *)this + 10) = &CVisualCapture::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 244) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 247) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 246) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 247) + 4LL) + 1976) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  v7 = "DWM Rendertarget (VisualCapture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v7);
  *(_QWORD *)this = &CVisualCapture::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CVisualCapture::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CVisualCapture::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 1848;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 1864;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 1888;
  *((_DWORD *)this + 34) = 0;
  *((_BYTE *)this + 140) = 1;
  return result;
}
