/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C0082780
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     _GetKeyboardLayout @ 0x1C00827AC (_GetKeyboardLayout.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 KeyboardLayout; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  KeyboardLayout = GetKeyboardLayout(v4);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return KeyboardLayout;
}
