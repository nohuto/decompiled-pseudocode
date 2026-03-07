__int64 __fastcall TUNNEL_EvtIoTargetRemoveCanceled(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C006A0A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *(_QWORD *)(*(_QWORD *)result + 2520LL),
             4u,
             3u,
             0x1Eu,
             (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
             a1);
  return result;
}
