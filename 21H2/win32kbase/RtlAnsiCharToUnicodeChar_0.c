/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00C6DF8
 * Callers:
 *     toupper @ 0x1C00C5454 (toupper.c)
 *     mbtowc @ 0x1C00C6CB4 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
