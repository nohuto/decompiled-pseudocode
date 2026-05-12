/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x1C00158F8
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015604 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B790 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDeleteDeviceQueueEntry @ 0x1C000AE70 (RiDeleteDeviceQueueEntry.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, int a2)
{
  KIRQL v4; // bl

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
