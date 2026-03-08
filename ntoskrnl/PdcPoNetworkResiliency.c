/*
 * XREFs of PdcPoNetworkResiliency @ 0x140994930
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x140596AF0 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x140993564 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(int a1)
{
  char v1; // bl
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopNetUpdateDsAccounting(v1);
  if ( v1 )
  {
    PopNetResiliencyEngaged = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    PopNetArmDsEvaluationTimer();
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer, 0LL, v2, v3);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140C39F88, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v5, v4, v6);
}
