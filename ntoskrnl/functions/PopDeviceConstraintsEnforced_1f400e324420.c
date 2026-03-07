bool PopDeviceConstraintsEnforced()
{
  bool v0; // di
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  _PPM_IDLE_STATES *IdleStates; // rcx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v7; // r9
  int v8; // edx
  bool v9; // zf

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates && IdleStates->InterfaceVersion == 1 )
    v0 = PpmPlatformStates != 0;
  if ( KiIrqlFlags )
  {
    v5 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v9 = (v8 & v7[5]) == 0;
      v7[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v0;
}
