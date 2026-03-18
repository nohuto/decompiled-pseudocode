/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x1C00D3F9C
 * Callers:
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00D3F28 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00D4D80 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1C00D4E38 (DwmAsyncNotifySpriteMonitorChange.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(Gre::Base *a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // r15d
  struct Gre::Base::SESSION_GLOBALS *v6; // rbp
  __int64 v7; // rbx
  int v8; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rdi
  Gre::Base *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rdi
  _BYTE v20[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]

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
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
    v14 = 0LL;
    v21 = 0LL;
    if ( a2 )
    {
      a3 = DWMSPRITEREF::hspLookupWindow(a2);
      v14 = v21;
    }
    if ( a3 )
    {
      Gre::Base::Globals(v13);
      LOBYTE(v15) = 15;
      v14 = HmgLock(a3, v15);
      v21 = v14;
    }
    if ( v14 )
    {
      v16 = (void *)UserReferenceDwmApiPort(v13);
      v5 = DwmAsyncNotifySpriteMonitorChange(v16);
      if ( v21 )
        _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
    }
    v21 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 9));
  if ( v8 )
  {
    v18 = Gre::Base::Globals(v17);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v18 + 14));
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v7);
  }
  return v5;
}
