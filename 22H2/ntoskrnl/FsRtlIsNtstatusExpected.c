/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14031B530
 * Callers:
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     CcAsyncReadPrefetch @ 0x14027A1F4 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     CcAcquireByteRangeForWrite @ 0x1402905C0 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 *     CcCopyBytesToUserBuffer @ 0x1402A3B50 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x140329A88 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x14036CAE0 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA3E8 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x14062D7F0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140675380 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x14088A660 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B0A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
