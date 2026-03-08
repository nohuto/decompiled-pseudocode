/*
 * XREFs of NtUserGetClassIcoCur @ 0x1C00E1170
 * Callers:
 *     <none>
 * Callees:
 *     GetClassIcoCur @ 0x1C00E123C (GetClassIcoCur.c)
 */

__int64 __fastcall NtUserGetClassIcoCur(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 *ClassIcoCur; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v4;
    HMLockObject(v4);
    ClassIcoCur = (__int64 *)GetClassIcoCur(v7, a2);
    if ( ClassIcoCur )
      v6 = *ClassIcoCur;
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
