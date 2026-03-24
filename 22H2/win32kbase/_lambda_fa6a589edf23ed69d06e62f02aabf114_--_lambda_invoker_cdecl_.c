/*
 * XREFs of _lambda_fa6a589edf23ed69d06e62f02aabf114_::_lambda_invoker_cdecl_ @ 0x1C00CD630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00CD6A0 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C01CA02C (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

char __fastcall lambda_fa6a589edf23ed69d06e62f02aabf114_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  struct CPTPProcessor *Processor; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 60) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 353LL);
    PTPEngineTraceProducer::TraceEnvironment(
      *((PTPEngineTraceProducer **)Processor + 55),
      (const struct PTPEnvironment *)(*((_QWORD *)Processor + 55) + 40LL));
  }
  return 1;
}
