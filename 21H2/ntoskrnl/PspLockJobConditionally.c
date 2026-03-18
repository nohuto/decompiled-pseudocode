/*
 * XREFs of PspLockJobConditionally @ 0x14068565C
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspSendProcessNotificationToJobChain @ 0x140683F18 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1406D4808 (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1409B0C74 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  BOOLEAN result; // al

  if ( a1 != *a2 )
    return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  return result;
}
