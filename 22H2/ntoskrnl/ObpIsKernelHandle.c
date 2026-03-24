/*
 * XREFs of ObpIsKernelHandle @ 0x1402C8F50
 * Callers:
 *     ObIsKernelHandle @ 0x14034FF70 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x14061B020 (ObpCloseHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140627D4C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObQueryObjectAuditingByHandle @ 0x140664CA0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14091DB1C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14091E80C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EB48 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED74 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F4E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FFAC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920250 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
