/*
 * XREFs of RtlCreateUmsThreadContext @ 0x1800F6EB0
 * Callers:
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F75F0 (RtlpAttachThreadToUmsCompletionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCreateUmsThreadContext(__int64 *a1)
{
  unsigned int v2; // eax
  __int64 Heap; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  v2 = 1312;
  if ( MEMORY[0x7FFE03E8] )
    v2 = MEMORY[0x7FFE03E8] + 1375;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v2);
  v4 = Heap;
  v7 = Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 1264) |= 8u;
    *(_QWORD *)(Heap + 1272) = *(_QWORD *)(Heap + 1272) & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v4 = Heap;
    *a1 = Heap;
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
  v6 = result;
  if ( (int)result < 0 )
  {
    if ( v4 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      return v6;
    }
  }
  return result;
}
