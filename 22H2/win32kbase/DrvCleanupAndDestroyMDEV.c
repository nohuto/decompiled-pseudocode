/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1C00A074C
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     MultiUserCleanupDCs @ 0x1C00A08D4 (MultiUserCleanupDCs.c)
 *     DrvDestroyMDEV @ 0x1C00A09A8 (DrvDestroyMDEV.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rcx
  HSEMAPHORE *v3; // rdi
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v9; // rcx

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
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemGreLock", (int)v3[15]);
  v5 = (struct _ERESOURCE *)v3[15];
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion();
  }
  EngAcquireSemaphore(v3[1]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", (int)v3[1], 16);
  SGDGetSessionState(v6);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", (int)v3[1]);
  v7 = (struct _ERESOURCE *)v3[1];
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", (int)v3[10]);
  v9 = (struct _ERESOURCE *)v3[10];
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    return PsLeavePriorityRegion();
  }
  return result;
}
