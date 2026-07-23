/*
 * XREFs of PspSendJobNotification @ 0x14024234C
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405D9200 (PspAssociateCompletionPortCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1405DB0D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140681F80 (PspEnforceLimitsJobPostCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F47B8 (PspSendProcessNotificationToJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x1406F5884 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1406F5EB8 (PspValidateJobAssignmentProcessLimits.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140908A74 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14060F950 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
