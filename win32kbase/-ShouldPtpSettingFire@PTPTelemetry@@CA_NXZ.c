/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C020F4DC
 * Callers:
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1C020E754 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C020EA60 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PTPTelemetry::ShouldPtpSettingFire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl

  v8 = 0;
  if ( !*(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 11808) )
    return *(_BYTE *)(SGDGetUserSessionState(v5, v4, v6, v7) + 11809) != 0;
  return v8;
}
