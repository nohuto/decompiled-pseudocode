/*
 * XREFs of PspSendJobNotification @ 0x14030201C
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F84CC (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1406FFF28 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x140700E68 (PspIncrementJobChainProcessCounts.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409AED9C (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x1409AF0B0 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14079AF00 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
