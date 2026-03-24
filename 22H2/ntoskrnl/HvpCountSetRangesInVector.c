/*
 * XREFs of HvpCountSetRangesInVector @ 0x1406BF180
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140331580 (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogMetadata @ 0x1406BF274 (HvpGenerateLogMetadata.c)
 *     HvStoreModifiedData @ 0x140720430 (HvStoreModifiedData.c)
 *     HvGetHiveLogFileStatus @ 0x140723A48 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140330B80 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  v1 = 0;
  v2 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    while ( 1 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( StartingRunIndex != v1 )
        ++v2;
      v1 = StartingRunIndex + NextForwardRunClear;
      if ( StartingRunIndex + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
        return v2;
    }
    ++v2;
  }
  return v2;
}
