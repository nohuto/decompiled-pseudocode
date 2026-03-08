/*
 * XREFs of ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C023A390
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C02364E8 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C023A204 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[20]; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-2Ch]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  *(_OWORD *)v10 = 0LL;
  *(_DWORD *)v10 = a2;
  v12 = *(_OWORD *)v10;
  v13 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(a1, 4, (__int64)&v12);
  v11 = a5;
  *(_DWORD *)v10 = a2;
  *(_QWORD *)&v10[4] = a3;
  *(_QWORD *)&v10[12] = a4;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)v10);
}
