/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1802B1860
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802B23F0 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(const wchar_t *this, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx

  v3 = &off_180647138;
  while ( _o__wcsicmp(this, *v3) )
  {
    if ( ++v3 == (wchar_t **)&unk_180647140 )
      return 0;
  }
  return 1;
}
