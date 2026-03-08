/*
 * XREFs of wcsrchr @ 0x1C00DAB4C
 * Callers:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0027B84 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0085844 (GetWindowsDirectoryDevicePath.c)
 *     rimLoadImage @ 0x1C008B64C (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00B1D40 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ivrLoadImage @ 0x1C0222150 (ivrLoadImage.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
