__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v13; // r9d
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+44h] [rbp-2Ch]
  int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  void *v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+20h] BYREF

  v22 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v17 = 1;
  v18 = 1;
  v21 = off_1C0063108;
  v19 = *(_QWORD *)(a2 + 8);
  v15 = 0LL;
  v14 = 56;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         &v14,
         &v22);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    v13 = 10;
LABEL_9:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v6, 10, v13, (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids, v5);
    return v7;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v22,
                   off_1C0063108);
  *v8 = v22;
  v8[1] = a2;
  v5 = XilDeviceSlot_Create((__int64)v8, v9, v10, v11);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    v13 = 11;
    goto LABEL_9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(a2 + 72), v6, 10, 12, (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids, v22);
  }
  *a3 = v8;
  return v7;
}
