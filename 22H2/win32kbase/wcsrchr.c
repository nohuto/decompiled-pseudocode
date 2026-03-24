/*
 * XREFs of wcsrchr @ 0x1C00C56DC
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C000A2C0 (GetWindowsDirectoryDevicePath.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0016CD0 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     rimLoadImage @ 0x1C006D450 (rimLoadImage.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00AEB4C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ivrLoadImage @ 0x1C01BA908 (ivrLoadImage.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
