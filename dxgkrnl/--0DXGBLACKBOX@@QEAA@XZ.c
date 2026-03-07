DXGBLACKBOX *__fastcall DXGBLACKBOX::DXGBLACKBOX(DXGBLACKBOX *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 66;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
