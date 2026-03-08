/*
 * XREFs of KiIsAddressRangeValid @ 0x1403849BC
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x1403848EC (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A29E0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403A2C14 (KiValidateTriageDumpDataArray.c)
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x14054E304 (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14054F674 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405516E4 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140551C74 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140559658 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405596C0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140559780 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055991C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405599D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140559AE0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140559BD0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140559D4C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140559E4C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140559EE0 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14055A990 (IopCalculateStackInformation.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567894 (KiCollectTriageDumpDataBlocks.c)
 *     PopInternalSaveStackToDumpFile @ 0x140580D7C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MmIsAddressValidEx(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
