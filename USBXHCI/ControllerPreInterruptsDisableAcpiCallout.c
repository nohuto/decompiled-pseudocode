__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  _DWORD v8[2]; // [rsp+50h] [rbp-19h] BYREF
  int v9; // [rsp+58h] [rbp-11h] BYREF
  int v10; // [rsp+5Ch] [rbp-Dh]
  int *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  int v14; // [rsp+70h] [rbp+7h] BYREF
  int v15; // [rsp+74h] [rbp+Bh]
  _DWORD *v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+84h] [rbp+1Bh]
  __int64 v19; // [rsp+88h] [rbp+1Fh] BYREF
  int v20; // [rsp+90h] [rbp+27h] BYREF
  __int128 v21; // [rsp+94h] [rbp+2Bh]

  v19 = 0LL;
  v15 = 0;
  v10 = 0;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00633D8);
  v4 = *(_QWORD *)(result + 8);
  if ( _bittest64((const signed __int64 *)(v4 + 336), 0x36u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 72), v3, 4, 80, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a1);
    }
    v15 = 0;
    v18 = 0;
    v10 = 0;
    v13 = 0;
    v16 = v8;
    v11 = &v20;
    v14 = 1;
    v9 = 1;
    v8[0] = 1114203457;
    v8[1] = 1229804112;
    v17 = 8;
    v21 = 0LL;
    v20 = 1114596673;
    v12 = 20;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01023 + 1488))(
               WdfDriverGlobals,
               v5,
               0LL,
               3325956LL,
               &v14,
               &v9,
               0LL,
               &v19);
    if ( (int)result >= 0 )
    {
      if ( v20 == 1114596673 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 83;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 82;
      }
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_q(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               v7,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               81,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               a1,
               result);
    }
  }
  return result;
}
