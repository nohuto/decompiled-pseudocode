/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x1405AF2FC
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942B10 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  _SLIST_ENTRY *v6; // rdi
  KSPIN_LOCK *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  _SLIST_ENTRY *v10; // rax
  __int64 v11; // rbp
  _SLIST_ENTRY *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v2 = *(_QWORD *)(a2 + 32);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v6 = (_SLIST_ENTRY *)(*(__int64 (**)(void))(v2 + 48))();
    if ( v6 )
    {
      v7 = (KSPIN_LOCK *)(a1 + 264);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
      if ( *(_DWORD *)(a2 + 40) && (v9 = *(_DWORD *)(a2 + 52), v9 < *(_DWORD *)(a2 + 56)) )
      {
        *(_DWORD *)(a2 + 52) = v9 + 1;
        v10 = (_SLIST_ENTRY *)((char *)v6 + 24);
        ++*(_DWORD *)(v2 + 72);
        v11 = v2 + 32;
        v12 = *(_SLIST_ENTRY **)(v11 + 8);
        if ( v12->Next != (_SLIST_ENTRY *)v11 )
          __fastfail(3u);
        v6[2].Next = v12;
        v10->Next = (_SLIST_ENTRY *)v11;
        v12->Next = v10;
        *(_QWORD *)(v11 + 8) = v10;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, v6);
        v6 = 0LL;
        v5 = 0;
      }
      else
      {
        v5 = 255;
      }
      KxReleaseSpinLock(v7);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v5;
}
