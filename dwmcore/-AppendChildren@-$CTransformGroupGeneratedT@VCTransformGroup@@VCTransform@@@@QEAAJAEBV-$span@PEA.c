/*
 * XREFs of ?AppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1801C0C7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::AppendChildren(CResource *a1, __int64 a2)
{
  return CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(a1, a2, 1);
}
