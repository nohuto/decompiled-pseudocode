/*
 * XREFs of SeCloseObjectAuditAlarmForNonObObject @ 0x1409CAD90
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8548 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarmForNonObObject(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4)
{
  if ( a4 )
    SepAdtCloseObjectAuditAlarm(a1, a2, a3, 0LL, 1);
}
