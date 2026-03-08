/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84
 * Callers:
 *     NtUserGetWindowTrackInfoAsync @ 0x1C0097BD0 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C00977F4 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0097B88 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C00E2134 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // r9
  const struct tagWND *v4; // rdx
  unsigned int v5; // r8d
  const struct tagTHREADINFO *v6; // r9

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 424))
    && v6 != v2
    && ShellWindowManagement::EligibleWindow((ShellWindowManagement **)a1, v4, v5)
    && (*((_DWORD *)v2 + 318) & 0x20) == 0
    && !IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    return BeginGetWidnowTrackInfoAsync((struct tagTHREADINFO **)a1);
  }
  UserSetLastError(5);
  return 0LL;
}
