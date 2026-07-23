/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140276988
 * Callers:
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     PsSetIoPriorityThread @ 0x140277970 (PsSetIoPriorityThread.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14031195C (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v6; // r14
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // edx
  unsigned __int8 v20; // r15
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // ecx

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x48AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 960) >= *(_DWORD *)(a1 + 200) || *(_QWORD *)(a1 + 928) || a3[129] || (a3[38] & 0x10000) != 0 )
      return;
    v6 = a1 + 952;
    ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
    if ( *(_DWORD *)(a1 + 960) < *(_DWORD *)(a1 + 200) && !*(_QWORD *)(a1 + 928) && !a3[129] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 928) = CurrentThread;
      *(_QWORD *)(a1 + 936) = a3;
      *(_DWORD *)(a1 + 948) = PsSetIoPriorityThread(CurrentThread, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx(v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        goto LABEL_56;
      v13 = (__int64)&v7->LockEntries[v12];
      v10 &= ~(1 << v12);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_56:
      if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, SessionId, 0LL);
      goto LABEL_30;
    }
    *(_BYTE *)(v13 + 32) |= 2u;
    if ( *(__int64 *)(v13 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
    v14 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
    *(_BYTE *)(v13 + 25) &= ~1u;
    *(_DWORD *)(v13 + 88) = v14;
    *(_QWORD *)(v13 + 32) = 0LL;
    v15 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
    if ( v9 == 1 )
    {
      v7->AbEntrySummary |= 1 << v15;
      goto LABEL_30;
    }
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 928) != CurrentThread )
      return;
    v17 = a1 + 952;
    ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 948));
    v18 = *(unsigned int *)(a1 + 944);
    if ( (_DWORD)v18 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v18);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v18) = 1;
      PsBoostThreadIoEx(CurrentThread, v18, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 928) = 0LL;
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 948) = 5;
    *(_DWORD *)(a1 + 944) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v17);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
      v19 = MmGetSessionIdEx(v7->ApcState.Process);
    else
      v19 = -1;
    --v7->SpecialApcDisable;
    v20 = ++v7->AbAllocationRegionCount;
    v21 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v22, v21);
      if ( v11 )
        goto LABEL_58;
      v23 = (__int64)&v7->LockEntries[v22];
      v21 &= ~(1 << v22);
      if ( (*(_BYTE *)(v23 + 26) & 1) != 0
        && (*(_DWORD *)(v23 + 32) & 1) == 0
        && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v23 + 40) == v19 )
      {
        *(_BYTE *)(v23 + 26) &= ~1u;
        if ( *(_QWORD *)(v23 + 32) )
          break;
      }
    }
    if ( !v23 )
    {
LABEL_58:
      if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v7, v17, v19, 0LL);
      goto LABEL_30;
    }
    *(_BYTE *)(v23 + 32) |= 2u;
    if ( *(__int64 *)(v23 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
    v24 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
    *(_BYTE *)(v23 + 25) &= ~1u;
    *(_DWORD *)(v23 + 88) = v24;
    *(_QWORD *)(v23 + 32) = 0LL;
    v15 = (signed __int64)(v23 - (unsigned __int64)v7->LockEntries) / 96;
    if ( v20 == 1 )
    {
      v7->AbEntrySummary |= 1 << v15;
      goto LABEL_30;
    }
  }
  _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
LABEL_30:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v16);
}
