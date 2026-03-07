__int64 __fastcall BiConvertNtFilePathToBootEnvironment(
        __int64 a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        _QWORD *a5)
{
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v11; // rbx
  void *Src; // [rsp+20h] [rbp-18h] BYREF

  Src = 0LL;
  v6 = BiConvertNtDeviceToBootEnvironment(a1, a2, a4, &Src);
  if ( v6 >= 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
    v9 = v8 + *((_DWORD *)Src + 2) + 12;
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, v9, 1262764866LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      Pool2[2] = 5;
      Pool2[1] = v9;
      memmove(Pool2 + 3, Src, *((unsigned int *)Src + 2));
      memmove((char *)v11 + *((unsigned int *)Src + 2) + 12, a3, v8);
      *a5 = v11;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v6;
}
