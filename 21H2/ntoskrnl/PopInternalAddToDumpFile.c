/*
 * XREFs of PopInternalAddToDumpFile @ 0x1405C6658
 * Callers:
 *     PopSetRange @ 0x14038DDD4 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140553A48 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x1405C68A8 (PopIrpWatchdogBugcheck.c)
 *     PopPowerActionWatchdog @ 0x1405D01F0 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x140850980 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140A4BE04 (PopCreateDumpMdl.c)
 *     PopHiberReadChecksums @ 0x140A4BEC4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x140A4C5B4 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140A4D4A4 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405C6710 (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C227F8 )
    IoAddTriageDumpDataBlock(qword_140C227F8, (PVOID)0x1D8);
  if ( qword_140C22800 )
    IoAddTriageDumpDataBlock(qword_140C22800, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x218);
}
