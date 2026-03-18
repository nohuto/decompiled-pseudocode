/*
 * XREFs of UserReleaseDC @ 0x1C00AC8F0
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C002DFD0 (bDeleteDCInternalEx.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  LODWORD(a1) = ReleaseCacheDC(a1, 0LL, v2) != 2;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return (unsigned int)a1;
}
