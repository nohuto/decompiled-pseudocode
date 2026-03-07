__int64 __fastcall ACPIDevicePowerProcessForward(__int64 a1)
{
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  AcpiPowerDpcFlags |= 2u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  return 0LL;
}
