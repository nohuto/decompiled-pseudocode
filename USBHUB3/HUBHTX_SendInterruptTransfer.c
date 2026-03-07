__int64 __fastcall HUBHTX_SendInterruptTransfer(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edi
  __int64 v4; // rax
  int v5; // eax
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // r14d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-41h]
  int v13; // [rsp+28h] [rbp-41h]
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+38h] [rbp-31h]
  __int64 v16; // [rsp+3Ch] [rbp-2Dh]
  int v17; // [rsp+44h] [rbp-25h]
  _QWORD v18[9]; // [rsp+48h] [rbp-21h] BYREF

  v1 = *(_QWORD *)(a1 + 968);
  v16 = 0LL;
  v17 = 0;
  v14 = 24LL;
  v15 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v14);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v13 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v13);
  }
  memset((void *)(a1 + 978), 0, 0x7EuLL);
  *(_QWORD *)(a1 + 984) = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 1008) = 2;
  v5 = *(_DWORD *)(a1 + 1008);
  *(_DWORD *)(a1 + 976) = 589952;
  if ( *(_BYTE *)(a1 + 2272) )
    v5 = 18;
  *(_DWORD *)(a1 + 1008) = v5;
  *(_QWORD *)(a1 + 1016) = *(_QWORD *)(a1 + 1120);
  if ( *(_BYTE *)(a1 + 240) )
    v6 = *(_WORD *)(a1 + 88);
  else
    v6 = *(_WORD *)(a1 + 1128);
  *(_DWORD *)(a1 + 1012) = v6;
  *(_QWORD *)(a1 + 1024) = 0LL;
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 1104);
  if ( *(_BYTE *)(a1 + 1112) )
  {
    *(_DWORD *)(a1 + 992) |= 0x80000000;
    *(_BYTE *)(a1 + 1112) = 0;
  }
  memset(v18, 0, sizeof(v18));
  LOBYTE(v18[0]) = 15;
  LODWORD(v18[3]) = 2228227;
  v18[1] = a1 + 976;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v1,
    HUBHTX_SendInterruptTransferComplete,
    a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v1,
             v7,
             0LL);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v1);
    v16 = 0LL;
    v17 = 0;
    v14 = 24LL;
    v15 = 0;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
               WdfDriverGlobals,
               v1,
               &v14);
    v10 = result;
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C006A1E8);
      LODWORD(v12) = v10;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v11 + 64),
                 2u,
                 2u,
                 0x3Bu,
                 (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
                 v12);
    }
    if ( v9 < 0 )
      return HUBSM_AddEvent(a1 + 1264, 2030LL);
  }
  return result;
}
