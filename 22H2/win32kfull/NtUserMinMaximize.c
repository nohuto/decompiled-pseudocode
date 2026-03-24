/*
 * XREFs of NtUserMinMaximize @ 0x1C01FF5A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagWND *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v6;
      HMLockObject(v6);
      v10 = (__int64 *)xxxMinMaximizeEx(v9, a2, gdwPUDFlags & 0x10000 | (unsigned int)(a3 != 0), 0LL, 0LL, 0LL);
      if ( v10 )
        v8 = *v10;
      ThreadUnlock1(v11);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
