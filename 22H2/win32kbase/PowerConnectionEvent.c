/*
 * XREFs of PowerConnectionEvent @ 0x1C00B0D4C
 * Callers:
 *     SetConnectedState @ 0x1C00B0CC0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C00B0CF0 (SetConnectCompletedState.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C004B1D0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0119040 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 */

void __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  int InputBuffer; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h]
  __int64 OutputBuffer; // [rsp+60h] [rbp+18h] BYREF

  InputBuffer = a1;
  OutputBuffer = 0LL;
  v1 = gbConnected != 0;
  if ( dword_1C024EF3C != v1 )
  {
    dword_1C024EF3C = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      15);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, &InputBuffer, 2u, &OutputBuffer, 8u) < 0 )
    {
      v3 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2164LL);
    }
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      giPowerOffTimeOutMs = 1000 * HIDWORD(OutputBuffer);
      if ( gSystemIsAoAc )
        SetInputModeWithCrit(0LL);
    }
    else
    {
      if ( HIDWORD(OutputBuffer) )
      {
        v3 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2183LL);
      }
      if ( (_DWORD)OutputBuffer )
      {
        v3 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2184LL);
      }
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
}
