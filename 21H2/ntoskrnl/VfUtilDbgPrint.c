/*
 * XREFs of VfUtilDbgPrint @ 0x1405FDF9C
 * Callers:
 *     VfClearVerifierSettings @ 0x1405FDAE4 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405FFBC8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405FFC5C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405FFD00 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140A82690 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140A82730 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140A82A00 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140A83044 (ViCiPreprocessOptions.c)
 *     ViAdapterCallback @ 0x140A86EA0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140A87EFC (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140A8942C (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140A8A0C8 (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140A919A8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140A92B74 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140A92C0C (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140A92CE0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140A99A38 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140A9D340 (ViWdIrpTimedOut.c)
 *     VerifierNtCreateFile @ 0x140AA0A20 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AA0BD0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AA0D20 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AA1C3C (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140AA5E40 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140AA68A0 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140AA6B60 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
