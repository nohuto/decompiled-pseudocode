/*
 * XREFs of ??1CPTPEngine@@UEAA@XZ @ 0x1C0234F48
 * Callers:
 *     ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x1C0234FA0 (--_GCPTPEngine@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C023A204 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::~CPTPEngine(CPTPEngine *this)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  __int64 v4; // [rsp+50h] [rbp-18h]

  *(_QWORD *)this = &CPTPEngine::`vftable';
  v2 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(this, 2LL, &v2);
  *(_QWORD *)this = &IPTPEngine::`vftable';
}
