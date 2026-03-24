/*
 * XREFs of RtlUpperChar @ 0x1405ED5E0
 * Callers:
 *     RtlEqualString @ 0x1403069D0 (RtlEqualString.c)
 *     RtlCompareString @ 0x1405EC6B0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x140679630 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1405EE580 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
