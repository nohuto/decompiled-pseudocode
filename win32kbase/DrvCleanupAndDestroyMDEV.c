__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rcx
  HSEMAPHORE *v3; // rdi
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  MultiUserCleanupDCs();
  v3 = *(HSEMAPHORE **)(SGDGetSessionState(v2) + 24);
  EngAcquireSemaphore(v3[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", (int)v3[10], 1);
  EngAcquireSemaphore(v3[15]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemGreLock", (int)v3[15], 2);
  EngAcquireSemaphore(v3[14]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemSprite", (int)v3[14], 5);
  DrvDestroyMDEV(a1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemSprite", (int)v3[14]);
  v4 = (struct _ERESOURCE *)v3[14];
  if ( v4 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion(v6, v5);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemGreLock", (int)v3[15]);
  v7 = (struct _ERESOURCE *)v3[15];
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion(v9, v8);
  }
  EngAcquireSemaphore(v3[1]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", (int)v3[1], 16);
  SGDGetSessionState(v10);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", (int)v3[1]);
  v11 = (struct _ERESOURCE *)v3[1];
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion(v13, v12);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", (int)v3[10]);
  v15 = (struct _ERESOURCE *)v3[10];
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    return PsLeavePriorityRegion(v17, v16);
  }
  return result;
}
