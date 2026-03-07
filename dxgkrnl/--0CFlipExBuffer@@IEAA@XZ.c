CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CFlipExBuffer *result; // rax

  CCompositionBuffer::CCompositionBuffer(this);
  *((_DWORD *)this + 95) = -1;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_WORD *)this + 314) = 0;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 0;
  *((_BYTE *)this + 652) = 0;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_BYTE *)this + 688) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  memset((char *)this + 552, 0, 0x40uLL);
  result = this;
  *((_DWORD *)this + 16) = 0;
  return result;
}
