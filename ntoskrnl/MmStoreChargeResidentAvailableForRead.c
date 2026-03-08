/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1403B0DD0
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x14045DCE4 (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(void **a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(*a1, a2 + 48, 0LL) != 0;
}
