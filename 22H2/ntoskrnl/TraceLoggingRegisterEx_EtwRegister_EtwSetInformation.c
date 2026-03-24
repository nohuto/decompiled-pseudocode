/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403CE298 (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x1403CF37C (IoInitializeLiveDump.c)
 *     EtwpInitializeCoverage @ 0x140793E5C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A501C (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8B90 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1407CADE0 (VRegSetup.c)
 *     TtmInit @ 0x1407D28F8 (TtmInit.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x1408648F4 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091B690 (RtlpCapChkTelemetryRunOnce.c)
 *     BapdRecordFirmwareBootStats @ 0x140999250 (BapdRecordFirmwareBootStats.c)
 *     SshInitialize @ 0x140A3F9B4 (SshInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3FF90 (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140A40148 (PopDiagInitialize.c)
 *     VmInitSystem @ 0x140A47B1C (VmInitSystem.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 *     SeRmInitPhase1 @ 0x140A4BA3C (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     PnpTraceInitialize @ 0x140A532C8 (PnpTraceInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A72D90 (VslpIumInitializeTelemetry.c)
 *     ExInitTraceLogging @ 0x140A94604 (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077EFF0 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  GUID v4; // xmm0
  unsigned int v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( !v5 )
    EtwSetInformation(
      CallbackContext[4],
      EventProviderSetTraits,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  return v5;
}
