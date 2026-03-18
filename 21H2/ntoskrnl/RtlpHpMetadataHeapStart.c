/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140371378
 * Callers:
 *     RtlHpHeapManagerStart @ 0x14036EDD4 (RtlHpHeapManagerStart.c)
 *     RtlpHpMetadataAlloc @ 0x140371274 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(union _RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
