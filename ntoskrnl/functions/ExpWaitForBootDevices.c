void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      while ( 1 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v2 = (__int64 *)v2[1];
        v4 = v3;
        KxReleaseSpinLock((volatile signed __int64 *)&ExBootDeviceListSpinLock);
        if ( v2 == &ExBootDeviceList )
          break;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v8 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v8;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v4);
        if ( *((_DWORD *)v2 - 1)
          && ((unsigned __int8 (__fastcall *)(__int64, __int64))v2[5])(v2[4], v2[6])
          && _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) == 1 )
        {
          goto LABEL_24;
        }
      }
      if ( KiIrqlFlags )
      {
        v10 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = v11->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v11);
        }
      }
      __writecr8(v4);
LABEL_24:
      if ( !ExNumMissingBootDevices )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
