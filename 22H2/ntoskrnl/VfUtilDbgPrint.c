/*
 * XREFs of VfUtilDbgPrint @ 0x1405CE364
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CDEAC (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405CFEB4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CFF38 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CFFCC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405D0070 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC3120 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140AC3804 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140AC4020 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC40C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC4390 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140AC49DC (ViCiPreprocessOptions.c)
 *     ViAdapterCallback @ 0x140AC8860 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140AC98D4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140ACAE2C (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140ACBA1C (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140AD3214 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD3398 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD4564 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD45FC (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140AD46D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD4724 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140ADA830 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140ADF3EC (ViWdIrpTimedOut.c)
 *     VerifierNtCreateFile @ 0x140AE4BA0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE4D50 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE4EA0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE5B58 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140AE7B70 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140AE8670 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140AE8930 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
