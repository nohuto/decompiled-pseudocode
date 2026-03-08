/*
 * XREFs of ?NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ @ 0x1800D5990
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800D5A94 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 */

void __fastcall CAnimationController::NotifyBatchProcessingComplete(CAnimationController *this)
{
  if ( (*((_BYTE *)this + 8) & 3) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations((CAnimationController *)((char *)this - 112));
    *((_BYTE *)this + 8) &= 0xFCu;
  }
}
