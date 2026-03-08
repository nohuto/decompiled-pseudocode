/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C001F8B0
 * Callers:
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0019320 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001D468 (DrvNotifyModeChangeStartStop.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48));
  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion(v5, v4);
  }
  return result;
}
