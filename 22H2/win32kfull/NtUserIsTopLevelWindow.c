/*
 * XREFs of NtUserIsTopLevelWindow @ 0x1C009A200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
    {
      v10 = *(_QWORD *)(v4 + 24);
      v5 = 0LL;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
          v5 = *(_QWORD *)(v11 + 24);
      }
      if ( v6 == v5 )
        v9 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
