/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405756FC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14056AC60 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A09B4 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
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
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  struct _KTHREAD *v14; // rbx
  unsigned __int8 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v26; // rbx
  unsigned int v27; // r12d
  unsigned int v28; // edx
  unsigned __int8 v29; // r14
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rsi
  int v33; // eax
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rsi
  KIRQL v39; // al
  int v40; // r15d
  unsigned __int64 v41; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  struct _KTHREAD *v46; // rbx
  unsigned __int8 v47; // r14
  unsigned int v48; // edx
  __int64 v49; // rsi
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // [rsp+30h] [rbp-20h] BYREF
  int v58; // [rsp+34h] [rbp-1Ch]
  unsigned int v59[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v60[4]; // [rsp+40h] [rbp-10h] BYREF
  int v62; // [rsp+A0h] [rbp+50h] BYREF
  int v63; // [rsp+A8h] [rbp+58h]

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
    v62 = 0;
    v4 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    --v3->SpecialApcDisable;
    v6 = ++v3->AbAllocationRegionCount;
    v7 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_14;
    while ( 1 )
    {
      v10 = (__int64)&v3->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        goto LABEL_14;
    }
    if ( !v10 )
    {
LABEL_14:
      if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v10 + 32) |= 2u;
      if ( *(__int64 *)(v10 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
      v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
      v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
      *(_BYTE *)(v10 + 25) &= ~1u;
      v62 = v11;
      *(_DWORD *)(v10 + 88) = v12;
      *(_QWORD *)(v10 + 32) = 0LL;
      v13 = (signed __int64)(v10 - (unsigned __int64)v3->LockEntries) / 96;
      if ( v6 == 1 )
        v3->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v13);
    }
    --v3->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, (unsigned int *)&v62);
    v8 = v3->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
      KiCheckForKernelApcDelivery();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v57 = 0;
    v14 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v4 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    --v14->SpecialApcDisable;
    v15 = ++v14->AbAllocationRegionCount;
    v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v18, v16);
      v63 = v18;
      if ( v8 )
        goto LABEL_36;
      v17 = (__int64)&v14->LockEntries[v18];
      v16 &= ~(1 << v18);
      if ( (*(_BYTE *)(v17 + 26) & 1) != 0
        && (*(_DWORD *)(v17 + 32) & 1) == 0
        && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v17 + 40) == v4 )
      {
        *(_BYTE *)(v17 + 26) &= ~1u;
        if ( *(_QWORD *)(v17 + 32) )
          break;
      }
    }
    if ( !v17 )
    {
LABEL_36:
      if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&PopPepVetoMaskReadyLock, v4, 0LL);
      goto LABEL_43;
    }
    *(_BYTE *)(v17 + 32) |= 2u;
    if ( *(__int64 *)(v17 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
    v19 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
    v20 = *(_DWORD *)(v17 + 88) & 0xFFFE0000;
    *(_BYTE *)(v17 + 25) &= ~1u;
    v57 = v19;
    *(_DWORD *)(v17 + 88) = v20;
    *(_QWORD *)(v17 + 32) = 0LL;
    v21 = (signed __int64)(v17 - (unsigned __int64)v14->LockEntries) / 96;
    if ( v15 == 1 )
      v14->AbEntrySummary |= 1 << v21;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
LABEL_43:
    --v14->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&PopPepVetoMaskReadyLock, (unsigned int *)&v57);
    v8 = v14->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
      KiCheckForKernelApcDelivery();
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v26 = KeGetCurrentThread();
    v59[0] = 0;
    v27 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      v28 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      v28 = -1;
    --v26->SpecialApcDisable;
    v29 = ++v26->AbAllocationRegionCount;
    v30 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v31, v30);
    v58 = v31;
    if ( v8 )
      goto LABEL_60;
    while ( 1 )
    {
      v32 = (__int64)&v26->LockEntries[v31];
      v30 &= ~(1 << v31);
      if ( (*(_BYTE *)(v32 + 26) & 1) != 0
        && (*(_DWORD *)(v32 + 32) & 1) == 0
        && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v32 + 40) == v28 )
      {
        *(_BYTE *)(v32 + 26) &= ~1u;
        if ( *(_QWORD *)(v32 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v31, v30);
      v58 = v31;
      if ( v8 )
        goto LABEL_60;
    }
    if ( !v32 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)&PopPepDeviceListLock, v28, 0LL);
    }
    else
    {
      *(_BYTE *)(v32 + 32) |= 2u;
      if ( *(__int64 *)(v32 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
      v33 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
      v34 = *(_DWORD *)(v32 + 88) & 0xFFFE0000;
      *(_BYTE *)(v32 + 25) &= ~1u;
      v59[0] = v33;
      *(_DWORD *)(v32 + 88) = v34;
      *(_QWORD *)(v32 + 32) = 0LL;
      v35 = 1 << ((signed __int64)(v32 - (unsigned __int64)v26->LockEntries) / 96);
      if ( v29 == 1 )
        v26->AbEntrySummary |= v35;
      else
        _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, v35);
    }
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, (__int64)&PopPepDeviceListLock, v59);
    v8 = v26->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v36 = 0LL;
      v37 = v2;
      do
      {
        v36 += 384LL;
        *(_DWORD *)(v36 + PopPepPlatformState - 64) = 1073741825;
        --v37;
      }
      while ( v37 );
    }
    v38 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v38 + 64));
        v40 = *(_DWORD *)(v38 + 172);
        v41 = v39;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v38 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
              v8 = (v45 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v45;
              if ( v8 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v41);
        if ( v40 == 1 )
          PopPepInitializeVetoMasks(v38, a1);
        v38 = *(_QWORD *)v38;
      }
      while ( (__int64 *)v38 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v27 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v60[0] = 0;
    v46 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v27 = MmGetSessionIdEx((__int64)v46->ApcState.Process);
    --v46->SpecialApcDisable;
    v47 = ++v46->AbAllocationRegionCount;
    v48 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v50, v48);
      v59[1] = v50;
      if ( v8 )
        goto LABEL_99;
      v49 = (__int64)&v46->LockEntries[v50];
      v48 &= ~(1 << v50);
      if ( (*(_BYTE *)(v49 + 26) & 1) != 0
        && (*(_DWORD *)(v49 + 32) & 1) == 0
        && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v49 + 40) == v27 )
      {
        *(_BYTE *)(v49 + 26) &= ~1u;
        if ( *(_QWORD *)(v49 + 32) )
          break;
      }
    }
    if ( !v49 )
    {
LABEL_99:
      if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v46, (ULONG_PTR)&PopPepVetoMaskReadyLock, v27, 0LL);
      goto LABEL_106;
    }
    *(_BYTE *)(v49 + 32) |= 2u;
    if ( *(__int64 *)(v49 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
    v51 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
    v52 = *(_DWORD *)(v49 + 88) & 0xFFFE0000;
    *(_BYTE *)(v49 + 25) &= ~1u;
    v60[0] = v51;
    *(_DWORD *)(v49 + 88) = v52;
    *(_QWORD *)(v49 + 32) = 0LL;
    v53 = (signed __int64)(v49 - (unsigned __int64)v46->LockEntries) / 96;
    if ( v47 == 1 )
      v46->AbEntrySummary |= 1 << v53;
    else
      _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v53);
LABEL_106:
    --v46->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v46, (__int64)&PopPepVetoMaskReadyLock, v60);
    v8 = v46->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v54, v55, v56);
    return (_QWORD *)PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
