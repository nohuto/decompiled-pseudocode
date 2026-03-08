/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140AD5D8C
 * Callers:
 *     ViDeadlockPluginUnload @ 0x1405CF3F0 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140AD447C (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140AD48C8 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140AD7DA4 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405CF698 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405CF710 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD5DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD5E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD5E40 (ViDeadlockEmptyDatabase.c)
 */

__int64 __fastcall ViDeadlockDetectionApplySettings(int a1)
{
  unsigned __int8 v1; // bl

  if ( !a1 )
    return ViDeadlockEmptyDatabase();
  v1 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v1);
}
