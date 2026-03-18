/*
 * XREFs of xxxSetSystemMenu @ 0x1C01468C8
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0146760 (NtUserSetSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0064708 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD **a2)
{
  PVOID *v4; // rsi
  _QWORD *v5; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v4 = *(PVOID **)(a1 + 160);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v4);
    v5 = a2[2];
    if ( !v5 )
      v5 = (_QWORD *)**a2;
    MNPositionSysMenu(a1, v5);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL, (__int64)a2);
    return 0LL;
  }
}
