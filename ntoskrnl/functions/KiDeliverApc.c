void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  __int64 v8; // r10
  $C71981A45BEB2B45F82C232A7085991E *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v12; // rsi
  struct _LIST_ENTRY *v13; // r13
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  ULONG_PTR v16; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // r13
  struct _LIST_ENTRY *v22; // rdi
  unsigned __int8 v23; // cl
  unsigned __int8 UserApcPendingAll; // si
  struct _LIST_ENTRY *v25; // rcx
  __int64 (__fastcall *v26)(int, int, int, int, __int64); // rdx
  int v27; // r8d
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *v29; // rax
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  int v32; // eax
  _DWORD *v33; // r8
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 v43; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v45; // rdx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int8 v49; // al
  struct _LIST_ENTRY *v50; // rcx
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  signed __int32 v54[8]; // [rsp+0h] [rbp-59h] BYREF
  int v55; // [rsp+40h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v56; // [rsp+48h] [rbp-11h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+50h] [rbp-9h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v59[3]; // [rsp+60h] [rbp+7h] BYREF
  int v62; // [rsp+D0h] [rbp+77h]
  int v63; // [rsp+D8h] [rbp+7Fh] BYREF

  v59[0] = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  Blink = 0LL;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v5 )
  {
    _InterlockedOr(v54, 0);
    LODWORD(v8) = 4;
    v9 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink == v9 )
        goto LABEL_15;
      CurrentIrql = KeGetCurrentIrql();
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
      v63 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v63);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink == v9 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v56 = Flink[2].Flink;
      v59[0] = Flink[2].Blink;
      v58 = Flink[3].Flink;
      Blink = Flink[3].Blink;
      if ( v56 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          CurrentThread->ThreadLock = 0LL;
          if ( KiIrqlFlags )
          {
            v43 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v43 - 2) <= 0xDu )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v45 = CurrentPrcb->SchedulerAssist;
              v5 = (v45[5] & 0xFFFF0003) == 0;
              v45[5] &= 0xFFFF0003;
              if ( v5 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(1uLL);
          goto LABEL_16;
        }
        v19 = Flink->Flink;
        v20 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v20->Flink != Flink )
          goto LABEL_95;
        v20->Flink = v19;
        v19->Blink = v20;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v37 - 2) <= 0xDu )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v5 = (v39[5] & 0xFFFF0003) == 0;
            v39[5] &= 0xFFFF0003;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v56,
          v59,
          &v58,
          &Blink);
        if ( v56 )
        {
          if ( KiIrqlFlags )
          {
            v40 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
            {
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              v5 = (v42[5] & 0xFFFF0001) == 0;
              v42[5] &= 0xFFFF0001;
              if ( v5 )
                KiRemoveSystemWorkPriorityKick(v41);
            }
          }
          __writecr8(0LL);
          ((void (__fastcall *)(_QWORD, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v56)(v59[0], v58, Blink);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        LODWORD(v8) = 4;
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v14 = Flink->Flink;
        v15 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v15->Flink != Flink )
          goto LABEL_95;
        v15->Flink = v14;
        v14->Blink = v15;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v34 - 2) <= 0xDu )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v5 = (v36[5] & 0xFFFF0003) == 0;
            v36[5] &= 0xFFFF0003;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v56,
          v59,
          &v58,
          &Blink);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
        LODWORD(v8) = 4;
      }
    }
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
    {
      v46 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v46 - 2) <= 0xDu )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v5 = (v48[5] & 0xFFFF0003) == 0;
        v48[5] &= 0xFFFF0003;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    __writecr8(1uLL);
    LODWORD(v8) = 4;
LABEL_15:
    if ( a1 == 1 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      v21 = 0LL;
      v56 = 0LL;
      v59[0] = 0LL;
      v22 = 0LL;
      v58 = 0LL;
      Blink = 0LL;
      v62 = 0;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
      {
        v33 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v23 != 2 )
          v8 = (-1LL << (v23 + 1)) & 4;
        v33[5] |= v8;
      }
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( CurrentThread->ThreadLock );
      }
      UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
      v25 = CurrentThread->ApcState.ApcListHead[1].Flink;
      if ( v25 != (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
      {
        while ( 1 )
        {
          v22 = v25 - 1;
          _m_prefetchw(&v25[-1]);
          v26 = (__int64 (__fastcall *)(int, int, int, int, __int64))v25[1].Flink;
          if ( v26 == KeSpecialUserApcKernelRoutine )
            break;
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( v26 != KeSpecialUserApcKernelRoutine )
            {
              v27 = 0;
              goto LABEL_44;
            }
            break;
          }
          v25 = v25->Flink;
          v22 = 0LL;
          if ( v25 == (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
            goto LABEL_49;
        }
        v27 = 2;
        v62 = 2;
LABEL_44:
        if ( (BYTE1(v22->Flink) & 1) != 0 )
          v62 = v27 | 4;
        v21 = v25[1].Flink;
        v56 = v22[3].Flink;
        v59[0] = v22[3].Blink;
        v58 = v22[4].Flink;
        Blink = v22[4].Blink;
        v28 = v25->Flink;
        v29 = v25->Blink;
        if ( v25->Flink->Blink != v25 || v29->Flink != v25 )
LABEL_95:
          __fastfail(3u);
        v29->Flink = v28;
        v28->Blink = v29;
        BYTE2(v22[5].Flink) = 0;
        v30 = CurrentThread->ApcState.UserApcPendingAll;
        if ( (v30 & 1) != 0 )
        {
          v49 = v30 & 0xFE;
          CurrentThread->ApcState.UserApcPendingAll = v49;
          v50 = CurrentThread->ApcState.ApcListHead[1].Flink;
          if ( v50 != (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
          {
            while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v50[1].Flink != KeSpecialUserApcKernelRoutine )
            {
              v50 = v50->Flink;
              if ( v50 == (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
                goto LABEL_49;
            }
            CurrentThread->ApcState.UserApcPendingAll = v49 | 1;
          }
        }
      }
LABEL_49:
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v51 - 2) <= 0xDu )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v5 = (v53[5] & 0xFFFF0003) == 0;
          v53[5] &= 0xFFFF0003;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
      __writecr8(1uLL);
      if ( v22 )
      {
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
          v22,
          &v56,
          v59,
          &v58,
          &Blink);
        if ( (UserApcPendingAll & 2) != 0 )
        {
          if ( !v56 )
          {
            LOBYTE(v31) = 1;
            KeTestAlertThread(v31);
            goto LABEL_16;
          }
          v32 = v62 | 1;
        }
        else
        {
          v32 = v62;
        }
        KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v56, v59[0], (__int64)v58, (__int64)Blink, v32);
      }
    }
  }
LABEL_16:
  v16 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v16 != Process )
    KeBugCheckEx(5u, Process, v16, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
