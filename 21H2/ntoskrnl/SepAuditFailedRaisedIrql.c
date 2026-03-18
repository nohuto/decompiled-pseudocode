/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x1405F5B3C
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
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
