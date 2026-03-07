void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  if ( qword_140C657C0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C657C0;
  v3 = *(_QWORD *)(v2 >> 16);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0
    && (int)IoReferenceIoAttributionFromThread((__int64)CurrentThread, (__int64)&v15) >= 0 )
  {
    v4 = v15;
    if ( v15 == 8LL * *(_QWORD *)(v3 + 120) )
    {
      v5 = v15;
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      v7 = *(_QWORD *)(v3 + 120);
      v8 = v6;
      v9 = 8 * v7;
      *(_QWORD *)(v3 + 120) = (v4 >> 3) | v7 & 0xE000000000000000uLL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v8);
      if ( !v9 )
        return;
      v5 = v9;
    }
    IoDiskIoAttributionDereference(v5);
  }
}
