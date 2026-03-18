/*
 * XREFs of FsFilterCtrlFree @ 0x1402A21A8
 * Callers:
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x1407AC0F4 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4D18 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x14045EC7A (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
