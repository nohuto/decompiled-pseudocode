/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405754BC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14056AA20 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A0864 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x140574D9C (PopPepInitializeVetoMasks.c)
 */

_QWORD *__fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  struct _KTHREAD *v3; // rbx
  unsigned int v4; // r12d
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  _DWORD *v8; // r9
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rbx
  _DWORD *v17; // r9
  unsigned __int8 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v27; // rbx
  unsigned int v28; // r12d
  unsigned int v29; // edx
  unsigned __int8 v30; // r14
  unsigned int v31; // r8d
  _DWORD *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rsi
  int v35; // eax
  unsigned int v36; // ecx
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  KIRQL v42; // al
  int v43; // r15d
  unsigned __int64 v44; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  struct _KTHREAD *v49; // rbx
  __int64 v50; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v52; // edx
  __int64 v53; // rsi
  __int64 v54; // rcx
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // [rsp+30h] [rbp-20h] BYREF
  int v60; // [rsp+34h] [rbp-1Ch]
  _DWORD v61[2]; // [rsp+38h] [rbp-18h] BYREF
  int v62[4]; // [rsp+40h] [rbp-10h] BYREF
  int v64; // [rsp+A0h] [rbp+50h] BYREF
  int v65; // [rsp+A8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v3 = KeGetCurrentThread();
    v64 = 0;
    v4 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    --v3->SpecialApcDisable;
    v6 = ++v3->AbAllocationRegionCount;
    v7 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = (_DWORD *)((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
    v9 = !_BitScanReverse((unsigned int *)&v10, v7);
    if ( v9 )
      goto LABEL_14;
    while ( 1 )
    {
      v11 = (__int64)&v3->LockEntries[v10];
      v7 &= ~(1 << v10);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v8
        && *(_DWORD *)(v11 + 40) == SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v7);
      if ( v9 )
        goto LABEL_14;
    }
    if ( !v11 )
    {
LABEL_14:
      if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v11 + 32) |= 2u;
      if ( *(__int64 *)(v11 + 32) < 0 )
        KiAbEntryRemoveFromTree(v11);
      v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
      v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
      *(_BYTE *)(v11 + 25) &= ~1u;
      v64 = v12;
      *(_DWORD *)(v11 + 88) = v13;
      *(_QWORD *)(v11 + 32) = 0LL;
      v14 = (signed __int64)(v11 - (unsigned __int64)v3->LockEntries) / 96;
      if ( v6 == 1 )
        v3->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v14);
    }
    --v3->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, (__int64)&v64, v8);
    v9 = v3->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
      KiCheckForKernelApcDelivery(v15);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v59 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v4 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v21, v19);
      v65 = v21;
      if ( v9 )
        goto LABEL_36;
      v20 = (__int64)&v16->LockEntries[v21];
      v19 &= ~(1 << v21);
      if ( (*(_BYTE *)(v20 + 26) & 1) != 0
        && (*(_DWORD *)(v20 + 32) & 1) == 0
        && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v20 + 40) == v4 )
      {
        *(_BYTE *)(v20 + 26) &= ~1u;
        if ( *(_QWORD *)(v20 + 32) )
          break;
      }
    }
    if ( !v20 )
    {
LABEL_36:
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&PopPepVetoMaskReadyLock, v4, 0LL);
      goto LABEL_43;
    }
    *(_BYTE *)(v20 + 32) |= 2u;
    if ( *(__int64 *)(v20 + 32) < 0 )
      KiAbEntryRemoveFromTree(v20);
    v22 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
    v23 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
    *(_BYTE *)(v20 + 25) &= ~1u;
    v59 = v22;
    *(_DWORD *)(v20 + 88) = v23;
    *(_QWORD *)(v20 + 32) = 0LL;
    v24 = (signed __int64)(v20 - (unsigned __int64)v16->LockEntries) / 96;
    if ( v18 == 1 )
      v16->AbEntrySummary |= 1 << v24;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v24);
LABEL_43:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&PopPepVetoMaskReadyLock, (__int64)&v59, v17);
    v9 = v16->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v25);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v27 = KeGetCurrentThread();
    v61[0] = 0;
    v28 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      v29 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v29 = -1;
    --v27->SpecialApcDisable;
    v30 = ++v27->AbAllocationRegionCount;
    v31 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    v32 = (_DWORD *)((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
    v9 = !_BitScanReverse((unsigned int *)&v33, v31);
    v60 = v33;
    if ( v9 )
      goto LABEL_60;
    while ( 1 )
    {
      v34 = (__int64)&v27->LockEntries[v33];
      v31 &= ~(1 << v33);
      if ( (*(_BYTE *)(v34 + 26) & 1) != 0
        && (*(_DWORD *)(v34 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v34 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v32
        && *(_DWORD *)(v34 + 40) == v29 )
      {
        *(_BYTE *)(v34 + 26) &= ~1u;
        if ( *(_QWORD *)(v34 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v33, v31);
      v60 = v33;
      if ( v9 )
        goto LABEL_60;
    }
    if ( !v34 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)&PopPepDeviceListLock, v29, 0LL);
    }
    else
    {
      *(_BYTE *)(v34 + 32) |= 2u;
      if ( *(__int64 *)(v34 + 32) < 0 )
        KiAbEntryRemoveFromTree(v34);
      v35 = *(_DWORD *)(v34 + 88) & 0x1FFFF;
      v36 = *(_DWORD *)(v34 + 88) & 0xFFFE0000;
      *(_BYTE *)(v34 + 25) &= ~1u;
      v61[0] = v35;
      *(_DWORD *)(v34 + 88) = v36;
      *(_QWORD *)(v34 + 32) = 0LL;
      v37 = 1 << ((signed __int64)(v34 - (unsigned __int64)v27->LockEntries) / 96);
      if ( v30 == 1 )
        v27->AbEntrySummary |= v37;
      else
        _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, v37);
    }
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)&PopPepDeviceListLock, (__int64)v61, v32);
    v9 = v27->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v38);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v39 = 0LL;
      v40 = v2;
      do
      {
        v39 += 384LL;
        *(_DWORD *)(v39 + PopPepPlatformState - 64) = 1073741825;
        --v40;
      }
      while ( v40 );
    }
    v41 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v42 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v41 + 64));
        v43 = *(_DWORD *)(v41 + 172);
        v44 = v42;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v41 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
              v9 = (v48 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v48;
              if ( v9 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v44);
        if ( v43 == 1 )
          PopPepInitializeVetoMasks(v41, a1);
        v41 = *(_QWORD *)v41;
      }
      while ( (__int64 *)v41 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v28 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v62[0] = 0;
    v49 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v28 = MmGetSessionIdEx((__int64)v49->ApcState.Process);
    --v49->SpecialApcDisable;
    ++v49->AbAllocationRegionCount;
    v50 = 0x7FFFFFFFFFFFFFFCLL;
    AbAllocationRegionCount = v49->AbAllocationRegionCount;
    v52 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v54, v52);
      v61[1] = v54;
      if ( v9 )
        goto LABEL_99;
      v53 = (__int64)&v49->LockEntries[v54];
      v52 &= ~(1 << v54);
      if ( (*(_BYTE *)(v53 + 26) & 1) != 0
        && (*(_DWORD *)(v53 + 32) & 1) == 0
        && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v53 + 40) == v28 )
      {
        *(_BYTE *)(v53 + 26) &= ~1u;
        if ( *(_QWORD *)(v53 + 32) )
          break;
      }
    }
    if ( !v53 )
    {
LABEL_99:
      if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v49, (ULONG_PTR)&PopPepVetoMaskReadyLock, v28, 0LL);
      goto LABEL_106;
    }
    *(_BYTE *)(v53 + 32) |= 2u;
    if ( *(__int64 *)(v53 + 32) < 0 )
      KiAbEntryRemoveFromTree(v53);
    v55 = *(_DWORD *)(v53 + 88) & 0x1FFFF;
    v56 = *(_DWORD *)(v53 + 88) & 0xFFFE0000;
    *(_BYTE *)(v53 + 25) &= ~1u;
    v62[0] = v55;
    *(_DWORD *)(v53 + 88) = v56;
    *(_QWORD *)(v53 + 32) = 0LL;
    v57 = (signed __int64)(v53 - (unsigned __int64)v49->LockEntries) / 96;
    if ( AbAllocationRegionCount == 1 )
      v49->AbEntrySummary |= 1 << v57;
    else
      _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, 1 << v57);
LABEL_106:
    --v49->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v49, (__int64)&PopPepVetoMaskReadyLock, (__int64)v62, (_DWORD *)v50);
    v9 = v49->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery(v58);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (_QWORD *)PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
