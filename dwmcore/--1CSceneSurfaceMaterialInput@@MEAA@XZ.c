/*
 * XREFs of ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x18024DDF0
 * Callers:
 *     ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x18024DE60 (--_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(CSceneSurfaceMaterialInput *this)
{
  struct CResource *v1; // rdx
  unsigned __int64 v2; // rbx

  v1 = (struct CResource *)*((_QWORD *)this + 10);
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  v2 = (unsigned __int64)this + 64;
  *((_QWORD *)this + 8) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
