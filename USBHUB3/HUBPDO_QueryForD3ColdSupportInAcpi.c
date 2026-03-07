__int64 __fastcall HUBPDO_QueryForD3ColdSupportInAcpi(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // [rsp+28h] [rbp-D8h]
  _QWORD v8[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[18]; // [rsp+90h] [rbp-70h] BYREF
  char v10; // [rsp+148h] [rbp+48h] BYREF
  __int64 v11; // [rsp+150h] [rbp+50h] BYREF

  v11 = 0LL;
  memset(v8, 0, 0x48uLL);
  v10 = 0;
  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C006A0F8)
                 + 24);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1336))(
             WdfDriverGlobals,
             a1,
             0LL,
             &v11);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
               2u,
               5u,
               0x30u,
               (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
               result);
    return result;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  memset(v9, 0, 0x88uLL);
  v9[0] = 0x100000088LL;
  v9[4] = v4;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1344))(
             WdfDriverGlobals,
             v11,
             v9);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v5 = 49;
    v6 = 2;
    goto LABEL_7;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1416))(
             WdfDriverGlobals,
             v11,
             &GUID_D3COLD_SUPPORT_INTERFACE,
             v8,
             72,
             1,
             *(_QWORD *)(v2 + 16));
  if ( (int)result >= 0 )
  {
    if ( ((int (__fastcall *)(_QWORD, char *))v8[6])(v8[1], &v10) >= 0 && v10 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 1632), 0x8000u);
    result = v8[3];
    if ( v8[3] )
      result = ((__int64 (__fastcall *)(_QWORD))v8[3])(v8[1]);
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 50;
    v6 = 4;
LABEL_7:
    LODWORD(v7) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
               v6,
               5u,
               v5,
               (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
               v7);
  }
LABEL_16:
  if ( v11 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
