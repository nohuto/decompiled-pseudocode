/*
 * XREFs of VfUtilDbgPrint @ 0x1405A06F4
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A02E0 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405A1F18 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1F9C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2030 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A20D4 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6050 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C6900 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409C74A0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7810 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409C7E50 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C8C50 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C8D1C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409C8E2C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409CD1A0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409CE210 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CF72C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D6224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8140 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409D8208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D825C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DA420 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409DF818 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409E0F60 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409E2740 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E3200 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E34E0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E4344 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409E76D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79D0 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
