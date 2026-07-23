/*
 * XREFs of RtlUpperChar @ 0x180062230
 * Callers:
 *     RtlEqualString @ 0x180061F50 (RtlEqualString.c)
 *     RtlPrefixString @ 0x1800620F0 (RtlPrefixString.c)
 *     RtlCompareString @ 0x18008B760 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EB690 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
