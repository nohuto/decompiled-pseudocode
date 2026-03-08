/*
 * XREFs of RtlpHpMetadataFree @ 0x1402B6D30
 * Callers:
 *     RtlpHpLargeFree @ 0x1402B6B40 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B3B00 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B3EC0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405B4EA0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x1402B72FC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  int v3; // r10d
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0, 0LL);
}
