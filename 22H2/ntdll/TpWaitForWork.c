/*
 * XREFs of TpWaitForWork @ 0x18007F860
 * Callers:
 *     LdrpDetectDetour @ 0x18006347C (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007F810 (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
