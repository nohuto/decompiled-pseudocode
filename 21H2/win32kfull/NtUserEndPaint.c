/*
 * XREFs of NtUserEndPaint @ 0x1C0046110
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C0046240 (xxxEndPaint.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+40h] [rbp-68h]
  _OWORD v11[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  v9 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v5;
    HMLockObject(v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11[0] = *(_OWORD *)a2;
    v11[1] = *(_OWORD *)(a2 + 16);
    v11[2] = *(_OWORD *)(a2 + 32);
    v11[3] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v11[4] = *(_QWORD *)(a2 + 64);
    v6 = xxxEndPaint(v5);
    ThreadUnlock1(v7);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
