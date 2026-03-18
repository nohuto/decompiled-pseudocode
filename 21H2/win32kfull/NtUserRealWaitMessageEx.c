/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C01FB6D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL, v4);
    v6 = 0;
  }
  else
  {
    v6 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
