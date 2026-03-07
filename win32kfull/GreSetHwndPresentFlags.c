__int64 __fastcall GreSetHwndPresentFlags(Gre::Base *a1, int a2)
{
  unsigned int v4; // esi
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rbp
  Gre::Base *v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v6 = Gre::Base::Globals(v5);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v6 + 9));
    if ( IsDwmActive(v7) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v10, (HWND)a1, 0LL);
      v8 = v10;
      if ( v10 )
      {
        if ( v10 != -88 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v8 + 88);
        }
        v4 = 0;
        *(_DWORD *)(*(_QWORD *)(v8 + 144) + 212LL) = a2;
        if ( v8 != -88 )
        {
          GreReleasePushLockShared(v8 + 88);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v4 = -1073741811;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 9));
  }
  return v4;
}
