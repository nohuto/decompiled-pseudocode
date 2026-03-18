/*
 * XREFs of GreLockSprite @ 0x1C001CC90
 * Callers:
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001CB24 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockSprite(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 112));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v1 + 112), 5LL);
}
