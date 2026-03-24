/*
 * XREFs of SeOpenObjectForDeleteAuditAlarm @ 0x140921800
 * Callers:
 *     <none>
 * Callees:
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921860 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectForDeleteAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}
