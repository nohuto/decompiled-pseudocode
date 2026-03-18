/*
 * XREFs of RtlStringCbPrintfA @ 0x1403BF7F4
 * Callers:
 *     RtlpVerCompare @ 0x1403B2E2C (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140567C08 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405FFBC8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405FFC5C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405FFD00 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140A82730 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140A82A00 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140A919A8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140A92B74 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140A92C0C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AA0A20 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AA0BD0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AA0D20 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403BF834 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
