/*
 * XREFs of MiPrefetchPreallocatePages @ 0x14062FD08
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14063008C (MiPrefetchReleasePreallocatedPages.c)
 */

void __fastcall MiPrefetchPreallocatePages(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r10
  __int64 v24; // rdx
  __int64 LargePage; // rax
  unsigned __int8 v26; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v31 = 0;
  v6 = a6;
  if ( a4 != 1 && (*(_BYTE *)(a4 + 184) & 7) == 0 )
  {
    v10 = *a1;
    v11 = a6 & 0xFFFFFFFFFFE00000uLL;
    if ( v10 && v11 == v10 )
      goto LABEL_45;
    if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v11 == a6 && *a5 + a5[1] - a6 >= 0x200000 )
    {
      *a1 = 0LL;
      if ( v6 >= a1[3] && v6 <= a1[4] )
      {
LABEL_16:
        v18 = *(_QWORD *)(a2 + 88);
        if ( v18 )
        {
          if ( v18 == a1[1]
            && *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4)) + 2) == *((_DWORD *)a1 + 10) - 1 )
          {
            *a1 = v6;
            goto LABEL_45;
          }
          MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
        }
        a1[1] = 0LL;
        if ( *((_DWORD *)a1 + 4)
          || (v19 = MiAcquireNonPagedResources(a3, 0x200uLL, 1024LL, 6u), (*((_DWORD *)a1 + 4) = v19 >= 0) != 0) )
        {
          v20 = *((_DWORD *)a1 + 10);
          if ( v20 )
            v21 = v20 - 1;
          else
            v21 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v24) = 4;
            else
              v24 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v24;
          }
          LargePage = MiGetLargePage(a3, v6, 1, v21, 1u, 4, 0LL);
          *(_QWORD *)(a2 + 88) = LargePage;
          if ( LargePage )
            MiConvertEntireLargePageToSmall(LargePage, 1, 2, 1, 0LL, 0LL, 0LL);
          if ( KiIrqlFlags )
          {
            v26 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v28 = CurrentPrcb->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v30 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          a1[1] = *(_QWORD *)(a2 + 88);
          *a1 = v6;
        }
        goto LABEL_45;
      }
      v12 = MiObtainReferencedVadEx(v6, 6, &v31);
      v13 = v12;
      if ( !v12 )
        goto LABEL_45;
      v14 = *(_DWORD *)(v12 + 48);
      if ( (v14 & 0x70) == 0
        && (v14 & 0x200000) != 0
        && (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
         + 1
         - v6 >= 0x200000
        && ((v14 >> 12) & 0x7F) != 0
        && (unsigned int)MiProtectionToCacheAttribute((v14 >> 7) & 0x1F) == 1 )
      {
        v17 = *(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32);
        a1[4] = v16;
        a1[3] = v17 << 12;
        *((_DWORD *)a1 + 10) = v15;
        MiUnlockAndDereferenceVadShared((PVOID)v13);
        goto LABEL_16;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v13);
    }
    else
    {
      *a1 = 0LL;
    }
LABEL_45:
    if ( !*a1 )
      MiPrefetchReleasePreallocatedPages(a1, a2, a3, 0LL);
  }
}
