/*
 * XREFs of ?SetChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x1801C353C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetChildren(CResource *a1, __int64 a2)
{
  return CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetOrAppendChildren(a1, a2, 0);
}
