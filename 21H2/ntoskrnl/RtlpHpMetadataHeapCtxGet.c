/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x140371398
 * Callers:
 *     RtlpHpMetadataCommit @ 0x14036F520 (RtlpHpMetadataCommit.c)
 *     RtlpHpHeapAllocate @ 0x1403700FC (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataFree @ 0x140370C00 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x140371274 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1)
{
  void *HeapManager; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v6);
  v2 = 3LL;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 3u )
    v2 = (unsigned __int8)v4;
  return (__int64)HeapManager + 16 * v2 + 14488;
}
