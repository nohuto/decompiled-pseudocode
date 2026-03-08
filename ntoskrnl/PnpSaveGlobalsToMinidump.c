/*
 * XREFs of PnpSaveGlobalsToMinidump @ 0x14055E2C0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14054F674 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 */

char PnpSaveGlobalsToMinidump()
{
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceActionThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceEventThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDelayedRemoveWorkerThread, (PVOID)8);
  return IoAddTriageDumpDataBlock((ULONG)&PnpDeviceCompletionQueue, (PVOID)0x50);
}
