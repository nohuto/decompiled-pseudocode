/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0118D70
 * Callers:
 *     PowerConnectionEvent @ 0x1C00B0A0C (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0118858 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSetSystemInputMode @ 0x1C00C1E00 (RIMSetSystemInputMode.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(int a1)
{
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1645);
  if ( a1 == 2 )
  {
    dword_1C0252208 = 1;
    dword_1C0252204 = 0;
    _InterlockedOr((volatile signed __int32 *)gpsi, 0x4000u);
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFDFFF);
    goto LABEL_6;
  }
  dword_1C0252208 = 0;
  dword_1C0252204 = a1 == 1;
  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFBFFF);
  if ( a1 != 1 )
    goto LABEL_5;
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(a1);
  InputBuffer = 28LL;
  if ( a1 )
    v4 = (a1 != 1) + 1;
  else
    v4 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
}
