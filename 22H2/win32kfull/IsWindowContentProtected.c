/*
 * XREFs of IsWindowContentProtected @ 0x1C0038814
 * Callers:
 *     CreateSprite @ 0x1C0038614 (CreateSprite.c)
 *     ProtectedContentAccessCheck @ 0x1C0078E6C (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C011CB48 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
