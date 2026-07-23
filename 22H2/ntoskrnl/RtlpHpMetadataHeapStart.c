/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x1402FE738
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1402FE634 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039D088 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14066F550 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
