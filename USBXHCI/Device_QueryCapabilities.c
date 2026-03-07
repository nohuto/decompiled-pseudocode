__int64 __fastcall Device_QueryCapabilities(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  char v5; // bl
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // r9d
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[9]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v14[4]; // [rsp+C8h] [rbp-40h] BYREF

  v13 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  memset(v14, 0, sizeof(v14));
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 88));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01023 + 1976))(
             WdfDriverGlobals,
             0LL,
             v2,
             &v10);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v9 = 268;
    goto LABEL_12;
  }
  *(_QWORD *)((char *)&v11[1] + 4) = 0LL;
  HIDWORD(v11[2]) = 0;
  v11[0] = 24LL;
  LODWORD(v11[1]) = -1073741637;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 1992))(
    WdfDriverGlobals,
    v10,
    v11);
  *((_QWORD *)&v14[0] + 1) = -1LL;
  v12[1] = v14;
  LODWORD(v14[0]) = 65600;
  LOWORD(v12[0]) = 2331;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2016))(
    WdfDriverGlobals,
    v10,
    v12);
  v13 = 0x200000010uLL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01023 + 2024))(
         WdfDriverGlobals,
         v10,
         v2,
         &v13);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2032))(WdfDriverGlobals, v10);
  if ( v5 && (int)result >= 0 )
  {
    v6 = v14[1];
    *(_OWORD *)(a1 + 24) = v14[0];
    v7 = v14[2];
    *(_OWORD *)(a1 + 40) = v6;
    v8 = v14[3];
    *(_OWORD *)(a1 + 56) = v7;
    *(_OWORD *)(a1 + 72) = v8;
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 269;
LABEL_12:
    LOBYTE(v4) = 2;
    result = WPP_RECORDER_SF_qd(
               *(_QWORD *)(a1 + 16),
               v4,
               4,
               v9,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               *(_QWORD *)(a1 + 88),
               result);
  }
LABEL_5:
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  return result;
}
