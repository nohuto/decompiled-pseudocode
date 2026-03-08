/*
 * XREFs of ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1801C439C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x18024CDF0 (-OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetMetallicFactor(
        float *a1,
        float a2)
{
  if ( a2 != a1[40] )
  {
    a1[40] = a2;
    CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
  }
  return 0LL;
}
