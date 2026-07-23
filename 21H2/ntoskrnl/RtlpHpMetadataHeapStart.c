/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x14022325C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140223158 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039D8D8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1405E9E40 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
