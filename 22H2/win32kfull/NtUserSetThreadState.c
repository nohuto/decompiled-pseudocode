/*
 * XREFs of NtUserSetThreadState @ 0x1C00B9EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rdx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL);
    v8 = 0LL;
  }
  else
  {
    v5 = gptiCurrent;
    v6 = *(_QWORD *)(gptiCurrent + 432LL);
    v7 = a1 ^ *(_DWORD *)(v6 + 396);
    v8 = 1LL;
    v9 = *(_DWORD *)(v6 + 396) ^ a2 & (unsigned int)v7;
    *(_DWORD *)(v6 + 396) = v9;
  }
  UserSessionSwitchLeaveCrit(v4, v9, v5, v6);
  return v8;
}
