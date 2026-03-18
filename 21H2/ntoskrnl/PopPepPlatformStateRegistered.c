/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405D5E24
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405CC1E0 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403B92D0 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x1405D5704 (PopPepInitializeVetoMasks.c)
 */

char __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r12
  struct _KTHREAD *v3; // rsi
  unsigned int v4; // r14d
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v7; // edx
  int v8; // r8d
  struct _KTHREAD *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // r8d
  struct _KTHREAD *v14; // rsi
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  KIRQL v23; // al
  int v24; // r12d
  unsigned __int64 v25; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  struct _KTHREAD *v31; // rdi
  unsigned int v32; // ecx
  __int64 v33; // rbx
  int v34; // r8d

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
    v4 = -1;
    if ( (unsigned __int64)&PopPepDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    _disable();
    p_Process = (__int64)&v3[1].Process;
    v7 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v7;
      p_Process += 96LL;
      if ( v7 >= 6 )
        goto LABEL_13;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_13:
      if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
      _enable();
      goto LABEL_21;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v8 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v3->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v8 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, v8);
LABEL_21:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v9 = KeGetCurrentThread();
    if ( (unsigned __int64)&PopPepVetoMaskReadyLock - qword_140C50630 < 0x8000000000LL )
      v4 = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    _disable();
    v10 = (__int64)&v9[1].Process;
    v11 = 0;
    while ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v10 + 18)
         || (*(_DWORD *)v10 & 1) != 0
         || *(_DWORD *)(v10 + 8) != v4 )
    {
      ++v11;
      v10 += 96LL;
      if ( v11 >= 6 )
        goto LABEL_31;
    }
    *(_BYTE *)(v10 + 18) = 0;
    if ( !v10 )
    {
LABEL_31:
      if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&PopPepVetoMaskReadyLock, v4, 0LL);
      _enable();
      return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( *(__int64 *)v10 < 0 )
    {
      *(_BYTE *)v10 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v10);
      _disable();
    }
    v12 = *(_DWORD *)(v10 + 88);
    *(_DWORD *)(v10 + 88) = 0;
    *(_BYTE *)(v10 + 17) = 0;
    *(_QWORD *)v10 = 0LL;
    v9->AbEntrySummary |= 1 << *(_BYTE *)(v10 + 16);
    _enable();
    if ( v12 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v9, (__int64)&PopPepVetoMaskReadyLock, v12);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v14 = KeGetCurrentThread();
    v15 = -1;
    if ( (unsigned __int64)&PopPepDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      v16 = -1;
    else
      v16 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    _disable();
    v17 = (__int64)&v14[1].Process;
    v18 = 0;
    while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v17 + 18)
         || (*(_DWORD *)v17 & 1) != 0
         || *(_DWORD *)(v17 + 8) != v16 )
    {
      ++v18;
      v17 += 96LL;
      if ( v18 >= 6 )
        goto LABEL_51;
    }
    *(_BYTE *)(v17 + 18) = 0;
    if ( !v17 )
    {
LABEL_51:
      if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&PopPepDeviceListLock, v16, 0LL);
      _enable();
      goto LABEL_59;
    }
    if ( *(__int64 *)v17 < 0 )
    {
      *(_BYTE *)v17 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v17);
      _disable();
    }
    v19 = *(_DWORD *)(v17 + 88);
    *(_DWORD *)(v17 + 88) = 0;
    *(_BYTE *)(v17 + 17) = 0;
    *(_QWORD *)v17 = 0LL;
    v14->AbEntrySummary |= 1 << *(_BYTE *)(v17 + 16);
    _enable();
    if ( v19 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, (__int64)&PopPepDeviceListLock, v19);
LABEL_59:
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v20 = 0LL;
      v21 = v2;
      do
      {
        v20 += 448LL;
        *(_DWORD *)(v20 + PopPepPlatformState - 64) = 1073741825;
        --v21;
      }
      while ( v21 );
    }
    v22 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v23 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v22 + 64));
        v24 = *(_DWORD *)(v22 + 172);
        v25 = v23;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v22 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v30 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v25);
        if ( v24 == 1 )
          PopPepInitializeVetoMasks(v22, a1);
        v22 = *(_QWORD *)v22;
      }
      while ( (__int64 *)v22 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v15 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v31 = KeGetCurrentThread();
    if ( (unsigned __int64)&PopPepVetoMaskReadyLock - qword_140C50630 < 0x8000000000LL )
      v15 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    _disable();
    v32 = 0;
    v33 = (__int64)&v31[1].Process;
    while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v33 + 18)
         || (*(_DWORD *)v33 & 1) != 0
         || *(_DWORD *)(v33 + 8) != v15 )
    {
      ++v32;
      v33 += 96LL;
      if ( v32 >= 6 )
        goto LABEL_86;
    }
    *(_BYTE *)(v33 + 18) = 0;
    if ( !v33 )
    {
LABEL_86:
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&PopPepVetoMaskReadyLock, v15, 0LL);
      _enable();
      goto LABEL_94;
    }
    if ( *(__int64 *)v33 < 0 )
    {
      *(_BYTE *)v33 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v33);
      _disable();
    }
    v34 = *(_DWORD *)(v33 + 88);
    *(_DWORD *)(v33 + 88) = 0;
    *(_BYTE *)(v33 + 17) = 0;
    *(_QWORD *)v33 = 0LL;
    v31->AbEntrySummary |= 1 << *(_BYTE *)(v33 + 16);
    _enable();
    if ( v34 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, (__int64)&PopPepVetoMaskReadyLock, v34);
LABEL_94:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0, 0LL);
  }
}
