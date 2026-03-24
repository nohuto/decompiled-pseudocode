/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569410
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E334C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     PopFxAddRefDevice @ 0x14026077C (PopFxAddRefDevice.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  _DWORD *v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v17; // rax
  __int64 v18; // rcx
  int v20; // [rsp+68h] [rbp+10h] BYREF

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
  v20 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = (_DWORD *)((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
  v10 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v10);
    if ( v12 )
      goto LABEL_20;
    v11 = (__int64)&v6->LockEntries[v13];
    v10 &= ~(1 << v13);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v9
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
        break;
    }
  }
  if ( !v11 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  *(_BYTE *)(v11 + 32) |= 2u;
  if ( *(__int64 *)(v11 + 32) < 0 )
    KiAbEntryRemoveFromTree(v11);
  v14 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
  v15 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
  *(_BYTE *)(v11 + 25) &= ~1u;
  v20 = v14;
  *(_DWORD *)(v11 + 88) = v15;
  *(_QWORD *)(v11 + 32) = 0LL;
  v16 = (signed __int64)(v11 - (unsigned __int64)v6->LockEntries) / 96;
  if ( v8 == 1 )
    v6->AbEntrySummary |= 1 << v16;
  else
    _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v16);
LABEL_27:
  --v6->AbAllocationRegionCount;
  LOBYTE(v17) = KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&PopFxDeviceListLock, (__int64)&v20, v9);
  v12 = v6->SpecialApcDisable++ == -1;
  if ( v12 )
  {
    v17 = &v6->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != v17 )
      LOBYTE(v17) = KiCheckForKernelApcDelivery(v18);
  }
  return (char)v17;
}
