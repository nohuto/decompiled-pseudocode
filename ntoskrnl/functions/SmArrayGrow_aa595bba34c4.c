__int64 __fastcall SmArrayGrow(unsigned int a1, __int64 a2, unsigned int *a3, const void **a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  __int64 Pool2; // rax
  void *v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // r12d

  if ( a1 < *a3 )
    return 1LL;
  v6 = 2 * *a3;
  if ( v6 < 8 )
    v6 = 8;
  if ( a1 < v6 || (v6 = a1 + 8, a1 + 8 >= a1) )
  {
    v7 = 16LL * v6;
    if ( v7 <= 0xFFFFFFFF )
    {
      Pool2 = ExAllocatePool2(64LL, (unsigned int)v7, 1916890483LL);
      v9 = (void *)Pool2;
      if ( Pool2 )
      {
        v10 = 16 * *a3;
        v11 = 16 * *a3;
        memset((void *)(v10 + Pool2), 0, (unsigned int)(v7 - v10));
        if ( (_DWORD)v10 )
        {
          memmove(v9, *a4, v11);
          ExFreePoolWithTag((PVOID)*a4, 0);
        }
        *a4 = v9;
        *a3 = v6;
        return 1LL;
      }
    }
  }
  return 0LL;
}
