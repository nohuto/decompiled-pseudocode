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
