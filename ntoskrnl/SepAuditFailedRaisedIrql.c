/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x1405B72BC
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( SepCrashOnAuditFail )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      SepAdtCrashOnAuditFailWorkItem.List.Flink = 0LL;
      SepAdtCrashOnAuditFailWorkItem.WorkerRoutine = (void (__fastcall *)(void *))SepAuditFailed;
      SepAdtCrashOnAuditFailWorkItem.Parameter = (void *)(int)a1;
      ExQueueWorkItem(&SepAdtCrashOnAuditFailWorkItem, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
