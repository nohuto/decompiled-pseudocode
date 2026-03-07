void *__fastcall SafeReallocBlob(
        unsigned int *P,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  void *Pool2; // rax
  void *v11; // rdi

  if ( !P )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v8 + a2;
  if ( (unsigned int)v8 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v9;
  if ( !v9 )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(256LL, v9, 1920232557LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, P, *P);
  ExFreePoolWithTag(P, 0);
  return v11;
}
