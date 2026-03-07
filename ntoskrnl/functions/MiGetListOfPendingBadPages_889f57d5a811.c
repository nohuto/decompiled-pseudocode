__int64 __fastcall MiGetListOfPendingBadPages(__int64 a1)
{
  unsigned __int64 v2; // rdi
  SIZE_T v3; // rdx
  _QWORD *Pool; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int *v13; // r15
  unsigned __int64 v14; // rbp
  __int64 v15; // r14
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  unsigned int i; // ebp
  __int64 v22; // r12
  __int64 v23; // r13
  unsigned __int64 j; // r14
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v33; // rax
  _QWORD *v35; // rax

  if ( !qword_140C66F88 )
    return 0LL;
  v2 = qword_140C66F88 + qword_140C66FE8;
  if ( qword_140C66F88 + qword_140C66FE8 >= (unsigned __int64)qword_140C66F88 )
  {
    while ( 1 )
    {
      if ( !v2 )
        return 0LL;
      if ( v2 > 0x1FFFFFFFFFFFFFFFLL
        || (v3 = 8 * v2 + 32, v3 <= 8 * v2)
        || (Pool = MiAllocatePool(64, v3, 0x61426D4Du), (v5 = Pool) == 0LL) )
      {
        *(_DWORD *)(a1 + 16) = -1073741670;
        return 3221225626LL;
      }
      v6 = (__int64)(Pool + 4);
      Pool[3] = Pool + 4;
      if ( qword_140C66F98 )
        break;
      v7 = ExAcquireSpinLockShared(&dword_140C66F90);
      if ( !qword_140C66F98 && v2 >= qword_140C66F88 + qword_140C66FE8 )
      {
        v5[2] += MiEnumerateBadHugeRangePages(v6, v2, 2);
        v25 = (_QWORD *)qword_140C66F80;
        v26 = 0LL;
        while ( v25 )
        {
          v26 = v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v26 )
        {
          *(_QWORD *)(v6 + 8LL * v5[2]) = 0xAAAAAAAAAAAAAAABuLL * ((v26[3] + 0x220000000000LL) >> 4);
          v27 = v26;
          ++v5[2];
          v28 = (_QWORD *)v26[1];
          if ( v28 )
          {
            do
            {
              v26 = v28;
              v28 = (_QWORD *)*v28;
            }
            while ( v28 );
          }
          else
          {
            while ( 1 )
            {
              v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v26 || (_QWORD *)*v26 == v27 )
                break;
              v27 = v26;
            }
          }
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v7);
LABEL_61:
        v33 = v5[2];
        if ( v33 )
        {
          *(_QWORD *)(a1 + 24) += v33;
          v35 = *(_QWORD **)(a1 + 8);
          if ( *v35 != a1 )
            __fastfail(3u);
          *v5 = a1;
          v5[1] = v35;
          *v35 = v5;
          *(_QWORD *)(a1 + 8) = v5;
        }
        else
        {
          ExFreePoolWithTag(v5, 0);
        }
        return 0LL;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
      if ( KiIrqlFlags )
      {
        v8 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = v9->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v9);
        }
      }
      __writecr8(v7);
      ExFreePoolWithTag(v5, 0);
LABEL_38:
      v2 = qword_140C66F88 + qword_140C66FE8;
      if ( qword_140C66F88 + qword_140C66FE8 < (unsigned __int64)qword_140C66F88 )
        return 3221225626LL;
    }
    v13 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 0);
    if ( !v13 )
    {
      *(_DWORD *)(a1 + 16) = -1073741670;
      ExFreePoolWithTag(v5, 0);
      return *(unsigned int *)(a1 + 16);
    }
    v14 = ExAcquireSpinLockShared(&dword_140C66F90);
    v15 = MiEnumerateBadHugeRangePages(v6, v2, 2);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    __writecr8(v14);
    v20 = v15 + v5[2];
    v5[2] = v20;
    if ( v20 != v2 )
    {
      for ( i = 0; i < *v13; ++i )
      {
        v22 = *(_QWORD *)&v13[4 * i + 4];
        v23 = *(_QWORD *)&v13[4 * i + 6];
        for ( j = 48 * v22 - 0x220000000000LL; v23; --v23 )
        {
          if ( (*(_BYTE *)(j + 35) & 0x40) != 0 )
          {
            if ( MiCheckLostBadPageNode(j) )
            {
              ExFreePoolWithTag(v5, 0);
              MiDereferencePageRunsEx((__int64)v13, 1);
              goto LABEL_38;
            }
            v5[v5[2]++ + 4] = v22;
            if ( v5[2] == v2 )
            {
              i = *v13 - 1;
              break;
            }
          }
          ++v22;
          j += 48LL;
        }
      }
      v5[2] = MiSortPageFramesRemoveDuplicates(v5 + 4, v5[2]);
    }
    MiDereferencePageRunsEx((__int64)v13, 1);
    goto LABEL_61;
  }
  return 3221225626LL;
}
