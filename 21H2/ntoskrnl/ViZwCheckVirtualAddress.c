/*
 * XREFs of ViZwCheckVirtualAddress @ 0x140A9598C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140A94880 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140A94900 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140A94940 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140A94990 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140A949D0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140A94A30 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140A94AD0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140A94B20 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140A94B50 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140A94B90 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140A94C00 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140A94C60 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140A94CE0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140A94D20 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140A94D60 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140A94DA0 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140A94E00 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140A94E50 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140A94EA0 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140A94EF0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140A94F40 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140A94FA0 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140A95030 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140A950A0 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140A950D0 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140A95110 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140A95160 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140A951E0 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140A95230 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140A952B0 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140A952F0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140A95340 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140A95390 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140A953E0 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140A95430 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140A95480 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140A954F0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140A95560 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140A955B0 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140A955F0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140A95640 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140A95680 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140A956D0 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140A95740 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140A957D0 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140A95820 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140A958B4 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViZwCheckVirtualAddress(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = BugCheckParameter3 - 1;
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFDLL )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE3uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
