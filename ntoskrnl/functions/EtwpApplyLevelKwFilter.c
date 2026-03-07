char __fastcall EtwpApplyLevelKwFilter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // r10
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // rbp
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // r11
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v5 = a3;
  if ( !a5 )
    return ((__int64 (*)(void))EtwpApplyLevelKwFilterInner)();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v8 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  LOBYTE(a3) = v5;
  v9 = EtwpApplyLevelKwFilterInner(a1, a2, a3);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(v10 << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
