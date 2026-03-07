VIDPNSOURCEINFO *__fastcall VIDPNSOURCEINFO::VIDPNSOURCEINFO(VIDPNSOURCEINFO *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = -1;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  memset((char *)this + 64, 0, 0xA0uLL);
  return this;
}
