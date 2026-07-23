/*
 * XREFs of PopFxInsertAcpiDevice @ 0x14056ACA8
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x14057DFB8 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
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
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h]

  v20 = a2;
  v19 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140C247D8;
  v6 = (_QWORD *)(a3 + 200);
  if ( *(__int64 **)qword_140C247D8 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  v6[1] = qword_140C247D8;
  *v6 = &PopFxAcpiDeviceList;
  *v5 = v6;
  qword_140C247D8 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  LODWORD(v19) = 0;
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
    LODWORD(v20) = v13;
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
  LODWORD(v19) = v14;
  *(_DWORD *)(v11 + 88) = v15;
  *(_QWORD *)(v11 + 32) = 0LL;
  v16 = (signed __int64)(v11 - (unsigned __int64)v7->LockEntries) / 96;
  if ( v9 == 1 )
    v7->AbEntrySummary |= 1 << v16;
  else
    _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
LABEL_22:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, &v19);
  v12 = v7->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v17);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
