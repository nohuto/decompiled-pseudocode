/*
 * XREFs of RtlStringCchPrintfW @ 0x1C000B900
 * Callers:
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A424 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C002A854 (ACPIGetConvertToSerialIDWide.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00360A0 (PciConfigSpaceHandlerWorker.c)
 *     LogInErrorLog @ 0x1C00523D8 (LogInErrorLog.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB74 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C000BA0C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
