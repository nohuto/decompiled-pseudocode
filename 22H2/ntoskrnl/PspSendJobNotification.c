/*
 * XREFs of PspSendJobNotification @ 0x14031D13C
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405D9200 (PspAssociateCompletionPortCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14065DD10 (PspChangeJobMemoryUsageByProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x14071ED18 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x14071F2FC (PspValidateJobAssignmentProcessLimits.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905FB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140908964 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x140693B60 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
