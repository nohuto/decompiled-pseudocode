CSceneMesh *__fastcall CSceneMesh::CSceneMesh(CSceneMesh *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  *((_QWORD *)this + 19) = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 20) = 0LL;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return this;
}
