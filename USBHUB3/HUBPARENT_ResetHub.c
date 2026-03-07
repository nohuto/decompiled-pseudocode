__int64 __fastcall HUBPARENT_ResetHub(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // edi
  int v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+28h] [rbp-41h]
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  __int128 v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int128 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  _QWORD v18[9]; // [rsp+70h] [rbp+7h] BYREF

  v12 = 0LL;
  DWORD1(v13) = 0;
  memset(v18, 0, sizeof(v18));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  v4 = v2;
  v15 = 0x100000001LL;
  v13 = 0LL;
  v17 = 0LL;
  LODWORD(v13) = 56;
  v16 = (unsigned __int64)v3;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_RESET_REQUEST_START, 0LL, *(_QWORD *)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 2656);
  if ( v5 )
    *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v5,
                 off_1C006A170)
             + 24) = 1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v13,
         v4,
         &v12);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x13u,
        (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
        v10);
    }
LABEL_12:
    if ( v12 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1264, 2070LL);
  }
  v7 = v12;
  v18[1] = a1 + 2408;
  *(_DWORD *)(a1 + 2408) = 0;
  LOBYTE(v18[0]) = 15;
  LODWORD(v18[3]) = 2232243;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v7,
    v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v12,
    HUBPARENT_ResetHubComplete,
    0LL);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v12,
             v4,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v12);
    v9 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x14u,
                 (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                 v11);
    }
    if ( v9 < 0 )
      goto LABEL_12;
  }
  return result;
}
