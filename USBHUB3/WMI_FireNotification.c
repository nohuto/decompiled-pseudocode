_UNKNOWN **__fastcall WMI_FireNotification(__int64 a1, unsigned __int16 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rax
  _UNKNOWN **result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+4Ch] [rbp-2Ch]

  v13 = 0LL;
  v14 = 0;
  v11 = 0LL;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3016))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 2536));
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v6,
         1LL) )
  {
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2544), &v11);
    v8 = *(_QWORD *)(a1 + 2536);
    v15 = v11 + 6;
    v12[1] = v5;
    v12[0] = a3;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 3024))(
                            WdfDriverGlobals,
                            v8,
                            24LL,
                            v12);
    v9 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = v9;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              0x14u,
                              (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
                              v10);
      }
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            0x13u,
                            (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids);
  }
  return result;
}
