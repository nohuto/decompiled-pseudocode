/*
 * XREFs of PfpVirtualQuery @ 0x14097C070
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406AE494 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter1[3]; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v6 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v6 != 32 )
    return 3221225990LL;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( (v8 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v8 + v6 > 0x7FFFFFFF0000LL || v8 + v6 < v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v10, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
  if ( (_DWORD)v10 != 1 )
    return 3221225485LL;
  v9 = 2;
  if ( (BYTE4(v10) & 1) != 0 && (BYTE4(v10) & 2) != 0 )
    return 3221225485LL;
  if ( (DWORD1(v10) & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (BYTE4(v10) & 1) == 0 )
    v9 = (BYTE4(v10) & 2) != 0;
  result = MmQueryVirtualMemory(
             BugCheckParameter1[1],
             0LL,
             4,
             *((unsigned __int64 *)&v10 + 1),
             BugCheckParameter1[0],
             0LL,
             v9);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
