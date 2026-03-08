/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x14030BFE0
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     RtlpHpLfhContextAllocate @ 0x1402F8774 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpSegFree @ 0x140308DBC (RtlpHpSegFree.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x1402F5F3C (RtlpHpLfhBucketActivate.c)
 *     RtlpLfhBucketUsageUpdate @ 0x14030C164 (RtlpLfhBucketUsageUpdate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + v3);
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, *((unsigned __int8 *)RtlpLfhBucketIndexMap + v3));
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
