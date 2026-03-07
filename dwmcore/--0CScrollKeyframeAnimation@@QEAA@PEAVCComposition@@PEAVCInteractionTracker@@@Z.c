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
