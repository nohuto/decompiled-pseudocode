/*
 * XREFs of xxxMoveWindow @ 0x1C010D42C
 * Callers:
 *     NtUserMoveWindow @ 0x1C010D210 (NtUserMoveWindow.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     xxxValidateRect @ 0x1C0124198 (xxxValidateRect.c)
 */

__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v11; // edi

  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) != 0
    || *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
    return xxxSetWindowPos(a1, 0LL, v7, v8, v9, a5, a6 != 0 ? 20 : 28);
  }
  v11 = xxxSetWindowPos(a1, 0LL, v7, v8, v9, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1, 0LL);
  return v11;
}
