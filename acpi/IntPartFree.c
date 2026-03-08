/*
 * XREFs of IntPartFree @ 0x1C005ECF0
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 *     IntPartArbInit @ 0x1C00A318C (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
