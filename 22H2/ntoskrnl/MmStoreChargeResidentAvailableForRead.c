/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140312C04
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140312B20 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140352B08 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL, a4) != 0;
}
