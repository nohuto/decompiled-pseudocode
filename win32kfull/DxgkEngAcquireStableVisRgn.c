void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  int v2; // esi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  UserEnterUserCritSecShared();
  v4 = Gre::Base::Globals(v3);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v4 + 10));
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    if ( (v2 = 1, v7 = *(_QWORD *)(v6[0] + 48LL), (**(_DWORD **)(v6[0] + 976LL) & 1) == 0)
      && (*(_DWORD *)(v6[0] + 36LL) & 0x8200) != 0x8200
      || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
    {
      v2 = 0;
    }
  }
  v5 = *((_QWORD *)v4 + 15);
  if ( v2 )
  {
    GreAcquireSemaphoreSharedInternal(v5);
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15));
  }
  else
  {
    GreAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15), 2LL);
  }
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 11));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v4 + 11));
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
}
