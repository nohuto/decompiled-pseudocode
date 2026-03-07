void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1)
{
  __int64 v2; // rcx

  KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Mouse::InjectInput();
  v2 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)gptCursorAsync == (_DWORD)v2 )
    v2 = *((unsigned int *)a1 + 3);
  if ( (*((_DWORD *)a1 + 11) & 2) != 0 )
    Enforced(v2);
  Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage();
  SynthesizeMouseInput(0LL);
}
