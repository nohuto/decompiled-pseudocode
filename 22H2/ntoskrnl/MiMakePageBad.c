/*
 * XREFs of MiMakePageBad @ 0x140563874
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140563F8C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSetPfnRemovalRequested @ 0x14054F368 (MiSetPfnRemovalRequested.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // bp
  int v6; // esi
  unsigned __int8 v7; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v7 = MiLockPageInline(a1, a2, a3, a4);
  else
    v7 = 17;
  if ( !MiIsPageOnBadList(a1) )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
    {
      MiAcquireNonPagedResources(
        *(ULONG_PTR **)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
        1uLL,
        0LL,
        1u);
      MiSetPfnRemovalRequested(a1, 1);
    }
    if ( (v4 & 2) != 0 )
      MiInsertPageInList(a1, 0x20u);
    if ( v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
    _InterlockedIncrement(&dword_140C4E7DC);
  }
}
