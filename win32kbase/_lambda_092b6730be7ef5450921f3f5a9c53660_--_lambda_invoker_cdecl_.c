/*
 * XREFs of _lambda_092b6730be7ef5450921f3f5a9c53660_::_lambda_invoker_cdecl_ @ 0x1C00E0220
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C020DE90 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C023B9C4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

char __fastcall lambda_092b6730be7ef5450921f3f5a9c53660_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  struct CPTPProcessor *Processor; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 538LL);
    PTPEngineTraceProducer::TraceEnvironment(
      *((PTPEngineTraceProducer **)Processor + 68),
      (const struct PTPEnvironment *)(*((_QWORD *)Processor + 68) + 40LL));
  }
  return 1;
}
