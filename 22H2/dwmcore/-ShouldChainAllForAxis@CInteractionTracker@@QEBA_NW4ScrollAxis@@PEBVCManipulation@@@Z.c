/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18023576C
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180265738 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026F618 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180274F34 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x1802764B0 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v5; // r9

  if ( !a2 )
  {
    v5 = BYTE4(*(_QWORD *)(a3 + 440));
    return (v5 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = (unsigned __int8)BYTE4(*(_QWORD *)(a3 + 440)) >> 1;
    return (v5 & 1) == 0;
  }
  return v3 == 1;
}
