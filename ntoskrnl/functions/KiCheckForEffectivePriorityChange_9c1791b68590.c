void __fastcall KiCheckForEffectivePriorityChange(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 NextThread; // rdi
  __int64 v5; // rdx
  unsigned __int8 *PriorityState; // r14
  unsigned __int8 v7; // bl
  char v8; // al
  unsigned __int8 v9; // bl
  void *SchedulerAssist; // rcx
  bool v11; // zf
  char v12; // al
  __int64 v13; // rdx

  NextThread = (__int64)a1->NextThread;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v5 = *(_QWORD *)(NextThread + 104);
  if ( v5 )
  {
    for ( v5 += a1->ScbOffset; v5; v5 = *(_QWORD *)(v5 + 408) )
    {
      if ( v5 == a3 )
        goto LABEL_10;
    }
  }
  if ( v5 == a3 )
  {
LABEL_10:
    PriorityState = (unsigned __int8 *)a1->PriorityState;
    v7 = *PriorityState;
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      v11 = !KiIsThreadRankNonZero(NextThread, a1);
      v12 = 1;
      if ( v11 )
        v12 = *(_BYTE *)(NextThread + 195);
      v8 = v7 ^ v12;
    }
    else
    {
      v8 = *(_BYTE *)(NextThread + 195) ^ v7;
    }
    v9 = v8 & 0x7F ^ v7;
    *PriorityState = v9;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( (_KTHREAD *)NextThread == a1->IdleThread )
        v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v13 = v9 & 0x7F;
      KiSetSchedulerAssistPriority(SchedulerAssist, v13, 0LL);
    }
  }
}
