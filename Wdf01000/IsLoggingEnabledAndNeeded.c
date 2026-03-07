bool __fastcall IsLoggingEnabledAndNeeded(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  _FX_TELEMETRY_CONTEXT *TelemetryContext; // rax
  unsigned __int8 v3; // dl
  unsigned int v4; // r8d
  unsigned __int16 v5; // r9
  __int64 v6; // rdi
  const _GUID *v8; // [rsp+20h] [rbp-28h]
  _LARGE_INTEGER lastLoggedTime; // [rsp+58h] [rbp+10h] BYREF

  TelemetryContext = DriverGlobals->TelemetryContext;
  if ( !TelemetryContext || _interlockedbittestandset(&TelemetryContext->DoOnceFlagsBitmap, 0) )
    return 0;
  lastLoggedTime.QuadPart = 0LL;
  RegistryReadLastLoggedTime(DriverGlobals, &lastLoggedTime);
  if ( !lastLoggedTime.QuadPart )
    return 1;
  v6 = MEMORY[0xFFFFF78000000014] - lastLoggedTime.QuadPart;
  if ( DriverGlobals->FxVerboseOn )
    WPP_IFR_SF_iii(
      DriverGlobals,
      v3,
      v4,
      v5,
      v8,
      lastLoggedTime.QuadPart,
      MEMORY[0xFFFFF78000000014],
      MEMORY[0xFFFFF78000000014] - lastLoggedTime.QuadPart);
  return v6 >= 864000000000LL;
}
