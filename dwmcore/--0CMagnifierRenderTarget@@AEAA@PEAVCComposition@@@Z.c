/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801ECA4C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801E65DC (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CMagnifierRenderTarget *result; // rax
  const char *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v8 = 28;
  *((_QWORD *)this + 10) = &CMagnifierRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 269) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 272) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 271) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 272) + 4LL) + 2176) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  v7 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v7);
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2048;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 2064;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 2088;
  *((_QWORD *)this + 264) = 0LL;
  *((_QWORD *)this + 259) = 0LL;
  *((_QWORD *)this + 260) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 261) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 262) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 263) = 0x3FF0000000000000LL;
  result = this;
  *((_BYTE *)this + 140) = 1;
  return result;
}
