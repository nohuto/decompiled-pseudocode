/*
 * XREFs of PopFxRegisterPluginEx @ 0x14056BEF8
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1405691E0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1408E43F0 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopFxInitializeWorkPool @ 0x1407CB474 (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1408EA86C (PopDiagTraceFxPluginRegistration.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rbp
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+78h] [rbp+20h] BYREF

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
      v28 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxPluginLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        SessionId = -1;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = (_DWORD *)((unsigned __int64)&PopFxPluginLock & 0x7FFFFFFFFFFFFFFCLL);
      v20 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          break;
        v23 = (__int64)&v16->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
          && *(_DWORD *)(v23 + 40) == SessionId )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
          {
            if ( v23 )
            {
              *(_BYTE *)(v23 + 32) |= 2u;
              if ( *(__int64 *)(v23 + 32) < 0 )
                KiAbEntryRemoveFromTree(v23);
              v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
              v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
              *(_BYTE *)(v23 + 25) &= ~1u;
              v28 = v24;
              *(_DWORD *)(v23 + 88) = v25;
              *(_QWORD *)(v23 + 32) = 0LL;
              v26 = (signed __int64)(v23 - (unsigned __int64)v16->LockEntries) / 96;
              if ( v18 == 1 )
                v16->AbEntrySummary |= 1 << v26;
              else
                _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v26);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&PopFxPluginLock, (__int64)&v28, v19);
      v21 = v16->SpecialApcDisable++ == -1;
      if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v27);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
