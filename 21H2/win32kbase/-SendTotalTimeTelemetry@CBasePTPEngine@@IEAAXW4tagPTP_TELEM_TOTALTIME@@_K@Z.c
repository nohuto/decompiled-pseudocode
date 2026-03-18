/*
 * XREFs of ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1C0204004
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C02007A8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203EE0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendTotalTimeTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  HIDWORD(v4) = 0;
  LODWORD(v4) = a2;
  *(_QWORD *)((char *)&v4 + 4) = a3;
  v6 = 0LL;
  v5 = v4;
  return CBasePTPEngine::SendTelemetryOutput(a1, 5, (__int64)&v5);
}
