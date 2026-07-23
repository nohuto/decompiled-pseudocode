/*
 * XREFs of PopInternalAddToDumpFile @ 0x140565184
 * Callers:
 *     PopSetRange @ 0x140388350 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405033FC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x1405653D8 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14056EC9C (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x14056F7D0 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     PopRestoreHiberContext @ 0x1409944E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140994BB4 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409B22A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056523C (PopInternalSaveStackToDumpFile.c)
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
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1C8);
  if ( *(_QWORD *)&qword_140C23A98 )
    IoAddTriageDumpDataBlock(qword_140C23A98, (PVOID)0x1D8);
  if ( qword_140C23AA0 )
    IoAddTriageDumpDataBlock(qword_140C23AA0, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
