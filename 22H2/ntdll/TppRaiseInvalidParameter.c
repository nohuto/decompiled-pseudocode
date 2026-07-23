/*
 * XREFs of TppRaiseInvalidParameter @ 0x18011235C
 * Callers:
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000EFD0 (TpAllocTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x180012858 (TppIopValidateIo.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x18004CCC0 (TpReleaseCleanupGroupMembers.c)
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x180062BF0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062C60 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180062CC0 (TpAllocPool.c)
 *     TpCallbackIndependent @ 0x1800637C0 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180068980 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x180070F28 (TpDereferenceGlobalPool.c)
 *     TppCallbackMayRunLongProlog @ 0x180070FD8 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180076CA0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x180076E98 (TpBindFileToDirect.c)
 *     TpAlpcRegisterCompletionList @ 0x18007A510 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x18007A600 (TpAlpcUnregisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18007A74C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x18007A7D4 (TppAllocAlpcCompletion.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007E140 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007F1B0 (TpAllocCleanupGroup.c)
 *     TppJobpValidateJob @ 0x18007FD98 (TppJobpValidateJob.c)
 *     TpAllocJobNotification @ 0x18007FE00 (TpAllocJobNotification.c)
 *     TpDisassociateCallback @ 0x180080AA0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800819B0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x180082350 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180083BF0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800859F0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088BE0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180112070 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1801120A0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801120E0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180112120 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     TppReportExceptionFilter @ 0x1801123DC (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
