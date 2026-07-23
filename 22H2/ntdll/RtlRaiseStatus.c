/*
 * XREFs of RtlRaiseStatus @ 0x180102540
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800314A0 (RtlpUnwindPrologue.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrpReportError @ 0x18003F2B4 (LdrpReportError.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     RtlpWaitOnCriticalSection @ 0x180064940 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065F80 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660A0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800661E0 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180069380 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x18006B3E0 (RtlDecodePointer.c)
 *     RtlInitializeSListHead @ 0x18006FBA0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180071A40 (RtlDeactivateActivationContext.c)
 *     RtlEncodePointer @ 0x180072F40 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180075C10 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 *     RtlpCallVectoredHandlers @ 0x180079A44 (RtlpCallVectoredHandlers.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18007AFC8 (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrLockLoaderLock @ 0x18007DAB0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007E920 (LdrUnlockLoaderLock.c)
 *     RtlConvertSharedToExclusive @ 0x18007ED80 (RtlConvertSharedToExclusive.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800802D0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180082080 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180085870 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088B48 (RtlpUnwindOpSlots.c)
 *     RtlConvertExclusiveToShared @ 0x18008A5E0 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A1230 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A12C0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A1350 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A13A0 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF3C0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5340 (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800E0A60 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E8C30 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E8FA0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E90F8 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E92D0 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800FB430 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB4E0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB5BC (RtlpIsNameInExpressionPrivate.c)
 *     RtlInitializeContext @ 0x1800FEE50 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 *     RtlpInitRandomExVector @ 0x1801025A0 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x180112214 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseNoncontinuableException @ 0x1800A1E10 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionCode = Status;
  RtlRaiseNoncontinuableException(&ExceptionRecord, &ContextRecord);
}
