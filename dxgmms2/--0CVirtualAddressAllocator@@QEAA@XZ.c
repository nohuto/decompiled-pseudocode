CVirtualAddressAllocator *__fastcall CVirtualAddressAllocator::CVirtualAddressAllocator(CVirtualAddressAllocator *this)
{
  CVirtualAddressAllocator *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 66;
  *((_DWORD *)this + 20) = 64;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 36) = 0;
  return result;
}
