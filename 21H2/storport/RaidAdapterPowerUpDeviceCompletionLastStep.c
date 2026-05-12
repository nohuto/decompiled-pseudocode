/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001281C
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C00127F0 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014AF0 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B640 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001367C (RaidUnitProcessSetDevicePowerIrp.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013AB0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidAdapterRestartAdapter @ 0x1C0013D74 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F74 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0014204 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C002DC9C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x1C003DF0C (McTemplateK0qpd_EtwWriteTransfer.c)
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rbx
  IRP *v10; // rdx
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2, 0LL);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2, 0LL);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 292) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v14 = 0LL;
    IoGetActivityIdIrp(Irp, &v14);
    if ( (byte_1C0069841 & 1) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(
        v7,
        v6,
        (unsigned int)&v14,
        *(_DWORD *)(a2 + 56),
        (char)Irp,
        Irp->IoStatus.Status);
  }
  if ( *(char *)(a2 + 109) < 0 )
  {
    LODWORD(v12) = *(_DWORD *)(a2 + 708);
    *((_QWORD *)&v12 + 1) = *(_QWORD *)(a2 + 696);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5144) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5072));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-121];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1920);
      *(_QWORD *)(v9 + 1920) = 0LL;
      *(_BYTE *)(v9 + 1913) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v8[-121], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1912) )
    {
      v11 = *(unsigned int *)(v9 + 1916);
      *(_BYTE *)(v9 + 1912) = 0;
      StorPortUnitIdleState(&v8[-121], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 280));
}
