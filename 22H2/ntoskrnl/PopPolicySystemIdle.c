/*
 * XREFs of PopPolicySystemIdle @ 0x14099BF80
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn PopPolicySystemIdle()
{
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
}
