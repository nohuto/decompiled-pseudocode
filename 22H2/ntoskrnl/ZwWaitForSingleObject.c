/*
 * XREFs of ZwWaitForSingleObject @ 0x1403F9AA0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364690 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404EBBC0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x14062A394 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14069BE7C (PfSnVolumeCheckSeekPenalty.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C750 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC634 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7930 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E0A2C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140955EC4 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
