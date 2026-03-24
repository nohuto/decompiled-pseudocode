/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01FDE40
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01E5338 (IsWindowGDIScaledDpiMessageEnabledX.c)
 */

__int64 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v8;
    *((_QWORD *)&v8 + 1) = v2;
    HMLockObject(v2);
    v4 = IsWindowGDIScaledDpiMessageEnabledX(v5);
    ThreadUnlock1(v6);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
