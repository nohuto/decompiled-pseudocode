/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1402A5E50
 * Callers:
 *     RtlpHpMetadataFree @ 0x1402A5660 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1402A5D18 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x14037B8B0 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403CB0F4 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140309414 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1)
{
  __int64 HeapManager; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v6, v6);
  v2 = 2LL;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 2u )
    v2 = (unsigned __int8)v4;
  return 16 * v2 + HeapManager + 14488;
}
