/*
 * XREFs of IsWindowContentProtected @ 0x1C002E710
 * Callers:
 *     CreateSprite @ 0x1C002891C (CreateSprite.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     ProtectedContentAccessCheck @ 0x1C0039B9C (ProtectedContentAccessCheck.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C007EFB0 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
