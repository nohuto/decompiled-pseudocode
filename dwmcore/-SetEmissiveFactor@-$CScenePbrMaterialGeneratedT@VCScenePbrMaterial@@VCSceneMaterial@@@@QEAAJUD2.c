__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveFactor(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 104) = v2;
  CScenePbrMaterial::OnEmissiveFactorChanged((CScenePbrMaterial *)a1);
  return 0LL;
}
