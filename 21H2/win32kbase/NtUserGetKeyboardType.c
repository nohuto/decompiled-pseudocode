/*
 * XREFs of NtUserGetKeyboardType @ 0x1C0159CA0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _GetKeyboardType @ 0x1C01EA3F4 (_GetKeyboardType.c)
 */

__int64 __fastcall NtUserGetKeyboardType(unsigned int a1)
{
  __int64 KeyboardType; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  KeyboardType = (int)GetKeyboardType(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return KeyboardType;
}
