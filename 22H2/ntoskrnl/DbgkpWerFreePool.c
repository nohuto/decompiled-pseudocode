/*
 * XREFs of DbgkpWerFreePool @ 0x1408893D8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE598 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
