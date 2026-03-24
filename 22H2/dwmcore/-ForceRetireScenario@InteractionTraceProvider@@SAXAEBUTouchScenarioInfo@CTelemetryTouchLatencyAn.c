/*
 * XREFs of ?ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@@Z @ 0x18015DC8C
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180022A9C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180023D4C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180161374 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152990 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InteractionTraceProvider::ForceRetireScenario(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1)
{
  int v1; // [rsp+30h] [rbp-39h] BYREF
  int v2; // [rsp+34h] [rbp-35h] BYREF
  __int64 v3; // [rsp+38h] [rbp-31h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v4; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-19h] BYREF
  int *v6; // [rsp+70h] [rbp+7h]
  __int64 v7; // [rsp+78h] [rbp+Fh]
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **v8; // [rsp+80h] [rbp+17h]
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  __int64 *v10; // [rsp+90h] [rbp+27h]
  __int64 v11; // [rsp+98h] [rbp+2Fh]
  int *v12; // [rsp+A0h] [rbp+37h]
  __int64 v13; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 8) != 0 && (qword_180344ED0 & 8) == qword_180344ED0 )
  {
    v1 = *((_DWORD *)a1 + 38);
    v3 = *((_QWORD *)a1 + 1);
    v12 = &v1;
    v10 = &v3;
    v8 = &v4;
    v6 = &v2;
    v4 = a1;
    v2 = 5;
    v13 = 4LL;
    v11 = 8LL;
    v9 = 8LL;
    v7 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344EB8,
      (unsigned __int8 *)dword_1802E5652,
      0LL,
      0LL,
      6u,
      &v5);
  }
}
