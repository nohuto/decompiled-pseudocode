/*
 * XREFs of VfUtilDbgPrint @ 0x1405A0634
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A0220 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405A1E58 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1EDC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A1F70 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2014 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6060 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C6910 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409C74B0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7820 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409C7E60 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C8C60 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C8D2C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409C8E3C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409CD1B0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409CE220 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CF73C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D6234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8150 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409D8218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D826C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DA430 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409DF828 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409E0F70 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409E2750 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E3210 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E34F0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E4354 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409E76E0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7890 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79E0 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
