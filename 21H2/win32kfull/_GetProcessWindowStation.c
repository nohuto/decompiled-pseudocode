/*
 * XREFs of _GetProcessWindowStation @ 0x1C000EED0
 * Callers:
 *     NtUserSetImeInfoEx @ 0x1C000D7F0 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000E7EC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C000E98C (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000EA00 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserGetImeInfoEx @ 0x1C000EB90 (NtUserGetImeInfoEx.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x1C000EE90 (EditionGetProcessWindowStationEntryPoint.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034B6C (xxxApplyGlobalInputSettings.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     zzzDwmStartRedirection @ 0x1C00E977C (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00E9970 (xxxDwmStopRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
