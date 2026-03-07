// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::AppStarting_Set(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx

  result = gpepCSRSS;
  if ( gpepCSRSS )
  {
    result = gptmrMaster;
    if ( gptmrMaster )
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 203LL);
      if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      *(_DWORD *)(a1 + 12) |= 0x40u;
      v3 = qword_1C03611A0;
      *(_QWORD *)(a1 + 360) = gppiStarting;
      gppiStarting = a1;
      result = InternalSetTimer(
                 0,
                 v3,
                 gdwHungAppTimeout + 30000,
                 (unsigned int)lambda_b0731eee47451a3420dccf0c0cbbf152_::_lambda_invoker_cdecl_,
                 0,
                 20);
      qword_1C03611A0 = result;
    }
  }
  return result;
}
