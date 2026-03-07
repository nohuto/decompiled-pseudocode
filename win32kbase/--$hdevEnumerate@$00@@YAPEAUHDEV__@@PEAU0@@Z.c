struct PDEV *__fastcall hdevEnumerate<1>(struct PDEV *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rcx
  struct PDEV *v6; // rbx
  PDEV *v7; // rbp
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8), 16);
  if ( a1 )
  {
    v6 = *(struct PDEV **)a1;
    v7 = a1;
    v15 = a1;
  }
  else
  {
    v6 = *(struct PDEV **)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 6080LL);
    v15 = v6;
    v7 = v6;
  }
  while ( v6 )
  {
    if ( (*((_DWORD *)v6 + 10) & 1) != 0 )
    {
      ++*((_DWORD *)v6 + 2);
      TrackObjectReferenceIncrement(
        1LL,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v6 + 440));
      break;
    }
    v6 = *(struct PDEV **)v6;
  }
  if ( !a1 )
    goto LABEL_11;
  if ( *((_DWORD *)v7 + 2) > 1u )
  {
    PDEV::DecrementClientReferenceCount(v7);
LABEL_11:
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
