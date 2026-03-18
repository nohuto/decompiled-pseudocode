/*
 * XREFs of VrpUnloadDifferencingHive @ 0x1407F6200
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x1407F612C (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1409269C4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x14041F1C0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140691330 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406913B4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1406913F4 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406915F0 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1407F63D0 (VrpDecrementDiffHiveEntryHardRefCount.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(PCUNICODE_STRING String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rax
  volatile signed __int64 *v6; // rdi
  char v7; // al
  char v8; // r14
  char v9; // cl
  __int64 v10; // rdx
  int v11; // esi
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  char v16; // bp
  signed __int64 v18; // rax
  unsigned __int64 i; // rdx
  signed __int64 v20; // rtt
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-28h]

  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  DWORD2(v23) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v4 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(v4) )
    {
      v7 = VrpBecomeDiffHiveEntryTransitionOwner(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v8 = v7;
      v9 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock(v4 + 24);
      KeAbPostRelease(v4 + 24);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *((_QWORD *)&v21 + 1) = 0LL;
      LODWORD(v21) = 48;
      v23 = 0LL;
      DWORD2(v22) = 576;
      *(_QWORD *)&v22 = String1;
      v11 = ZwUnloadKey((__int64)&v21, v10);
      if ( v11 < 0 )
        v11 = ZwUnloadKey2((__int64)&v21, 1LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v11 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v18 = *(_QWORD *)(v4 + 16);
          for ( i = v18 + 1; ; i = v18 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v20 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v18);
            v13 = v18;
            if ( v20 == v18 )
              break;
          }
        }
      }
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4, v13, v14, v15);
    }
    else
    {
      v11 = 0;
    }
    v16 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock(v4 + 24);
    KeAbPostRelease(v4 + 24);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((_QWORD *)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v11;
}
