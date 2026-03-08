/*
 * XREFs of PopPolicySystemIdle @ 0x140998EF0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402F6DE0 (PopPolicyWorkerThread.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __noreturn PopPolicySystemIdle()
{
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
}
