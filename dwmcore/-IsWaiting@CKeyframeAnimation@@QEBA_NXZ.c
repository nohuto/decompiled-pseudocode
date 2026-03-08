/*
 * XREFs of ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800BCF48
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BCEB4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CKeyframeAnimation::IsWaiting(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_BYTE *)this + 581) & 1) == 0 || *((_DWORD *)this + 123) >= *((_DWORD *)this + 122) )
    return 0;
  return v1;
}
