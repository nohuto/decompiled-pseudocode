/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C0194
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  volatile signed __int64 *v2; // r14
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r9
  unsigned __int64 *v9; // rdi
  int v10; // eax
  unsigned __int64 *v11; // rcx
  unsigned __int64 *v12; // rdx
  __int64 v13; // rax
  KPRIORITY v14; // edi
  __int64 v15; // rax
  int v16; // edx
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rdx
  __int64 i; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v25; // edx
  bool v26; // zf

  *a2 = 0;
  v2 = (volatile signed __int64 *)(a1 + 6040);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v6 = (unsigned __int64 *)(a1 + 6080);
  v7 = v5;
  v8 = *(unsigned __int64 **)(a1 + 6088);
  if ( v8 == (unsigned __int64 *)(a1 + 6080) )
  {
    v11 = (unsigned __int64 *)(a1 + 6048);
    v12 = *(unsigned __int64 **)(a1 + 6056);
    if ( v12 == (unsigned __int64 *)(a1 + 6048) )
    {
      if ( !*(_DWORD *)(a1 + 6104) )
      {
        v13 = *(unsigned __int8 *)(a1 + 6022);
        v14 = (_DWORD)v13 == 4
            ? *(_DWORD *)(a1 + 6736)
            : *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v13);
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > v14 )
        {
          v15 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v15 == 4 )
            v16 = *(_DWORD *)(a1 + 6736);
          else
            v16 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                  + v15);
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v16);
        }
      }
      v17 = (unsigned __int64 *)(a1 + 6064);
      v18 = *(unsigned __int64 **)(a1 + 6072);
      if ( v18 == (unsigned __int64 *)(a1 + 6064) )
      {
        v9 = 0LL;
        goto LABEL_38;
      }
      v9 = (unsigned __int64 *)*v17;
      *v17 = *(_QWORD *)*v17 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v9 == v18 )
      {
        *v17 = 0LL;
        *(_QWORD *)(a1 + 6072) = a1 + 6064;
      }
      else
      {
        *v18 = *(_DWORD *)v18 & 7 | (8 * ((*v18 >> 3) - 1));
      }
      if ( !--*(_DWORD *)(a1 + 6100)
        && (*(_BYTE *)v9 & 7) == 6
        && *(_BYTE *)(a1 + 6022)
        && KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > 4 )
      {
        KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), 4);
      }
    }
    else
    {
      v9 = (unsigned __int64 *)*v11;
      *v11 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v9 == v12 )
      {
        *v11 = 0LL;
        *(_QWORD *)(a1 + 6056) = a1 + 6048;
      }
      else
      {
        *v12 = *(_DWORD *)v12 & 7 | (8 * ((*v12 >> 3) - 1));
      }
      --*(_DWORD *)(a1 + 6096);
    }
  }
  else
  {
    v9 = (unsigned __int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *(_DWORD *)v8 & 7 | (8 * ((*v8 >> 3) - 1));
    }
    v10 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v10;
  }
  if ( !v9 )
  {
LABEL_38:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_39;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v9 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v9 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v20 = *(_QWORD *)(i + 8);
    v21 = *(_QWORD *)(a1 + 6120);
    if ( v21 > v20 )
    {
      *(_QWORD *)(a1 + 6120) = v21 - v20;
      goto LABEL_39;
    }
    goto LABEL_38;
  }
LABEL_39:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v26 = (v25 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v25;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v9;
}
