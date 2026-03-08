/*
 * XREFs of _GetProcessWindowStation @ 0x1C00BF460
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C009AD2C (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00BDC8C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00BF0C8 (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00BF2E0 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserSetImeInfoEx @ 0x1C00C2070 (NtUserSetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // r9

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( a1 )
    *a1 = *(_QWORD *)(v3 + 664);
  return *(_QWORD *)(v3 + 656);
}
