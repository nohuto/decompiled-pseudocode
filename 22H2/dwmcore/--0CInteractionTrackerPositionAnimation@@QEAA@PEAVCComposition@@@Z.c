/*
 * XREFs of ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1802668D8
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180232390 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1802648CC (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18026E698 (--0CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this,
        struct CComposition *a2)
{
  CScrollAnimation::CScrollAnimation(this, a2);
  *(_QWORD *)this = &CInteractionTrackerPositionAnimation::`vftable';
  CMotion::CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 456));
  *((_QWORD *)this + 57) = &CPositionMotion::`vftable';
  return this;
}
