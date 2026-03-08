/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x1409DC84C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1405F9660 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
