/*
 * XREFs of RtlStringCbPrintfA @ 0x140380B18
 * Callers:
 *     RtlpVerCompare @ 0x140380A44 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405680C8 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CDA88 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CDB1C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC0390 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140ACF214 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140ACF398 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD0564 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD05FC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE0BA0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE0D50 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE0EA0 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140380B58 (RtlStringVPrintfWorkerA.c)
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
