/*
 * XREFs of PopFxRemoveAcpiDevice @ 0x14056C5D4
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14057E3C8 (PopFxAcpiUnregisterDevice.c)
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

_QWORD *__fastcall PopFxRemoveAcpiDevice(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // si
  unsigned int v10; // r8d
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v4 = (_QWORD *)(a2 + 200);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v21 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v10);
    if ( v12 )
      goto LABEL_15;
    v11 = (__int64)&v7->LockEntries[v13];
    v10 &= ~(1 << v13);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
        break;
    }
  }
  if ( !v11 )
  {
LABEL_15:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_22;
  }
  *(_BYTE *)(v11 + 32) |= 2u;
  if ( *(__int64 *)(v11 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
  v14 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
  v15 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
  *(_BYTE *)(v11 + 25) &= ~1u;
  v21 = v14;
  *(_DWORD *)(v11 + 88) = v15;
  *(_QWORD *)(v11 + 32) = 0LL;
  v16 = (signed __int64)(v11 - (unsigned __int64)v7->LockEntries) / 96;
  if ( v9 == 1 )
    v7->AbEntrySummary |= 1 << v16;
  else
    _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
LABEL_22:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, (unsigned int *)&v21);
  v12 = v7->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
}
