/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140350344
 * Callers:
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x14033BADC (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1403503A0 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14038282C (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x14053B4C4 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 692) )
      KeSetEvent((PRKEVENT)(a1 + 696), 0, 0);
    if ( *(_DWORD *)(a1 + 720) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 952)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 944), 18);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 952));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 728) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
}
