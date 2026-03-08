/*
 * XREFs of KdAcquireDebuggerLock @ 0x1403AE100
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

void __fastcall KdAcquireDebuggerLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v3; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v3) = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KdDebuggerLock);
}
