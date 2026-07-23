/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x14056A298
 * Callers:
 *     PopDirectedDripsEngage @ 0x140568AF4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x1408E39E0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rbx
  unsigned int v3; // esi
  unsigned int SessionId; // edx
  unsigned __int8 v5; // r14
  unsigned int v6; // r8d
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  struct _KTHREAD *v13; // rbx
  unsigned __int8 v14; // r14
  unsigned int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+78h] [rbp+48h] BYREF
  int v26; // [rsp+80h] [rbp+50h]
  int v27; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v25 = 0;
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  --v2->SpecialApcDisable;
  v5 = ++v2->AbAllocationRegionCount;
  v6 = ((char)v2->AbEntrySummary | (char)v2->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v6);
    if ( v8 )
      goto LABEL_16;
    v7 = (__int64)&v2->LockEntries[v9];
    v6 &= ~(1 << v9);
    if ( (*(_BYTE *)(v7 + 26) & 1) != 0
      && (*(_DWORD *)(v7 + 32) & 1) == 0
      && (*(_QWORD *)(v7 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v7 + 40) == SessionId )
    {
      *(_BYTE *)(v7 + 26) &= ~1u;
      if ( *(_QWORD *)(v7 + 32) )
        break;
    }
  }
  if ( !v7 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_23;
  }
  *(_BYTE *)(v7 + 32) |= 2u;
  if ( *(__int64 *)(v7 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v7);
  v10 = *(_DWORD *)(v7 + 88) & 0x1FFFF;
  v11 = *(_DWORD *)(v7 + 88) & 0xFFFE0000;
  *(_BYTE *)(v7 + 25) &= ~1u;
  v25 = v10;
  *(_DWORD *)(v7 + 88) = v11;
  *(_QWORD *)(v7 + 32) = 0LL;
  v12 = (signed __int64)(v7 - (unsigned __int64)v2->LockEntries) / 96;
  if ( v5 == 1 )
    v2->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v12);
LABEL_23:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, (unsigned int *)&v25);
  v8 = v2->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
    KiCheckForKernelApcDelivery();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxBlockingDeviceListLock);
  v27 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxBlockingDeviceListLock) == 1 )
    v3 = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  --v13->SpecialApcDisable;
  v14 = ++v13->AbAllocationRegionCount;
  v15 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v17, v15);
    v26 = v17;
    if ( v8 )
      goto LABEL_38;
    v16 = (__int64)&v13->LockEntries[v17];
    v15 &= ~(1 << v17);
    if ( (*(_BYTE *)(v16 + 26) & 1) != 0
      && (*(_DWORD *)(v16 + 32) & 1) == 0
      && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v16 + 40) == v3 )
    {
      *(_BYTE *)(v16 + 26) &= ~1u;
      if ( *(_QWORD *)(v16 + 32) )
        break;
    }
  }
  if ( !v16 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v16 + 32) |= 2u;
  if ( *(__int64 *)(v16 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16);
  v18 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
  v19 = *(_DWORD *)(v16 + 88) & 0xFFFE0000;
  *(_BYTE *)(v16 + 25) &= ~1u;
  v27 = v18;
  *(_DWORD *)(v16 + 88) = v19;
  *(_QWORD *)(v16 + 32) = 0LL;
  v20 = (signed __int64)(v16 - (unsigned __int64)v13->LockEntries) / 96;
  if ( v14 == 1 )
    v13->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
LABEL_45:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, (__int64)&PopFxBlockingDeviceListLock, (unsigned int *)&v27);
  v8 = v13->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
}
