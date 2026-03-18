/*
 * XREFs of IoThreadToProcess @ 0x140289E60
 * Callers:
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     PsLookupThreadByThreadId @ 0x1406FAFC0 (PsLookupThreadByThreadId.c)
 *     AlpcpCreateSecurityContext @ 0x14071CA38 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140738400 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     DbgkQueueUserExceptionReport @ 0x1409397BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14093A918 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978B50 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtSetContextThread @ 0x1409B3F70 (NtSetContextThread.c)
 *     PsSyscallProviderDispatch @ 0x1409B4750 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B198 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
