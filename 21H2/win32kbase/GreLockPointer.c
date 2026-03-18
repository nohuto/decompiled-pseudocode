/*
 * XREFs of GreLockPointer @ 0x1C00C1910
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 56));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 56), 4);
}
