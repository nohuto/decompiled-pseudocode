/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14090FC40
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x1402301A0 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
