/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x140699E3C
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140322B90 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}
