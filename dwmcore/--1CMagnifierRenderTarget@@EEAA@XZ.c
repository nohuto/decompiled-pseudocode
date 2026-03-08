/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1801ECB9C
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x1801ECCB0 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CResource *v4; // rcx
  CResource *v5; // rcx

  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CMagnifierRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 2048;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2064;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 2088;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 264));
  v4 = (CResource *)*((_QWORD *)this + 264);
  *((_QWORD *)this + 264) = 0LL;
  if ( v4 )
    CResource::InternalRelease(v4);
  v5 = (CResource *)*((_QWORD *)this + 264);
  if ( v5 )
    CResource::InternalRelease(v5);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
