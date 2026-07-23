/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403CEB08 (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x1403CFBEC (IoInitializeLiveDump.c)
 *     EtwpInitializeCoverage @ 0x1407991CC (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8F90 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1407CB1E0 (VRegSetup.c)
 *     TtmInit @ 0x1407D2B48 (TtmInit.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140864A04 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091B7A0 (RtlpCapChkTelemetryRunOnce.c)
 *     BapdRecordFirmwareBootStats @ 0x14099A260 (BapdRecordFirmwareBootStats.c)
 *     SshInitialize @ 0x140A41584 (SshInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A41B60 (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 *     VmInitSystem @ 0x140A48B1C (VmInitSystem.c)
 *     PspInitPhase2 @ 0x140A4C134 (PspInitPhase2.c)
 *     SeRmInitPhase1 @ 0x140A4CA3C (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 *     PnpTraceInitialize @ 0x140A542C8 (PnpTraceInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A73D90 (VslpIumInitializeTelemetry.c)
 *     ExInitTraceLogging @ 0x140A95604 (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077F2B0 (EtwSetInformation.c)
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
