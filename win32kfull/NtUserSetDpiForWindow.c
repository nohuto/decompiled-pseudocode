/*
 * XREFs of NtUserSetDpiForWindow @ 0x1C01DCA90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDpiForWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v8;
      *((_QWORD *)&v8 + 1) = v2;
      HMLockObject(v2);
      UserSetLastError(50);
      ThreadUnlock1(v5, v4, v6);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return 0LL;
}
