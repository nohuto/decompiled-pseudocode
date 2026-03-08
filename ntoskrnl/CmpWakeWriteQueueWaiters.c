/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x1406C0080
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall CmpWakeWriteQueueWaiters(ULONG_PTR BugCheckParameter2, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _LIST_ENTRY *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = (PRKEVENT)Flink;
    }
    while ( Flink );
  }
  return KeAbPostRelease(BugCheckParameter2);
}
