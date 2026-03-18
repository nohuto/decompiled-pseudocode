/*
 * XREFs of ViZwCheckVirtualAddress @ 0x140AD600C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140AD4F00 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140AD4F80 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140AD4FC0 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140AD5010 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD5050 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD50B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD5150 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140AD51A0 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140AD51D0 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140AD5210 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140AD5280 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140AD52E0 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD5360 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD53A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD53E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD5420 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD5480 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD54D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD5520 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD5570 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD55C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140AD5620 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD56B0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140AD5720 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD5750 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140AD5790 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140AD57E0 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140AD5860 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD58B0 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD5930 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD5970 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD59C0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD5A10 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD5A60 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140AD5AB0 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD5B00 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD5B70 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140AD5BE0 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD5C30 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140AD5C70 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140AD5CC0 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140AD5D00 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD5D50 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140AD5DC0 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140AD5E50 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140AD5EA0 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140AD5F34 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140AD5F84 (ViZwCheckUnicodeString.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViZwCheckVirtualAddress(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = BugCheckParameter3 - 1;
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFELL )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE3uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
