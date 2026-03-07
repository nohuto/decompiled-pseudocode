void __fastcall RIMAbConfigureDeviceArbitration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 524);
  if ( v6 < 4 )
    *(_DWORD *)(SGDGetUserSessionState(v5, v4, v7, v8) + 436) = v6;
  if ( *(_DWORD *)(SGDGetUserSessionState(v5, v4, v7, v8) + 436) >= 4u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1002);
}
