/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1405EA760
 * Callers:
 *     IopCreateSecurityCheck @ 0x140225208 (IopCreateSecurityCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1405EA3A4 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405EA5E0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
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
    SeOpenObjectAuditAlarmWithTransaction(
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
