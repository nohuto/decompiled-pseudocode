/*
 * XREFs of NtUserCallHwndParamLockSafe @ 0x1C010D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwndParamLockSafe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    if ( (_DWORD)v3 != 125 || (v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
    {
      *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v12;
      *((_QWORD *)&v12 + 1) = v6;
      HMLockObject(v6);
      if ( (_DWORD)v3 == 125 )
        v8 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v9, a2);
      ThreadUnlock1(v10);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
