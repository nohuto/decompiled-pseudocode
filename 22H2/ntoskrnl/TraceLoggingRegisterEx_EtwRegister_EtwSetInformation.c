/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4
 * Callers:
 *     IoInitializeLiveDump @ 0x1403AE5D0 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x1403B3830 (IopInitializeSystemVariableService.c)
 *     PrExtLogToTelemetry @ 0x1403B48D4 (PrExtLogToTelemetry.c)
 *     CarEtwRegister @ 0x1405D2A78 (CarEtwRegister.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x140803324 (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x1408559A8 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x140858970 (VRegSetup.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140866210 (RtlpCapChkTelemetryRunOnce.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933834 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140A88E78 (BapdRecordFirmwareBootStats.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B388D0 (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140B38B18 (PopDiagInitialize.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B5436C (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B647DC (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140B685A8 (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140B723DC (VslpIumInitializeTelemetry.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74D28 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeTraceLogging @ 0x140B97370 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B98E74 (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D76A0 (EtwSetInformation.c)
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
