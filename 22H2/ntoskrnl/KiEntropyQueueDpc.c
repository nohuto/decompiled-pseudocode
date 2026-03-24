/*
 * XREFs of KiEntropyQueueDpc @ 0x14031D4A0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FF030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FF210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FF4B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x140404320 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404480 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 34536, 0LL, 0LL, 0LL, 0);
  return result;
}
