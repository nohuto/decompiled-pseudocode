void __fastcall vSynchronizeDriver(__int64 a1)
{
  int v1; // ebx
  Gre::Base *v2; // rcx
  __int64 v3; // rsi
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // r9d
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( v1 == 64 )
  {
    if ( *(_DWORD *)(v3 + 20248) == -1 )
      return;
  }
  else if ( v1 != 128 || *(_QWORD *)(v3 + 20256) == -1LL )
  {
    return;
  }
  v4 = Gre::Base::Globals(v2);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v4 + 10));
  for ( i = 0LL; ; i = v7 )
  {
    v6 = hdevEnumerateDisplayOnly(i);
    v7 = v6;
    if ( !v6 )
      break;
    v9 = v6;
    if ( (v1 & *(_DWORD *)(v6 + 2096)) != 0 )
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
      {
        GreAcquireSemaphore(*((_QWORD *)v4 + 15));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15), 2LL);
        GreAcquireSemaphore(*(_QWORD *)(v9 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(v9 + 48), 11LL);
      }
      if ( (v1 & *(_DWORD *)(v9 + 2096)) != 0 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
      {
        v8 = 0;
        if ( v1 == 64 )
        {
          if ( *(_DWORD *)(v3 + 20248) != -1 )
            v8 = 2;
        }
        else
        {
          v8 = *(_QWORD *)(v3 + 20256) != -1LL;
        }
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v9,
          (struct _SURFOBJ *)((*(_QWORD *)(v9 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 2528) != 0LL)),
          0LL,
          v8);
      }
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()");
        GreReleaseSemaphoreInternal(*(_QWORD *)(v9 + 48));
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 15));
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 10));
}
