__int64 *__fastcall MiGetNextSessionGlobal(_QWORD *P)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v8; // eax
  bool v9; // zf
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+20h] [rbp-28h] BYREF

  memset(&v18, 0, sizeof(v18));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v18);
  if ( P )
  {
    v3 = (__int64 *)P[15];
  }
  else
  {
    v3 = (__int64 *)qword_140C69580;
    if ( !qword_140C69580 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v18);
      OldIrql = v18.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v18.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (v18.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
  }
  while ( v3 != &qword_140C69580 )
  {
    v2 = v3 - 15;
    v11 = *((_DWORD *)v3 - 27);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)v2 + 3, v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_18;
    }
    v3 = (__int64 *)*v3;
  }
LABEL_18:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v18);
  v13 = v18.OldIrql;
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v18.OldIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (v18.OldIrql + 1));
      v9 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
  }
  __writecr8(v13);
  if ( P )
    MiReleaseProcessReferenceToSessionDataPage(P);
  return v2;
}
