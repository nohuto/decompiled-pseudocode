/*
 * XREFs of NtUserBeginPaint @ 0x1C0100860
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C00461A0 (xxxEndPaint.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxBeginPaint @ 0x1C007D854 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v6; // rbx
  __int128 v8; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h]
  _OWORD v10[5]; // [rsp+60h] [rbp-68h] BYREF

  memset(v10, 0, 0x48uLL);
  v8 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v5 )
  {
    *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v8;
    *((_QWORD *)&v8 + 1) = v5;
    HMLockObject(v5);
    v6 = xxxBeginPaint(v5, (__int64)v10);
    DWORD1(v10[4]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v10[0];
    *(_OWORD *)(a2 + 16) = v10[1];
    *(_OWORD *)(a2 + 32) = v10[2];
    *(_OWORD *)(a2 + 48) = v10[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v10[4];
    ThreadUnlock1(MmUserProbeAddress);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
