/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00C7188
 * Callers:
 *     toupper @ 0x1C00C57E4 (toupper.c)
 *     mbtowc @ 0x1C00C7044 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
