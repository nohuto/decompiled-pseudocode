/*
 * XREFs of RtlFindMostSignificantBit @ 0x140355E60
 * Callers:
 *     MiValidateZeroBits @ 0x140721120 (MiValidateZeroBits.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140A2EB04 (MiStoreGraphicsProtectionInVad.c)
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
