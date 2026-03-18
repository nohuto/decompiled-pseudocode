/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00E1490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v8 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
    *(_QWORD *)&v15 = *(_QWORD *)(v8 + 416);
    *(_QWORD *)(v8 + 416) = &v15;
    *((_QWORD *)&v15 + 1) = v7;
    HMLockObject(v7);
    if ( (*(_DWORD *)(v7 + 320) & 0x80000) != 0 )
    {
      v13 = *(_QWORD *)(v7 + 104);
      if ( v13 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        if ( v11 )
        {
          v11 = *(_QWORD *)(v11 + 8);
          if ( v11 )
          {
            if ( v13 == *(_QWORD *)(v11 + 24) )
              v6 = 1LL;
          }
        }
      }
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
