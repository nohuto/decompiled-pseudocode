/*
 * XREFs of IsWindowContentProtected @ 0x1C00CF0C0
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C005AC9C (_VisrgnFromWindow.c)
 *     CreateSprite @ 0x1C00CD224 (CreateSprite.c)
 *     ProtectedContentAccessCheck @ 0x1C00CF0E8 (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
