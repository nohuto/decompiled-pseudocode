/*
 * XREFs of PspSendJobNotification @ 0x1402C3DCC
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405D9200 (PspAssociateCompletionPortCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140616398 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618320 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140680630 (PspChangeJobMemoryUsageByProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x14071F948 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x14071FF2C (PspValidateJobAssignmentProcessLimits.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905F60 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140908914 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1406B09A0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
