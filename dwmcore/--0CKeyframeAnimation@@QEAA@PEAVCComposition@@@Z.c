CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 50) = (char *)this + 432;
  *((_QWORD *)this + 51) = (char *)this + 432;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 104) = 2;
  *(_QWORD *)((char *)this + 420) = 2LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 138) = 1065353216;
  *((_DWORD *)this + 132) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 572) = 0LL;
  *(_QWORD *)((char *)this + 532) = 0LL;
  return result;
}
