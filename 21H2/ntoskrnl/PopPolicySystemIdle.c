/*
 * XREFs of PopPolicySystemIdle @ 0x14099D040
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn PopPolicySystemIdle()
{
  int v0; // [rsp+30h] [rbp-38h]

  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v0);
  KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
}
