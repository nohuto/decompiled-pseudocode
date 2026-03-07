__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf

  v4 = a1 + 1664;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1664, (__int64)a2, a3, a4) <= 2 )
    return 3221226021LL;
  v7 = -1073741275;
  v8 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v4 + 174));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1176));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v4, v10, v11, v12);
  if ( WorkingSetSwapSupport > 2 )
  {
    v7 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 1176));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v7;
}
