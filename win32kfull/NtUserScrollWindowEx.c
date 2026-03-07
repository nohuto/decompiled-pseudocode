__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        int a8)
{
  __int128 *v10; // rsi
  _OWORD *v11; // r14
  __int64 v12; // rcx
  struct tagWND *v13; // rbx
  ULONG64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v13 = (struct tagWND *)ValidateHwnd(a1);
  if ( v13 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v13;
    HMLockObject(v13);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v20 = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      v21 = *v10;
      v10 = &v21;
    }
    LODWORD(v13) = xxxScrollWindowEx(v13, (__int64)v10, a6, (unsigned __int64)&v22 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v15 = MmUserProbeAddress;
      v14 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v11 = (_OWORD *)MmUserProbeAddress;
      *v11 = v22;
    }
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v12);
  return (unsigned int)v13;
}
