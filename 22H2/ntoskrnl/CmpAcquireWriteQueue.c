/*
 * XREFs of CmpAcquireWriteQueue @ 0x140322B90
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x140699E3C (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x140699E58 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079F008 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 26) |= 1u;
  return result;
}
