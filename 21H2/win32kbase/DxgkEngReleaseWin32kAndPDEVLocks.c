/*
 * XREFs of DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0079000
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C006FE80 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0078B50 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2, int a3)
{
  struct PDEV **i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE v16; // rcx
  __int64 v17; // rcx
  struct PDEV *v18; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV **)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v18 = v6;
    v8 = *((_DWORD *)v6 + 10);
    if ( (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      v9 = *(_QWORD *)(v7 + 2552);
      if ( *(_QWORD *)(v9 + 240) == a1 && *(_DWORD *)(v9 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v18,
          (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2528) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v12);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v16 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v17);
  }
  UserSessionSwitchLeaveCrit((__int64)v16, v13, v14, v15);
}
