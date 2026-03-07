CCursorState *__fastcall CCursorState::CCursorState(CCursorState *this)
{
  _QWORD *v2; // rax
  CCursorState *result; // rax

  *(_QWORD *)this = &CCursorState::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 1065353216;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 50) = 0;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 31) = v2;
  result = this;
  *((_QWORD *)this + 33) = g_qpcFrequency.QuadPart / 0x14uLL;
  return result;
}
