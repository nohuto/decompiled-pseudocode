/*
 * XREFs of ??0Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800E934C
 * Callers:
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x180044C58 (--0KeyframeSequence@@QEAA@I@Z.c)
 * Callees:
 *     <none>
 */

KeyframeSequence *__fastcall KeyframeSequence::Keyframe::Keyframe(KeyframeSequence::Keyframe *this)
{
  KeyframeSequence *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
