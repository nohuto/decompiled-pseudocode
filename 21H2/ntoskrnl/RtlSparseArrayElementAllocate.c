/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x140221B88
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x140221A9C (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140221C2C (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x140221C70 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140221EB4 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v5; // rdx
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = a2 << v3;
  v6 = (void *)(v5 + *(_QWORD *)(a1 + 24));
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int128 *, __int128 *))RtlpCSparseBitmapPageCommit)(
              a1 + 16,
              (unsigned __int64)(8 * v5) >> 15,
              &v8,
              &v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(&v8);
  RtlCSparseBitmapLeaveLockingRegion(&v9);
  return v6;
}
