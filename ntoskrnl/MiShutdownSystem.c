/*
 * XREFs of MiShutdownSystem @ 0x140AA8A00
 * Callers:
 *     MmShutdownSystem @ 0x140AA8E60 (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CcNotifyWriteBehind @ 0x1405345B8 (CcNotifyWriteBehind.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MiDeleteHardwareAccelerators @ 0x140652540 (MiDeleteHardwareAccelerators.c)
 *     MmLockPagableSectionByHandle @ 0x1406A7BD0 (MmLockPagableSectionByHandle.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiFreeLoadedImportList @ 0x1407F6CA0 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x140A2FCE8 (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x140AA8C04 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  bool v4; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  SIZE_T v9; // r14
  PVOID Pool; // rax
  PVOID v11; // rsi
  PVOID v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8

  if ( !dword_140C67AC4 )
  {
    MiDeleteHardwareAccelerators();
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)qword_140C6B4F8, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140C6B4F8, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140C6B4F8, v1, (__int64)qword_140C6B4F8);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    dword_140C67AC4 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C6B4F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140C6B4F8);
    KeAbPostRelease((ULONG_PTR)qword_140C6B4F8);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140C6B128, 0, 0);
    if ( byte_140C67AC2 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
    MiDeleteAllHardwareEnclaves();
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = (__int64)Lock;
    while ( v6 != &PsLoadedModuleList )
    {
      v8 = v6[17];
      if ( v8 != (_QWORD *)1 && v8 != (_QWORD *)-2LL && ((unsigned __int8)v8 & 1) == 0 )
      {
        v9 = 8LL * *v8 + 8;
        Pool = MiAllocatePool(64, v9, 0x54446D4Du);
        v11 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v8, v9);
        MiFreeLoadedImportList(v8);
        v6[17] = v11;
      }
      v12 = v6[10];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        v6[10] = 0LL;
      }
      v6 = (PVOID *)*v6;
    }
    MmReleaseLoadLock(v7);
    MiDeletePagingFiles((__int64)MiSystemPartition, v13, v14);
  }
  return 1;
}
