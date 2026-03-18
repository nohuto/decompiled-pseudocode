/*
 * XREFs of _GetProcessWindowStation @ 0x1C00CEC40
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00CE4AC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00CE71C (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00CE790 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserGetImeInfoEx @ 0x1C00CE910 (NtUserGetImeInfoEx.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x1C00CEC00 (EditionGetProcessWindowStationEntryPoint.c)
 *     NtUserSetImeInfoEx @ 0x1C011CF80 (NtUserSetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
