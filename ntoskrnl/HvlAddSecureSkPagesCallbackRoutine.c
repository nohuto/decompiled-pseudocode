void __fastcall HvlAddSecureSkPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rcx

  v4 = 1LL;
  if ( (HvlpForceAllPages & 1) != 0
    || ReasonSpecificData[3] == 395
    && !(unsigned __int8)IoIsPartialDumpRetry(1LL, Record, ReasonSpecificData, ReasonSpecificDataLength) )
  {
    HvlpAllSkPages = v4;
  }
  else
  {
    HvlpAllSkPages = 0;
    v4 = 16LL;
  }
  HvlAddSecurePagesCallbackRoutine(v4, (__int64)Record, (__int64)ReasonSpecificData, (__int64)ReasonSpecificData);
}
