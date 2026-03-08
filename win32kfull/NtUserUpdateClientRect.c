/*
 * XREFs of NtUserUpdateClientRect @ 0x1C01E0420
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 */

__int64 __fastcall NtUserUpdateClientRect(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

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
    v10 = *(_OWORD *)(v5[5] + 88);
    xxxCalcClientRect(v5, &v10, 0);
    *(_OWORD *)(v5[5] + 104) = v10;
    ThreadUnlock1(v7, v6, v8);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
