/*
 * XREFs of IsShellProcess @ 0x1C009C278
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C00150A0 (NtUserSetInteractiveControlFocus.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C003D0C4 (_anonymous_namespace_--CheckAllowForeground.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C009C1A4 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C00E84A0 (NtUserGetWindowProcessHandle.c)
 *     NtUserShellRegisterHotKey @ 0x1C00ED920 (NtUserShellRegisterHotKey.c)
 *     NtUserRegisterShellPTPListener @ 0x1C00F1C40 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C01DA110 (NtUserRegisterEdgy.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1C02204C8 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
