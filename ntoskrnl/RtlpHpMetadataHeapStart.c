/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x1402B7328
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1402B71FC (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(union _RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
