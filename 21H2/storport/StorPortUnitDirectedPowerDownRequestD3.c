/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3 @ 0x1C00415E8
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C0041370 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1C0041810 (StorPortUnitDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C003DC10 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3(PVOID Context)
{
  NTSTATUS v2; // ebp
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  if ( *((_DWORD *)Context + 123) == 1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Context + 218) + 32LL) & 1) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 476, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 236),
            StorPortUnitDirectedPowerDownRequestD3Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v2 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             StorPortUnitPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 218) + 64LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
    }
    else
    {
      v2 = 0;
    }
    if ( v2 >= 0
      && PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 449) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 441, 0);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v4 = *((_QWORD *)Context + 218);
  *((_QWORD *)Context + 261) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(v4 + 32);
  if ( *(char *)(*((_QWORD *)Context + 3) + 108LL) >= 0 )
  {
    *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFF7F;
  }
  else
  {
    *(_DWORD *)(v4 + 32) = v5 | 0x80;
    if ( !*((_QWORD *)Context + 260) )
      *((_QWORD *)Context + 260) = *((_QWORD *)Context + 261);
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 218), v4, v3);
  if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
  {
    v7 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = *((_BYTE *)Context + 96);
    LODWORD(Contexta) = *(_DWORD *)(v7 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v7,
      &EventUnitDirectedPowerDownStop,
      v6,
      **((_QWORD **)Context + 218),
      Contexta,
      Irp,
      *((_BYTE *)Context + 97),
      *((_BYTE *)Context + 98),
      0);
  }
}
