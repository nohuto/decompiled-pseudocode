/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0030360
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeBuildWakeMasks @ 0x1C001AFA8 (ACPIGpeBuildWakeMasks.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001C8E8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C001CD7C (ACPIPowerScheduleDpc.c)
 *     ACPIInternalMoveList @ 0x1C00318C8 (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C00641C0 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (__int64)ACPITableLoadNotifyPnp, 0LL) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x1100A2uLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
