/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x1405843D4
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x140316550 (RtlAvlInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA638 (MiHotPatchImageTreeCompare.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbp
  bool v11; // zf
  unsigned __int64 *v12; // rdi
  bool v13; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = a2;
    *((_DWORD *)PoolWithTag + 8) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = a1 + 112;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v11 = a3 == 0;
  v12 = *(unsigned __int64 **)(a1 + 104);
  if ( v11 )
  {
    while ( v12 )
    {
      v15 = MiHotPatchImageTreeCompare(a2, v12);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          break;
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        v12 = (unsigned __int64 *)*v12;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v12);
    goto LABEL_20;
  }
  v13 = 0;
  if ( !v12 )
    goto LABEL_19;
  while ( (int)MiHotPatchImageTreeCompare(a2, v12) >= 0 )
  {
    v14 = v12[1];
    if ( !v14 )
    {
      v13 = 1;
      goto LABEL_19;
    }
LABEL_17:
    v12 = (unsigned __int64 *)v14;
  }
  v14 = *v12;
  if ( *v12 )
    goto LABEL_17;
  v13 = 0;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v12, v13, v3);
  v12 = 0LL;
LABEL_20:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 112);
  v25 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = -1;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = (_DWORD *)(v10 & 0x7FFFFFFFFFFFFFFCLL);
  v20 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v11 )
      goto LABEL_32;
    v21 = (__int64)&v16->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
      && *(_DWORD *)(v21 + 40) == SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v10, SessionId, 0LL);
    goto LABEL_39;
  }
  *(_BYTE *)(v21 + 32) |= 2u;
  if ( *(__int64 *)(v21 + 32) < 0 )
    KiAbEntryRemoveFromTree(v21);
  v25 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
  *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v21 + 25) &= ~1u;
  *(_QWORD *)(v21 + 32) = 0LL;
  v23 = (signed __int64)(v21 - (unsigned __int64)v16->LockEntries) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
LABEL_39:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v10, (__int64)&v25, v19);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v24);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
