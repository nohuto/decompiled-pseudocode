void __fastcall PTPTelemetry::OnUserLogin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 11809) = 1;
  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    if ( *(_BYTE *)(SGDGetUserSessionState(v5, v4, v6, v7) + 11810) )
      *(_BYTE *)(SGDGetUserSessionState(v9, v8, v10, v11) + 11808) = 1;
  }
}
