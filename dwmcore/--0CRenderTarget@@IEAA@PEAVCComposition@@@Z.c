/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7B7C
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7868 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180108800 (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801BD55C (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801E65DC (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801E73B4 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801F600C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802A5804 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  CRenderTarget *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  *((_QWORD *)this + 9) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_WORD *)this + 70) = 256;
  *((_DWORD *)this + 28) = 28;
  *(_QWORD *)((char *)this + 116) = 3LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 1065353216;
  return result;
}
