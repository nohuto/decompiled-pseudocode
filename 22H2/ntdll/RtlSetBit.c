/*
 * XREFs of RtlSetBit @ 0x180081A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
