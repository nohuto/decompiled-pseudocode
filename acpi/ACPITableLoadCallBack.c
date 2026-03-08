/*
 * XREFs of ACPITableLoadCallBack @ 0x1C003F3C0
 * Callers:
 *     <none>
 * Callees:
 *     _ACPIInternalError @ 0x1C0001B74 (_ACPIInternalError.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001D594 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C0022714 (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C002BFE0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C002EC04 (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C0049870 (Simulator_RefreshTree.c)
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
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(
                a1,
                (void (__fastcall *)(__int64, __int64, __int64))ACPITableLoadNotifyPnp,
                0LL) < 0 )
      ACPIInternalError(0x1100A6uLL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
