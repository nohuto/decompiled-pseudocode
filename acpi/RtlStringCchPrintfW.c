/*
 * XREFs of RtlStringCchPrintfW @ 0x1C000B900
 * Callers:
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A404 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C002A834 (ACPIGetConvertToSerialIDWide.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0036080 (PciConfigSpaceHandlerWorker.c)
 *     LogInErrorLog @ 0x1C00523B8 (LogInErrorLog.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB64 (AcpiArblibAllocateArbiterInstance.c)
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
