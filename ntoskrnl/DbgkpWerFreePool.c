/*
 * XREFs of DbgkpWerFreePool @ 0x140938B84
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
