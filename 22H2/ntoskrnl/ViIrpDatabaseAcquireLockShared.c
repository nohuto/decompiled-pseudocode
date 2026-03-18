/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x1405D2608
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC1876 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE2768 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockShared(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
