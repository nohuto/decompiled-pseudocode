/*
 * XREFs of RtlUpperChar @ 0x14075DD40
 * Callers:
 *     RtlEqualString @ 0x1402D0DA0 (RtlEqualString.c)
 *     RtlPrefixString @ 0x14075DBF0 (RtlPrefixString.c)
 *     RtlCompareString @ 0x14075DC90 (RtlCompareString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process();
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
