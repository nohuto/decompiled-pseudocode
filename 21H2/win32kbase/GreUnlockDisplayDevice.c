/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C006FE80
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0078988 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0079000 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48));
  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion();
  }
  return result;
}
