/*
 * XREFs of IoThreadToProcess @ 0x140248470
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1407C9E00 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     DbgkQueueUserExceptionReport @ 0x14093679C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140975AB0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtSetContextThread @ 0x1409B0F20 (NtSetContextThread.c)
 *     PsSyscallProviderDispatch @ 0x1409B1700 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
