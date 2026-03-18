/*
 * XREFs of ZwWaitForSingleObject @ 0x14041B7E0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1402D1E10 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1406286F0 (DifZwWaitForSingleObjectWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406D958C (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406DBCB4 (PfSnVolumeCheckIsSdBus.c)
 *     PiDrvDbLoadNode @ 0x1407D4E34 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408568A0 (FsRtlpRegisterProviderWithMUP.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140A01F78 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140A047F0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
