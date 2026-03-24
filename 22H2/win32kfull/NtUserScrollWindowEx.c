/*
 * XREFs of NtUserScrollWindowEx @ 0x1C0067600
 * Callers:
 *     <none>
 * Callees:
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

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
  ULONG64 v14; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int128 v19; // [rsp+90h] [rbp-78h]
  __int128 v20; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v13 = (struct tagWND *)ValidateHwnd(a1);
  if ( v13 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v13;
    HMLockObject(v13);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v19 = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      v20 = *v10;
      v10 = &v20;
    }
    v15 = xxxScrollWindowEx(v13, (__int64)v10, a6, (unsigned __int64)&v21 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v14 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v11 = (_OWORD *)MmUserProbeAddress;
      *v11 = v21;
    }
    ThreadUnlock1(v14);
  }
  else
  {
    v15 = 0;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v15;
}
