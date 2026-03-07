CFlipToken *__fastcall CFlipToken::CFlipToken(CFlipToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_DWORD *)this + 140) = 0x1000000;
  *((_WORD *)this + 44) = 0;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 282) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
