/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C001C4F4
 * Callers:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompleteOscReevalPhase @ 0x1C001C630 (ACPIDeviceCompleteOscReevalPhase.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C001C6C0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C001C7E0 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C001C8C0 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001F510 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0020EC0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0020FD0 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0021720 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0022714 (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
