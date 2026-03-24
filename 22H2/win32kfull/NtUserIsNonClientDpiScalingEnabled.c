/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00F9850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    v7 = v5[5];
    if ( (*(_DWORD *)(v7 + 288) & 0xF) == 2 )
    {
      v8 = v5[13];
      if ( v8 )
      {
        v9 = v5[3];
        v6 = 0LL;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( v10 )
            v6 = *(_QWORD *)(v10 + 24);
        }
        if ( v8 == v6 && (*(_DWORD *)(v7 + 232) & 0x10000000) != 0 )
          v4 = 1LL;
      }
    }
    ThreadUnlock1(v6);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
