/*
 * XREFs of _lambda_0ea3833fecfc7a67e7cb38c46f5cb3a9_::_lambda_invoker_cdecl_ @ 0x1C00D48D0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01DF380 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C02057B4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

char __fastcall lambda_0ea3833fecfc7a67e7cb38c46f5cb3a9_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  struct CPTPProcessor *Processor; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 420LL);
    PTPEngineTraceProducer::TraceEnvironment(
      *((PTPEngineTraceProducer **)Processor + 70),
      (const struct PTPEnvironment *)(*((_QWORD *)Processor + 70) + 40LL));
  }
  return 1;
}
