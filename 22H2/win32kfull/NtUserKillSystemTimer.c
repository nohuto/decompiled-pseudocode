/*
 * XREFs of NtUserKillSystemTimer @ 0x1C01D5F00
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 */

__int64 __fastcall NtUserKillSystemTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int Timer; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  Timer = 0;
  v10 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    Timer = FindTimer(v10, a2, 2u, 1, 0LL);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return Timer;
}
