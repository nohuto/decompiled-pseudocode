/*
 * XREFs of ObpIsKernelHandle @ 0x1402BEB24
 * Callers:
 *     ObIsKernelHandle @ 0x14036EA30 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C341C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     ObSetHandleAttributes @ 0x14073FE00 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140740010 (ObQueryObjectAuditingByHandle.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA0C4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409CA84C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB888 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBAB4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC218 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCCF0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCF9C (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
