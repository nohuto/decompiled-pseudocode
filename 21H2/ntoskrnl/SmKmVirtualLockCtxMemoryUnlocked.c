/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E980
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E0400 (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059E860 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MmQueryWorkingSetInformation @ 0x14025C750 (MmQueryWorkingSetInformation.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r14
  _DWORD *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  char v25; // [rsp+A0h] [rbp+40h] BYREF
  int v26; // [rsp+A8h] [rbp+48h]
  int v27; // [rsp+B0h] [rbp+50h] BYREF
  int v28; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 16) - v6;
    if ( v7 >= 0x800000 || !v6 && *(_QWORD *)(BugCheckParameter2 + 16) )
    {
      v24 = 0LL;
      v23 = 0LL;
      v28 = 0;
      v22 = 0LL;
      if ( (int)MmQueryWorkingSetInformation(&v24, &v23, &v22, &v20, &v21, &v28) >= 0 )
      {
        v8 = v20;
        v9 = v7 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
        if ( v8 >= v9 )
        {
          v20 = v8 - v9;
          v25 = 0;
          MmAdjustWorkingSetSizeEx(v8 - v9, v21, 0, 0, 0, &v25);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v27 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount;
    v13 = (_DWORD *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
    v14 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v16 = !_BitScanReverse((unsigned int *)&v17, v14);
      v26 = v17;
      if ( v16 )
        goto LABEL_22;
      v15 = (__int64)&v10->LockEntries[v17];
      v14 &= ~(1 << v17);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v13
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
    }
    if ( !v15 )
    {
LABEL_22:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, BugCheckParameter2, SessionId, 0LL);
      goto LABEL_29;
    }
    *(_BYTE *)(v15 + 32) |= 2u;
    if ( *(__int64 *)(v15 + 32) < 0 )
      KiAbEntryRemoveFromTree(v15);
    v27 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
    *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v15 + 25) &= ~1u;
    *(_QWORD *)(v15 + 32) = 0LL;
    v18 = (signed __int64)(v15 - (unsigned __int64)v10->LockEntries) / 96;
    if ( v12 == 1 )
      v10->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v18);
LABEL_29:
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v10, BugCheckParameter2, (__int64)&v27, v13);
    v16 = v10->SpecialApcDisable++ == -1;
    if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v19);
    KeLeaveCriticalRegion();
  }
}
