/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1405BC654
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403ADDE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BC49C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmIoRequestComplete @ 0x1405CB06C (SmIoRequestComplete.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  int v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  int v18; // ebp
  __int64 *v19; // rcx
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rdx
  unsigned __int64 *v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8

  v4 = (__int64 **)(a1 + 96);
  v6 = (volatile LONG *)(a1 + 112);
  v7 = a3;
  if ( a3 == 0xFF )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  while ( 1 )
  {
    v9 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v9 = 4;
    v10 = v4[1];
    if ( v10 == (__int64 *)v4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v11 == v10 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v7 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( !v11 )
      break;
    v17 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
            a2,
            (int)v11 + 24,
            1,
            *(_DWORD *)(v11[13] + 6016) & 0x3FF,
            (__int64)v11,
            v11[4],
            v9);
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741739 )
      {
        v22 = ExAcquireSpinLockExclusive(v6);
        v23 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v11 = (unsigned __int64)*v4 | *(_DWORD *)v11 & 7;
        v24 = (unsigned __int64 *)v4[1];
        *v4 = v11;
        if ( v24 == (unsigned __int64 *)v4 )
        {
          v4[1] = v11;
          v24 = (unsigned __int64 *)v11;
        }
        *v24 = *(_DWORD *)v24 & 7 | (unsigned __int64)(8 * v23);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        if ( KiIrqlFlags )
        {
          v25 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v28 = v26->SchedulerAssist;
            v16 = (v27 & v28[5]) == 0;
            v28[5] &= v27;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v26);
          }
        }
        __writecr8(v22);
        return;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v11[2] + 24LL), *(PMDL *)v11[2]);
      v19 = (__int64 *)v11[4];
      v20 = *v19;
      *(_DWORD *)v19 = v18;
      *(_QWORD *)(v11[4] + 8) = 0LL;
      SmIoRequestComplete(v19, v11, v20, v11[4]);
      v21 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v11[13] + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v21 + 1);
      ExFreePoolWithTag(v11, 0);
    }
    v7 = ExAcquireSpinLockExclusive(v6);
  }
}
