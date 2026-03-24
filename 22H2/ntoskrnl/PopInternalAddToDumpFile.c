/*
 * XREFs of PopInternalAddToDumpFile @ 0x140564E84
 * Callers:
 *     PopSetRange @ 0x140387B00 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405030FC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x1405650D8 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14056E99C (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x14056F4D0 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1407C0A30 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     PopRestoreHiberContext @ 0x140993CC8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140994394 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x140995054 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409B14B8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B1994 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC128 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x140564F3C (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C23A78 )
    IoAddTriageDumpDataBlock(qword_140C23A78, (PVOID)0x1D8);
  if ( qword_140C23A80 )
    IoAddTriageDumpDataBlock(qword_140C23A80, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
