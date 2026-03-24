/*
 * XREFs of xxxSetMenu @ 0x1C0157394
 * Callers:
 *     NtUserSetMenu @ 0x1C01571C0 (NtUserSetMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C011ADAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, _QWORD **a2, __int64 a3)
{
  int v3; // edi

  v3 = a3;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    UserSetLastError(1436LL, (__int64)a2, a3);
    return 0LL;
  }
  else
  {
    LockWndMenuWorker((__int64)a1, 0, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    {
      if ( v3 )
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    }
    return 1LL;
  }
}
