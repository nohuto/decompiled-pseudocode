/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1409DF25C
 * Callers:
 *     VfDeadlockInitialize @ 0x1409DDEE0 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409E047C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A24B8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2530 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DF314 (ViDeadlockEmptyDatabase.c)
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
