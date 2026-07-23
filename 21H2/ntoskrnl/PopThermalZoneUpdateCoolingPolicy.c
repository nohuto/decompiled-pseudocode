/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x1408E803C
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x14039B080 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
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
    PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
