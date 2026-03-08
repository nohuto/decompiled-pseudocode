/*
 * XREFs of EtwpLockBufferList @ 0x1402064E4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140205030 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402063C4 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x140300FB4 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140600328 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1406005D4 (EtwpReenableCompression.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r9
  _DWORD *SchedulerAssist; // r11
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 696, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v5) = 0x8000;
      else
        v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v5;
    }
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
  }
}
