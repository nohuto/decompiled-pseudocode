/*
 * XREFs of DbgkpWerAllocatePool @ 0x140888DAC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE598 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
