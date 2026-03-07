__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v1 + 88));
  v2 = *(struct _ERESOURCE **)(v1 + 88);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion(v4, v3);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v1 + 120));
  v6 = *(struct _ERESOURCE **)(v1 + 120);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    return PsLeavePriorityRegion(v8, v7);
  }
  return result;
}
