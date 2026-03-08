/*
 * XREFs of ??1CSceneMesh@@MEAA@XZ @ 0x18024B470
 * Callers:
 *     ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x18024B5A0 (--_ECSceneMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMesh::~CSceneMesh(CSceneMesh *this)
{
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  *((_QWORD *)this + 19) = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 20);
  CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::~CSceneMeshGeneratedT<CSceneMesh,CSceneObject>((struct CResource **)this);
}
