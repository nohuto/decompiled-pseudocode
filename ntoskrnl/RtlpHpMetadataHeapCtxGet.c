/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1402B72FC
 * Callers:
 *     RtlpHpMetadataFree @ 0x1402B6D30 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1402B71FC (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140375668 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403C1314 (RtlpHpMetadataCommit.c)
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
  return (char *)&unk_140C74618 + 16 * v1;
}
