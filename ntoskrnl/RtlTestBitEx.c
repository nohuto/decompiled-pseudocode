/*
 * XREFs of RtlTestBitEx @ 0x14040BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestBitEx(__int64 a1, unsigned __int64 a2)
{
  return _bittest64(*(const signed __int64 **)(a1 + 8), a2);
}
