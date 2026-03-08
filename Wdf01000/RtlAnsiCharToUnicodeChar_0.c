/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C000A916
 * Callers:
 *     mbtowc @ 0x1C000A778 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
