/*
 * XREFs of ACPIDispatchIrpDepFilterQueryID @ 0x1C0028410
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001EABC (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterQueryID(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // al

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger((__int64)DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceExtension[3] = AcpiFilterIrpDispatch;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(DeviceExtension[3] + 24LL) + 152LL))(a1, a2);
}
