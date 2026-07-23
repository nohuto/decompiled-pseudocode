/*
 * XREFs of VfUtilDbgPrint @ 0x1405A0924
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A0510 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A21CC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2260 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2304 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C7900 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409C84A0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C8540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C8810 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409C8E50 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C9C50 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C9D1C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409CE1A0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409CF210 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409D072C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D7224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D9020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D90B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D9140 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409D9208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DB420 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E0818 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409E1F60 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409E3740 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E4200 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E44E0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E5344 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409E86D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E8880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E89D0 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
