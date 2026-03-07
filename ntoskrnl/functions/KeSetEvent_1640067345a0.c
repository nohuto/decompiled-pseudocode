LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // ebp
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  __int64 v12; // r10
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  char v17; // al
  bool v18; // zf
  char v19; // cl
  __int64 v20; // r8
  unsigned __int8 v21; // cl
  _QWORD *v22; // r9
  __int64 v23; // rcx
  char v24; // al
  int v25; // r10d
  struct _LIST_ENTRY *v26; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // r9
  __int64 v29; // r10
  _DWORD *v30; // r9
  __int64 v31; // rdx
  unsigned __int8 v32; // cl
  struct _LIST_ENTRY **p_Blink; // r10
  struct _LIST_ENTRY *v34; // rcx
  char v35; // al
  int Flink_high; // r9d
  struct _LIST_ENTRY *v37; // r8
  unsigned __int8 v38; // al
  __int64 v39; // r9
  __int64 v40; // r10
  _DWORD *v41; // r9
  __int64 v42; // rdx
  LIST_ENTRY *v43; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v44; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v46; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  _KTHREAD *v48; // [rsp+48h] [rbp-40h]
  int v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v51; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v52; // [rsp+A8h] [rbp+20h]
  struct _LIST_ENTRY *v53; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v49 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v49 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v49 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v11 = Flink->Flink;
          v12 = (__int64)Flink;
          v52 = Flink;
          Blink = Flink->Blink;
          v43 = v11;
          if ( v11->Blink != (struct _LIST_ENTRY *)v12 || Blink->Flink != (struct _LIST_ENTRY *)v12 )
            goto LABEL_8;
          Blink->Flink = v11;
          v11->Blink = Blink;
          v17 = *(_BYTE *)(v12 + 16);
          switch ( v17 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
              {
                v18 = Event->Header.SignalState-- == 1;
                if ( v18 )
                  goto LABEL_11;
              }
              break;
            case 2:
              *(_BYTE *)(v12 + 17) = 5;
              v50 = *(_QWORD *)(v12 + 24);
              *(_QWORD *)v12 = 0LL;
              v21 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
              {
                v30 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v21 == 2 )
                  LODWORD(v31) = 4;
                else
                  v31 = (-1LL << (v21 + 1)) & 4;
                v30[5] |= v31;
              }
              v46 = KeGetCurrentPrcb();
              CurrentThread = v46->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v46->CurrentThread);
                EtwTraceEnqueueWork(v28, v29, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v50);
              v22 = (_QWORD *)(v50 + 8);
              v23 = v50;
              if ( (_QWORD *)*v22 == v22
                || *(_DWORD *)(v50 + 40) >= *(_DWORD *)(v50 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v50 && CurrentThread->WaitReason == 15 )
              {
LABEL_45:
                v25 = *(_DWORD *)(v23 + 4);
                *(_DWORD *)(v23 + 4) = v25 + 1;
                v26 = *(struct _LIST_ENTRY **)(v23 + 32);
                if ( v26->Flink != (struct _LIST_ENTRY *)(v23 + 24) )
                  goto LABEL_8;
                v52->Flink = (struct _LIST_ENTRY *)(v23 + 24);
                v52->Blink = v26;
                v26->Flink = v52;
                *(_QWORD *)(v23 + 32) = v52;
                if ( !v25 && (_QWORD *)*v22 != v22 )
                {
                  KiWakeOtherQueueWaiters(v46, v23);
                  v23 = v50;
                }
              }
              else
              {
                v24 = KiWakeQueueWaiter(v46, v50, v52);
                v23 = v50;
                if ( !v24 )
                {
                  v22 = (_QWORD *)(v50 + 8);
                  goto LABEL_45;
                }
                v52->Flink = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              break;
            case 4:
              *(_BYTE *)(v12 + 17) = 5;
              Event->Header.SignalState = 0;
              KiInsertQueueDpc(*(_QWORD *)(v12 + 24), (__int64)Event, v12, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
              break;
          }
          Flink = v43;
          if ( v43 == p_WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
LABEL_11:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v53 = Flink;
      v44 = Flink->Flink;
      v19 = (char)Flink[1].Flink;
      switch ( v19 )
      {
        case 1:
          v20 = WORD1(Flink[1].Flink);
          break;
        case 2:
          BYTE1(Flink[1].Flink) = 5;
          v51 = Flink[1].Blink;
          Flink->Flink = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v41 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v32 == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (v32 + 1)) & 4;
            v41[5] |= v42;
          }
          v45 = KeGetCurrentPrcb();
          v48 = v45->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v38 = KeIsThreadRunning(v45->CurrentThread);
            EtwTraceEnqueueWork(v39, v40, v38);
          }
          KiAcquireKobjectLockSafe(v51);
          p_Blink = &v51->Blink;
          v34 = v51;
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(v51[2].Blink) >= HIDWORD(v51[2].Blink)
            || (struct _LIST_ENTRY *)v48->Queue == v51 && v48->WaitReason == 15 )
          {
LABEL_64:
            Flink_high = HIDWORD(v34->Flink);
            HIDWORD(v34->Flink) = Flink_high + 1;
            v37 = v34[2].Flink;
            if ( v37->Flink != (struct _LIST_ENTRY *)&v34[1].Blink )
LABEL_8:
              __fastfail(3u);
            v53->Flink = (struct _LIST_ENTRY *)((char *)v34 + 24);
            v53->Blink = v37;
            v37->Flink = v53;
            v34[2].Flink = v53;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
            {
              KiWakeOtherQueueWaiters(v45, v34);
              v34 = v51;
            }
          }
          else
          {
            v35 = KiWakeQueueWaiter(v45, v51, v53);
            v34 = v51;
            if ( !v35 )
            {
              p_Blink = &v51->Blink;
              goto LABEL_64;
            }
            v53->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
          goto LABEL_28;
        case 4:
          BYTE1(Flink[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)Flink[1].Blink, (__int64)Event, (__int64)Flink, 0LL, 0);
          goto LABEL_28;
        default:
          v20 = 256LL;
          break;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)Flink, v20, 0LL);
LABEL_28:
      Flink = v44;
      if ( v44 == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
