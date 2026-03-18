/*
 * XREFs of EmpQueueRuleUpdateState @ 0x1403878C8
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x14053C850 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x140823980 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x14093C514 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14093C760 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14093C970 (EmProviderRegisterEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

signed __int32 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  _QWORD *i; // rax
  _QWORD *Pool2; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_9;
      }
      break;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1970359621LL);
  if ( Pool2 )
  {
    *Pool2 = a1;
    Pool2[2] = a2;
    Pool2[1] = EmpRuleUpdateQueue;
    EmpRuleUpdateQueue = (__int64)(Pool2 + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem(&EmpRuleUpdateWorker, DelayedWorkQueue);
    }
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  return KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
