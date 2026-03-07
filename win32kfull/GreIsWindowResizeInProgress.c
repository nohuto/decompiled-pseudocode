_BOOL8 __fastcall GreIsWindowResizeInProgress(Gre::Base *a1, __int64 a2)
{
  BOOL v3; // ebx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = 0;
  v4 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v9);
  if ( IsDwmActive(v5) )
  {
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( IsDwmActive(v6) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, (HWND)a1);
      if ( v8 )
      {
        v3 = 1;
        if ( *(int *)(v8 + 116) < 1 )
          v3 = *(_DWORD *)(v8 + 124) != 0;
        if ( v8 )
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v3;
}
