/*
 * XREFs of RtlComputeCrc32 @ 0x1402B8B70
 * Callers:
 *     SmDecompressBuffer @ 0x14035AD38 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C5638 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x140671D5C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140671DE4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067224C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067250C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x14073A984 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140B4A368 (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, char *a2, __int64 a3)
{
  unsigned int v4; // ecx
  char v5; // al

  v4 = ~a1;
  if ( (_DWORD)a3 )
  {
    a3 = (unsigned int)a3;
    do
    {
      v5 = *a2++;
      v4 = *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v5 ^ v4)) ^ (v4 >> 8);
      --a3;
    }
    while ( a3 );
  }
  return ~v4;
}
