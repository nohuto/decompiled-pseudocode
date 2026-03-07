void __fastcall MiSignalZeroingPassComplete(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int8 v4; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v7; // eax
  _DWORD *SchedulerAssist; // r8
  bool v9; // zf

  if ( *(_BYTE *)(a1 + 26) )
  {
    v2 = *(_QWORD *)(a1 + 168);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
    if ( *(_BYTE *)(a1 + 26) )
    {
      *(_BYTE *)(a1 + 26) = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 88), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)v2, 0, 0);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
      if ( !KiIrqlFlags )
        goto LABEL_6;
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || CurrentIrql > 0xFu || (unsigned __int8)v3 > 0xFu || CurrentIrql < 2u )
        goto LABEL_6;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
      if ( !KiIrqlFlags )
        goto LABEL_6;
      v4 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || v4 > 0xFu || (unsigned __int8)v3 > 0xFu || v4 < 2u )
        goto LABEL_6;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v9 = (v7 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v7;
    if ( v9 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_6:
    __writecr8(v3);
  }
}
