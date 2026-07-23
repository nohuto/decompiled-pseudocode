/*
 * XREFs of RtlpHpVsContextAllocate @ 0x140223844
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1402233E0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x1402237C8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(__int64 a1, int a2, int a3, int a4)
{
  char v4; // bl
  __int64 Internal; // rsi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v4 = a4;
  v9 = 0LL;
  v10 = 0LL;
  Internal = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, (__int64)&v9, (__int64)&v8);
  if ( v8 && (v4 & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v9);
  return Internal;
}
