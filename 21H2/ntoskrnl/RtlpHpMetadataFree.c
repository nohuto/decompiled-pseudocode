/*
 * XREFs of RtlpHpMetadataFree @ 0x1402A5660
 * Callers:
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402A56A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1403898BC (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405955F0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x1402A5E50 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000LL);
}
