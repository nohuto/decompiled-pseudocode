/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C02027C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C00E70F0 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01FF118 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203FF4 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  *((_DWORD *)this + 978) = 0;
  CPTPEngine::CancelMouseUpTimer(this, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    *((_DWORD *)this + 984) |= 0x80000000;
    v5 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v3);
  }
  return 0LL;
}
