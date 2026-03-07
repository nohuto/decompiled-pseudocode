__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetIsDoubleSided(
        CScenePbrMaterial *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 108) )
  {
    *((_BYTE *)a1 + 108) = a2;
    CScenePbrMaterial::OnIsDoubleSidedChanged(a1);
  }
  return 0LL;
}
