/*
 * XREFs of ?AppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x1801C0C0C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::AppendAnimations(
        CResource *a1,
        __int64 a2)
{
  return CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(a1, a2, 1);
}
