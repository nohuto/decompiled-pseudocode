/*
 * XREFs of NtUserCreateInputContext @ 0x1C0151050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00F30B0 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *InputContext; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1);
      if ( InputContext )
        v2 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL, gpsi);
    }
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
