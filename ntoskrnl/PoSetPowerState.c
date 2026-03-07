POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // r14
  int v6; // edi
  unsigned __int64 v7; // rbp
  ULONG PowerFlags; // eax
  unsigned int v9; // eax
  int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type == SystemPowerState )
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 == State.SystemState )
      goto LABEL_6;
    v9 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
    v10 = State.SystemState & 0xF;
    goto LABEL_5;
  }
  if ( Type == DevicePowerState )
  {
    PowerFlags = DeviceObjectExtension->PowerFlags;
    v6 = (unsigned __int8)PowerFlags >> 4;
    if ( v6 != State.SystemState )
    {
      v9 = PowerFlags & 0xFFFFFF0F;
      v10 = 16 * (State.SystemState & 0xF);
LABEL_5:
      DeviceObjectExtension->PowerFlags = v9 | v10;
    }
  }
LABEL_6:
  KxReleaseSpinLock((volatile signed __int64 *)&PopIrpSerialLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return (POWER_STATE)v6;
}
