/*
 * XREFs of RtlFindMostSignificantBit @ 0x140234EA0
 * Callers:
 *     MiValidateZeroBits @ 0x14070257C (MiValidateZeroBits.c)
 *     MiStoreGraphicsProtectionInVad @ 0x1408C6FB4 (MiStoreGraphicsProtectionInVad.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
