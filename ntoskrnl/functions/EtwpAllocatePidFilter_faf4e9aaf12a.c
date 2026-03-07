__int64 __fastcall EtwpAllocatePidFilter(__int64 a1, unsigned int **a2)
{
  unsigned int v4; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  __int64 result; // rax
  const void *v8; // rdx

  if ( *a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 8) >> 2;
  if ( v4 > 8 )
    return 3221225485LL;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 36LL, 1182233669LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(const void **)a1;
  *Pool2 = v4;
  memmove(Pool2 + 1, v8, 4LL * v4);
  result = 0LL;
  *a2 = v6;
  return result;
}
