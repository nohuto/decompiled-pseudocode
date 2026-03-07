void __fastcall CcQueueLazyWriteScanThreadForVolume(_QWORD *StartContext)
{
  __int64 v1; // r13
  _BYTE *v2; // r12
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  _BYTE *v9; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  PSLIST_ENTRY v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE WaitBlockArray_8; // [rsp+48h] [rbp-C0h] BYREF
  PSLIST_ENTRY v30; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A8h] [rbp-60h] BYREF

  v1 = StartContext[4];
  v2 = StartContext + 115;
  Object[2] = StartContext + 115;
  v30 = 0LL;
  Object[0] = StartContext + 102;
  v4 = 0;
  Object[1] = StartContext + 105;
  Object[3] = StartContext + 108;
  Object[4] = StartContext + 111;
  Object[5] = StartContext + 150;
  Object[6] = StartContext + 195;
  memset(&WaitBlockArray_8, 0, sizeof(WaitBlockArray_8));
  while ( 1 )
  {
    v5 = KeWaitForMultipleObjects(7u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v5 )
    {
      v4 = 1;
      goto LABEL_6;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v4 = 2;
      goto LABEL_6;
    }
    v7 = v6 - 1;
    if ( v7 )
      break;
    v4 = 4;
LABEL_6:
    v8 = StartContext[8];
    if ( !v8 )
      KeBugCheckEx(0x34u, 0x5F0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( CcNumberOfExternalCaches && (_QWORD *)StartContext[156] != StartContext + 156 )
      CcNotifyExternalCachesInternal(v4, v1, StartContext);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &WaitBlockArray_8);
    if ( CcIsLazyWriteScanQueuedInternal(v2, v4) )
    {
LABEL_30:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&WaitBlockArray_8);
      OldIrql = WaitBlockArray_8.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      CcSetLazyWriteScanQueuedInternal(v9, v4, 1);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&WaitBlockArray_8);
      v10 = WaitBlockArray_8.OldIrql;
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      __writecr8(v10);
      if ( (int)CcAllocateWorkQueueEntry(v1, (__int64)StartContext, v8, &v30) < 0 )
      {
        ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &WaitBlockArray_8);
        v28 = v4;
        *(_BYTE *)(v1 + 1049) = 0;
LABEL_29:
        CcSetLazyWriteScanQueuedInternal(v2, v28, 0);
        goto LABEL_30;
      }
      v13 = v30;
      LODWORD(v30[8].Next) = 3;
      LODWORD(v13[1].Next) = v4;
      if ( v4 == 8 )
      {
        v14 = v8 + 72;
LABEL_13:
        CcPostWorkQueue(v13, v14, v11, v12);
      }
      else
      {
        v14 = v8 + 104;
        if ( v4 != 32 )
          goto LABEL_13;
        if ( !(unsigned __int8)CcPostWorkQueueSpecial(v13, v14) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &WaitBlockArray_8);
          v28 = 32;
          goto LABEL_29;
        }
      }
    }
  }
  v15 = v7 - 1;
  if ( !v15 )
  {
    v4 = 8;
    goto LABEL_6;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v4 = 16;
    goto LABEL_6;
  }
  v17 = v16 - 1;
  if ( !v17 )
    return;
  if ( v17 == 1 )
  {
    v4 = 32;
    goto LABEL_6;
  }
  if ( v4 )
    goto LABEL_6;
}
