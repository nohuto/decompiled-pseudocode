/*
 * XREFs of RtlpHpMetadataFree @ 0x140222AA0
 * Callers:
 *     RtlpHpLargeFree @ 0x140222928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x140389A0C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140595820 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x140223290 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
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
