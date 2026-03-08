/*
 * XREFs of ?SetKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x1801C3FB8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetKeyframeAnimations(
        CResource *a1,
        __int64 a2)
{
  return CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetOrAppendKeyframeAnimations(
           a1,
           a2,
           0);
}
