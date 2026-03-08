/*
 * XREFs of GreCancelSynchronizedWindowResize @ 0x1C0269DDC
 * Callers:
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EB7C0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026821C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall GreCancelSynchronizedWindowResize(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  Gre::Base *v3; // rcx
  Gre::Base *v4; // rcx
  struct DWMSPRITE *v5; // rbx
  struct DWMSPRITE *v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  v7 = *((_QWORD *)v2 + 15);
  GreAcquireSemaphore(v7);
  if ( IsDwmActive(v3) )
  {
    GreAcquireSemaphore(*((_QWORD *)v2 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v2 + 9), 7LL);
    if ( IsDwmActive(v4) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v6, (HWND)a1);
      v5 = v6;
      if ( v6 )
      {
        if ( *((int *)v6 + 29) >= 1 )
        {
          CheckAndProcessWindowResizeComplete(v6, 1, 0LL);
          *((_DWORD *)v5 + 32) = 1;
        }
        if ( v5 )
          _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}
