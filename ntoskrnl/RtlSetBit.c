/*
 * XREFs of RtlSetBit @ 0x1402E1F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _BYTE *v2; // r8

  v2 = (char *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3);
  *v2 |= 1 << (BitNumber & 7);
}
