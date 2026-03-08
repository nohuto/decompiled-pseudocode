/*
 * XREFs of GreLockSprite @ 0x1C001F9A0
 * Callers:
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockSprite(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 112));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v1 + 112), 5LL);
}
