/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802A59F0
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1802A5AF0 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18021FB18 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x1802A269C (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CHolographicInteropTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 200;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 216;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 240;
  CHolographicManager::ReleaseInteropTextures(*((CHolographicManager **)this + 21));
  v5 = (void *)*((_QWORD *)this + 32);
  if ( v5 )
    CloseHandle(v5);
  v6 = (void *)*((_QWORD *)this + 33);
  if ( v6 )
    CloseHandle(v6);
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
