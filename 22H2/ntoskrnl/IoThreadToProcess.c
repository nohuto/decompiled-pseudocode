/*
 * XREFs of IoThreadToProcess @ 0x1402056C0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E6290 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x14068637C (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1406D93AC (AlpcpCreateSecurityContext.c)
 *     DbgkQueueUserExceptionReport @ 0x140886860 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140887D6C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2580 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42F4 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14090B3C0 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
