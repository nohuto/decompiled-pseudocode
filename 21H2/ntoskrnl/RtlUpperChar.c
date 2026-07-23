/*
 * XREFs of RtlUpperChar @ 0x1406DCD40
 * Callers:
 *     RtlEqualString @ 0x14022D5E0 (RtlEqualString.c)
 *     RtlPrefixString @ 0x1405F4760 (RtlPrefixString.c)
 *     RtlCompareString @ 0x1406DBE10 (RtlCompareString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406DDCE0 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
