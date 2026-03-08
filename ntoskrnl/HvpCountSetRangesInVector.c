/*
 * XREFs of HvpCountSetRangesInVector @ 0x1407EA7B4
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14030C5F8 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x14072D6A8 (HvStoreModifiedData.c)
 *     HvpGenerateLogMetadata @ 0x1407EA6F0 (HvpGenerateLogMetadata.c)
 *     HvGetHiveLogFileStatus @ 0x1407F7674 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x14035D2F0 (RtlFindNextForwardRunClear.c)
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
