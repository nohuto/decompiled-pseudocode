/*
 * XREFs of RtlUpperChar @ 0x1406B00C0
 * Callers:
 *     RtlEqualString @ 0x140238C70 (RtlEqualString.c)
 *     RtlCompareString @ 0x1406AFF70 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1406B0020 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
