__int64 __fastcall HUBPDO_GetUSBDErrorFromNTStatus(int a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  switch ( a1 )
  {
    case -1073741667:
    case -1073741810:
      return 3221254144LL;
    case -1073741670:
      return 3221229568LL;
    case -1073741637:
      return 3221229056LL;
    case -1073741536:
      return 3221291008LL;
  }
  result = 0LL;
  if ( a1 )
  {
    result = 2147484416LL;
    if ( a1 != -1073741811 && a1 != -1073741823 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C006A1E8);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        0xAu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        a1);
      return 2147484416LL;
    }
  }
  return result;
}
