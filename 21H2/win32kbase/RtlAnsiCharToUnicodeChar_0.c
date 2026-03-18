/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00D7C68
 * Callers:
 *     toupper @ 0x1C00D6190 (toupper.c)
 *     mbtowc @ 0x1C00D7AEC (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
