/*
 * XREFs of UserReleaseDC @ 0x1C003DB80
 * Callers:
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  LODWORD(v4) = ReleaseCacheDC(v4, 0LL) != 2;
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return (unsigned int)v4;
}
