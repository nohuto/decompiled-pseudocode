/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C007EF04
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     _VisrgnFromWindow @ 0x1C007EFB0 (_VisrgnFromWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v4, a2);
  if ( result )
    return VisrgnFromWindow(result, a3, a1);
  return result;
}
