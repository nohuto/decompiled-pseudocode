/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x14098B21C
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x1403C71B0 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140351890 (IoCancelIrp.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
    IoCancelIrp((PIRP)i->IoStatus.Information);
    PopReleaseRwLock((__int64 *)&i[2].Flags);
  }
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
