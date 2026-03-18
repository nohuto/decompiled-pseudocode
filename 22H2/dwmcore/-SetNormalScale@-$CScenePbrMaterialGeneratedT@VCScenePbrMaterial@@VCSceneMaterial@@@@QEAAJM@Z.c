/*
 * XREFs of ?SetNormalScale@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x1801C7AB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x180250A90 (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetNormalScale(float *a1, float a2)
{
  if ( a2 != a1[28] )
  {
    a1[28] = a2;
    CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
