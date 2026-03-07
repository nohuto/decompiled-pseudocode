void __fastcall NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(NEEDDYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( *(_BYTE *)this )
  {
    v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
    v2 = *(struct _ERESOURCE **)(v1 + 80);
    if ( v2 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v2);
      PsLeavePriorityRegion(v4, v3);
    }
  }
}
