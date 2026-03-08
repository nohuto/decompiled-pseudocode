/*
 * XREFs of ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802208F0
 * Callers:
 *     ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1802209B0 (--_GCCompositionMipmapSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x180221130 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 */

void __fastcall CCompositionMipmapSurface::~CCompositionMipmapSurface(CCompositionMipmapSurface *this)
{
  unsigned __int64 v2; // rbx
  void *v3; // rcx

  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  v2 = (unsigned __int64)this + 88;
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  CCompositionMipmapSurface::ReleaseResources(this);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 14) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
