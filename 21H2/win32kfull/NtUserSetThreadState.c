/*
 * XREFs of NtUserSetThreadState @ 0x1C0116F20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL, v4);
    v8 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 432LL);
    v7 = a1 ^ *(_DWORD *)(v6 + 388);
    v8 = 1LL;
    *(_DWORD *)(v6 + 388) ^= a2 & v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
