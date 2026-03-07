__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  size_t v7; // rbp
  _DWORD *Pool2; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // rdi

  v4 = Src[2] + 20;
  if ( Src[2] >= 0xFFFFFFEC )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v7 = v4;
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, v4, 1262764866LL);
    v9 = 0;
    v10 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, v7);
      *v10 = 5;
      memmove(v10 + 5, Src, (unsigned int)Src[2]);
      *a2 = v10;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
