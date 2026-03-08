/*
 * XREFs of ZwWaitForSingleObject @ 0x140412390
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140300E30 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiZeroPageThread @ 0x1403AAC50 (MiZeroPageThread.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1405F5F10 (DifZwWaitForSingleObjectWrapper.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14077B1D8 (PfSnVolumeCheckSeekPenalty.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14084F0A8 (FsRtlpRegisterProviderWithMUP.c)
 *     PiDrvDbLoadNode @ 0x1408693C4 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A0F74 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
