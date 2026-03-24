/*
 * XREFs of NtUserIsTopLevelWindow @ 0x1C00FA490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 104);
    if ( v3 )
    {
      v5 = *(_QWORD *)(v2 + 24);
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v7 )
          v6 = *(_QWORD *)(v7 + 24);
      }
      if ( v3 == v6 )
        v4 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
