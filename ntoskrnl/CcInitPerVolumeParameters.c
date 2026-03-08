/*
 * XREFs of CcInitPerVolumeParameters @ 0x1403B02F4
 * Callers:
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 */

__int64 CcInitPerVolumeParameters()
{
  char v0; // al
  __int64 result; // rax

  CcEnablePerVolumeLazyWriter = 1;
  if ( CcEnablePerVolumeLazyWriterOverride )
  {
    v0 = 1;
    if ( CcEnablePerVolumeLazyWriterOverride == 1 )
      v0 = 1;
  }
  else
  {
    CcEnablePerVolumeLazyWriter = 0;
    v0 = 0;
  }
  if ( CcEnableAsyncLazywriteOverride )
  {
    if ( CcEnableAsyncLazywriteOverride == 1 )
    {
      CcEnableAsyncLazywrite = 1;
      if ( !v0 )
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitPerVolumeParameters: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
    }
  }
  else
  {
    CcEnableAsyncLazywrite = 0;
  }
  if ( CcEnableAsyncLazywriteMultiOverride )
  {
    if ( CcEnableAsyncLazywriteMultiOverride == 1 )
    {
      if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
        CcEnableAsyncLazywriteMulti = 1;
      else
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitPerVolumeParameters: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simple) Async"
          " Lazywriter to be enabled!\n");
    }
  }
  else
  {
    CcEnableAsyncLazywriteMulti = 0;
  }
  result = (unsigned int)(ExCriticalWorkerThreads - 1);
  CcMaxAsyncLazywriteWorkers = ExCriticalWorkerThreads - 1;
  CcAsyncWriteBehindWaitTimeout.QuadPart = -600000000LL;
  CcAsyncLazywriteQueueDepthPerThread = 16;
  CcMaxAsyncLazywriteCompletionWorkers = 8;
  return result;
}
