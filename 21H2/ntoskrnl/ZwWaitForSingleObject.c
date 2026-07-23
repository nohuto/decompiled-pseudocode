/*
 * XREFs of ZwWaitForSingleObject @ 0x1403FA600
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364EF0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140675760 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140694044 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140784AF8 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC3F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7D30 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E0B3C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140958C80 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
