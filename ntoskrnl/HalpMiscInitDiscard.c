/*
 * XREFs of HalpMiscInitDiscard @ 0x140B67248
 * Callers:
 *     HalpMiscInitSystem @ 0x140A8E290 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1402E8DA0 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  ULONG_PTR MajorVersion; // rcx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpMiscCallbackRecord.State = 0;
  off_140C020E8[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140C020F0[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    &HalpMiscCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)8,
    (PUCHAR)"HAL");
  if ( HalpMiscDebugBreakRequested )
    __debugbreak();
  return 0LL;
}
