/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14090FB30
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x140309740 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
