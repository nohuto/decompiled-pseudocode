/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B07D0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A14B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1405BC2F8 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(__int64 *P)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8

  v1 = *P;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v1 + 48), WrKernel, 0, 0, 0LL);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    KeResetEvent((PRKEVENT)(v1 + 48));
    v4 = *(_DWORD *)(v1 + 88);
    if ( !v4 )
      break;
    v5 = *(unsigned int *)(v1 + 92);
    if ( v4 <= (unsigned int)v5 || **(_QWORD **)(v1 + 16) >> 1 <= v5 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v10 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v3);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( KiIrqlFlags )
      {
        v6 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v6 >= 2u )
        {
          v7 = KeGetCurrentPrcb();
          v8 = v7->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      __writecr8(v3);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v1, P[1], 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v18 = v16->SchedulerAssist;
      v10 = (v17 & v18[5]) == 0;
      v18[5] &= v17;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  __writecr8(v3);
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(P);
}
