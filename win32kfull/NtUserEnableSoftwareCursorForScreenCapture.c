/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01D0580
 * Callers:
 *     <none>
 * Callees:
 *     ChangeComposableCursor @ 0x1C01AA1C4 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
