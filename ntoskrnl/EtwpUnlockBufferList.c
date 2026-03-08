/*
 * XREFs of EtwpUnlockBufferList @ 0x140206498
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
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  ULONG_PTR v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a1 + 300) == 1;
  v3 = a1 + 696;
  if ( v2 )
    return ExReleasePushLockEx(v3, 0LL);
  v4 = *a2;
  result = KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v2 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v2 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
