/*
 * XREFs of RtlpHpVsContextFreeList @ 0x140349770
 * Callers:
 *     RtlpHpHeapCompact @ 0x140242578 (RtlpHpHeapCompact.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x140349810 (RtlpHpVsContextFreeInternal.c)
 */

__int64 __fastcall RtlpHpVsContextFreeList(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
    result = RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), &v9);
  for ( ; a3; result = RtlpHpVsContextFreeInternal(a1, a2, v8, a2, (__int64)&v9) )
  {
    v8 = (_DWORD)a3 - 16;
    a3 = (_QWORD *)*a3;
  }
  if ( !v7 )
    return RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)&v9);
  return result;
}
