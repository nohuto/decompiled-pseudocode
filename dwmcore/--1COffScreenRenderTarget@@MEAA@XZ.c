/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E671C
 * Callers:
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801E6810 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801E92B0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801EB9A8 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1801ECB9C (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802523B0 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6CD0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COffScreenRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 1792;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 1808;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 1832;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1760);
  COcclusionContext::~COcclusionContext((void **)this + 25);
  CRenderTarget::~CRenderTarget(this);
}
