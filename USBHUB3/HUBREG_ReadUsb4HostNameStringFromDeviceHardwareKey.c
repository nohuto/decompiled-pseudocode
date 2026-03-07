__int64 __fastcall HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int16 v4; // r9
  unsigned __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+28h] [rbp-19h]
  __int64 v12; // [rsp+30h] [rbp-11h]
  __int128 v13; // [rsp+48h] [rbp+7h] BYREF
  __int128 v14; // [rsp+58h] [rbp+17h] BYREF
  __int128 v15; // [rsp+68h] [rbp+27h]
  __int128 v16; // [rsp+78h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+47h]
  __int64 v18; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+6Fh] BYREF

  v1 = a1[2];
  v19 = 0LL;
  v18 = 0LL;
  LODWORD(v17) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v1,
             1LL,
             131097LL,
             0LL,
             &v19);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v4 = 155;
    goto LABEL_4;
  }
  v17 = 0LL;
  v5 = a1[2];
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 0x100000001LL;
  v16 = v5;
  v14 = 0LL;
  LODWORD(v14) = 56;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
             WdfDriverGlobals,
             0LL,
             &v14,
             &v18);
  if ( (int)result >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
           WdfDriverGlobals,
           v19,
           &g_Usb4HostName,
           v18);
    if ( v6 >= 0 )
    {
      v7 = v18;
      a1[345] = v18;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
                 WdfDriverGlobals,
                 v7,
                 &v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = WPP_RECORDER_SF_Sq(a1[315], v8, v9, v10, v11, *((const wchar_t **)&v13 + 1));
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = v6;
        WPP_RECORDER_SF_d(a1[315], 2u, 5u, 0x9Du, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v12);
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                 WdfDriverGlobals,
                 v18);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 156;
LABEL_4:
    LODWORD(v12) = result;
    result = WPP_RECORDER_SF_d(a1[315], 2u, 5u, v4, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v12);
  }
LABEL_14:
  if ( v19 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
