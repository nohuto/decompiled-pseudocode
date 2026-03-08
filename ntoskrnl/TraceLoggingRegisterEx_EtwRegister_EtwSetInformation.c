/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC
 * Callers:
 *     IoInitializeLiveDump @ 0x1403A9880 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x1403AEB40 (IopInitializeSystemVariableService.c)
 *     PrExtLogToTelemetry @ 0x1403AFBD8 (PrExtLogToTelemetry.c)
 *     CarEtwRegister @ 0x1405D05C8 (CarEtwRegister.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x14080F52C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x14080F588 (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x140851B78 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1408543D0 (VRegSetup.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140861A30 (RtlpCapChkTelemetryRunOnce.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x14087C260 (CcTelemetryPeriodicTimerCallback.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140930904 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8BD14 (BapdRecordFirmwareBootStats.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B43DDC (VmInitSystem.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B4407C (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140B442C4 (PopDiagInitialize.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140B64880 (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140B6E0BC (VslpIumInitializeTelemetry.c)
 *     EtwpInitializeCoverageSampler @ 0x140B70C24 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeTraceLogging @ 0x140B93160 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B94C64 (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407882D0 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(char *CallbackContext, __int64 a2, __int64 a3)
{
  ULONGLONG *v3; // rsi
  bool v4; // zf
  unsigned int v6; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (ULONGLONG *)(CallbackContext + 32);
  v4 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = a2;
  *((_QWORD *)CallbackContext + 6) = a3;
  v6 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, v3);
  if ( !v6 )
    EtwSetInformation(
      *v3,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
