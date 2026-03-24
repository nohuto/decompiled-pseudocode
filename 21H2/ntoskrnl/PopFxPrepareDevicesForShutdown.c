/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x14056BB0C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     PopFxActivateDevicesForSx @ 0x14038C308 (PopFxActivateDevicesForSx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *PopFxPrepareDevicesForShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v3; // si
  _DWORD *v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  PopFxEnableShutdownActiveBias = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v14 = 0;
  v1 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
  else
    SessionId = -1;
  --v1->SpecialApcDisable;
  v3 = ++v1->AbAllocationRegionCount;
  v4 = (_DWORD *)((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
  v5 = ((char)v1->AbEntrySummary | (char)v1->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v5);
    if ( v7 )
      goto LABEL_13;
    v6 = (__int64)&v1->LockEntries[v8];
    v5 &= ~(1 << v8);
    if ( (*(_BYTE *)(v6 + 26) & 1) != 0
      && (*(_DWORD *)(v6 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v6 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v4
      && *(_DWORD *)(v6 + 40) == SessionId )
    {
      *(_BYTE *)(v6 + 26) &= ~1u;
      if ( *(_QWORD *)(v6 + 32) )
        break;
    }
  }
  if ( !v6 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v1->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v1, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v6 + 32) |= 2u;
  if ( *(__int64 *)(v6 + 32) < 0 )
    KiAbEntryRemoveFromTree(v6);
  v9 = *(_DWORD *)(v6 + 88) & 0x1FFFF;
  v10 = *(_DWORD *)(v6 + 88) & 0xFFFE0000;
  *(_BYTE *)(v6 + 25) &= ~1u;
  v14 = v9;
  *(_DWORD *)(v6 + 88) = v10;
  *(_QWORD *)(v6 + 32) = 0LL;
  v11 = (signed __int64)(v6 - (unsigned __int64)v1->LockEntries) / 96;
  if ( v3 == 1 )
    v1->AbEntrySummary |= 1 << v11;
  else
    _InterlockedOr8((volatile signed __int8 *)&v1->AbOrphanedEntrySummary, 1 << v11);
LABEL_20:
  --v1->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v1, (__int64)&PopFxDeviceListLock, (__int64)&v14, v4);
  v7 = v1->SpecialApcDisable++ == -1;
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)v1->ApcState.ApcListHead[0].Flink != &v1->152 )
    KiCheckForKernelApcDelivery(v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxActivateDevicesForSx(4u);
}
