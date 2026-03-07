void __fastcall CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        CCompositionRefreshRateBooster *this,
        const struct InputHelper::CompositionFrameRateBoostCandidateEvent *a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // rdx

  if ( *((_BYTE *)this + 40) )
  {
    Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage();
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        if ( (*((_WORD *)a2 + 4) & 0xC00) == 0 )
        {
          if ( !*((_BYTE *)a2 + 10) )
            return;
          v4 = 0LL;
          goto LABEL_13;
        }
      }
      else if ( *(_DWORD *)a2 != 2 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 622LL);
        return;
      }
LABEL_12:
      v4 = 1LL;
LABEL_13:
      CCompositionRefreshRateBooster::BoostRefreshRateForInput(this, v4);
      return;
    }
    v5 = (_DWORD *)*((_QWORD *)a2 + 1);
    if ( (*v5 == 2 || *v5 == 3) && (v5[3] & 4) != 0 )
      goto LABEL_12;
  }
}
