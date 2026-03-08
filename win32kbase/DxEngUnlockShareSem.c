/*
 * XREFs of DxEngUnlockShareSem @ 0x1C01961D0
 * Callers:
 *     ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C0196160 (-W32kReleaseDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall DxEngUnlockShareSem(__int64 a1)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
  v2 = *(struct _ERESOURCE **)(v1 + 80);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion(v4, v3);
  }
  return 1LL;
}
