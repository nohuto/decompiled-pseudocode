BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rdx
  int v6; // eax
  unsigned __int64 v7; // r8
  int PrivateVolumeCacheMapFromFileObject; // ebp
  __int64 v9; // r14
  unsigned __int8 CurrentIrql; // dl
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // r10
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  __int128 v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+68h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( Length >= 0x1000000 || (FileObject->Flags & 0x10) != 0 )
    return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
  CurrentThread = KeGetCurrentThread();
  v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v7 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
  if ( v7 && v6 >= *(_DWORD *)(v7 + 1068) )
    v6 = *(_DWORD *)(v7 + 1068);
  if ( (v6 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
    && v6 <= 0 )
  {
    return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
  }
  v26 = 0LL;
  PrivateVolumeCacheMapFromFileObject = 0;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v9 = *((_QWORD *)PspSystemPartition + 1);
  if ( CcEnablePerVolumeLazyWriter )
  {
    *((_QWORD *)&v23 + 1) = &CcMasterLock;
    *(_QWORD *)&v23 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v15) = 4;
      else
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v15;
    }
    LOBYTE(v24) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v23, &CcMasterLock);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v23) )
    {
      KxWaitForLockOwnerShip(&v23);
    }
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v9);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v23);
      v11 = v23;
      if ( !(_QWORD)v23 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v23 + 1),
                           0LL,
                           (signed __int64)&v23) == &v23 )
          goto LABEL_14;
        v11 = KxWaitForLockChainValid(&v23);
      }
      *(_QWORD *)&v23 = 0LL;
      v16 = BYTE8(v23);
      if ( ((v16 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), *((__int64 *)&v23 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v22, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_14;
    }
    KiReleaseQueuedSpinLockInstrumented(&v23, retaddr);
LABEL_14:
    v12 = (unsigned __int8)v24;
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v12);
  }
  if ( (FileObject->Flags & 0x1000000) == 0
    || (unsigned __int8)CcCanIWriteStreamEx(
                          v9,
                          PrivateVolumeCacheMapFromFileObject,
                          (_DWORD)FileObject,
                          Length,
                          0,
                          0,
                          0LL) )
  {
    return 1;
  }
  return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
}
