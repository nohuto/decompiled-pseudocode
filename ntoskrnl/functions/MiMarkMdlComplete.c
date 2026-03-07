int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  unsigned __int64 LockedVadEvent; // rax
  __int64 v3; // r8
  _QWORD *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  bool v15; // cc

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8);
  v4 = (_QWORD *)(v3 + 48);
  v5 = (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
  v6 = 0;
  for ( i = *(_QWORD *)(LockedVadEvent + 8); v6 < v5; LODWORD(LockedVadEvent) = v6 )
  {
    v8 = 48LL * *v4 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    *(_BYTE *)(v8 + 34) &= ~0x20u;
    *(_QWORD *)v8 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
    ++v6;
    ++v4;
  }
  *(_QWORD *)(i + 88) = 0LL;
  v15 = *(_DWORD *)(i + 176) <= 1;
  *(_DWORD *)(i + 80) = -1073741670;
  if ( !v15 )
    LODWORD(LockedVadEvent) = KeSetEvent((PRKEVENT)(i + 56), 0, 0);
  return LockedVadEvent;
}
