/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C0082640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     _GetKeyboardLayoutList @ 0x1C00826CC (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(__int64 a1, volatile void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v5 = (unsigned int)a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a2, 8 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v5) = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList((unsigned int)v5, a2);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return KeyboardLayoutList;
}
