/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140954B24 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopManageTransitionRecordRequest @ 0x140981498 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140C3CF04 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E2C8);
    if ( (unsigned int)dword_140C3E2C0 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = 5LL * (unsigned int)dword_140C3E2C0;
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E2C0 + 1]);
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[v1]);
      *(_OWORD *)&PopStateTransitonBlameStack[v1] = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v1 + 2] = 0LL;
      PopStateTransitonBlameStack[v1 + 4] = 0LL;
      --dword_140C3E2C0;
    }
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C3E2C8);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v0;
}
