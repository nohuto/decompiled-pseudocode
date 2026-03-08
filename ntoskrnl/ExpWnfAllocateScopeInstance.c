/*
 * XREFs of ExpWnfAllocateScopeInstance @ 0x140797360
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfAllocateScopeInstance(_QWORD *a1, int a2, const void *a3, unsigned int a4)
{
  _DWORD *Pool2; // rax
  _DWORD *v9; // rbx
  __int64 result; // rax

  Pool2 = (_DWORD *)ExAllocatePool2(256LL, a4 + 80, 543583831LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0x50uLL);
  *v9 = 5245186;
  v9[4] = a2;
  v9[5] = a4;
  if ( a4 )
  {
    *((_QWORD *)v9 + 3) = v9 + 20;
    memmove(v9 + 20, a3, a4);
  }
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  result = 0LL;
  *a1 = v9;
  return result;
}
