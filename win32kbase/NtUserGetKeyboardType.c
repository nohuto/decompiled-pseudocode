/*
 * XREFs of NtUserGetKeyboardType @ 0x1C0170330
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     _GetKeyboardType @ 0x1C021B0F8 (_GetKeyboardType.c)
 */

__int64 __fastcall NtUserGetKeyboardType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 KeyboardType; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  KeyboardType = (int)GetKeyboardType(v4);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return KeyboardType;
}
