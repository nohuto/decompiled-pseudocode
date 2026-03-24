/*
 * XREFs of ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172A60 (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801EAADC (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 *     ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801EAC20 (-OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( (_DWORD)a3 != 18 )
  {
    if ( (_DWORD)a3 != 69 )
    {
      v4 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(a1, a2, a3);
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xF5Bu, 0LL);
      return v6;
    }
    if ( (_DWORD)a2 != 10 )
    {
      v7 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(a1, a2, 69LL);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF56u, 0LL);
      return v6;
    }
    *(_OWORD *)(a1 + 136) = *a4;
    CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    return 0;
  }
  if ( (_DWORD)a2 == 11 )
  {
    if ( *(float *)a4 != *(float *)(a1 + 152) )
    {
      *(_DWORD *)(a1 + 152) = *(_DWORD *)a4;
      CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  if ( (_DWORD)a2 == 13 )
  {
    if ( *(float *)a4 != *(float *)(a1 + 156) )
    {
      *(_DWORD *)(a1 + 156) = *(_DWORD *)a4;
      CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  v9 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(a1, a2, 18LL);
  v6 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF4Cu, 0LL);
  return v6;
}
