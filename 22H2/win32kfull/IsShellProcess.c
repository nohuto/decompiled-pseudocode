/*
 * XREFs of IsShellProcess @ 0x1C0066FBC
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C0015E50 (NtUserSetInteractiveControlFocus.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserShellRegisterHotKey @ 0x1C0041040 (NtUserShellRegisterHotKey.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0066EE8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00AE674 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C00AFD50 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterShellPTPListener @ 0x1C00B9AE0 (NtUserRegisterShellPTPListener.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C00E3878 (_anonymous_namespace_--CheckAllowForeground.c)
 *     NtUserRegisterEdgy @ 0x1C01D90E0 (NtUserRegisterEdgy.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1C021D8C0 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
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
