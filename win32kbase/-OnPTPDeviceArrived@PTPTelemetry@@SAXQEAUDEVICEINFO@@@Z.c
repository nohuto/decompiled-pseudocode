/*
 * XREFs of ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1C020E754
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211E80 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C020EABC (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C020F4DC (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 */

void __fastcall PTPTelemetry::OnPTPDeviceArrived(struct DEVICEINFO *const a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(a1);
    if ( *(_BYTE *)(SGDGetUserSessionState(v3, v2, v4, v5) + 11810) )
      *(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 11808) = 1;
  }
}
