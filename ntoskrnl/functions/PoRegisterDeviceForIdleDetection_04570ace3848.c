PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  unsigned __int64 v9; // rbp
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  bool v19; // zf
  ULONG DeviceType; // eax
  int v21; // r14d
  __int64 v22; // rsi
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r8
  int v29; // eax

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    p_IdleList = &Dope->IdleList;
    Flink = Dope->IdleList.Flink;
    if ( Flink == &Dope->IdleList )
      goto LABEL_4;
    Blink = Dope->IdleList.Blink;
    if ( Flink->Blink == p_IdleList && Blink->Flink == p_IdleList )
    {
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      *(_QWORD *)&Dope->IdleType = 0LL;
      *(_QWORD *)&Dope->ConservationIdleTime = 0LL;
      Dope->CurrentState = PowerDeviceUnspecified;
      Dope->IdleCount = 0;
      Dope->BusyCount = 0;
      Dope->BusyReference = 0;
      Dope->TotalBusyCount = 0;
      Dope->Specific = 0LL;
      Dope->IdleList.Blink = &Dope->IdleList;
      p_IdleList->Flink = p_IdleList;
LABEL_4:
      KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
      return v4;
    }
LABEL_35:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v21 = 0;
  if ( DeviceType == 7 || DeviceType == 45 )
  {
    if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
      return v4;
    v21 = 1;
  }
  v22 = PopGetDope();
  if ( !v22 )
    return v4;
  v23 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v24 = (_QWORD *)(v22 + 32);
  *(_DWORD *)(v22 + 16) = ConservationIdleTime;
  *(_DWORD *)(v22 + 20) = PerformanceIdleTime;
  *(_DWORD *)(v22 + 52) = State;
  *(_DWORD *)(v22 + 48) = v21;
  if ( (_QWORD *)*v24 == v24 )
  {
    *(_DWORD *)(v22 + 56) = 1;
    v25 = (_QWORD *)qword_140C3D368;
    if ( *(__int64 **)qword_140C3D368 != &PopIdleDetectList )
      goto LABEL_35;
    *v24 = &PopIdleDetectList;
    *(_QWORD *)(v22 + 40) = v25;
    *v25 = v24;
    qword_140C3D368 = v22 + 32;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
      v19 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v23);
  PopCheckForWork();
  return (PULONG)v22;
}
