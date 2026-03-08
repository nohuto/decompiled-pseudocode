/*
 * XREFs of RtlShiftLeftBitMap @ 0x1405A6E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlExtractBitMap @ 0x1405A5880 (RtlExtractBitMap.c)
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
      RtlExtractBitMap((__int64)BitMapHeader, &BitMapHeader->SizeOfBitMap, NumberToClear, SizeOfBitMap - NumberToClear);
      RtlClearBits(BitMapHeader, BitMapHeader->SizeOfBitMap - NumberToClear, NumberToClear);
    }
    else
    {
      LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
      memset(BitMapHeader->Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
    }
  }
}
