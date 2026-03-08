/*
 * XREFs of VrpUnloadDifferencingHive @ 0x1407379FC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x140737928 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A6FD28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwUnloadKey @ 0x140415DF0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x140415E10 (ZwUnloadKey2.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140737B9C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140738090 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1407380D0 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140738110 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140738160 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x140738468 (VrpIncrementDiffHiveEntryHardRefCount.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(const UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rdi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  char v7; // al
  char v8; // r15
  char v9; // cl
  __int64 v10; // rdx
  int v11; // esi
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  char v15; // bp
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&v19 = 0LL;
  DWORD2(v19) = 0;
  DiffHiveEntryForMountPoint = VrpFindDiffHiveEntryForMountPoint(a1);
  if ( DiffHiveEntryForMountPoint )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24);
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(DiffHiveEntryForMountPoint + 24, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(DiffHiveEntryForMountPoint + 24), 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)(DiffHiveEntryForMountPoint + 24),
        v5,
        DiffHiveEntryForMountPoint + 24);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(DiffHiveEntryForMountPoint) )
    {
      v7 = VrpBecomeDiffHiveEntryTransitionOwner(DiffHiveEntryForMountPoint);
      *(_DWORD *)(DiffHiveEntryForMountPoint + 56) &= ~1u;
      v8 = v7;
      v9 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24));
      KeAbPostRelease(DiffHiveEntryForMountPoint + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *((_QWORD *)&v17 + 1) = 0LL;
      LODWORD(v17) = 48;
      v19 = 0LL;
      DWORD2(v18) = 576;
      *(_QWORD *)&v18 = a1;
      v11 = ZwUnloadKey((__int64)&v17, v10);
      if ( v11 < 0 )
        v11 = ZwUnloadKey2((__int64)&v17, 1LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v13 = KeAbPreAcquire(DiffHiveEntryForMountPoint + 24, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)(DiffHiveEntryForMountPoint + 24),
          v13,
          DiffHiveEntryForMountPoint + 24);
      if ( v14 )
        *(_BYTE *)(v14 + 18) = 1;
      if ( v11 < 0 )
      {
        *(_DWORD *)(DiffHiveEntryForMountPoint + 56) |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(DiffHiveEntryForMountPoint);
      }
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(DiffHiveEntryForMountPoint);
    }
    else
    {
      v11 = 0;
    }
    v15 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24));
    KeAbPostRelease(DiffHiveEntryForMountPoint + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((PVOID)DiffHiveEntryForMountPoint);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v11;
}
