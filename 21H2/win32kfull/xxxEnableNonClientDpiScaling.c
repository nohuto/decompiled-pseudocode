/*
 * XREFs of xxxEnableNonClientDpiScaling @ 0x1C01E63BC
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1C01F86D0 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C00BD938 (UpdateWindowSpriteDPI.c)
 */

__int64 __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2
    || !(unsigned int)IsTopLevelWindow((__int64)a1)
    || *(int *)(v2 + 20) < 0 )
  {
    return 0LL;
  }
  v3 = *(_DWORD *)(v2 + 232);
  if ( (v3 & 0x10000000) == 0 )
  {
    *(_DWORD *)(v2 + 232) = v3 | 0x10000000;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x8000000u;
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteDPI(a1, v4);
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1LL;
}
