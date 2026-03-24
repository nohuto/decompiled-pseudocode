/*
 * XREFs of PdcPoNetworkResiliency @ 0x1408EF8E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     KeCancelTimer2 @ 0x140348B50 (KeCancelTimer2.c)
 *     PopNetUpdateDsAccounting @ 0x140578620 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408F1BF4 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(int a1)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopNetUpdateDsAccounting(v1);
  if ( v1 )
  {
    PopNetResiliencyEngaged = 1;
    PopNetArmDsEvaluationTimer(v2, (unsigned int)_InterlockedExchange(&PopNetGracePeriodState, 1));
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140C20A08, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v4, v3);
}
