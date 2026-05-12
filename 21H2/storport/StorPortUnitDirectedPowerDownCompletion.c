/*
 * XREFs of StorPortUnitDirectedPowerDownCompletion @ 0x1C0041490
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0011364 (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0013F1C (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C003DC10 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
  }
  *(_BYTE *)(Context + 449) &= ~1u;
  v8 = *(_QWORD *)(Context + 1744);
  *(_QWORD *)(Context + 2088) = MEMORY[0xFFFFF78000000008];
  v9 = *(_DWORD *)(v8 + 32);
  if ( *(char *)(*(_QWORD *)(Context + 24) + 108LL) >= 0 )
  {
    *(_DWORD *)(v8 + 32) = v9 & 0xFFFFFF7F;
  }
  else
  {
    *(_DWORD *)(v8 + 32) = v9 | 0x80;
    if ( !*(_QWORD *)(Context + 2080) )
      *(_QWORD *)(Context + 2080) = *(_QWORD *)(Context + 2088);
  }
  PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1744), v8, v7);
  if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(Context + 24),
      &EventUnitDirectedPowerDownStop,
      v10,
      **(_QWORD **)(Context + 1744),
      *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
      *(_BYTE *)(Context + 96),
      *(_BYTE *)(Context + 97),
      *(_BYTE *)(Context + 98),
      1);
  *(_BYTE *)(Context + 451) |= 2u;
}
