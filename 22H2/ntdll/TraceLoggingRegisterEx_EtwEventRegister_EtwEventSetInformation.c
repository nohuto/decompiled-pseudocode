/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007E294 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180083E80 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1800857C0 (RtlpCapChkTelemetryRunOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180085FC0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800D0350 (VsmEnclaveTelemetryInitOnce.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventSetInformation @ 0x180042AF0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  NTSTATUS v3; // eax
  unsigned __int32 v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EtwEventRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      CallbackContext[4],
      (EVENT_INFO_CLASS)2,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  }
  return v4;
}
