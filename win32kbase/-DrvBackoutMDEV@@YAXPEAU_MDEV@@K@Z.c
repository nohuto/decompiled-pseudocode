void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rsi
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct SURFACE *v27; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v28; // [rsp+60h] [rbp+18h] BYREF

  WdLogSingleEntry1(4LL, a1);
  v3 = 0;
  v4 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  v5 = *((_DWORD *)a1 + 5);
  if ( v5 )
  {
    do
    {
      v6 = 0;
      v7 = 56LL * v3;
      v27 = 0LL;
      v8 = *(_QWORD *)((char *)a1 + v7 + 40);
      v28 = (struct PDEV *)v8;
      while ( 1 )
      {
        GreAcquireHmgrSemaphore(v7);
        v6 = HmgSafeNextObjt(v6, 5, &v27);
        if ( !v6 )
          break;
        GreReleaseHmgrSemaphore(v9);
        v7 = (__int64)v27;
        if ( *((_QWORD *)v27 + 5) == *(_QWORD *)(v8 + 1768) && (*((_DWORD *)v27 + 29) & 1) != 0 )
          vCleanupRedirectionSurface(v27, 1);
      }
      GreReleaseHmgrSemaphore(v9);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      if ( *(_DWORD *)(v8 + 12) == 1 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
        v10 = *(struct _ERESOURCE **)(v4 + 8);
        if ( v10 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v10);
          PsLeavePriorityRegion(v12, v11);
        }
        DrvDisableDisplay((HSEMAPHORE *)v8, 0);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
      v13 = *(struct _ERESOURCE **)(v4 + 8);
      if ( v13 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v13);
        PsLeavePriorityRegion(v15, v14);
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      --*(_DWORD *)(v8 + 12);
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
      v16 = *(struct _ERESOURCE **)(v4 + 8);
      if ( v16 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v16);
        PsLeavePriorityRegion(v18, v17);
      }
      PDEVOBJ::vUnreferencePdev(&v28);
      v5 = *((_DWORD *)a1 + 5);
      ++v3;
    }
    while ( v3 < v5 );
  }
  v19 = 0;
  if ( v5 )
  {
    do
    {
      v20 = *((_QWORD *)a1 + 7 * v19 + 6);
      if ( v20 )
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
        if ( *(_DWORD *)(v20 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
          v21 = *(struct _ERESOURCE **)(v4 + 8);
          if ( v21 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v21);
            PsLeavePriorityRegion(v23, v22);
          }
          DrvEnableDisplay((HSEMAPHORE *)v20);
          EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
        v24 = *(struct _ERESOURCE **)(v4 + 8);
        if ( v24 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v24);
          PsLeavePriorityRegion(v26, v25);
        }
      }
      ++v19;
    }
    while ( v19 < *((_DWORD *)a1 + 5) );
  }
}
