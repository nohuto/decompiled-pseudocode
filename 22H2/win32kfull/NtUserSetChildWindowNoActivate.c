/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C012F0C0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
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
      SetOrClrWF(1, v5, 0xD910u, 1);
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v6, v7);
    }
    ThreadUnlock1(v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
