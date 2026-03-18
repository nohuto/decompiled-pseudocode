/*
 * XREFs of wcsrchr @ 0x1C00D6088
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C004F4EC (GetWindowsDirectoryDevicePath.c)
 *     rimLoadImage @ 0x1C0056CD4 (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC250 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00BFFBC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ivrLoadImage @ 0x1C01F102C (ivrLoadImage.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r8
  __int16 v4; // ax

  v2 = Str;
  while ( *Str++ )
    ;
  while ( 1 )
  {
    v4 = *--Str;
    if ( Str == v2 )
      break;
    if ( v4 == Ch )
      return (wchar_t *)Str;
  }
  if ( v4 == Ch )
    return (wchar_t *)Str;
  return 0LL;
}
