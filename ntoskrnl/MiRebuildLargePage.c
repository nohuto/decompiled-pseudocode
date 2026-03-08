/*
 * XREFs of MiRebuildLargePage @ 0x140466288
 * Callers:
 *     MiRebuildLargePages @ 0x14065B810 (MiRebuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x140A42970 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140A43304 (MmBuildLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReferencePageRuns @ 0x1402EB520 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiNodeFreeZeroPages @ 0x14034EAD4 (MiNodeFreeZeroPages.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiGetNodeStandbyPageCount @ 0x1404648CA (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x140466112 (MiFindRebuildCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int8 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned int *v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  unsigned __int64 inserted; // rdi
  __int64 v24; // r8
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  struct _KPRCB *v30; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  unsigned int v33; // r14d
  unsigned __int64 v34; // rdi
  unsigned int v35; // esi
  _QWORD *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // r9
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  int v45; // r8d
  __int64 RebuildCandidate; // [rsp+78h] [rbp-61h] BYREF
  int v48; // [rsp+80h] [rbp-59h]
  unsigned __int64 v49; // [rsp+88h] [rbp-51h]
  unsigned int *v50; // [rsp+90h] [rbp-49h]
  int v51; // [rsp+98h] [rbp-41h] BYREF
  _QWORD *v52; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v53; // [rsp+A8h] [rbp-31h]
  __int128 v54; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-9h]
  unsigned __int8 *v57; // [rsp+D8h] [rbp-1h]
  int v58; // [rsp+138h] [rbp+5Fh]

  RebuildCandidate = 0LL;
  v5 = 0LL;
  v6 = (unsigned int)MmNumberOfChannels;
  v8 = a2;
  v9 = 0LL;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v54 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v48 = MmNumberOfChannels;
  v11 = MiReferencePageRuns(a1, 1u);
  v12 = qword_140C6F348;
  v13 = MiLargePageSizes[v10];
  v14 = (unsigned int *)v11;
  v15 = 0;
  v50 = (unsigned int *)v11;
  v16 = *(_QWORD *)(a1 + 16) + 25408 * v8;
  v52 = (_QWORD *)v16;
  v53 = qword_140C6F348;
  v58 = 0;
  if ( (unsigned int)v6 > 1 )
  {
    v9 = (unsigned __int8 *)(v16 + 23033);
    v15 = *(unsigned __int8 *)(v16 + 23033);
    v58 = v15;
  }
  v57 = &v9[v6];
  if ( v9 != &v9[v6] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          goto LABEL_59;
        RebuildCandidate = MiFindRebuildCandidate(a1, v8, v15, v13, v12, v14, a5);
        if ( RebuildCandidate != -1 )
          break;
LABEL_63:
        ++v9;
        if ( (unsigned int)v6 <= 1 )
        {
          v15 = v58;
        }
        else
        {
          v15 = *v9;
          v58 = v15;
        }
        v14 = v50;
        v12 = v53;
        if ( v9 == v57 )
          goto LABEL_59;
      }
      v17 = 1082130432;
      if ( v13 == 512 )
      {
        v17 = 1115684864;
      }
      else if ( v13 == 16 )
      {
        v17 = 1098907648;
      }
      v18 = v17 | 0x8000000;
      if ( !a5 )
        v18 = v17;
      if ( (int)MiFindContiguousPagesEx(
                  a1,
                  RebuildCandidate,
                  RebuildCandidate + v13 - 1,
                  v13,
                  0,
                  v13,
                  1u,
                  v8,
                  v58,
                  v18,
                  0,
                  0LL,
                  &RebuildCandidate) >= 0 )
        break;
LABEL_45:
      v33 = MmNumberOfChannels;
      v34 = 0LL;
      v35 = 0;
      if ( MmNumberOfChannels )
      {
        v36 = v52;
        do
          v34 += MiNodeFreeZeroPages(v36, v35++, 0);
        while ( v35 < v33 );
        LODWORD(v8) = a2;
      }
      if ( v13 > 0x10 )
      {
        v37 = 0LL;
        v38 = a3 + 1;
        if ( (unsigned int)v38 <= 2 )
        {
          v39 = &MiLargePageSizes[v38];
          v40 = &v52[134 * (unsigned int)v38];
          v41 = (unsigned int)(3 - v38);
          do
          {
            v42 = *v40 + v40[1];
            v40 += 134;
            v43 = *v39++ * v42;
            v37 += v43;
            --v41;
          }
          while ( v41 );
        }
        v34 += v37;
      }
      LODWORD(v6) = v48;
      if ( v34 >= 0x1000 )
      {
        v5 = v49;
      }
      else
      {
        v44 = 0;
        if ( v48 )
        {
          do
          {
            v34 += MiGetNodeStandbyPageCount(a1, v8, v44);
            v44 = v45 + 1;
          }
          while ( v44 < (unsigned int)v6 );
        }
        v5 = v49;
        if ( v34 < a4 - v49 + 0x8000 )
        {
LABEL_58:
          v14 = v50;
          goto LABEL_59;
        }
      }
      if ( !RebuildCandidate )
        goto LABEL_63;
      v15 = v58;
      v12 = RebuildCandidate - 1;
      v14 = v50;
      v53 = RebuildCandidate - 1;
    }
    if ( v13 >= 0x200 )
      MiUpdateLargePageBitMap(a1, RebuildCandidate, v13, 0, 1);
    MiConvertSmallPageRangeToLarge(RebuildCandidate, a3);
    v19 = 48 * RebuildCandidate - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v22) = 4;
      else
        v22 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v22;
    }
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    v55 = 0LL;
    *(_QWORD *)&v54 = RebuildCandidate;
    *((_QWORD *)&v54 + 1) = 1LL;
    LOBYTE(v55) = 2;
    inserted = MiInsertLargePageInNodeList((__int64)&v54);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v27 = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v28 & v27[5]) == 0;
        v24 = (unsigned int)v28 & v27[5];
        v27[5] = v24;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(a1, inserted, v24);
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      v30 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v30->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( inserted + CachedResidentAvailable <= 0x100 && inserted < 0x80000 )
        {
          while ( 1 )
          {
            v32 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v30->CachedResidentAvailable,
                    inserted + CachedResidentAvailable,
                    CachedResidentAvailable);
            v29 = (_DWORD)CachedResidentAvailable == v32;
            LODWORD(CachedResidentAvailable) = v32;
            if ( v29 )
              break;
            if ( v32 == -1 || inserted + v32 > 0x100 )
              goto LABEL_39;
          }
LABEL_44:
          v5 += v13;
          v49 = v5;
          if ( v5 >= a4 )
            goto LABEL_58;
          goto LABEL_45;
        }
LABEL_39:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v30->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          inserted += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( inserted )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), inserted);
    goto LABEL_44;
  }
LABEL_59:
  MiDereferencePageRunsEx((__int64)v14, 1);
  return v5;
}
