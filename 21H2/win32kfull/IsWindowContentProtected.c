/*
 * XREFs of IsWindowContentProtected @ 0x1C0077D48
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     ProtectedContentAccessCheck @ 0x1C0075B9C (ProtectedContentAccessCheck.c)
 *     CreateSprite @ 0x1C008328C (CreateSprite.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C0102848 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1u) & 1;
}
