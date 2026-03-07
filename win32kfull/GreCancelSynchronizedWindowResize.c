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
