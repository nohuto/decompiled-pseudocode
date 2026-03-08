/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00DC758
 * Callers:
 *     toupper @ 0x1C00DAC50 (toupper.c)
 *     mbtowc @ 0x1C00DC5DC (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
