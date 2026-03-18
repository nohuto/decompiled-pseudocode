/*
 * XREFs of NtGdiSetFontEnumeration @ 0x1C029F7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiSetFontEnumeration()
{
  EngSetLastError(0x32u);
  return gulFontInformation;
}
