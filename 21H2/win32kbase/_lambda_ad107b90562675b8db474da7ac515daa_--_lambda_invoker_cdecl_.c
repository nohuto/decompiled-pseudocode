/*
 * XREFs of _lambda_ad107b90562675b8db474da7ac515daa_::_lambda_invoker_cdecl_ @ 0x1C01DCAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0205664 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_ad107b90562675b8db474da7ac515daa_::_lambda_invoker_cdecl_(
        struct DEVICEINFO *const a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 59);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 1056);
        if ( v4 )
        {
LABEL_8:
          PTPEngineTraceProducer::TraceEnvironment(
            *(PTPEngineTraceProducer **)(v4 + 536),
            (const struct PTPEnvironment *)(*(_QWORD *)(v4 + 536) + 40LL));
          return 1;
        }
      }
      else
      {
        v4 = 0LL;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      goto LABEL_8;
    }
  }
  return 1;
}
