BTL_TOPOLOGY_CONSTRUCTOR *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  BTL_TOPOLOGY_CONSTRUCTOR *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 7) = -2;
  *((_DWORD *)this + 8) = -2;
  result = this;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 1;
  *((_WORD *)this + 26) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_DWORD *)this + 14) = 4;
  *((_WORD *)this + 30) = 256;
  return result;
}
