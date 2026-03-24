/*
 * XREFs of CmpAcquireFlusherQueue @ 0x140699E58
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140322B90 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}
