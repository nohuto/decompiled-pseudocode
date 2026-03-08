/*
 * XREFs of IopInitializeBugCheckDriverData @ 0x140861990
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1402E8DA0 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN IopInitializeBugCheckDriverData()
{
  IopBugCheckDriverDataCallbackRecord.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &IopBugCheckDriverDataCallbackRecord,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckDriverDataCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
