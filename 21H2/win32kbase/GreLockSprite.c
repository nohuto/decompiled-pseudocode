/*
 * XREFs of GreLockSprite @ 0x1C0030D20
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockSprite()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
}
