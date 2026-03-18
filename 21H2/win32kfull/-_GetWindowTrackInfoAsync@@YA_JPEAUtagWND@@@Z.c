/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0109AC4
 * Callers:
 *     NtUserGetWindowTrackInfoAsync @ 0x1C0109A10 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0109B94 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *this)
{
  const struct tagTHREADINFO *v2; // rbx
  const struct tagWND *v3; // rdx
  __int64 v4; // r8
  const struct tagTHREADINFO *v5; // r8

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)this + 2);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 424))
    && v5 != v2
    && ShellWindowManagement::EligibleWindow(this, v3)
    && (*((_DWORD *)v2 + 314) & 0x20) == 0
    && !(unsigned int)IsThreadHung(v2, 0) )
  {
    return BeginGetWidnowTrackInfoAsync(this);
  }
  UserSetLastError(5LL, (__int64)v3);
  return 0LL;
}
