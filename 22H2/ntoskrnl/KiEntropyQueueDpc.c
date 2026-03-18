/*
 * XREFs of KiEntropyQueueDpc @ 0x14035E1A0
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420200 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404204A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 35560, 0LL, 0LL, 0LL, 0);
  return result;
}
