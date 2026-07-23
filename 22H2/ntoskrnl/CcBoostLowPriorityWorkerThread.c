/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1403116A8
 * Callers:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1402B69C0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x1402D8E10 (IoBoostThreadIoPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14031195C (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  char v5; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // bp
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v16; // rax
  __int64 v17; // rcx
  KSPIN_LOCK *v18; // r10
  __int64 v19; // rax
  __int64 v20; // r8
  int v22; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x518uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 952;
  ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
  if ( *(_QWORD *)(a1 + 928)
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 936)) )
  {
    IoBoostThreadIoPriority(v18, 2, 0);
    *(_DWORD *)(a1 + 944) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 928), 13);
    v19 = *(_QWORD *)(a1 + 936);
    if ( !*(_DWORD *)(v19 + 4) )
      KeBugCheckEx(0x34u, 0x545uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v19 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a1 + 928), 0, 0, 0LL);
      LOBYTE(v20) = 1;
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 936), 0x20000000LL, v20);
    }
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v8 = ++CurrentThread->AbAllocationRegionCount;
  v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    if ( v10 )
      break;
    v12 = (__int64)&CurrentThread->LockEntries[v11];
    v9 &= ~(1 << v11);
    if ( (*(_BYTE *)(v12 + 26) & 1) != 0
      && (*(_DWORD *)(v12 + 32) & 1) == 0
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v12 + 40) == SessionId )
    {
      *(_BYTE *)(v12 + 26) &= ~1u;
      if ( *(_QWORD *)(v12 + 32) )
      {
        if ( v12 )
        {
          *(_BYTE *)(v12 + 32) |= 2u;
          if ( *(__int64 *)(v12 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
          v13 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
          v14 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
          *(_BYTE *)(v12 + 25) &= ~1u;
          v22 = v13;
          *(_DWORD *)(v12 + 88) = v14;
          *(_QWORD *)(v12 + 32) = 0LL;
          v15 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v8 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
LABEL_19:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v16) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v22);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 )
  {
    v16 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != v16 )
      LOBYTE(v16) = KiCheckForKernelApcDelivery(v17);
  }
  return (char)v16;
}
