/*
 * XREFs of ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x1801C7164
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ @ 0x180250A14 (-OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

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
