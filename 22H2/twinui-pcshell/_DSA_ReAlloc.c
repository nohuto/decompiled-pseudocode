/*
 * XREFs of _DSA_ReAlloc @ 0x1804E7674
 * Callers:
 *     DSA_Preallocate @ 0x1804E7874 (DSA_Preallocate.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x1804E760C (--$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DSA_ReAlloc(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  ProcessHeap = GetProcessHeap();
  if ( (int)CCv6s_HeapReallocArray<void>(ProcessHeap, v5, *(void **)(a1 + 8), *(unsigned int *)(a1 + 20), v2, &v7) < 0 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  result = 1LL;
  *(_DWORD *)(a1 + 16) = v2;
  return result;
}
