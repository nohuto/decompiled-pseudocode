DXGADAPTERALLOCATION *__fastcall DXGADAPTERALLOCATION::DXGADAPTERALLOCATION(DXGADAPTERALLOCATION *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
