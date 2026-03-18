/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x1403B5A60
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140465CD4 (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1407B82C4 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(void **a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(*a1, a2 + 48, 0LL) != 0;
}
