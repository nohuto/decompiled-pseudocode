/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1402ECFB0
 * Callers:
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x14020CCA4 (CcAsyncReadPrefetch.c)
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14021E4C0 (CcCopyBytesToUserBuffer.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1403002DC (CcMdlWriteComplete2.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     CcLockSystemCacheBuffer @ 0x140535340 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x14053B810 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x140939DF0 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093A3E0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  if ( Exception <= -1073741753 )
  {
    if ( Exception != -1073741753
      && Exception != -2147483647
      && Exception != -2147483646
      && Exception != -2147483645
      && Exception != -1073741819
      && Exception != -1073741795
      && Exception != -1073741754 )
    {
      return 1;
    }
  }
  else if ( Exception != -1073741684
         && Exception != -1073741676
         && Exception != -1073741674
         && Exception != -1073741654
         && Exception != -1073740791 )
  {
    return Exception != -1073740768;
  }
  return 0;
}
