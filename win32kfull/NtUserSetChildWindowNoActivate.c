/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C00F20B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x40) != 0 )
    {
      *(_DWORD *)(v5 + 320) |= 0x2000u;
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(87);
    }
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
