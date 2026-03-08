/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1409CB280
 * Callers:
 *     <none>
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CB2A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
