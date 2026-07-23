/*
 * XREFs of PpmIdleUsingStateSelection @ 0x14026FB1C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14026FA58 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

bool PpmIdleUsingStateSelection()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl
  _PPM_IDLE_STATES *IdleStates; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  v1 = 0;
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates )
    v1 = IdleStates->InterfaceVersion == 1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v1;
}
