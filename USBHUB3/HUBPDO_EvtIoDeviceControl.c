__int64 __fastcall HUBPDO_EvtIoDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // eax
  __int64 v8; // rax

  if ( a5 == 2952208 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225659LL);
  if ( a5 == 3080195 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 2280))(WdfDriverGlobals);
    v6 = KsPropertyHandleDrmSetContentId(v8);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 2032))(WdfDriverGlobals);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v6);
}
