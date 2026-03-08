/*
 * XREFs of ViZwShouldCheck @ 0x140AD2048
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140AD0F00 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140AD0F80 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140AD0FC0 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140AD1010 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD1050 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD10B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD1150 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140AD11A0 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140AD11D0 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140AD1210 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140AD1280 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140AD12B0 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140AD12E0 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD1360 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD13A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD13E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD1420 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD1480 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD14D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD1520 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD1570 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD15C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140AD1620 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD1650 (VfZwDeleteFile_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140AD1680 (VfZwDeleteValueKey_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD16B0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140AD1720 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD1750 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140AD1790 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140AD17E0 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD1820 (VfZwLoadKey_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140AD1860 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD18B0 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD1930 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD1970 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD19C0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD1A10 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD1A60 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140AD1AB0 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD1B00 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD1B70 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140AD1BE0 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD1C30 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140AD1C70 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140AD1CC0 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140AD1D00 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD1D50 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140AD1DC0 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD1E10 (VfZwReplaceKey_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140AD1E50 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140AD1EA0 (VfZwSetValueKey_Entry.c)
 * Callees:
 *     <none>
 */

__int64 ViZwShouldCheck()
{
  unsigned int v0; // ecx
  struct _KPROCESS *Process; // rdx

  v0 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PsInitialSystemProcess && Process != PsInitialSystemProcess )
    return Process != PsIdleProcess;
  return v0;
}
