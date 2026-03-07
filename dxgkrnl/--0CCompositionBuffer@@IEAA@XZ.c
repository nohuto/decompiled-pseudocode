CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  memset((char *)this + 48, 0, 0xD0uLL);
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  return this;
}
