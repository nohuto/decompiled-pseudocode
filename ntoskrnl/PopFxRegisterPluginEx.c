/*
 * XREFs of PopFxRegisterPluginEx @ 0x1403A37D8
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1403A37C0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x140981890 (PoFxRegisterPlugin.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopFxInitializeWorkPool @ 0x14084D2FC (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x14084D450 (PopDiagTraceFxPluginRegistration.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v4; // cx
  _WORD *v7; // rax
  __int16 v8; // ax
  __int64 Pool2; // rax
  _QWORD *v10; // rsi
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  char v15; // bl
  bool v16; // cf

  v4 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  v7 = a3 + 1;
  if ( v4 == 3 && *v7 < 0x60u )
    return (unsigned int)-1073741811;
  if ( v4 == 2 )
  {
    if ( *v7 < 0x58u )
      return (unsigned int)-1073741811;
  }
  else if ( !v4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v7 < 0x38u )
    return (unsigned int)-1073741811;
  v8 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v8 != 3 )
  {
    if ( v8 == 2 && a1[1] >= 0x18u && *((_QWORD *)a1 + 1) )
      goto LABEL_11;
    return (unsigned int)-1073741811;
  }
  if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
    return (unsigned int)-1073741811;
LABEL_11:
  Pool2 = ExAllocatePool2(64LL, 424LL, 1297630800LL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v11 = PopFxInitializeWorkPool(Pool2 + 120, Pool2);
    if ( v11 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4D584650u);
    }
    else
    {
      *((_DWORD *)v10 + 4) = *a1;
      v10[3] = a2;
      v10[12] = *((_QWORD *)a1 + 1);
      v10[13] = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        v10[14] = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v13 = (_QWORD *)PopFxDeviceRegisterHead;
      v14 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *v10 = v14;
      v10[1] = v13;
      *(_QWORD *)(v14 + 8) = v10;
      *v13 = v10;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v10;
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v10, a2, 0LL);
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      v16 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v10;
      if ( !v16 )
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
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
