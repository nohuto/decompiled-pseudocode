/*
 * XREFs of _lambda_753f1a24f15e9d4fbe47901cff45fae9_::_lambda_invoker_cdecl_ @ 0x1C00CD440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00CD540 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A7CF4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 */

char __fastcall lambda_753f1a24f15e9d4fbe47901cff45fae9_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v3; // rdi
  struct CPTPProcessor *Processor; // rsi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      Processor = CPTPProcessorFactory::GetProcessor(a1);
      if ( !Processor )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 333LL);
        v3 = *((_QWORD *)a1 + 60);
      }
      CPTPProcessor::UpdateEnvironment(Processor, 1LL, v3);
    }
  }
  return 1;
}
