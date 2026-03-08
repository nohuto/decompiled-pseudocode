/*
 * XREFs of FsFilterCtrlFree @ 0x140343F88
 * Callers:
 *     FsRtlQueryOpen @ 0x140758084 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x1407D18E0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0 (FsRtlAcquireFileExclusiveCommon.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x140456CDA (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack(a1);
  return result;
}
