/*
 * XREFs of DbgkpWerFreePool @ 0x14093BBA4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14053C1B8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
