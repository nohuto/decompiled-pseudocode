void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PRKEVENT *StartContext)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // al
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v5; // rdi
  LARGE_INTEGER *Timeout; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v17; // rdi
  LIST_ENTRY *v18; // rsi
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  PRKEVENT v26; // rdx
  KIRQL v27; // al
  unsigned __int64 Blink_high; // rdx
  PRKEVENT v29; // rcx
  PRKEVENT **v30; // rax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  PRKEVENT v35; // [rsp+30h] [rbp-20h] BYREF
  PRKEVENT **v36; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+80h] [rbp+30h] BYREF

  v1 = *StartContext;
  v38 = -50000000LL;
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v5 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    goto LABEL_62;
  v35 = v1 + 3;
  v36 = (PRKEVENT **)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)&v35;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v35;
  KeSetActualBasePriorityThread(BugCheckParameter1, (int)v1[5].Header.WaitListHead.Flink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  KeSetEvent(StartContext[2], 0, 0);
  while ( 1 )
  {
LABEL_4:
    Timeout = (LARGE_INTEGER *)&v38;
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
      Timeout = 0LL;
    if ( KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout) != 258 )
    {
      p_Blink = 0LL;
      LOBYTE(v17) = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v18 = 0LL;
LABEL_32:
            KeResetEvent(v1 + 1);
            goto LABEL_33;
          }
          v18 = p_WaitListHead->Flink;
          p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
          if ( v18 == Blink )
          {
            v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
            p_WaitListHead->Flink = 0LL;
          }
          else
          {
            --Blink->Flink;
          }
          if ( !v18 )
            goto LABEL_32;
        }
        else
        {
          if ( !p_Blink )
            goto LABEL_48;
          v18 = 0LL;
        }
LABEL_33:
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v11 = (v25 & v24[5]) == 0;
            v21 = (unsigned int)v25 & v24[5];
            v24[5] = v21;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        __writecr8((unsigned __int8)v17);
        v26 = StartContext[1];
        if ( !v18 )
        {
          LOBYTE(v21) = -1;
          SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v26, v21, 1LL);
          goto LABEL_4;
        }
        p_Blink = &v18[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(v1, v26, StartContext[3], StartContext[4], p_Blink);
        v27 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        LOBYTE(v17) = v27;
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
    }
    v17 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v11 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    __writecr8(v17);
  }
LABEL_48:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v29 = v35;
  v30 = v36;
  if ( (PRKEVENT *)v35->Header.WaitListHead.Flink != &v35 || *v36 != &v35 )
LABEL_62:
    __fastfail(3u);
  *v36 = (PRKEVENT *)v35;
  v29->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v30;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
      v11 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8((unsigned __int8)v17);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(StartContext);
}
