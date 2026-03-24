/*
 * XREFs of KiDetachProcess @ 0x1402075C0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     KeDetachProcess @ 0x140325E20 (KeDetachProcess.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x140207990 (KiSetAddressPolicy.c)
 *     KiMoveApcState @ 0x1402079C0 (KiMoveApcState.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FA9E0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, char a2)
{
  __int64 v2; // r11
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // r10
  volatile signed __int32 *p_Lock; // r13
  int v8; // ebp
  __int64 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v11; // rcx
  $C459BD0D405E8E46662177FB3D0A143F *v12; // rdi
  $B1BEF1DC70D0553D212470EE5F0BB1FC *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax
  char v26; // si
  unsigned __int8 v27; // bp
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // ett
  signed __int64 *v30; // r13
  signed __int64 v31; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v33; // rcx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // di
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // r10
  _DWORD *v46; // r9
  struct _KPRCB *v47; // rdi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  _DWORD *v52; // rcx
  int v53; // eax
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  _DWORD *v59; // r9
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  int v64; // [rsp+68h] [rbp+10h] BYREF
  int v65; // [rsp+70h] [rbp+18h] BYREF
  __int64 v66; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 2LL;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v2) = 15;
    v66 = v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v66 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v64 = 0;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v37 = v11[6];
        v11[6] = v37 + 1;
        if ( v37 == -1 )
LABEL_61:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v34 = CurrentPrcb->SchedulerAssist;
      if ( v34 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v34[6] - 1;
          v34[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v64);
      while ( CurrentThread->ThreadLock );
      v35 = CurrentPrcb->SchedulerAssist;
      if ( v35 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = v35[6];
          v35[6] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_61;
        }
      }
    }
    LOBYTE(v2) = v66;
    v4 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v2 )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        v40 = v66;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
          v44 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      else
      {
        v40 = v66;
      }
      __writecr8(v40);
      v45 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 <= 0xFu )
      {
        v46 = KeGetCurrentPrcb()->SchedulerAssist;
        v46[5] |= (-1 << (v45 + 1)) & 4;
      }
      v66 = v45;
      v47 = KeGetCurrentPrcb();
      v65 = 0;
      v48 = v47->SchedulerAssist;
      if ( v48 )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v49 = v48[6];
          v48[6] = v49 + 1;
          if ( v49 == -1 )
LABEL_84:
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v50 = v47->SchedulerAssist;
        if ( v50 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
        do
          KeYieldProcessorEx(&v65);
        while ( CurrentThread->ThreadLock );
        v52 = v47->SchedulerAssist;
        if ( v52 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v53 = v52[6];
            v52[6] = v53 + 1;
            if ( v53 == -1 )
              goto LABEL_84;
          }
        }
      }
      LOBYTE(v2) = v66;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v4 = 2LL;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($B1BEF1DC70D0553D212470EE5F0BB1FC *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v12->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v12;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
    }
    v15 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v16 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v15 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v16->Flink = v16;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v33 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v33;
      v15->Header.WaitListHead.Flink = v16;
      v33->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  if ( !v8 )
  {
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v54 = v18[6] - 1;
        v18[6] = v54;
        if ( !v54 )
        {
          KiRemoveSystemWorkPriorityKick(v17);
          LOBYTE(v2) = v66;
          v4 = 2LL;
        }
      }
    }
  }
  v19 = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v21 = *(unsigned __int8 *)(v19 + 209);
  v22 = 8LL * *(unsigned __int8 *)(v19 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), v21);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v24 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v24 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v24);
    KiSetAddressPolicy(Process->AddressPolicy);
    LOBYTE(v2) = v66;
    v4 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    LOBYTE(v2) = v66;
    v4 = 2LL;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v19 = __readcr4();
    if ( (v19 & 0x20080) != 0 )
    {
      result = v19 ^ 0x80;
      __writecr4(v19 ^ 0x80);
      __writecr4(v19);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v22), v21);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v8 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v19 = (unsigned int)(unsigned __int8)v2 + 1;
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v44 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v44 )
          {
            KiRemoveSystemWorkPriorityKick(v56);
            LOBYTE(v2) = v66;
          }
          v4 = 2LL;
        }
      }
    }
    result = (unsigned __int8)v2;
    __writecr8((unsigned __int8)v2);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 210, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v26 = 0;
      v27 = KeGetCurrentIrql();
      __writecr8(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v59 = KeGetCurrentPrcb()->SchedulerAssist;
        v59[5] |= (-1 << (v27 + 1)) & 4;
      }
      KiAcquireKobjectLockSafe(p_Lock);
      v28 = *((_DWORD *)p_Lock + 210);
      if ( (v28 & 7) == 0 )
      {
        v19 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v19 != v19 && v28 < 8 )
        {
          while ( 1 )
          {
            v19 = v28 & 0xFFFFFFF8 | 3;
            v29 = v28;
            v28 = _InterlockedCompareExchange(p_Lock + 210, v19, v28);
            if ( v29 == v28 )
              break;
            if ( v28 >= 8 )
              goto LABEL_41;
          }
          v26 = 1;
        }
      }
LABEL_41:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v26 )
      {
        v30 = (signed __int64 *)(p_Lock + 90);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v31 = KiProcessOutSwapListHead;
        do
        {
          *v30 = v31;
          v19 = v31;
          v31 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v30, v31);
        }
        while ( v31 != v19 );
        if ( !v31 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v60 = KeGetCurrentIrql();
          if ( v60 <= 0xFu && v27 <= 0xFu && v60 >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v19 = (unsigned int)v27 + 1;
            v62 = v61->SchedulerAssist;
            v63 = ~(unsigned __int16)(-1LL << (v27 + 1));
            v44 = (v63 & v62[5]) == 0;
            v62[5] &= v63;
            if ( v44 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
      }
      result = v27;
      __writecr8(v27);
    }
  }
  if ( ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    LOBYTE(v19) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v19);
  }
  return result;
}
