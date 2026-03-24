/*
 * XREFs of PopInternalAddToDumpFile @ 0x140564F44
 * Callers:
 *     PopSetRange @ 0x140388200 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14050347C (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x140565198 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14056EA5C (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x14056F590 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1407C0270 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E75C0 (PoShutdownBugCheck.c)
 *     PopRestoreHiberContext @ 0x1409934E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140993BB4 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x140994874 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409B1378 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B1854 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x140564FFC (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C23478 )
    IoAddTriageDumpDataBlock(qword_140C23478, (PVOID)0x1D8);
  if ( qword_140C23480 )
    IoAddTriageDumpDataBlock(qword_140C23480, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
