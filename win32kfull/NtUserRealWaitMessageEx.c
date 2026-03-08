/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C01D9DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x1C006D200 (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004);
    v5 = 0;
  }
  else
  {
    v5 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
