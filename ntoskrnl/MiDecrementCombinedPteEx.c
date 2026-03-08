/*
 * XREFs of MiDecrementCombinedPteEx @ 0x14029DAF4
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiConvertPrivateToProto @ 0x14034A20C (MiConvertPrivateToProto.c)
 * Callees:
 *     MiDecrementCloneBlock @ 0x14029DC04 (MiDecrementCloneBlock.c)
 *     MiFreeCombineBlock @ 0x14029DDE0 (MiFreeCombineBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogCombinedPteDelete @ 0x14065109C (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPteEx(int a1, __int64 a2, int a3)
{
  volatile signed __int32 *v4; // r9
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v7; // esi
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  v4 = *(volatile signed __int32 **)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v5 = *(_QWORD *)v4;
  _InterlockedExchangeAdd(v4 + 98, 0xFFFFFFFF);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v7 = MiDecrementCloneBlock(v5, a1, a2, a3, (__int64)&v16);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v16 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
    MiFreeCombineBlock(a2 - 32);
  }
  return v7;
}
