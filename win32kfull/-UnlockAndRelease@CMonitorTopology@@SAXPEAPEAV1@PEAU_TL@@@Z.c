/*
 * XREFs of ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C01EC02C
 * Callers:
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EC8EC (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F7030 (xxxDeferredDesktopRotation.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C022181C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  __int64 ThreadWin32Thread; // rax
  void *v5; // rcx

  if ( *a1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v5 = *a1;
    *(_QWORD *)(ThreadWin32Thread + 16) = *(_QWORD *)a2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      Win32FreePool(v5);
    *a1 = 0LL;
  }
}
