/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800BCE8C
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800BBEE8 (--1CRenderData@@MEAA@XZ.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800BCDCC (--1CExpression@@MEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800BCEC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180216BB0 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180216BBC (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x180222A2C (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180232194 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235D98 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x18025C370 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 != a1[1] )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
