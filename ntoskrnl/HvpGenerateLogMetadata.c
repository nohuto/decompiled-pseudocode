/*
 * XREFs of HvpGenerateLogMetadata @ 0x1407EA6F0
 * Callers:
 *     HvpGenerateLogEntryMetadata @ 0x1402B24D4 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntry @ 0x14072DD08 (HvpGenerateLogEntry.c)
 *     HvpApplyLegacyLogFile @ 0x140A2755C (HvpApplyLegacyLogFile.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x14035D2F0 (RtlFindNextForwardRunClear.c)
 *     HvpCountSetRangesInVector @ 0x1407EA7B4 (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvpGenerateLogMetadata(PRTL_BITMAP BitMapHeader, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ebp
  ULONG v9; // edi
  unsigned int v10; // r12d
  ULONG NextForwardRunClear; // r8d
  ULONG v12; // edx
  ULONG StartingRunIndex; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  StartingRunIndex = 0;
  v7 = HvpCountSetRangesInVector(BitMapHeader);
  v8 = v7;
  if ( a2 && *a3 >= v7 )
  {
    v9 = 0;
    v10 = 0;
    if ( BitMapHeader->SizeOfBitMap )
    {
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v9, &StartingRunIndex);
        if ( !NextForwardRunClear )
          break;
        v12 = StartingRunIndex;
        if ( StartingRunIndex != v9 )
        {
          *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
          *(_DWORD *)(a2 + 8LL * v10++ + 4) = (v12 - v9) << 9;
        }
        v9 = v12 + NextForwardRunClear;
        if ( v12 + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
          goto LABEL_10;
      }
      *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
      *(_DWORD *)(a2 + 8LL * v10 + 4) = (BitMapHeader->SizeOfBitMap - v9) << 9;
    }
  }
  else
  {
    v3 = -1073741789;
  }
LABEL_10:
  *a3 = v8;
  return v3;
}
