/*
 * XREFs of ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A6140
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A6710 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00C53B0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 */

void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rbx

  if ( qword_1C0250D68 > 0 )
  {
    if ( qword_1C0250D70 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      qword_1C0250D70 = PerformanceCounter.QuadPart;
    }
    qword_1C0250D80 = PerformanceCounter.QuadPart;
  }
  v3 = 1000 * a1 / gliQpcFreq.QuadPart;
  if ( v3 - PTPTelemetry::Usage::gmsLastTelemetrySentTime > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry();
    PTPTelemetry::Usage::gmsLastTelemetrySentTime = v3;
  }
}
