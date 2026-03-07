__int64 __fastcall GreUnlockSprite(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v1 + 112));
  v3 = *(struct _ERESOURCE **)(v1 + 112);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion(v5, v4);
  }
  return result;
}
