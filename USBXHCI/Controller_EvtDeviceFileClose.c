__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // edx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00633B0);
  if ( *(_BYTE *)(result + 48) )
  {
    v3 = *(_QWORD *)(result + 40);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               v4,
               4,
               284,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               a1,
               result);
    }
  }
  return result;
}
