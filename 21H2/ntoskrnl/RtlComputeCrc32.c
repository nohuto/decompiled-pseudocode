/*
 * XREFs of RtlComputeCrc32 @ 0x140369820
 * Callers:
 *     SmDecompressBuffer @ 0x14035F614 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14064FBF4 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14064FC7C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1406500D8 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1406503B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407EDB78 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PopBsdUpdateWorker @ 0x140810990 (PopBsdUpdateWorker.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140B0B5F8 (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2++;
      v4 = (v4 >> 8) ^ *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v6 ^ v4));
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
