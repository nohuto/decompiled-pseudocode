__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetRoughnessFactor(
        float *a1,
        float a2)
{
  if ( a2 != a1[41] )
  {
    a1[41] = a2;
    CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
  }
  return 0LL;
}
