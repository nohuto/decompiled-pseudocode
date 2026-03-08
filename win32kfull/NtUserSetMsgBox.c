/*
 * XREFs of NtUserSetMsgBox @ 0x1C01DD4A0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetMsgBox(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (__int64 *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v2;
    HMLockObject(v2);
    v4 = 1LL;
    v6 = **(_QWORD **)(v5[3] + 8);
    ++*(_DWORD *)(v6 + 48);
    SetOrClrWF(1, v5, 0x20u, 1);
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
