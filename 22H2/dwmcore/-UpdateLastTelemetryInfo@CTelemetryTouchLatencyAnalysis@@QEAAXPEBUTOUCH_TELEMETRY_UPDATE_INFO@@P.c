/*
 * XREFs of ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180161374
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800228B0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180023208 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800232CC (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180023BBC (-IsVailContainer@@YA_NXZ.c)
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18015CF60 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 *     ?ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@@Z @ 0x18015DC8C (-ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 *     ?TelemetryProcessingErrorDetected@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x180160D30 (-TelemetryProcessingErrorDetected@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryT.c)
 *     ?UpdateLastTelemetryInfo@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801614C4 (-UpdateLastTelemetryInfo@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLaten.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        LARGE_INTEGER *a3,
        __int64 a4)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  LARGE_INTEGER *v9; // rdi
  __int64 QuadPart; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v9 = (LARGE_INTEGER *)Scenario;
  if ( Scenario )
  {
    *((_DWORD *)Scenario + 100) = a2[8].LowPart;
    if ( *((_QWORD *)Scenario + 25) != a4 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v9[48] = PerformanceCount;
      QuadPart = a2[1].QuadPart;
      v11 = a2[4].QuadPart;
      if ( !WORD2(a2[7].QuadPart)
        || !IsVailContainer()
        || (QuadPart = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(
                         a2[1].QuadPart,
                         a2[6].QuadPart),
            v12 = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(a2[4].QuadPart, a2[6].QuadPart),
            v11 = v12,
            QuadPart)
        && v12 )
      {
        a3[1].QuadPart = QuadPart;
        a3[2] = a2[2];
        a3[3] = a2[3];
        a3[4] = v9[48];
        v14 = a2[5];
        v15 = a2[6];
        a3[5].QuadPart = v11;
        a3[6] = v14;
        a3[7] = v15;
        a3[9].LowPart = a2[8].HighPart;
        a3[8].HighPart = a2[8].HighPart;
        InteractionTraceProvider::UpdateLastTelemetryInfo(
          (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v9,
          (const struct TOUCH_TELEMETRY_UPDATE_INFO *)a2);
      }
      else
      {
        LOBYTE(v9->LowPart) = 1;
        InteractionTraceProvider::TelemetryProcessingErrorDetected(
          (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v9,
          (const struct TOUCH_TELEMETRY_UPDATE_INFO *)a2,
          a4,
          v13);
        InteractionTraceProvider::ForceRetireScenario((const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v9);
        CTelemetryTouchLatencyAnalysis::RetireScenario(this, v9, 1, 0);
      }
    }
  }
}
