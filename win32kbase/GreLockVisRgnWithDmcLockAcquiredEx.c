/*
 * XREFs of GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C0197570
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 120));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v1 + 120), 2);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 88));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v1 + 88), 3);
}
