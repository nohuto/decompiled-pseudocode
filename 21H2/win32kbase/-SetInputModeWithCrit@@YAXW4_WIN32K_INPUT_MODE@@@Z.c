/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0147258
 * Callers:
 *     PowerConnectionEvent @ 0x1C007AD94 (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0146EB0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSetSystemInputMode @ 0x1C00D1C3C (RIMSetSystemInputMode.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v3 = a1;
  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v3 == 2 )
  {
    dword_1C0296FDC = 0;
    dword_1C0296FE0 = 1;
    _InterlockedOr((volatile signed __int32 *)gpsi, 0x4000u);
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFDFFF);
    goto LABEL_6;
  }
  dword_1C0296FE0 = 0;
  dword_1C0296FDC = v3 == 1;
  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFBFFF);
  if ( v3 != 1 )
    goto LABEL_5;
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(v3);
  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( v3 )
    v6 = (v3 != 1) + 1;
  else
    v6 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
