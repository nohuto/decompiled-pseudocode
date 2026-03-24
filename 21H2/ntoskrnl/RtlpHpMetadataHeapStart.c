/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x1402A5E1C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1402A5D18 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039D788 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14068A9B0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(union _RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
