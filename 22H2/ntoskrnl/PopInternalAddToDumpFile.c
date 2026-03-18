/*
 * XREFs of PopInternalAddToDumpFile @ 0x1405831F0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551B14 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569D34 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x140583424 (PopIrpWatchdogBugcheck.c)
 *     PopSetRange @ 0x14058EFAC (PopSetRange.c)
 *     PopPowerActionWatchdog @ 0x14058F4C0 (PopPowerActionWatchdog.c)
 *     PopThermalWorker @ 0x140801D90 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x140989660 (PoShutdownBugCheck.c)
 *     PopCreateDumpMdl @ 0x140AA22E4 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140AA33EC (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140AA3C40 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA45CC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405832AC (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xD8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1D0);
  if ( *(_QWORD *)&qword_140C3CE58 )
    IoAddTriageDumpDataBlock(qword_140C3CE58, (PVOID)0x1D8);
  if ( qword_140C3CE60 )
    IoAddTriageDumpDataBlock(qword_140C3CE60, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x220);
}
