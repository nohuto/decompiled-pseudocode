/*
 * XREFs of NtUserCallHwndSafe @ 0x1C00539A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwndSafe(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v4;
    HMLockObject(v4);
    if ( (unsigned int)(v2 - 90) <= 1 )
      v6 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v7);
    ThreadUnlock1(v8);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
