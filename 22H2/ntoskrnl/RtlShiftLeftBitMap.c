/*
 * XREFs of RtlShiftLeftBitMap @ 0x140588490
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlExtractBitMap @ 0x140586CE0 (RtlExtractBitMap.c)
 */

void __fastcall RtlShiftLeftBitMap(PRTL_BITMAP BitMapHeader, ULONG NumberToClear)
{
  unsigned int SizeOfBitMap; // r9d
  int v3; // eax

  if ( NumberToClear )
  {
    SizeOfBitMap = BitMapHeader->SizeOfBitMap;
    v3 = 0;
    if ( NumberToClear < BitMapHeader->SizeOfBitMap )
    {
      RtlExtractBitMap(BitMapHeader, BitMapHeader, NumberToClear, SizeOfBitMap - NumberToClear);
      RtlClearBits(BitMapHeader, BitMapHeader->SizeOfBitMap - NumberToClear, NumberToClear);
    }
    else
    {
      LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
      memset(BitMapHeader->Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
    }
  }
}
