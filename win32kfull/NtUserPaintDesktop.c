/*
 * XREFs of NtUserPaintDesktop @ 0x1C01D8F80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C00F9338 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
    v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v10;
    v10[2] = 0LL;
    v10[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    v2 = xxxInternalPaintDesktop(v4, a1, 1);
    ThreadUnlock1(v6, v5, v7);
  }
  else
  {
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
