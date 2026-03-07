__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0063428);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 648));
  v3 = *(_BYTE *)(v2 + 840);
  DynamicLock_Release(*(_QWORD *)(v2 + 648));
  LOBYTE(v4) = v3;
  result = WnfHelper_PublishUsbXhciAudioOffloadState(v4);
  if ( (int)result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v2 + 72),
               v6,
               4,
               315,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_dd(
             *(_QWORD *)(v2 + 72),
             v6,
             4,
             314,
             (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
             v3,
             result);
  }
  return result;
}
