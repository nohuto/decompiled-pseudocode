__int64 __fastcall ldevUnloadImage(_QWORD *a1)
{
  __int64 v2; // rdi
  void (*v4)(void); // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  void *v14; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16LL);
  if ( (*((_DWORD *)a1 + 7))-- == 1 )
  {
    WdLogSingleEntry0(5LL);
    v4 = (void (*)(void))a1[16];
    if ( v4 )
      v4();
    v5 = a1[2];
    if ( v5 && (a1[4] & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v5 + 24), 8uLL);
    if ( *a1 )
      *(_QWORD *)(*a1 + 8LL) = a1[1];
    v6 = (_QWORD *)a1[1];
    v7 = *a1;
    if ( v6 )
      *v6 = v7;
    else
      *(_QWORD *)(v2 + 1888) = v7;
    v8 = a1[2];
    if ( v8 )
    {
      v13 = *(void **)(v8 + 8);
      if ( v13 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      v14 = (void *)a1[2];
      if ( v14 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
  else
  {
    WdLogSingleEntry0(5LL);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v10 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    return PsLeavePriorityRegion(v12, v11);
  }
  return result;
}
