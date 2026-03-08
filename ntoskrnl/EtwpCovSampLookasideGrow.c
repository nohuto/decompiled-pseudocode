/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x140601528
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A3E60 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  struct _SLIST_ENTRY *v6; // rdi
  volatile signed __int64 *v7; // r14
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
    v6 = (struct _SLIST_ENTRY *)(*(__int64 (**)(void))(v2 + 48))();
    if ( v6 )
    {
      v7 = (volatile signed __int64 *)(a1 + 632);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
      if ( *(_DWORD *)(a2 + 40) && (v9 = *(_DWORD *)(a2 + 52), v9 < *(_DWORD *)(a2 + 56)) )
      {
        *(_DWORD *)(a2 + 52) = v9 + 1;
        v10 = (struct _SLIST_ENTRY *)((char *)v6 + 24);
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
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
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
