/*
 * XREFs of HUBREG_UxdShutdown @ 0x1C0087BB0
 * Callers:
 *     HUBFDO_EvtDeviceShutdownPreprocess @ 0x1C000D2F0 (HUBFDO_EvtDeviceShutdownPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1C0086AA4 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0087990 (HUBREG_DeleteUxdSubKeys.c)
 */

__int64 __fastcall HUBREG_UxdShutdown(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF

  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  HUBREG_QueryGlobalUxdSettings(v2);
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         983103LL,
         0LL,
         &v9) >= 0 )
    HUBREG_DeleteUxdSubKeys(a1, v2, v9);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v8);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v8,
           &g_UxdPortSettingsKey,
           983103LL,
           0LL,
           &v7);
    if ( v3 == -1073741772 )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v8,
             &g_UxdPortSettingsKey,
             983103LL,
             0,
             0LL,
             0LL,
             &v7);
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 114;
LABEL_8:
        LODWORD(v6) = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          v4,
          (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
          v6);
      }
    }
    else if ( v3 >= 0 )
    {
      HUBREG_DeleteUxdSubKeys(a1, v2, v7);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 115;
      goto LABEL_8;
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v3;
}
