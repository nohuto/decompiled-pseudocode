/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x1409DF6EC
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1405FBB00 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 */

_QWORD *WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
