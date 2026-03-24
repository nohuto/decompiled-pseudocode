/*
 * XREFs of MiWorkingSetManager @ 0x14033BC70
 * Callers:
 *     KeBalanceSetManager @ 0x1403B8A80 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140535680 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiProcessWorkingSets @ 0x140207B60 (MiProcessWorkingSets.c)
 *     MiWakePageZeroing @ 0x14027F7A8 (MiWakePageZeroing.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiEnumerateSlabAllocators @ 0x1403103EC (MiEnumerateSlabAllocators.c)
 *     KePulseEvent @ 0x14033AAD0 (KePulseEvent.c)
 *     MiDeleteStaleCacheMaps @ 0x14033ABE0 (MiDeleteStaleCacheMaps.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14033AC50 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiCheckLogPinDriverAddresses @ 0x14033ACF8 (MiCheckLogPinDriverAddresses.c)
 *     MiEmptyDecayClusterTimers @ 0x14033AE10 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustPteBins @ 0x14033B2E8 (MiAdjustPteBins.c)
 *     MiAdjustCachedStacks @ 0x14033B548 (MiAdjustCachedStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x14033BADC (MiAdjustModifiedPageLoad.c)
 *     MiScheduleZeroPageThreads @ 0x14033BE94 (MiScheduleZeroPageThreads.c)
 *     MiSignalLargePageRebuild @ 0x14033BFF0 (MiSignalLargePageRebuild.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14033C19C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14033C2FC (MiScanPagefiles.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x140541EAC (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  char v11; // si
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _BYTE v15[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v15, 0, sizeof(v15));
  v5 = *(_QWORD *)(a1 + 6848);
  v6 = 0;
  if ( !*(_QWORD *)(v5 + 88) )
    *(_QWORD *)(v5 + 88) = KeGetCurrentThread();
  MiWakePageZeroing(a1, 0LL, v4);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiDeleteStaleCacheMaps();
    MiReclaimUnusedUltraMdlMaps();
    MiCheckLogPinDriverAddresses();
  }
  MiEmptyDecayClusterTimers(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x18) != 0 )
    MiEnumerateSlabAllocators(
      a1,
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreeSlabEntries,
      0LL);
  if ( ++*(_DWORD *)(v5 + 32) == *(_DWORD *)(v5 + 36) )
  {
    v7 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 32) = 0;
    v8 = ((_BYTE)v7 + 1) & 0xF;
    *(_DWORD *)(v5 + 24) = v8;
    v9 = ((_BYTE)v8 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v9 + 3456) )
      KeSetEvent((PRKEVENT)(a1 + 8 * (v9 + 2 * v9 + 551)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140C4EE50, 0, 0);
  v15[4] = 1;
  MiProcessWorkingSets(a1, (__int64)v15);
  v10 = v15[4];
  if ( v15[4] != 1 )
  {
    v11 = 1;
    do
    {
      if ( v11 == v10 )
      {
        v15[4] = 1;
        ++*(_DWORD *)(v5 + 2576);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v5 + 2336), *(_DWORD *)(v5 + 120));
        ++*(_DWORD *)(v5 + 2572);
        MiScanPagefiles(a1);
        v6 = 1;
      }
      v11 = v15[4];
      MiProcessWorkingSets(a1, (__int64)v15);
      v10 = v15[4];
    }
    while ( v15[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_140C4CB32 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v6 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v5 + 2336), *(_DWORD *)(v5 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions(a1);
  v12 = *(_QWORD *)(a1 + 7488);
  v13 = *(_QWORD *)(a1 + 7600);
  if ( v12 > v13 && v12 - v13 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
