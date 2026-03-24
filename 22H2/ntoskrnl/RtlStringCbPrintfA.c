/*
 * XREFs of RtlStringCbPrintfA @ 0x1403A83E4
 * Callers:
 *     RtlpVerCompare @ 0x14037D4F0 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140518394 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405A1E58 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1EDC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A1F70 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2014 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7820 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D6234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8150 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E76E0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7890 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79E0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403A8438 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
