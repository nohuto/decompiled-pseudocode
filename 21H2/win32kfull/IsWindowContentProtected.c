/*
 * XREFs of IsWindowContentProtected @ 0x1C00388B4
 * Callers:
 *     CreateSprite @ 0x1C00386B4 (CreateSprite.c)
 *     ProtectedContentAccessCheck @ 0x1C0078F0C (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BF148 (CreateOrGetRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C011CEC8 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
