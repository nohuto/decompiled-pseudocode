/*
 * XREFs of ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0004974
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1C00048C0 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 */

char __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v5; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2
    || !(unsigned int)IsTopLevelWindow()
    || *(int *)(v2 + 20) < 0 )
  {
    return 0;
  }
  v3 = *((_DWORD *)a1 + 80);
  if ( (v3 & 0x80000) == 0 )
  {
    *((_DWORD *)a1 + 80) = v3 | 0x80000;
    *(_DWORD *)(v2 + 232) |= 0x400u;
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor(a1, v5);
    xxxSetWindowPos(a1, 0, 0, 55);
  }
  return 1;
}
