/*
 * XREFs of GreLockPointer @ 0x1C00BEAB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 56));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 56), 4);
}
