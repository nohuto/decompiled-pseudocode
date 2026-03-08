/*
 * XREFs of PopInternalAddToDumpFile @ 0x140580CC0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14054F674 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567894 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x140580EF4 (PopIrpWatchdogBugcheck.c)
 *     PopSetRange @ 0x14058CA7C (PopSetRange.c)
 *     PopPowerActionWatchdog @ 0x14058CF90 (PopPowerActionWatchdog.c)
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x1409865B0 (PoShutdownBugCheck.c)
 *     PopCreateDumpMdl @ 0x140A9F0B4 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140AA01BC (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x140580D7C (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C3CD98 )
    IoAddTriageDumpDataBlock(qword_140C3CD98, (PVOID)0x1D8);
  if ( qword_140C3CDA0 )
    IoAddTriageDumpDataBlock(qword_140C3CDA0, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x220);
}
