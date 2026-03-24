/*
 * XREFs of ?SetChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1801704AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetChildren(CResource *a1, __int64 a2)
{
  return CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(a1, a2, 0);
}
