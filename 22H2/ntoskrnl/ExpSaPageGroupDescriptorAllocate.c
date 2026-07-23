/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x1403916E8
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140390ECC (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402BC810 (ExpAllocatePoolWithTagFromNode.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140344740 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryNodeActiveAffinity @ 0x1403544E0 (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     ExpSaBinaryArrayInsert @ 0x140391AE4 (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA3D4 (ExpSaBinaryArrayRemove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // r15
  POOL_TYPE v5; // r13d
  PVOID result; // rax
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  char v9; // bl
  __int64 v10; // r12
  unsigned int v11; // ecx
  ULONG_PTR PoolWithTagFromNode; // rdi
  unsigned int v13; // r12d
  struct _KTHREAD *v14; // rbx
  unsigned __int8 v15; // r15
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 AbEntrySummary; // al
  __int64 v23; // rcx
  int SessionId; // eax
  int v26; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v29; // rax
  USHORT v30; // bx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v32; // rdx
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // edx
  __int64 v37; // rcx
  char v38; // [rsp+30h] [rbp-50h]
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  int v41; // [rsp+3Ch] [rbp-44h] BYREF
  int v42; // [rsp+40h] [rbp-40h]
  int v43; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v44; // [rsp+48h] [rbp-38h]
  int v45; // [rsp+4Ch] [rbp-34h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v38 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v4) = 0;
  v5 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v5, 0x80uLL, 0x61537845u);
  v7 = 0LL;
  v8 = (ULONG_PTR)result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *(_QWORD *)(v8 + 48) = 512LL;
  *(_QWORD *)(v8 + 56) = v8 + 64;
  *(_QWORD *)(v8 + 16) = a1;
  *(_DWORD *)(v8 + 36) = 512;
  v43 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v13 = -1;
  v42 = 0;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_45;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v23, AbEntrySummary);
  v42 = v23;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v23);
  v7 = (__int64)&CurrentThread->LockEntries[v23];
  if ( v7 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v7 + 40) = SessionId;
    *(_QWORD *)(v7 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_36;
  }
LABEL_45:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_36:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, &v43);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v7, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  v9 = 1;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v26 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8, KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  *(_DWORD *)(v8 + 32) = v26;
  if ( v26 == -1 )
    goto LABEL_71;
  v11 = KeNumberProcessors_0;
  v44 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_6:
    PoolWithTagFromNode = 0LL;
    goto LABEL_67;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v10 + ExSaPageArrays);
    v29 = (unsigned int)v4 >= v11 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v4);
    v30 = v29->ParentNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v5, 0x1000uLL, 0x61537845u, v30 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
      goto LABEL_66;
LABEL_3:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v46, PoolWithTagFromNode, v30) == -1 )
      goto LABEL_66;
    v9 = 1;
    v10 += 8LL;
    LODWORD(v4) = v4 + 1;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      goto LABEL_6;
    v11 = v44;
  }
  KeQueryNodeActiveAffinity(v30, &Affinity, 0LL);
  if ( v38 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v38 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTagFromNode = (ULONG_PTR)ExAllocatePoolWithTag(v5, 0x1000uLL, 0x61537845u);
  if ( PoolWithTagFromNode )
    goto LABEL_3;
LABEL_66:
  v9 = 0;
LABEL_67:
  if ( v38 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTagFromNode )
    ExFreeHeapPool(PoolWithTagFromNode);
  v13 = -1;
  if ( !v9 )
  {
LABEL_71:
    v32 = *(unsigned int *)(v8 + 32);
    if ( (_DWORD)v32 != -1 )
    {
      if ( (_DWORD)v4 )
      {
        do
        {
          v4 = (unsigned int)(v4 - 1);
          v33 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v34 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v35, v34);
          v36 = 1 << v35;
          v37 = v35 - 2;
          v45 = v37;
          ExFreeHeapPool(*(_QWORD *)(*(_QWORD *)(v33 + 8 * v37) + 8LL * (v34 ^ v36) + 8));
          ExpSaBinaryArrayRemove(v33, *(unsigned int *)(v8 + 32));
        }
        while ( (_DWORD)v4 );
        v32 = *(unsigned int *)(v8 + 32);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v32);
    }
    ExFreeHeapPool(v8);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v41 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v13 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  --v14->SpecialApcDisable;
  v15 = ++v14->AbAllocationRegionCount;
  v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    if ( v17 )
      break;
    v19 = (__int64)&v14->LockEntries[v18];
    v16 &= ~(1 << v18);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v13 )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
      {
        if ( v19 )
        {
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          v41 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
          if ( v15 == 1 )
            v14->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v13, 0LL);
LABEL_24:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&ExSaPageGroupDescriptorArrayLock, &v41);
  v17 = v14->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v21);
  return (PVOID)v8;
}
