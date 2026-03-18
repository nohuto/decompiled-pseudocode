/*
 * XREFs of PspSendJobNotification @ 0x14025863C
 * Callers:
 *     PspValidateJobAssignmentProcessLimits @ 0x140682240 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x140682838 (PspIncrementJobChainProcessCounts.c)
 *     PspSendProcessNotificationToJobChain @ 0x140683F18 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x1406E2540 (PspAssociateCompletionPortCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FECE0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409AFD2C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
