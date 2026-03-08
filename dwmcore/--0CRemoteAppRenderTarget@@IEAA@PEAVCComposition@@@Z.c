/*
 * XREFs of ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801E73B4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7B7C (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::CRemoteAppRenderTarget(
        CRemoteAppRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRemoteAppRenderTarget *v6; // r10

  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 20) = &CRemoteAppRenderTarget::`vbtable';
  *((_QWORD *)this + 41) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 44) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 43) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 44) + 4LL) + 352) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 152) = &IBitmapUnlock::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 160) + 4LL) + v2 + 160) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CRemoteAppRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 72) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 144) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 152) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 4LL) + v2 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 8LL) + v2 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 12LL) + v2 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 80) + 4LL);
  *(_DWORD *)(v3 + v2 + 76) = v3 - 224;
  v4 = *(int *)(*(_QWORD *)(v2 + 80) + 8LL);
  *(_DWORD *)(v4 + v2 + 76) = v4 - 240;
  v5 = *(int *)(*(_QWORD *)(v2 + 80) + 12LL);
  *(_DWORD *)(v5 + v2 + 76) = v5 - 264;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)(v2 + 272) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 252) = 96;
  *(_QWORD *)(v2 + 280) = 0LL;
  *(_WORD *)(v2 + 292) = 0;
  *(_BYTE *)(v2 + 294) = 0;
  *(_DWORD *)(v2 + 288) = 1;
  *(_DWORD *)(v2 + 116) = 3;
  *(_BYTE *)(v2 + 140) = 1;
  CMILMatrix::SetToIdentity((CMILMatrix *)(v2 + 184));
  return v6;
}
