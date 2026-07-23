/*
 * XREFs of MiInitializeMirroring @ 0x140A54728
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiSizeMemoryListLocks @ 0x1406A6868 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x140774684 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rax
  PVOID Pool; // rax
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // ebx
  ULONG_PTR v7; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // bp
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  *((_QWORD *)&v18 + 1) = 0LL;
  stru_140C4E6E8.List.Flink = 0LL;
  stru_140C4E6D0.Header.WaitListHead.Blink = &stru_140C4E6D0.Header.WaitListHead;
  stru_140C4E6D0.Header.WaitListHead.Flink = &stru_140C4E6D0.Header.WaitListHead;
  stru_140C4E6E8.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C4E6D0.Header.Lock) = 1;
  stru_140C4E6D0.Header.Size = 6;
  stru_140C4E6D0.Header.SignalState = 1;
  stru_140C4E6E8.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  Pool = MiAllocatePool(64, v0, 0x614C6D4Du);
  if ( Pool )
  {
    qword_140C52128 = (__int64)Pool;
    v4 = qword_140C4E710;
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    while ( 1 )
    {
      v7 = MiReservePtes((__int64)&qword_140C4EF40, 0x200000u, v2, v3);
      if ( !v7 || !(unsigned int)MiInitializeDynamicBitmap(&v18, (__int64)(v7 << 25) >> 16, 0x1000000000LL, 12) )
        break;
      *(_QWORD *)&v18 = 0LL;
      ++v6;
      *(_OWORD *)v4 = v18;
      v4 += 2;
      if ( v6 >= 2 )
      {
        if ( (dword_140CFB184 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50E40, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50E40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50E40);
          v19 = 0;
          v9 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50E40) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
          else
            SessionId = -1;
          --v9->SpecialApcDisable;
          v11 = ++v9->AbAllocationRegionCount;
          v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v13 = !_BitScanReverse((unsigned int *)&v14, v12);
            if ( v13 )
              goto LABEL_16;
            v15 = (__int64)&v9->LockEntries[v14];
            v12 &= ~(1 << v14);
            if ( (*(_BYTE *)(v15 + 26) & 1) != 0
              && (*(_DWORD *)(v15 + 32) & 1) == 0
              && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50E40 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v15 + 40) == SessionId )
            {
              *(_BYTE *)(v15 + 26) &= ~1u;
              if ( *(_QWORD *)(v15 + 32) )
                break;
            }
          }
          if ( !v15 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140C50E40, SessionId, 0LL);
            goto LABEL_28;
          }
          *(_BYTE *)(v15 + 32) |= 2u;
          if ( *(__int64 *)(v15 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
          v19 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
          *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v15 + 25) &= ~1u;
          *(_QWORD *)(v15 + 32) = 0LL;
          v16 = (signed __int64)(v15 - (unsigned __int64)v9->LockEntries) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
LABEL_28:
          --v9->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&qword_140C50E40, &v19);
          v13 = v9->SpecialApcDisable++ == -1;
          if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
            KiCheckForKernelApcDelivery(v17);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
