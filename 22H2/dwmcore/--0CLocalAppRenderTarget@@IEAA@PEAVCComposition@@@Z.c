/*
 * XREFs of ??0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18018A31C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800263C8 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLocalAppRenderTarget *__fastcall CLocalAppRenderTarget::CLocalAppRenderTarget(
        CLocalAppRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CLocalAppRenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CLocalAppRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 25) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 28) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 27) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 28) + 4LL) + 224) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 64) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)v2 = &CLocalAppRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 136) = &CLocalAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 4LL) + v2 + 72) = &CLocalAppRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 8LL) + v2 + 72) = &CLocalAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 12LL) + v2 + 72) = &CLocalAppRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 72) + 4LL);
  *(_DWORD *)(v3 + v2 + 68) = v3 - 104;
  v4 = *(int *)(*(_QWORD *)(v2 + 72) + 8LL);
  *(_DWORD *)(v4 + v2 + 68) = v4 - 120;
  v5 = *(int *)(*(_QWORD *)(v2 + 72) + 12LL);
  *(_DWORD *)(v5 + v2 + 68) = v5 - 144;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_DWORD *)(v2 + 124) = 0;
  result = (CLocalAppRenderTarget *)v2;
  *(_DWORD *)(v2 + 92) = 1;
  *(_BYTE *)(v2 + 128) = 1;
  return result;
}
