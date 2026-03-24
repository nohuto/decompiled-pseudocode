/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x14056A058
 * Callers:
 *     PopDirectedDripsEngage @ 0x1405688B4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x1408E3880 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rbx
  unsigned int v3; // esi
  unsigned int SessionId; // edx
  unsigned __int8 v5; // r14
  _DWORD *v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rbx
  __int64 v16; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26; // [rsp+78h] [rbp+48h] BYREF
  int v27; // [rsp+80h] [rbp+50h]
  int v28; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v26 = 0;
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  --v2->SpecialApcDisable;
  v5 = ++v2->AbAllocationRegionCount;
  v6 = (_DWORD *)((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
  v7 = ((char)v2->AbEntrySummary | (char)v2->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v7);
    if ( v9 )
      goto LABEL_16;
    v8 = (__int64)&v2->LockEntries[v10];
    v7 &= ~(1 << v10);
    if ( (*(_BYTE *)(v8 + 26) & 1) != 0
      && (*(_DWORD *)(v8 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v6
      && *(_DWORD *)(v8 + 40) == SessionId )
    {
      *(_BYTE *)(v8 + 26) &= ~1u;
      if ( *(_QWORD *)(v8 + 32) )
        break;
    }
  }
  if ( !v8 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_23;
  }
  *(_BYTE *)(v8 + 32) |= 2u;
  if ( *(__int64 *)(v8 + 32) < 0 )
    KiAbEntryRemoveFromTree(v8);
  v11 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
  v12 = *(_DWORD *)(v8 + 88) & 0xFFFE0000;
  *(_BYTE *)(v8 + 25) &= ~1u;
  v26 = v11;
  *(_DWORD *)(v8 + 88) = v12;
  *(_QWORD *)(v8 + 32) = 0LL;
  v13 = (signed __int64)(v8 - (unsigned __int64)v2->LockEntries) / 96;
  if ( v5 == 1 )
    v2->AbEntrySummary |= 1 << v13;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v13);
LABEL_23:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, (__int64)&v26, v6);
  v9 = v2->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
    KiCheckForKernelApcDelivery(v14);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxBlockingDeviceListLock);
  v28 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxBlockingDeviceListLock) == 1 )
    v3 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  ++v15->AbAllocationRegionCount;
  v16 = 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v20, v18);
    v27 = v20;
    if ( v9 )
      goto LABEL_38;
    v19 = (__int64)&v15->LockEntries[v20];
    v18 &= ~(1 << v20);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v3 )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v19 + 32) |= 2u;
  if ( *(__int64 *)(v19 + 32) < 0 )
    KiAbEntryRemoveFromTree(v19);
  v21 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
  v22 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
  *(_BYTE *)(v19 + 25) &= ~1u;
  v28 = v21;
  *(_DWORD *)(v19 + 88) = v22;
  *(_QWORD *)(v19 + 32) = 0LL;
  v23 = (signed __int64)(v19 - (unsigned __int64)v15->LockEntries) / 96;
  if ( AbAllocationRegionCount == 1 )
    v15->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v23);
LABEL_45:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&PopFxBlockingDeviceListLock, (__int64)&v28, (_DWORD *)v16);
  v9 = v15->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v24);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
