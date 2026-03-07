__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int128 v9; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _OWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-28h]

  memset_0(v11, 0, 0x48uLL);
  v9 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v5 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v5;
    HMLockObject(v5);
    v6 = xxxBeginPaint(v5);
    HIDWORD(v12) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v11[0];
    *(_OWORD *)(a2 + 16) = v11[1];
    *(_OWORD *)(a2 + 32) = v11[2];
    *(_OWORD *)(a2 + 48) = v11[3];
    *(_QWORD *)(a2 + 64) = v12;
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress, v7);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
