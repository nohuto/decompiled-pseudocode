WarpTextureState *__fastcall WarpTextureState::WarpTextureState(WarpTextureState *this)
{
  WarpTextureState *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  result = this;
  *((_QWORD *)this + 5) = 1LL;
  return result;
}
