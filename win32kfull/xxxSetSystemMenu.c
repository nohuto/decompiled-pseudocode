/*
 * XREFs of xxxSetSystemMenu @ 0x1C0234C74
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C01DDB80 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E79FC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNPositionSysMenu @ 0x1C0202174 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD ***a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v4);
    v5 = a2[2];
    if ( !v5 )
      v5 = **a2;
    MNPositionSysMenu(a1, v5);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437);
    return 0LL;
  }
}
