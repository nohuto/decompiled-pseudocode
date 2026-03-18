/*
 * XREFs of NtNotifyChangeKey @ 0x140767D00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC5E0 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x1408019E0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140843A84 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        void *a1,
        void *a2,
        void (__stdcall *a3)(POPLOCK Oplock),
        __int64 a4,
        NTSTATUS *a5,
        unsigned int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0LL, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
