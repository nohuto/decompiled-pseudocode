__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *DiffHiveEntry; // rbx
  __int64 v8; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt
  _QWORD *v12; // r15
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // edi
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  __int64 v23; // [rsp+20h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  DiffHiveEntry = 0LL;
  v8 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&gLoadedDiffHivesLock, 0, v8, (__int64)&gLoadedDiffHivesLock);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_25;
  _m_prefetchw(&gLoadedDiffHivesLock);
  v10 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v11 = gLoadedDiffHivesLock,
        v11 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&gLoadedDiffHivesLock,
                 v10,
                 gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  DiffHiveEntry = (_QWORD *)VrpAllocateDiffHiveEntry(String1, a2);
  v12 = DiffHiveEntry;
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v15 = _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL);
  v16 = v14;
  if ( v15 )
    ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, v14, (__int64)&gLoadedDiffHivesLock);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_25:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    v23 = DiffHiveEntry[1] & (-1LL << (dword_140C0E224 & 0x1F));
    v17 = qword_140C0E228;
    v18 = (37
         * (BYTE6(v23)
          + 37
          * (BYTE5(v23)
           + 37
           * (BYTE4(v23)
            + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
         + HIBYTE(v23)) & (((unsigned int)dword_140C0E224 >> 5) - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_140C0E228 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = DiffHiveEntry;
    DiffHiveEntry = 0LL;
    ++gLoadedDiffHives;
    DiffHiveEntryForMountPointWithLock = (__int64)v12;
  }
  v19 = 0;
  *a3 = DiffHiveEntryForMountPointWithLock;
  _m_prefetchw(&gLoadedDiffHivesLock);
  v20 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v21 = gLoadedDiffHivesLock,
        v21 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&gLoadedDiffHivesLock,
                 v20,
                 gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v19;
}
