_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1)
{
  __int64 v2; // rdi
  HSEMAPHORE v3; // rcx
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(HSEMAPHORE *)(v2 + 3216);
  if ( v3 )
    EngAcquireSemaphore(v3);
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  v6 = *(_QWORD *)(v2 + 3216);
  if ( v6 )
  {
    result = (_QWORD *)EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.MultiUserEngAllocListLock", v6);
    v7 = *(struct _ERESOURCE **)(v2 + 3216);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      return (_QWORD *)PsLeavePriorityRegion(v9, v8);
    }
  }
  return result;
}
