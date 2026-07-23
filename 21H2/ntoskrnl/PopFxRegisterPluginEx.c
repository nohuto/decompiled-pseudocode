/*
 * XREFs of PopFxRegisterPluginEx @ 0x14056C138
 * Callers:
 *     PoFxRegisterPluginEx @ 0x140569420 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1408E4550 (PoFxRegisterPlugin.c)
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
 *     memset @ 0x140414300 (memset.c)
 *     PopFxInitializeWorkPool @ 0x1407CB5E4 (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1408EA9CC (PopDiagTraceFxPluginRegistration.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v7; // ebx
  bool v8; // cf
  __int16 v10; // ax
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r13
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rbp
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A8uLL, 0x4D584650u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1A8uLL);
    v7 = PopFxInitializeWorkPool(v12 + 30, v12);
    if ( v7 >= 0 )
    {
      v12[4] = *a1;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v12 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v12 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v14 = (_QWORD *)PopFxDeviceRegisterHead;
      v15 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *((_QWORD *)v12 + 1) = PopFxDeviceRegisterHead;
      *(_QWORD *)v12 = v15;
      *(_QWORD *)(v15 + 8) = v12;
      *v14 = v12;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&PopFxPluginLock);
      v29 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxPluginLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        SessionId = -1;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          break;
        v22 = (__int64)&v16->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxPluginLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == SessionId )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
          {
            if ( v22 )
            {
              *(_BYTE *)(v22 + 32) |= 2u;
              if ( *(__int64 *)(v22 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
              v23 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
              v24 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
              *(_BYTE *)(v22 + 25) &= ~1u;
              v29 = v23;
              *(_DWORD *)(v22 + 88) = v24;
              *(_QWORD *)(v22 + 32) = 0LL;
              v25 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
              if ( v18 == 1 )
                v16->AbEntrySummary |= 1 << v25;
              else
                _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
              goto LABEL_50;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&PopFxPluginLock, SessionId, 0LL);
LABEL_50:
      --v16->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&PopFxPluginLock, (unsigned int *)&v29);
      v20 = v16->SpecialApcDisable++ == -1;
      if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
      PopDiagTraceFxPluginRegistration(v12, a2, 0LL);
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v12;
      if ( !v8 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v12, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
