/*
 * XREFs of NtUserRedrawFrameAndHook @ 0x1C01D9F80
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawFrameAndHook @ 0x1C022A73C (xxxRedrawFrameAndHook.c)
 */

__int64 __fastcall NtUserRedrawFrameAndHook(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
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
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    v4 = xxxRedrawFrameAndHook(v5);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
