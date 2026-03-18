/*
 * XREFs of IsHungWindow @ 0x1C0076670
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     NtUserQueryWindow @ 0x1C00E1170 (NtUserQueryWindow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     EditionHandleHungWindow @ 0x1C0119440 (EditionHandleHungWindow.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserShellMigrateWindow @ 0x1C01FEC10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?IsPumpingInputMsgs@@YAHPEAUtagWND@@@Z @ 0x1C0076724 (-IsPumpingInputMsgs@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsHungWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = (_QWORD *)*((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = v1[56];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 20) <= gdwHungAppTimeout
    || (*(_DWORD *)(v4 + 16) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[53] + 12LL) & 0x40) != 0 )
  {
    if ( !(unsigned int)IsPumpingInputMsgs(a1) )
      return 1;
    return v3;
  }
  else
  {
    return 1;
  }
}
