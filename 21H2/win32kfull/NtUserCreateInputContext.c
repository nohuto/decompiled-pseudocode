/*
 * XREFs of NtUserCreateInputContext @ 0x1C0161600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C01041B0 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 *InputContext; // rax
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1);
      if ( InputContext )
        v3 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL, gpsi, v2);
    }
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
