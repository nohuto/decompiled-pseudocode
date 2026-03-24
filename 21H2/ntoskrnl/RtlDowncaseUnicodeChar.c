/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14090FAE0
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x1402B1FF0 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
