/*
 * XREFs of RtlStringCbPrintfW @ 0x14000203C
 * Callers:
 *     SmpAllocateInitialCommandBuffer @ 0x140001F24 (SmpAllocateInitialCommandBuffer.c)
 *     SmpParseCommandLine @ 0x1400046C0 (SmpParseCommandLine.c)
 *     SmpInvokeAutoChk @ 0x1400057D4 (SmpInvokeAutoChk.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 *     SmpSaveOldPageFiles @ 0x14000A388 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000AA2C (SmpCleanupStalePageFiles.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x14000BDA0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000DB9C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpGetCrashParameters @ 0x14001570C (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x1400157C8 (SmpGetDumpDestination.c)
 *     SmpClearTemporaryFiles @ 0x1400169A0 (SmpClearTemporaryFiles.c)
 *     SmpShuffleMove @ 0x140017C34 (SmpShuffleMove.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140002094 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
