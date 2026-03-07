__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetAlphaMode(
        CScenePbrMaterial *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 23) )
  {
    *((_DWORD *)a1 + 23) = a2;
    CScenePbrMaterial::OnAlphaModeChanged(a1);
  }
  return 0LL;
}
