/*
 * XREFs of ?SetStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801C69EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetStrikethroughs(CResource *a1, __int64 a2)
{
  return CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendStrikethroughs(a1, a2, 0);
}
