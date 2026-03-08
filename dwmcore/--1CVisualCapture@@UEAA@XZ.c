/*
 * XREFs of ??1CVisualCapture@@UEAA@XZ @ 0x1802523B0
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180252480 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18021EF70 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 */

void __fastcall CVisualCapture::~CVisualCapture(CVisualCapture *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CVisualCapture::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CVisualCapture::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 1848;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 1864;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 1888;
  CVisualCapture::UnRegisterNotifiers((struct CResource **)this);
  v5 = (void *)*((_QWORD *)this + 238);
  if ( v5 )
    CloseHandle(v5);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
