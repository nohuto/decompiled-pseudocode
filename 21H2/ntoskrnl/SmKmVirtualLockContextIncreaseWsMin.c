/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x14059E7AC
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x14059EA90 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MmQueryWorkingSetInformation @ 0x14027DCC0 (MmQueryWorkingSetInformation.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r15
  unsigned int v16; // r8d
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  char v28; // [rsp+A0h] [rbp+40h] BYREF
  int v29; // [rsp+B0h] [rbp+50h]
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v24 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v27 = 0LL;
      v26 = 0LL;
      v22 = 0;
      v25 = 0LL;
      v7 = MmQueryWorkingSetInformation(&v27, &v26, &v25, &v23, &v24, &v22);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v23;
      if ( v8 + v23 <= v23 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v24;
      v23 += v8;
      if ( v9 > v24 )
        v10 = v9;
      v28 = 0;
      v24 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v28);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v12 + v8 > v12 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v12 + v8;
        v7 = 0;
        break;
      }
    }
    while ( v11 == -1073741748 );
  }
  else
  {
    v7 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v30 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v16);
    v29 = v19;
    if ( v18 )
      goto LABEL_26;
    v17 = (__int64)&v13->LockEntries[v19];
    v16 &= ~(1 << v19);
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0
      && (*(_DWORD *)(v17 + 32) & 1) == 0
      && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v17 + 40) == SessionId )
    {
      *(_BYTE *)(v17 + 26) &= ~1u;
      if ( *(_QWORD *)(v17 + 32) )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_33;
  }
  *(_BYTE *)(v17 + 32) |= 2u;
  if ( *(__int64 *)(v17 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
  v30 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
  *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v17 + 25) &= ~1u;
  *(_QWORD *)(v17 + 32) = 0LL;
  v20 = (signed __int64)(v17 - (unsigned __int64)v13->LockEntries) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
LABEL_33:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, (unsigned int *)&v30);
  v18 = v13->SpecialApcDisable++ == -1;
  if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
