CSceneMetallicRoughnessMaterial *__fastcall CSceneMetallicRoughnessMaterial::CSceneMetallicRoughnessMaterial(
        CSceneMetallicRoughnessMaterial *this,
        struct CComposition *a2)
{
  CSceneMaterial::CSceneMaterial(this, a2);
  *((_QWORD *)this + 11) = 1056964608LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *(_QWORD *)this = &CSceneMetallicRoughnessMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 8) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  return this;
}
