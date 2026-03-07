__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // r8
  int v12; // edx
  _OWORD v13[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 424);
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v5,
    v13);
  v9 = *((_QWORD *)&v13[0] + 1);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(unsigned __int8 *)(v2 + 135);
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v12,
        12,
        29,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v2 + 135),
        *(_QWORD *)v2);
    }
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v7, v8);
    if ( *(_BYTE *)(a1 + 60) == 29 )
      *(_DWORD *)(v9 + 56) |= 1u;
LABEL_13:
    v10 = 3221225473LL;
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), v6, *(unsigned __int8 *)(a1 + 61), 30);
  UsbDevice_UpdateUsbDevice(v2, v9);
  v10 = 0LL;
LABEL_6:
  *(_QWORD *)(v2 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v5,
           v10);
}
