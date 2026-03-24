/*
 * XREFs of ?bIsPathInSystemFontsDir@@YAHPEBG@Z @ 0x1C00A5148
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00A6BF0 (UmfdLoadFontFileView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsPathInSystemFontsDir(wchar_t *Str1)
{
  unsigned int v2; // ebx
  size_t v3; // rax

  v2 = 0;
  if ( gpwszFontsDirectory )
  {
    v3 = wcsnlen(gpwszFontsDirectory, 0x104uLL);
    return wcsncmp(Str1, gpwszFontsDirectory, v3) == 0;
  }
  return v2;
}
