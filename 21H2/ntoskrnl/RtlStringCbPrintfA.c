/*
 * XREFs of RtlStringCbPrintfA @ 0x1403AD714
 * Callers:
 *     RtlpVerCompare @ 0x14037D6D0 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140518694 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A21CC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2260 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2304 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C8540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C8810 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D7224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D9020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D90B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D9140 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E86D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E8880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E89D0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403AD768 (RtlStringVPrintfWorkerA.c)
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
