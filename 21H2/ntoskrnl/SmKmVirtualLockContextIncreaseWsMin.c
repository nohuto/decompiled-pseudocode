/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x14059E57C
 * Callers:
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
  _DWORD *v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF
  char v30; // [rsp+A0h] [rbp+40h] BYREF
  int v31; // [rsp+B0h] [rbp+50h]
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  v26 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v29 = 0LL;
      v28 = 0LL;
      v24 = 0;
      v27 = 0LL;
      v7 = MmQueryWorkingSetInformation(&v29, &v28, &v27, &v25, &v26, &v24);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v25;
      if ( v8 + v25 <= v25 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v26;
      v25 += v8;
      if ( v9 > v26 )
        v10 = v9;
      v30 = 0;
      v26 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v30);
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
  v32 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = (_DWORD *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
  v17 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v17);
    v31 = v20;
    if ( v19 )
      goto LABEL_26;
    v18 = (__int64)&v13->LockEntries[v20];
    v17 &= ~(1 << v20);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v16
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
        break;
    }
  }
  if ( !v18 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_33;
  }
  *(_BYTE *)(v18 + 32) |= 2u;
  if ( *(__int64 *)(v18 + 32) < 0 )
    KiAbEntryRemoveFromTree(v18);
  v32 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
  *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v18 + 25) &= ~1u;
  *(_QWORD *)(v18 + 32) = 0LL;
  v21 = (signed __int64)(v18 - (unsigned __int64)v13->LockEntries) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v21;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v21);
LABEL_33:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, (__int64)&v32, v16);
  v19 = v13->SpecialApcDisable++ == -1;
  if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v22);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
