/*
 * XREFs of ?GetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016EB80
 * Callers:
 *     ?GetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016EB10 (-GetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // xmm0_4
  int v5; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v4 = *(_DWORD *)(a1 + 80);
      goto LABEL_10;
    case 3:
      v5 = *(_DWORD *)(a1 + 96);
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(a3 + 8) = v5;
      *(_DWORD *)(a3 + 72) = 52;
LABEL_11:
      *(_BYTE *)(a3 + 76) = 1;
      return v3;
    case 6:
      v4 = *(_DWORD *)(a1 + 104);
      goto LABEL_10;
    case 8:
      v4 = *(_DWORD *)(a1 + 108);
LABEL_10:
      *(_DWORD *)a3 = v4;
      *(_DWORD *)(a3 + 72) = 18;
      goto LABEL_11;
  }
  return (unsigned int)-2147024809;
}
