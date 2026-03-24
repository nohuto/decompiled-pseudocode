/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1402FE76C
 * Callers:
 *     RtlpHpMetadataFree @ 0x1402FDF7C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1402FE634 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x14037B320 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403CA9F4 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
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
  v2 = 2LL;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 2u )
    v2 = (unsigned __int8)v4;
  return (__int64)HeapManager + 16 * v2 + 14488;
}
