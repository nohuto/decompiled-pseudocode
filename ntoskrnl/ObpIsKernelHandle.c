/*
 * XREFs of ObpIsKernelHandle @ 0x1403521C8
 * Callers:
 *     ObIsKernelHandle @ 0x140303080 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407D7FB0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409C77FC (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
