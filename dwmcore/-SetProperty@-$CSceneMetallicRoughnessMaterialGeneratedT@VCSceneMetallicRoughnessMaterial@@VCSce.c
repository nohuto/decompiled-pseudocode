__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _OWORD *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a3 != 18 )
  {
    if ( a3 != 69 )
    {
      v4 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x16BEu, 0LL);
      return v6;
    }
    if ( a2 != 10 )
    {
      v7 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x16B9u, 0LL);
      return v6;
    }
    *(_OWORD *)(a1 + 144) = *a4;
    CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    return 0;
  }
  if ( a2 == 11 )
  {
    if ( *(float *)a4 != *(float *)(a1 + 160) )
    {
      *(_DWORD *)(a1 + 160) = *(_DWORD *)a4;
      CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  if ( a2 == 13 )
  {
    if ( *(float *)a4 != *(float *)(a1 + 164) )
    {
      *(_DWORD *)(a1 + 164) = *(_DWORD *)a4;
      CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  v9 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
  v6 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x16AFu, 0LL);
  return v6;
}
