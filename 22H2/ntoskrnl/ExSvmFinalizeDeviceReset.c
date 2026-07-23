/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1405B8270
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v3; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v5; // ebp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v7; // rax
  __int64 v8; // rsi
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 *v13; // rax
  __int64 *v14; // rcx
  unsigned int v15; // r14d
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // r12
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26[18]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v26[0] = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  v28 = 0;
  AbEntrySummary = v3->AbEntrySummary;
  v5 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v3->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v28 = v7;
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&v3->LockEntries[v7];
  if ( v8 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v8 + 40) = SessionId;
    *(_QWORD *)(v8 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
LABEL_15:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&ExpSvmDeviceListLock, v26);
  v11 = v3->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v8, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v13 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v15 = -1073741810;
  }
  else
  {
    do
    {
      v14 = v13;
      if ( v13[2] == a1 )
        break;
      v13 = (__int64 *)*v13;
    }
    while ( v13 != &ExpSvmDevices );
    v15 = (*(__int64 (__fastcall **)(__int64))(HalIommuDispatch + 144))(v14[15]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v27 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v5 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  v11 = !_BitScanReverse((unsigned int *)&v19, v18);
  if ( v11 )
    goto LABEL_38;
  while ( 1 )
  {
    v20 = (__int64)&v16->LockEntries[v19];
    v18 &= ~(1 << v19);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v5 )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
    v11 = !_BitScanReverse((unsigned int *)&v19, v18);
    if ( v11 )
      goto LABEL_38;
  }
  if ( !v20 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&ExpSvmDeviceListLock, v5, 0LL);
  }
  else
  {
    *(_BYTE *)(v20 + 32) |= 2u;
    if ( *(__int64 *)(v20 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
    v21 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
    v22 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
    *(_BYTE *)(v20 + 25) &= ~1u;
    v27 = v21;
    *(_DWORD *)(v20 + 88) = v22;
    *(_QWORD *)(v20 + 32) = 0LL;
    v23 = (signed __int64)(v20 - (unsigned __int64)v16->LockEntries) / 96;
    if ( v17 == 1 )
      v16->AbEntrySummary |= 1 << v23;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
  }
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&ExpSvmDeviceListLock, &v27);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v24);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v15;
}
