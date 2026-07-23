/*
 * XREFs of BgpFwReserveAllocate @ 0x14039C00C
 * Callers:
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402509C0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C50778, v1, dword_140C50770);
  v3 = dword_140C50788;
  if ( ClearBitsAndSet > dword_140C50788 - 16 )
  {
    dword_140C50770 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C50778, v1, 0);
    v3 = dword_140C50788;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_140C50770 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140C50768 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
