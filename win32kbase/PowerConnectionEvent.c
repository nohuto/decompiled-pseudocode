void __fastcall PowerConnectionEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 OutputBuffer; // [rsp+38h] [rbp-48h] BYREF
  _OWORD InputBuffer[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]

  OutputBuffer = 0LL;
  v4 = gbConnected != 0;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2948) != v4 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 2948) = v4;
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      15LL);
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v15 = 0LL;
    BYTE1(InputBuffer[0]) = gProtocolType == 0;
    LOBYTE(InputBuffer[0]) = v4;
    GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8));
    if ( ZwPowerInformation(
           PowerInformationLevelMaximum|SystemReserveHiberFile,
           InputBuffer,
           0x28u,
           &OutputBuffer,
           0x10u) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1988LL);
    if ( !v4 )
    {
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1998LL);
      if ( DWORD2(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1999LL);
      if ( BYTE12(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2000LL);
    }
    ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
    if ( v4 )
    {
      if ( *(_BYTE *)(SGDGetUserSessionState(v10, v9, v11, v12) + 712) )
        SetInputModeWithCrit(0LL);
    }
  }
}
