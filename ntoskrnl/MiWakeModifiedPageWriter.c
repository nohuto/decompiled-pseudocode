/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14063982C
 * Callers:
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x140360B80 (MiAdjustModifiedPageLoad.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x1406378D4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 732) )
      KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
    if ( *(_DWORD *)(a1 + 760) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 984), 18);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 768) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
}
