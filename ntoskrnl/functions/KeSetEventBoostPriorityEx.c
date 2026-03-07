__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char a5, char a6)
{
  _DWORD *v6; // r14
  unsigned __int8 CurrentIrql; // cl
  int v10; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v12; // r15
  int v13; // edi
  _QWORD *v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  char v19; // al
  bool v20; // zf
  bool v21; // di
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int8 v25; // cl
  _DWORD *v26; // r9
  __int64 v27; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // r9
  _QWORD *v30; // r9
  __int64 v31; // rcx
  char v32; // al
  int v33; // r8d
  __int64 *v34; // rdx
  struct _KPRCB *v35; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  char v37; // [rsp+48h] [rbp-40h]
  __int64 v38; // [rsp+90h] [rbp+8h]

  v6 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  v10 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v18) = 4;
    else
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v18;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  v12 = *(_QWORD **)(a1 + 8);
  v13 = 0;
  *(_DWORD *)(a1 + 4) = 1;
  if ( v12 == (_QWORD *)(a1 + 8) )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = (_QWORD *)*v12;
    v15 = (__int64)v12;
    v12 = v14;
    v16 = *(_QWORD **)(v15 + 8);
    if ( v14[1] != v15 || *v16 != v15 )
LABEL_4:
      __fastfail(3u);
    *v16 = v14;
    v14[1] = v16;
    v19 = *(_BYTE *)(v15 + 16);
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
        if ( v19 == 4 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          *(_DWORD *)(a1 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v15 + 24), a1, v15, 0LL, 0);
        }
        else if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL) )
        {
          --v13;
        }
        goto LABEL_60;
      }
      *(_BYTE *)(v15 + 17) = 5;
      v38 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)v15 = 0LL;
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v26 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v25 == 2 )
          LODWORD(v27) = 4;
        else
          v27 = (-1LL << (v25 + 1)) & 4;
        v26[5] |= v27;
      }
      v35 = KeGetCurrentPrcb();
      CurrentThread = v35->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v35->CurrentThread);
        EtwTraceEnqueueWork(v29, v15, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v38);
      v30 = (_QWORD *)(v38 + 8);
      v31 = v38;
      if ( (_QWORD *)*v30 != v30
        && *(_DWORD *)(v38 + 40) < *(_DWORD *)(v38 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v38 || CurrentThread->WaitReason != 15) )
      {
        v32 = KiWakeQueueWaiter(v35, v38, v15);
        v31 = v38;
        if ( v32 )
        {
          *(_QWORD *)v15 = 0LL;
          goto LABEL_54;
        }
        v30 = (_QWORD *)(v38 + 8);
      }
      v33 = *(_DWORD *)(v31 + 4);
      *(_DWORD *)(v31 + 4) = v33 + 1;
      v34 = *(__int64 **)(v31 + 32);
      if ( *v34 != v31 + 24 )
        goto LABEL_4;
      *(_QWORD *)v15 = v31 + 24;
      *(_QWORD *)(v15 + 8) = v34;
      *v34 = v15;
      *(_QWORD *)(v31 + 32) = v15;
      if ( !v33 && (_QWORD *)*v30 != v30 )
      {
        KiWakeOtherQueueWaiters(v35, v31);
        v31 = v38;
      }
LABEL_54:
      _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
      v20 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v20 )
        goto LABEL_13;
      goto LABEL_60;
    }
    if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), a2) )
    {
      v20 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v20 )
        break;
    }
LABEL_60:
    if ( v12 == (_QWORD *)(a1 + 8) )
      goto LABEL_13;
  }
  ++v13;
LABEL_13:
  v6 = a3;
LABEL_14:
  if ( a2 )
    v21 = v13 > 0;
  else
    v21 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    if ( *v6 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], a4);
    }
    goto LABEL_20;
  }
  a5 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
  if ( v6 )
  {
    if ( !*v6 )
      goto LABEL_20;
    if ( (char)*v6 > a5 )
      a5 = *v6;
  }
  if ( !v21 )
LABEL_20:
    v10 = 1;
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v10, a5, v37);
}
