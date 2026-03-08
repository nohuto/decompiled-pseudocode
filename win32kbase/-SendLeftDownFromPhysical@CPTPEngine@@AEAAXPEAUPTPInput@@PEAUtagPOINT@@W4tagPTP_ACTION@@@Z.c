/*
 * XREFs of ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0239E80
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C02364E8 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C023A018 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C023A204 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

int __fastcall CPTPEngine::SendLeftDownFromPhysical(CPTPEngine *a1, __int64 *a2, _QWORD *a3, int a4)
{
  int result; // eax
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+20h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  char v13; // [rsp+70h] [rbp+10h] BYREF

  result = *((_DWORD *)a1 + 984) | 0x80;
  *((_DWORD *)a1 + 984) = result;
  if ( (result & 8) == 0 )
  {
    v9 = 0LL;
    LODWORD(v9) = a4;
    v11 = v9;
    v12 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v11);
    if ( a3 )
    {
      HIDWORD(v10) = 0;
      LODWORD(v10) = 0;
      *(_QWORD *)((char *)&v10 + 4) = *a3;
      v12 = 0LL;
      v11 = v10;
      CBasePTPEngine::SendTelemetryOutput(a1, 6LL, &v11);
    }
    v8 = *(__int64 *)((char *)a2 + 28);
    if ( (*((_DWORD *)a1 + 67) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13, a2);
    result = CBasePTPEngine::SendMouseOutput(a1, 1LL, v8);
    *((_DWORD *)a1 + 984) |= 8u;
  }
  return result;
}
