/*
 * XREFs of CcInitializeCacheManager @ 0x140B3EB44
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     ExInitializeLookasideListEx @ 0x1402A7FB0 (ExInitializeLookasideListEx.c)
 *     CcCreatePartition @ 0x14039B540 (CcCreatePartition.c)
 *     CcInitPerVolumeParameters @ 0x1403B02F4 (CcInitPerVolumeParameters.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403BD3B0 (ExInitializeNPagedLookasideListInternal.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage @ 0x140409A2C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage.c)
 *     Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage @ 0x140409DF8 (Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_Cc_InsufVA__private_IsEnabledDeviceUsage @ 0x140409E4C (Feature_Servicing_Cc_InsufVA__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     FsRtlIsMobileOS @ 0x14080C250 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x14080C96C (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x140819500 (PoRegisterCoalescingCallback.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140868AE0 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExInitializeSystemLookasideList @ 0x140A886F8 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 *     CcInitializeVacbs @ 0x140B725CC (CcInitializeVacbs.c)
 */

char __fastcall CcInitializeCacheManager(int a1)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  void *Partition; // rax
  void *Pool2; // rax
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  bool v18; // zf

  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage() && a1 == 2 )
  {
    CcInitializeTelemetry(2);
    return 1;
  }
  v3 = (unsigned __int8)dword_140D1D1EC;
  CcMasterLock = 0LL;
  CcChangeSharedCacheMapFileLock = 0LL;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_140D1D1EC )
  {
    v4 = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = v3 + 50;
    if ( !FsRtlIsMobileOS() )
      goto LABEL_12;
    v4 = 9;
  }
  CcMaxNumberCompleteAsyncReadExWorkItems = v4;
  if ( !v3 )
  {
LABEL_12:
    CcMaxCachemapUninitWorkerThreads = 4;
    goto LABEL_13;
  }
  CcMaxCachemapUninitWorkerThreads = 8;
LABEL_13:
  CcInitPerVolumeParameters();
  CcInitializeVacbs();
  CcGlobalPartitionLock = 0LL;
  CcNumberNumaNodes = (unsigned __int16)(KeNumberNodes - 1) + 1;
  Partition = CcCreatePartition();
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x401ACuLL, 0LL, 0LL, 0LL);
  CcPartitionCount = 1;
  *((_QWORD *)PspSystemPartition + 1) = Partition;
  CcSystemPartitionDirtyPageStatistics = (__int64)Partition + 1056;
  CcSystemPartitionDirtyPageThresholds = (__int64)Partition + 1080;
  _mm_lfence();
  CcInitializeBcbProfiler();
  Pool2 = (void *)ExAllocatePool2(64LL, 8uLL, 0x58637044u);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcIdleDelayTick = 0x989680u / KeMaximumIncrement;
  qword_140C5F788 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140C5F7E8 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcAggressiveZeroThreshold = 4;
  CcMaxLazyWritePages = v3 != 0 ? 2048 : 256;
  CcExtraWBThreadDelay = v3 != 0 ? 5000000 : 10000000;
  if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
    CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
  v12 = 5;
  CcAggressiveZeroCount = 0;
  CcCoalescingFlushEvent = 1;
  if ( CcAzure_SoftThrottleDelayInMs )
    v12 = CcAzure_SoftThrottleDelayInMs;
  byte_140C5F802 = 6;
  CcSoftThrottleDelay = v12;
  qword_140C5F810 = (__int64)&qword_140C5F808;
  qword_140C5F808 = (__int64)&qword_140C5F808;
  dword_140C5F804 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    160,
    1800889155,
    v3 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v13 = 0;
  for ( CcMaxZeroTransferSize = v3 != 0 ? 0x2000000 : 0x100000; v13 < (unsigned int)KeNumberProcessors_0; ++v13 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v13]) < 0 )
      KeBugCheckEx(0x34u, 0x242uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
    0LL,
    0LL,
    512,
    2056,
    1817600835,
    0,
    0);
  CcExternalCacheListLock = 0LL;
  qword_140C5F838 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
      || (NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject((unsigned __int16 **)PspSystemPartition),
          v15 > NumberOfPhysicalPagesForPartitionObject) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
  }
  v16 = CcUnmapBehindLength;
  if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
    v16 = 8;
  CcUnmapBehindLength = v16 << 20;
  if ( !CcAzure_LargeWriteSize
    || (v17 = CcAzure_LargeWriteSize << 10, CcAzure_LargeWriteSize << 10 <= (unsigned int)CcAzure_LargeWriteSize) )
  {
    v17 = 0;
  }
  CcAzure_LargeWriteSize = v17;
  if ( (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct >= 0x65 )
    CcAzure_SoftThrottleLargeWriteAtPct = 0;
  if ( (unsigned int)CcAzure_LazyWriterPercentageOfNumProcs >= 0x65 )
    CcAzure_LazyWriterPercentageOfNumProcs = 0;
  CcInitializeTelemetry(1);
  qword_140C5F6F0 = 0LL;
  CcTestControlData = 0LL;
  if ( (int)PoRegisterCoalescingCallback((__int64)CcCoalescingCallBack, 1, CcCoalescingRegistration, 0LL) < 0 )
    KeBugCheckEx(0x34u, 0x2DAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (unsigned int)Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage() )
  {
    EnableFeatureServicing_45016043 = 1;
    ExInitializeLookasideListEx(&CcSharedCacheMapLookasideList, 0LL, 0LL, NonPagedPoolNx, 1u, 0x260uLL, 0x63536343u, 0);
    ExInitializeLookasideListEx(&CcPrivateCacheMapLookasideList, 0LL, 0LL, NonPagedPoolNx, 0, 0x78uLL, 0x63506343u, 0);
  }
  else
  {
    EnableFeatureServicing_45016043 = 0;
  }
  v18 = (unsigned int)Feature_Servicing_Cc_InsufVA__private_IsEnabledDeviceUsage() == 0;
  CcInitializationComplete = 1;
  result = 1;
  EnableFeatureServicing_CcInsufVAError = !v18;
  return result;
}
