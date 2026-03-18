/*
 * XREFs of ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C00161E4
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1C0016130 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00D3F28 (UpdateWindowSpriteMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

char __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  __int64 v6; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2
    || !(unsigned int)IsTopLevelWindow()
    || *(int *)(v3 + 20) < 0 )
  {
    return 0;
  }
  v4 = *(_DWORD *)(v2 + 320);
  if ( (v4 & 0x80000) == 0 )
  {
    *((_DWORD *)a1 + 80) = v4 | 0x80000;
    *(_DWORD *)(v3 + 232) |= 0x400u;
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor(a1, v6);
    xxxSetWindowPos(a1, 0, 0, 55);
  }
  return 1;
}
