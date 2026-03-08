/*
 * XREFs of ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x18026B934
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022E820 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180262654 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180098224 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::CScrollKeyframeAnimation(
        CScrollKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  CScrollKeyframeAnimation *result; // rax

  CKeyframeAnimation::CKeyframeAnimation(this, a2);
  *((_QWORD *)this + 73) = a3;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  memset_0((char *)this + 592, 0, 0x40uLL);
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 166) = 18;
  *((_BYTE *)this + 668) = 0;
  memset_0((char *)this + 672, 0, 0x40uLL);
  *((_QWORD *)this + 92) = 0LL;
  result = this;
  *((_DWORD *)this + 186) = 18;
  *((_BYTE *)this + 748) = 0;
  *((_DWORD *)this + 53) = 90;
  return result;
}
