void __fastcall SeCloseObjectAuditAlarmForNonObObject(
        const UNICODE_STRING *a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4)
{
  if ( a4 )
    SepAdtCloseObjectAuditAlarm(a1, a2, a3, 0LL, 1);
}
