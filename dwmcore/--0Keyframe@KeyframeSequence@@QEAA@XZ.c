KeyframeSequence *__fastcall KeyframeSequence::Keyframe::Keyframe(KeyframeSequence::Keyframe *this)
{
  KeyframeSequence *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
