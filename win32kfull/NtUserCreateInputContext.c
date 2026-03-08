/*
 * XREFs of NtUserCreateInputContext @ 0x1C01CF060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00CF480 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *InputContext; // rax

  EnterCrit(0LL, 0LL);
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
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(120);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
