/*
 * XREFs of NtUserPaintDesktop @ 0x1C01FF8A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C012CD90 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
    v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v9;
    v9[2] = 0LL;
    v9[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    v3 = xxxInternalPaintDesktop(v5, a1, 1);
    ThreadUnlock1(v6);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent, v2);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v3;
}
