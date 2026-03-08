/*
 * XREFs of MiCheckControlArea @ 0x140334D00
 * Callers:
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiUnmapViewSubsections @ 0x1402DADD4 (MiUnmapViewSubsections.c)
 *     MiReleaseFaultCharges @ 0x1402F8018 (MiReleaseFaultCharges.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiDereferenceControlAreaBySection @ 0x1403349EC (MiDereferenceControlAreaBySection.c)
 *     MiFlushRelease @ 0x140334AC0 (MiFlushRelease.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x14062CB5C (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiCleanSection @ 0x14020165C (MiCleanSection.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiClearFilePointer @ 0x1402E9840 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x1402E9DE8 (MiImageUnused.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     MiShouldTrimUnusedSegments @ 0x1404635C8 (MiShouldTrimUnusedSegments.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // ebx
  bool v5; // zf
  __int16 v6; // cx
  BOOL v7; // r15d
  __int64 *v8; // r14
  __int64 inserted; // rdi
  __int64 v10; // r13
  int v11; // eax
  int v12; // ecx
  KIRQL v14; // al
  __int64 *v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  struct _KEVENT **i; // rbx
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __int128 v30; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a2;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64) == 0LL;
  v6 = *(_WORD *)(a1 + 60);
  v7 = !v5;
  v29 = -1LL;
  v8 = 0LL;
  inserted = 0LL;
  v30 = 0LL;
  v10 = *(_QWORD *)(qword_140C67048 + 8LL * (v6 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      else
        *(_DWORD *)(a1 + 72) = 0;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v5 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v3);
      if ( v8 )
      {
        do
        {
          v15 = (__int64 *)*v8;
          KeSignalGate((__int64)(v8 + 2), 1u);
          v8 = v15;
        }
        while ( v15 );
      }
      if ( qword_140C6F568 >= 9 * (qword_140C6F658 / 0xAuLL) )
      {
        if ( (unsigned int)MiShouldTrimUnusedSegments(qword_140C6F658, qword_140C6F658 / 0xAuLL, qword_140C6F568) )
        {
          for ( i = (struct _KEVENT **)PsGetNextPartition(0LL); i; i = (struct _KEVENT **)PsGetNextPartition(i) )
          {
            if ( (*i)[73].Header.WaitListHead.Flink )
              KeSetEvent(*i + 61, 0, 0);
          }
        }
      }
      goto LABEL_21;
    }
    v4 = 4;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (v11 & 0x40000) != 0 )
      {
        v4 = 1;
      }
      else
      {
        if ( (v11 & 0x20020) != 0x20020 )
          inserted = MiInsertUnusedSegment(a1);
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
          MiImageUnused(a1, 1, (__int64)&v29);
      }
      v12 = *(_DWORD *)(a1 + 56);
      if ( (v12 & 0x20020) == 0x20020 )
      {
        *(_QWORD *)(a1 + 40) = 1LL;
        *(_DWORD *)(a1 + 56) = v12 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v5 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        __writecr8(v3);
        MiPurgeImageSection(a1);
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        LOBYTE(v3) = v14;
        v5 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v5 || *(_QWORD *)(a1 + 24) )
        {
          v4 = 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( !v4 )
          {
            inserted = MiInsertUnusedSegment(a1);
            v4 = 4;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v4 = 2;
          MiClearFilePointer(a1);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v11 | 1;
      v4 = 2;
      MiClearFilePointer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v4 = 2;
  }
  if ( v4 >= 4 )
  {
LABEL_4:
    v8 = MiBuildWakeList(a1, 3);
    v4 &= ~4u;
  }
  if ( !v4 )
    goto LABEL_16;
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    MiCleanSection(a1, (unsigned __int8)v3, 0);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v5 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8((unsigned __int8)v3);
    MiSegmentDelete(a1);
  }
LABEL_21:
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v10, v7, inserted);
  return MiReturnImageBase(&v29);
}
