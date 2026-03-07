__int64 __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  _QWORD *v10; // rbx
  struct _ERESOURCE *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    v5 = hdevEnumerate<1>(i);
    v7 = v5;
    if ( !v5 )
      break;
    v8 = (*(_DWORD *)(v5 + 40) & 0x20400) == 0;
    v16 = v5;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v5 + 2552);
      if ( *(_QWORD *)(v9 + 232) == a1 && *(_DWORD *)(v9 + 248) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v16,
          (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2528) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  v10 = *(_QWORD **)(SGDGetSessionState(v6) + 24);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", v10[9]);
  v11 = (struct _ERESOURCE *)v10[9];
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", v10[11]);
  v12 = (struct _ERESOURCE *)v10[11];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", v10[15]);
  v13 = (struct _ERESOURCE *)v10[15];
  if ( v13 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v13);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", v10[10]);
  v14 = (struct _ERESOURCE *)v10[10];
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion();
  }
  return UserSessionSwitchLeaveCrit();
}
