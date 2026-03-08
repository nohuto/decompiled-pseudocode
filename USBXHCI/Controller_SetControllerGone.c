/*
 * XREFs of Controller_SetControllerGone @ 0x1C00347AC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x1C003314C (Controller_DisableController.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0034770 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_SetControllerGone(_QWORD *a1, char a2)
{
  unsigned int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // r8d

  v4 = 16;
  v6 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     *a1,
                     off_1C00633D8)
                 + 28) & 0x10;
  if ( a2 && !*((_BYTE *)a1 + 397) )
  {
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(a1[9], v5, 4, 208, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(a1[9], v5, 4, 207, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        64LL,
        "A register read returned all FFs. Controller is considered physically removed",
        0LL,
        0LL);
    }
  }
  *((_BYTE *)a1 + 397) = 1;
  if ( a2 )
  {
    v7 = 0;
  }
  else
  {
    v4 = 8;
    v7 = v6 == 0 ? 0x100D : 0;
  }
  return Controller_ReportFatalError((__int64)a1, v4, v7, 0LL, 0LL, 0LL, 0LL);
}
