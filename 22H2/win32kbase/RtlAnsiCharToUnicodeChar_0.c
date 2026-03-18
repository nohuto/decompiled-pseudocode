/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00CFEA8
 * Callers:
 *     toupper @ 0x1C00CE3A0 (toupper.c)
 *     mbtowc @ 0x1C00CFD2C (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
