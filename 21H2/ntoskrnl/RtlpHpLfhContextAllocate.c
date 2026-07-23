/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x1402234C4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1402233E0 (RtlpHpAllocateHeapInternal.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x140223568 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhBucketAllocate @ 0x1403925D0 (RtlpHpLfhBucketAllocate.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  int v6; // edx
  __int64 v9; // rbp
  void *v10; // rax
  void *v11; // rbx

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v6 + 15) >> 4));
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats() )
    return -1LL;
  v10 = (void *)RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 128), (unsigned int)v4, a4);
  v11 = v10;
  if ( v10 && (a4 & 2) != 0 )
    memset(v10, 0, v4);
  return (__int64)v11;
}
