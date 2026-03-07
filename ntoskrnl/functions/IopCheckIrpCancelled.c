bool __fastcall IopCheckIrpCancelled(__int64 a1, __int64 a2)
{
  bool v2; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !*(_DWORD *)(a1 + 4) )
    v2 = *(_BYTE *)(a2 + 68) == 1;
  if ( KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
