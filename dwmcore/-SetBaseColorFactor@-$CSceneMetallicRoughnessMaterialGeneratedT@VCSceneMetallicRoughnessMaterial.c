__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetBaseColorFactor(
        CSceneMetallicRoughnessMaterial *a1,
        _OWORD *a2)
{
  *((_OWORD *)a1 + 9) = *a2;
  CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged(a1);
  return 0LL;
}
