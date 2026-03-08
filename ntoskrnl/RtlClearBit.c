/*
 * XREFs of RtlClearBit @ 0x1402E4CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _BYTE *v2; // r8

  v2 = (char *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3);
  *v2 &= ~(1 << (BitNumber & 7));
}
