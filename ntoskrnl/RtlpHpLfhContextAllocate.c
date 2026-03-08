/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x1402F8774
 * Callers:
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x14030BFE0 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhBucketAllocate @ 0x1403CE658 (RtlpHpLfhBucketAllocate.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rsi

  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v6 + 15) >> 4));
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) == 0 || (unsigned int)RtlpHpLfhBucketUpdateStats(a1, v6, 1LL) )
    return RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 128), a2, a4);
  else
    return -1LL;
}
