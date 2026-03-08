/*
 * XREFs of KiEntropyQueueDpc @ 0x1402F31A0
 * Callers:
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140417E70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140417FC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140418110 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x14041DE10 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14041DF70 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 35560, 0LL, 0LL, 0LL, 0);
  return result;
}
