__int64 __fastcall hdevEnumerate<0>(PDEV *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  PDEV *v7; // rbp
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8), 16);
  if ( this )
  {
    v6 = *(_QWORD *)this;
    v7 = this;
    v15 = this;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 6080LL);
    v15 = (struct PDEV *)v6;
    v7 = (PDEV *)v6;
  }
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 8);
    TrackObjectReferenceIncrement(
      1LL,
      *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 3520));
  }
  if ( !this )
    goto LABEL_10;
  if ( *((_DWORD *)v7 + 2) > 1u )
  {
    PDEV::DecrementClientReferenceCount(v7);
LABEL_10:
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8));
    v8 = *(struct _ERESOURCE **)(v3 + 8);
    if ( v8 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion(v10, v9);
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8));
  v12 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v14, v13);
  }
  PDEVOBJ::vUnreferencePdev(&v15);
  return v6;
}
