/*
 * XREFs of HvlAddSecureHvPagesCallbackRoutine @ 0x140545040
 * Callers:
 *     <none>
 * Callees:
 *     HvlAddSecurePagesCallbackRoutine @ 0x140545098 (HvlAddSecurePagesCallbackRoutine.c)
 *     IoIsPartialDumpRetry @ 0x14054E3E0 (IoIsPartialDumpRetry.c)
 */

void __fastcall HvlAddSecureHvPagesCallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  int v4; // eax
  __int64 v5; // rcx

  if ( (HvlpForceAllPages & 1) != 0
    || ((v4 = ReasonSpecificData[3], v4 == 131073) || v4 == 395)
    && !(unsigned __int8)IoIsPartialDumpRetry(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
  {
    HvlpAllPages = 1;
    v5 = 2LL;
  }
  else
  {
    HvlpAllPages = 0;
    v5 = 8LL;
  }
  HvlAddSecurePagesCallbackRoutine(v5, Record, ReasonSpecificData, ReasonSpecificData);
}
