void __fastcall DelayHookFree(struct tagHOOK *a1)
{
  tagDomLock *v2; // rcx
  int v3; // esi
  char *v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  tagDomLock *v10; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+50h] [rbp-18h]

  if ( !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock) )
    __int2c();
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v10);
  if ( !v12 )
  {
    v3 = 0;
    v4 = &v11;
    do
    {
      v2 = (tagDomLock *)*((_QWORD *)v4 - 1);
      if ( v2 )
      {
        if ( *v4 )
          tagDomLock::LockExclusive(v2);
        else
          tagDomLock::LockShared(v2);
      }
      ++v3;
      v4 += 16;
    }
    while ( !v3 );
    v12 = 1;
  }
  if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_SHAREDONLY((__int64)v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3454);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3455);
  v5 = *((_DWORD *)a1 + 16);
  if ( (v5 & 0x1000) != 0 )
  {
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v10);
  }
  else
  {
    *((_DWORD *)a1 + 16) = v5 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v6 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v6 + 25) &= ~2u;
    v8 = PtiCurrentShared(v7);
    v9 = *((_QWORD *)v8 + 131);
    if ( v9 )
      *((_QWORD *)a1 + 12) = v9;
    *((_QWORD *)v8 + 131) = a1;
    if ( v12 && v10 )
    {
      if ( v11 )
        tagDomLock::UnLockExclusive(v10);
      else
        tagDomLock::UnLockShared(v10);
    }
  }
}
