/*
 * XREFs of ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801C70E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetUnderlines(CResource *a1, __int64 a2)
{
  return CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(a1, a2, 0);
}
