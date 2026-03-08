/*
 * XREFs of KiOutSwapProcesses @ 0x1402BFE74
 * Callers:
 *     KeSwapProcessOrStack @ 0x140391CB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiOutSwapProcesses(signed __int64 *a1)
{
  signed __int64 *v2; // r12
  struct _EPROCESS *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  _LIST_ENTRY *p_ReadyListHead; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  int v7; // eax
  bool v8; // bp
  unsigned __int8 v9; // cl
  unsigned int v10; // eax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  _DWORD *v14; // r9
  __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *Blink; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9

  do
  {
    v2 = a1;
    v3 = (struct _EPROCESS *)(a1 - 45);
    a1 = (signed __int64 *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v13) = 4;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
    }
    KiAcquireKobjectLockSafe(&v3->Pcb.Header.Lock);
    p_ReadyListHead = &v3->Pcb.ReadyListHead;
    Flink = v3->Pcb.ReadyListHead.Flink;
    v7 = v3->Pcb.StackCount.Value & 7;
    if ( Flink == &v3->Pcb.ReadyListHead || v7 == 6 )
    {
      _InterlockedXor(&v3->Pcb.StackCount.Value, v7 ^ 5);
      _InterlockedAnd(&v3->Pcb.Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v3);
      v8 = 0;
      v9 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
      {
        v14 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v9 == 2 )
          LODWORD(v15) = 4;
        else
          v15 = (-1LL << (v9 + 1)) & 4;
        v14[5] |= v15;
      }
      KiAcquireKobjectLockSafe(&v3->Pcb.Header.Lock);
      if ( p_ReadyListHead->Flink == p_ReadyListHead )
      {
        v10 = 4;
      }
      else
      {
        _m_prefetchw(&KiProcessInSwapListHead);
        v18 = KiProcessInSwapListHead;
        do
        {
          *v2 = v18;
          v19 = v18;
          v18 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v2, v18);
        }
        while ( v18 != v19 );
        v20 = v18 == 0;
        v10 = 7;
        v8 = v20;
      }
      _InterlockedXor(&v3->Pcb.StackCount.Value, v10);
      _InterlockedAnd(&v3->Pcb.Header.Lock, 0xFFFFFF7F);
      if ( v8 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = ((unsigned int)result & v27[5]) == 0;
          v27[5] &= result;
          if ( v20 )
            result = KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v16 = p_ReadyListHead->Flink;
      Blink = v3->Pcb.ReadyListHead.Blink;
      if ( p_ReadyListHead->Flink->Blink != p_ReadyListHead || Blink->Flink != p_ReadyListHead )
        __fastfail(3u);
      Blink->Flink = v16;
      v16->Blink = Blink;
      v3->Pcb.ReadyListHead.Blink = &v3->Pcb.ReadyListHead;
      p_ReadyListHead->Flink = p_ReadyListHead;
      _InterlockedXor(&v3->Pcb.StackCount.Value, 3u);
      _InterlockedAnd(&v3->Pcb.Header.Lock, 0xFFFFFF7F);
      LOBYTE(v16) = CurrentIrql;
      result = KiReadyOutSwappedThreads(Flink, v16);
    }
  }
  while ( a1 );
  return result;
}
