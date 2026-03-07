unsigned __int64 __fastcall KiDetachProcess(__int64 *a1, char a2, _DWORD *SchedulerAssist, __int64 a4)
{
  __int64 v4; // r11
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r10
  _KPROCESS *Process; // r13
  int v10; // ebp
  __int64 CurrentIrql; // r11
  $C71981A45BEB2B45F82C232A7085991E *v12; // rdi
  $115DCDF994C6370D29323EAB0E0C9502 *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _KPROCESS *v18; // rdx
  unsigned __int64 GroupIndex; // r15
  __int64 v20; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v24; // si
  unsigned __int32 Value; // eax
  struct _LIST_ENTRY *v26; // rcx
  _DWORD *v27; // r8
  unsigned __int32 v28; // ett
  signed __int64 *p_SwapListEntry; // r13
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v35; // zf
  _DWORD *v36; // r10
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // [rsp+78h] [rbp+10h] BYREF
  int v48; // [rsp+80h] [rbp+18h] BYREF
  __int64 v49; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  LODWORD(v6) = 4;
  Process = CurrentThread->ApcState.Process;
  v10 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v4) = 15;
    v49 = v4;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v49 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql == 2 )
        a4 = 4LL;
      else
        a4 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= a4;
    }
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v47);
      while ( CurrentThread->ThreadLock );
    }
    LOBYTE(v4) = v49;
    LODWORD(v6) = 4;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v4 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a4 = (__int64)CurrentPrcb->SchedulerAssist;
          v35 = (*(_DWORD *)(a4 + 20) & 0xFFFF0001) == 0;
          *(_DWORD *)(a4 + 20) &= 0xFFFF0001;
          if ( v35 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            LOBYTE(v4) = v49;
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      SchedulerAssist = (_DWORD *)KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)SchedulerAssist <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)SchedulerAssist == 2 )
          LODWORD(v37) = 4;
        else
          v37 = (-1LL << ((unsigned __int8)SchedulerAssist + 1)) & 4;
        a4 = (unsigned int)v37 | v36[5];
        v36[5] = a4;
      }
      LOBYTE(v49) = (_BYTE)SchedulerAssist;
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( CurrentThread->ThreadLock );
      }
      LOBYTE(v4) = v49;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    LODWORD(v6) = 4;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($115DCDF994C6370D29323EAB0E0C9502 *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
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
      v26 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v26;
      v15->Header.WaitListHead.Flink = v16;
      v26->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
  }
  if ( !v10 )
    CurrentThread->ThreadLock = 0LL;
  v17 = KeGetCurrentPrcb();
  v18 = CurrentThread->ApcState.Process;
  GroupIndex = v17->GroupIndex;
  v20 = 8LL * v17->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&v18->Header.Lock + v20), GroupIndex);
  DirectoryTableBase = v18->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v22 = v18->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v22 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v22);
    KiSetAddressPolicy(v18->AddressPolicy, v18, SchedulerAssist, a4);
    LOBYTE(v4) = v49;
    LODWORD(v6) = 4;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase, v18, SchedulerAssist, a4);
    LOBYTE(v4) = v49;
    LODWORD(v6) = 4;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v38 = __readcr4();
    if ( (v38 & 0x20080) != 0 )
    {
      result = v38 ^ 0x80;
      __writecr4(v38 ^ 0x80);
      __writecr4(v38);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v20), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v10 )
  {
    if ( KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v35 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v35 )
        {
          KiRemoveSystemWorkPriorityKick(v40);
          LOBYTE(v4) = v49;
        }
        LODWORD(v6) = 4;
      }
    }
    result = (unsigned __int8)v4;
    __writecr8((unsigned __int8)v4);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
      {
        v27 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v24 != 2 )
          v6 = (-1LL << (v24 + 1)) & 4;
        v27[5] |= v6;
      }
      KiAcquireKobjectLockSafe(&Process->Header.Lock);
      Value = Process->StackCount.Value;
      if ( (Value & 7) != 0 || Process->ThreadListHead.Flink == &Process->ThreadListHead || Value >= 8 )
      {
LABEL_44:
        _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
      }
      else
      {
        while ( 1 )
        {
          v28 = Value;
          Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
          if ( v28 == Value )
            break;
          if ( Value >= 8 )
            goto LABEL_44;
        }
        _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
        p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
        _m_prefetchw(&KiProcessOutSwapListHead);
        v30 = KiProcessOutSwapListHead;
        do
        {
          *p_SwapListEntry = v30;
          v31 = v30;
          v30 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v30);
        }
        while ( v30 != v31 );
        if ( !v30 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        v43 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v24 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v35 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
      result = v24;
      __writecr8(v24);
    }
  }
  if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(1);
  }
  return result;
}
