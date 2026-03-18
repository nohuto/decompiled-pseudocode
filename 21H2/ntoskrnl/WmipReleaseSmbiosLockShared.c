/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x1408089C4
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x14062C800 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
