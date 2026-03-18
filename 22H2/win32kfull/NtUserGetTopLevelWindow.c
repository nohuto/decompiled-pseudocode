/*
 * XREFs of NtUserGetTopLevelWindow @ 0x1C01D3EF0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 && GetTopLevelWindow(v4) )
    v9 = *(_QWORD *)GetTopLevelWindow(v10);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
