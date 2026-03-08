/*
 * XREFs of VfUtilDbgPrint @ 0x1405CBEB4
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CB9FC (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CDA88 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CDB1C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140ABF804 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140AC0020 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC0390 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140AC09DC (ViCiPreprocessOptions.c)
 *     ViAdapterCallback @ 0x140AC4860 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140AC58D4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140AC6E2C (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140AC7A1C (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140ACF214 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140ACF398 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD0564 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD05FC (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD6830 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140ADB3EC (ViWdIrpTimedOut.c)
 *     VerifierNtCreateFile @ 0x140AE0BA0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE0D50 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE0EA0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE1B58 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140AE3B70 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140AE4670 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140AE4930 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
