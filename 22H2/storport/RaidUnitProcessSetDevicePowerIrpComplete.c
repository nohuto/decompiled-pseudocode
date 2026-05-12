/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013718
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001360C (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002B50 (RaidResumeUnitQueue.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidRestartIoQueue @ 0x1C00078C8 (RaidRestartIoQueue.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B614 (RaUnitAcquireRemoveLock.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013A40 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0013DC8 (StorPortUnitPoFxD0Completion.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001E570 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitReleasePoFx @ 0x1C003303C (RaidUnitReleasePoFx.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x1C003E04C (McTemplateK0quuupd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  POWER_STATE v5; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22; // [rsp+68h] [rbp-30h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Irp->IoStatus.Status = 0;
  v5.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v6 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(POWER_STATE *)(Context + 492) = v5;
  PoSetPowerState(v6, DevicePowerState, v5);
  if ( v5.SystemState == PowerSystemWorking && *(char *)(Context + 448) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *(_DWORD *)(Context + 492) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 0x100) != 0 )
      {
        ++*(_DWORD *)(Context + 3200);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 456), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          v8 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v8, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
        *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x200u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx(Context)
        || (v12 = *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736)),
            (v12 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 695) )
        {
          *(_BYTE *)(Context + 695) = 0;
          RaidRestartIoQueue(Context, 0);
        }
      }
      StorPortUnitPoFxD0Completion(v10, v9, v11, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(Context + 24) + 5908LL));
      v15 = *(_QWORD *)(Context + 24);
      if ( *(char *)(v15 + 110) < 0 )
      {
        LOBYTE(v14) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v15, 0xFFFFFFFFLL, v13, v14);
      }
      RaidUnitReleasePoFx(Context);
    }
    else if ( *(_BYTE *)(Context + 695) )
    {
      *(_BYTE *)(Context + 695) = 0;
      RaidRestartIoQueue(Context, 0);
    }
    if ( *(_DWORD *)(Context + 920) )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  }
  else
  {
    if ( !*(_BYTE *)(Context + 695) )
      *(_BYTE *)(Context + 695) = 1;
    if ( *(_DWORD *)(Context + 920) )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Context + 24) + 5908LL));
      v18 = *(_QWORD *)(Context + 24);
      if ( *(char *)(v18 + 110) < 0 && *(_DWORD *)(v18 + 5908) == *(_DWORD *)(v18 + 160) )
      {
        LOBYTE(v17) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v18, 0LL, v16, v17);
      }
      RaidUnitReleasePoFx(Context);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v22 = 0LL;
    IoGetActivityIdIrp(Irp, &v22);
    if ( (byte_1C0069841 & 1) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v19,
        *(_QWORD *)(Context + 24),
        (unsigned int)&v22,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
