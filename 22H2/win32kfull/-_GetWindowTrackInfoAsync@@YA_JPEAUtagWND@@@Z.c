/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00AE674
 * Callers:
 *     NtUserGetWindowTrackInfoAsync @ 0x1C00AE5C0 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     IsShellProcess @ 0x1C0066FBC (IsShellProcess.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00AE708 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C00AE7AC (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagTHREADINFO *v2; // rbx
  int v3; // eax
  __int64 v4; // r9
  const struct tagWND *v5; // rdx
  const struct tagTHREADINFO *v6; // r9

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  LOBYTE(v3) = IAMThreadAccessGranted(gptiCurrent);
  if ( v3
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 424))
    && v6 != v2
    && ShellWindowManagement::EligibleWindow(a1, v5)
    && (*((_DWORD *)v2 + 318) & 0x20) == 0
    && !IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    return BeginGetWidnowTrackInfoAsync(a1);
  }
  UserSetLastError(5LL);
  return 0LL;
}
