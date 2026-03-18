/*
 * XREFs of RtlFindLeastSignificantBit @ 0x1402471E0
 * Callers:
 *     KiMaskToLength @ 0x140A5A21C (KiMaskToLength.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindLeastSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanForward64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
