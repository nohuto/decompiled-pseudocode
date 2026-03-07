void __fastcall PTPTelemetry::OnSettingsAvailable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 11809) = 1;
}
