/*
 * XREFs of KiIsAddressRangeValid @ 0x1403A7C94
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403A7970 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403A7BA4 (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403AC9E4 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x14054FF70 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1405507A4 (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551B14 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140553B84 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140554114 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055BAF8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055BB60 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055BC20 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055BDBC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055BE78 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055BF80 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C070 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C1EC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C2EC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C380 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14055CE30 (IopCalculateStackInformation.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569D34 (KiCollectTriageDumpDataBlocks.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405832AC (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
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
