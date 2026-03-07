BLTENTRY *__fastcall BLTENTRY::BLTENTRY(BLTENTRY *this)
{
  BLTENTRY *result; // rax

  *((_QWORD *)this + 3) = 0LL;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((BLTENTRY *)((char *)this + 32));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 17) = 0;
  memset((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 18) = -1;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  result = this;
  *((_OWORD *)this + 33) = 0LL;
  *((_OWORD *)this + 34) = 0LL;
  return result;
}
