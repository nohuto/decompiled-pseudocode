/*
 * XREFs of CmpAcquireWriteQueue @ 0x140244090
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire(a1, 0LL, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 18) = 1;
  return result;
}
