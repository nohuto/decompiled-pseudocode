__int64 __fastcall EtwpCovSampStackHashTableAlloc(void **a1, int a2)
{
  unsigned int v3; // ebx
  void *v4; // rcx
  _DWORD *Pool2; // rax
  _DWORD *v7; // rsi

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x56777445u);
    *a1 = 0LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(4 * a2 + 8), 1450669125LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, (unsigned int)(4 * a2 + 8));
    v7[1] = a2;
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
