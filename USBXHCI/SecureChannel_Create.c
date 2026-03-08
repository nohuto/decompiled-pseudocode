/*
 * XREFs of SecureChannel_Create @ 0x1C007ADD8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureChannel_Create(union _LARGE_INTEGER a1, union _LARGE_INTEGER **a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h]
  void *v15; // [rsp+60h] [rbp-10h]
  union _LARGE_INTEGER *v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = *(_QWORD *)(a1.QuadPart + 88);
  DWORD1(v11) = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01023 + 3584))(
         WdfDriverGlobals,
         v4,
         &v17);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v13 = 0x100000001LL;
    v15 = off_1C0063270;
    v11 = 0LL;
    LODWORD(v11) = 56;
    v14 = 0LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, union _LARGE_INTEGER **))(WdfFunctions_01023 + 1624))(
           WdfDriverGlobals,
           v17,
           &v11,
           &v16);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v7;
      v8 = 11;
      goto LABEL_4;
    }
    v16->QuadPart = v17;
    v16[1] = a1;
    KeQueryPerformanceCounter(v16 + 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1.QuadPart + 16),
        v9,
        19,
        12,
        (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
        v17);
    }
    *a2 = v16;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 10;
LABEL_4:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1.QuadPart + 16),
      v6,
      19,
      v8,
      (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
      v5);
  }
  return v7;
}
