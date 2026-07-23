/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569650
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E34AC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall PopFxBuildDirectedDripsCandidateDeviceList(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // si
  unsigned int v9; // r8d
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v16; // rax
  int v18; // [rsp+68h] [rbp+10h] BYREF

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 824), 0, 0) & 0x40) != 0 )
    {
      PopFxAddRefDevice(i);
      v4 = (_QWORD *)a1[1];
      v5 = (_QWORD *)(i + 872);
      if ( (_QWORD *)*v4 != a1 )
        __fastfail(3u);
      *v5 = a1;
      *(_QWORD *)(i + 880) = v4;
      *v4 = v5;
      a1[1] = v5;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v6 = KeGetCurrentThread();
  v18 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v9);
    if ( v11 )
      goto LABEL_20;
    v10 = (__int64)&v6->LockEntries[v12];
    v9 &= ~(1 << v12);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
        break;
    }
  }
  if ( !v10 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  *(_BYTE *)(v10 + 32) |= 2u;
  if ( *(__int64 *)(v10 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
  v13 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
  v14 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
  *(_BYTE *)(v10 + 25) &= ~1u;
  v18 = v13;
  *(_DWORD *)(v10 + 88) = v14;
  *(_QWORD *)(v10 + 32) = 0LL;
  v15 = (signed __int64)(v10 - (unsigned __int64)v6->LockEntries) / 96;
  if ( v8 == 1 )
    v6->AbEntrySummary |= 1 << v15;
  else
    _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v15);
LABEL_27:
  --v6->AbAllocationRegionCount;
  LOBYTE(v16) = KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&PopFxDeviceListLock, (unsigned int *)&v18);
  v11 = v6->SpecialApcDisable++ == -1;
  if ( v11 )
  {
    v16 = &v6->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != v16 )
      LOBYTE(v16) = KiCheckForKernelApcDelivery();
  }
  return (char)v16;
}
