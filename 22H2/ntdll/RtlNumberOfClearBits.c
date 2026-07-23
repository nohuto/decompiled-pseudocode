/*
 * XREFs of RtlNumberOfClearBits @ 0x1800ECF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180077FB0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
