LARGE_INTEGER __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v20[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v20, 0, sizeof(v20));
  v4 = *(_QWORD *)(a1 + 16920);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 88) )
    *(_QWORD *)(v4 + 88) = KeGetCurrentThread();
  MiWakePageZeroing(a1, 0LL, 2);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    MiReclaimUnusedUltraMdlMaps();
    MiCheckLogPinDriverAddresses();
    MiWakeBadPageSignalThread();
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages(a1);
  MiPruneProcessLargePageCaches(a1, 1);
  MiReleaseSystemCacheView(a1, 0LL);
  v6 = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = v6;
  if ( v6 == *(_DWORD *)(v4 + 36) )
  {
    v7 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v8 = ((_BYTE)v7 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v8;
    v9 = ((_BYTE)v8 - 8) & 0xF;
    if ( *(_QWORD *)(88 * v9 + a1 + 5312) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v9 + 293)), 0, 0);
  }
  if ( (_UNKNOWN *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140C69450, 0, 0);
  MiLogPeriodicTelemetry((unsigned __int16 *)a1);
  v20[4] = 1;
  while ( 1 )
  {
    v10 = v20[4];
    MiProcessWorkingSets(a1, (__int64)v20);
    if ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      MiHandleForceTrimWorkingSets(a1);
    if ( v20[4] == 1 )
      break;
    if ( v10 == v20[4] )
    {
      v20[4] = 1;
      ++*(_DWORD *)(v4 + 2576);
    }
    else
    {
      MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
      ++*(_DWORD *)(v4 + 2572);
      MiScanPagefiles(a1);
      v5 = 1;
    }
  }
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins(v12, v11, v13);
    if ( byte_140C653AA )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1);
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1112) )
    {
      _InterlockedOr(v19, 0);
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      if ( UnbiasedInterruptTime - *(_QWORD *)(a1 + 1120) >= 0x861C46800LL )
      {
        if ( byte_140C67AC1 )
        {
          *(_QWORD *)(a1 + 1120) = UnbiasedInterruptTime - 33000000000LL;
        }
        else if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 200)) )
        {
          v15 = *(_QWORD *)(a1 + 200);
          *(_QWORD *)(a1 + 1088) = 0LL;
          *(_QWORD *)(a1 + 1104) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 1112) = a1;
          ExQueueWorkItemToPartition((_QWORD *)(a1 + 1088), 3, 0xFFFFFFFF, v15);
        }
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 17600);
  v17 = *(_QWORD *)(a1 + 17824);
  if ( v16 > v17 && v16 - v17 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 832), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
