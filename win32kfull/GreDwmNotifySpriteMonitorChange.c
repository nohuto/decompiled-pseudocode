/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x1C002C60C
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x1C002C598 (UpdateWindowSpriteMonitor.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C002D150 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1C002D208 (DwmAsyncNotifySpriteMonitorChange.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(Gre::Base *a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // r12d
  struct Gre::Base::SESSION_GLOBALS *v6; // r14
  __int64 v7; // rbx
  int v8; // esi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rdi
  Gre::Base *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  void *v16; // rax
  unsigned int v17; // eax
  Gre::Base *v18; // rcx
  struct Gre::Base::SESSION_GLOBALS *v19; // rdi

  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  v7 = *((_QWORD *)v6 + 15);
  GreAcquireSemaphore(v7);
  v8 = 0;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (v11 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 108) )
  {
    v12 = Gre::Base::Globals(v10);
    GreAcquireSemaphore(*((_QWORD *)v12 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v12 + 14), 5LL);
    v8 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v6 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v6 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    if ( a2 )
      a3 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
    {
      Gre::Base::Globals(v13);
      LOBYTE(v14) = 15;
      v15 = HmgLock(a3, v14);
      if ( v15 )
      {
        v16 = (void *)UserReferenceDwmApiPort();
        v17 = DwmAsyncNotifySpriteMonitorChange(v16);
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
        v5 = v17;
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 9));
  if ( v8 )
  {
    v19 = Gre::Base::Globals(v18);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v19 + 14));
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v7);
  }
  return v5;
}
