__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v8; // edi
  int v9; // edx
  int v10; // edx
  _OWORD v11[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v11[0] + 1) + 16LL),
                   off_1C00632C0);
  v4 = (__int64)v3;
  v5 = (char *)v3 + 135;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *v3;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 72LL),
      v6,
      12,
      26,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *v5,
      *v3);
  }
  if ( !*(_BYTE *)(v4 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (unsigned __int8)*v5;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v9,
        12,
        27,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *v5,
        *(_QWORD *)v4);
    }
    v8 = -1073741823;
    goto LABEL_13;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    v8 = -1073741810;
LABEL_13:
    *(_QWORD *)(v4 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v8);
  }
  *(_QWORD *)(v4 + 424) = a2;
  *(_BYTE *)(v4 + 432) = 0;
  result = UsbDevice_SetAddress(v4, 0);
  v8 = result;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = (unsigned __int8)*v5;
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v10,
        12,
        28,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *v5,
        result);
    }
    goto LABEL_13;
  }
  return result;
}
