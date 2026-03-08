/*
 * XREFs of NtUserInitializeClientPfnArrays @ 0x1C00EE790
 * Callers:
 *     <none>
 * Callees:
 *     InitializeClientPfnArrays @ 0x1C00EE884 (InitializeClientPfnArrays.c)
 */

__int64 __fastcall NtUserInitializeClientPfnArrays(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  if ( a1 && (a1 & 3) != 0 || a2 && (a2 & 3) != 0 || a3 && (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = InitializeClientPfnArrays(a1, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
