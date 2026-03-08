/*
 * XREFs of UserGetDesktopIdForCurrentThread @ 0x1C000C154
 * Callers:
 *     NtDCompositionGetMaterialProperty @ 0x1C000C040 (NtDCompositionGetMaterialProperty.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 */

__int64 __fastcall UserGetDesktopIdForCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v4 = 0LL;
  if ( *((_QWORD *)PtiCurrentShared() + 57) )
    v4 = ***(_QWORD ***)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL);
  UserSessionSwitchLeaveCrit();
  return v4;
}
