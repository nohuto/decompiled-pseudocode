/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1405D99E0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECE20 (SeOpenObjectAuditAlarmWithTransaction.c)
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
