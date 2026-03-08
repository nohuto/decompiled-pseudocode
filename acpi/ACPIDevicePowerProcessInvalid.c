/*
 * XREFs of ACPIDevicePowerProcessInvalid @ 0x1C001EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C001C95C (ACPIDeviceCompleteRequest.c)
 */

__int64 __fastcall ACPIDevicePowerProcessInvalid(__int64 a1)
{
  *(_DWORD *)(a1 + 256) = -1073741585;
  ACPIDeviceCompleteRequest((_QWORD *)a1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  AcpiPowerDpcFlags |= 2u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  return 3221225711LL;
}
