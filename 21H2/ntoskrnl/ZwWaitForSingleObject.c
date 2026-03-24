/*
 * XREFs of ZwWaitForSingleObject @ 0x1403FA420
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364D40 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404EBC80 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140629F74 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406C6E70 (PfSnVolumeCheckSeekPenalty.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC1F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7A10 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E09DC (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140955E74 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140958AB0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
