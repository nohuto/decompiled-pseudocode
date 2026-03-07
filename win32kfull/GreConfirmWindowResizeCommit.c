__int64 __fastcall GreConfirmWindowResizeCommit(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v3 + 15);
  GreAcquireSemaphore(v9);
  if ( IsDwmActive(v4) )
  {
    GreAcquireSemaphore(*((_QWORD *)v3 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
    if ( IsDwmActive(v5) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, (HWND)a1);
      v6 = v8;
      if ( v8 )
      {
        *(_DWORD *)(v8 + 124) = 0;
        v2 = 1;
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v2;
}
