/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1409DF26C
 * Callers:
 *     VfDeadlockInitialize @ 0x1409DDEF0 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409E048C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A23F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2470 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2BC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2F4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DF324 (ViDeadlockEmptyDatabase.c)
 */

__int64 ViDeadlockDetectionApplySettings()
{
  unsigned __int8 v0; // bl

  if ( (MmVerifierData & 0x20) == 0 )
    return ViDeadlockEmptyDatabase();
  v0 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v0);
}
