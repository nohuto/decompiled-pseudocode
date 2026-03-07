__int64 __fastcall DrvDisableMDEV(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  HSEMAPHORE *v8; // rdi
  int v9; // eax
  __int64 v10; // rbp
  struct _ERESOURCE *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  WdLogSingleEntry2(4LL, a1);
  v7 = *(_QWORD *)a1;
  v17 = *(_QWORD *)a1;
  if ( a2 )
    GreSuspendDirectDraw(v7, 0LL);
  v8 = *(HSEMAPHORE **)(SGDGetSessionState(v6) + 24);
  EngAcquireSemaphore(v8[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", v8[10], 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 56));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v7 + 56), 4LL);
  EngAcquireSemaphore(v8[14]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", v8[14], 5LL);
  EngAcquireSemaphore(v8[17]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", v8[17], 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 48), 11LL);
  v9 = DrvDisableMDEVChildren(a1, a2, a3);
  v10 = v9;
  if ( v9 && a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v17, 1);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 48));
  v11 = *(struct _ERESOURCE **)(v7 + 48);
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT", v8[17]);
  v12 = (struct _ERESOURCE *)v8[17];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", v8[14]);
  v13 = (struct _ERESOURCE *)v8[14];
  if ( v13 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v13);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v7 + 56));
  v14 = *(struct _ERESOURCE **)(v7 + 56);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", v8[10]);
  v15 = (struct _ERESOURCE *)v8[10];
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  if ( !(_DWORD)v10 && a2 )
    GreIncrementDisplaySettingsUniqueness();
  WdLogSingleEntry1(5LL, v10);
  return (unsigned int)v10;
}
