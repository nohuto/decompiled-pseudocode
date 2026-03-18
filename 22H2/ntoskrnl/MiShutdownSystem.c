/*
 * XREFs of MiShutdownSystem @ 0x140AABC30
 * Callers:
 *     MmShutdownSystem @ 0x140AAC090 (MmShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     CcNotifyWriteBehind @ 0x140536A88 (CcNotifyWriteBehind.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiDeleteHardwareAccelerators @ 0x140654B90 (MiDeleteHardwareAccelerators.c)
 *     MiFreeLoadedImportList @ 0x140696D20 (MiFreeLoadedImportList.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5800 (MmLockPagableSectionByHandle.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 *     MiDeletePagingFiles @ 0x140A32A18 (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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

  if ( !dword_140C67F44 )
  {
    MiDeleteHardwareAccelerators();
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)qword_140C6B938, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140C6B938, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140C6B938, v1, (__int64)qword_140C6B938);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    dword_140C67F44 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C6B938, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140C6B938);
    KeAbPostRelease((ULONG_PTR)qword_140C6B938);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140C6B568, 0, 0);
    if ( byte_140C67F42 )
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
    MiDeletePagingFiles((__int64)MiSystemPartition);
  }
  return 1;
}
