/*
 * XREFs of NtUserIsTopLevelWindow @ 0x1C00D02B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 104);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v4 + 24);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 )
          v8 = *(_QWORD *)(v9 + 24);
      }
      if ( v5 == v8 )
        v6 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
