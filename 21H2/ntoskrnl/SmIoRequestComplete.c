/*
 * XREFs of SmIoRequestComplete @ 0x14028BB04
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14028A410 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiStoreFreeWriteSupport @ 0x14028BDB8 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14028BDF0 (MiStoreModifiedWriteDereference.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1405548C8 (MiStoreLogWriteCompleteFailure.c)
 */

LONG __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  v4 = a3 | 0x8000000000000000uLL;
  v5 = *(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38);
  v6 = *(_DWORD *)((a3 | 0x8000000000000000uLL) + 0x10);
  v7 = *(_QWORD *)(v5 + 192);
  if ( v6 < 0 )
  {
    MiStoreLogWriteCompleteFailure((unsigned int)v6);
    v9 = 48LL * *(_QWORD *)(v4 + 112) - 0x58000000000LL;
    v10 = (unsigned __int8)MiLockPageInline(v9);
    *(_BYTE *)(v9 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    *(_DWORD *)(v7 + 1172) = 32;
    v5 = *(_QWORD *)(v4 + 56);
  }
  MiStoreModifiedWriteDereference(v5);
  return MiStoreFreeWriteSupport((PSLIST_ENTRY)v4);
}
