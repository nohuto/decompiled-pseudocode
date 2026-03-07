int __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v3; // r10d
  _QWORD *v4; // rcx
  struct _KEVENT *v5; // rbx
  __int64 *p_Blink; // rcx
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD *v12; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax

  v3 = 1;
  while ( (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v5 )
    {
      do
      {
        v12 = v4;
        v4 = (_QWORD *)v4[3];
        v4[5] = v12;
        v5 = (struct _KEVENT *)v4[4];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v5;
    }
    p_Blink = (__int64 *)&v5[1].Header.WaitListHead.Blink;
    if ( (v5[2].Header.SignalState & 1) != 0 )
    {
      v7 = *p_Blink;
      if ( *p_Blink )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v7;
        *p_Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v3 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( *p_Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          LODWORD(v7) = KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              LODWORD(v7) = 4;
              if ( CurrentIrql != 2 )
                v7 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v7;
            }
          }
        }
        if ( !v3 )
        {
          Flink = v5[2].Header.WaitListHead.Flink;
          if ( Flink )
            LODWORD(v7) = KeAbPreWakeupHandle(Flink, (unsigned int)KeGetCurrentThread()->Priority, 0LL);
        }
        do
        {
          Blink = v5[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v5[2].Header.SignalState, 1u) )
            LODWORD(v7) = KeSetEvent(v5, 0, 0);
          v5 = (struct _KEVENT *)Blink;
        }
        while ( Blink );
        if ( CurrentIrql != 2 )
        {
          if ( KiIrqlFlags )
          {
            v14 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v8 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v8 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          LODWORD(v7) = CurrentIrql;
          __writecr8(CurrentIrql);
        }
        return v7;
      }
    }
    v7 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v8 = a2 == v7;
    a2 = v7;
    if ( v8 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v8 = a2 == v7;
    a2 = v7;
    if ( v8 )
      return v7;
    if ( (v7 & 1) == 0 )
      goto LABEL_3;
  }
}
