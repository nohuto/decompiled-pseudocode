/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C0095840
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     _GetKeyboardLayoutList @ 0x1C00958D4 (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx

  EnterSharedCrit(0, 1);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForWrite(a2, 8LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    a1 = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList(a1, a2);
  UserSessionSwitchLeaveCrit();
  return KeyboardLayoutList;
}
