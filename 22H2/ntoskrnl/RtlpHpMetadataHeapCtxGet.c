/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x140324448
 * Callers:
 *     RtlpHpMetadataFree @ 0x140323E7C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x140324348 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140397AD8 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403C6BD4 (RtlpHpMetadataCommit.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpHpMetadataHeapCtxGet(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = 3LL;
  v2 = *a1 >> 8;
  if ( (unsigned __int8)v2 < 3u )
    v1 = (unsigned __int8)v2;
  return (char *)&unk_140C74A58 + 16 * v1;
}
