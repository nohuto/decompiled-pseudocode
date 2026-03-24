/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x1403CF270
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     IoCancelIrp @ 0x140314120 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_140C2334C != 1;
  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != v0 )
  {
    PopThermalPollingWakesAllowed = v0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
      if ( i[1].AssociatedIrp.IrpCount || (i->PendingReturned & 1) != 0 && LODWORD(i->CancelRoutine) )
        IoCancelIrp((PIRP)i->IoStatus.Information);
      PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
