/*
 * XREFs of RtlStringCbPrintfA @ 0x1403AD5C4
 * Callers:
 *     RtlpVerCompare @ 0x14037DB80 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140518454 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405A1F18 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1F9C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2030 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A20D4 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7810 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D6224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8140 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E76D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79D0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403AD618 (RtlStringVPrintfWorkerA.c)
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
