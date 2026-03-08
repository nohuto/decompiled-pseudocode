/*
 * XREFs of ExEnableHandleTracing @ 0x1409F5F20
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1409AB674 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x1402BED94 (MmGetMaximumNonPagedPoolInBytes.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F5EC0 (ExDereferenceHandleDebugInfo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int i; // eax
  __int64 v5; // r14
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KPROCESS *v9; // rbp
  __int64 Pool2; // rax
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // r14

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v2 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v2 = ExHandleTraceDbMinStacks;
    }
    for ( i = v2 - 1; (i & v2) != 0; v2 = i + 1 )
      i = v2 | (v2 - 1);
  }
  else
  {
    v2 = ExHandleTraceDbDefaultStacks;
  }
  v5 = 160LL * v2 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v2);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v7 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_14:
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    return result;
  }
  v9 = *(struct _KPROCESS **)(a1 + 16);
  if ( v9 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(struct _KPROCESS **)(a1 + 16), v5);
    if ( (int)result < 0 )
      goto LABEL_14;
  }
  Pool2 = ExAllocatePool2(64LL, v5, 1685348943LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    if ( v9 )
      PsReturnProcessNonPagedPoolQuota(v9, v5);
    return 3221225626LL;
  }
  *(_DWORD *)(Pool2 + 4) = v2;
  *(_DWORD *)Pool2 = 1;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 16) = 1;
  KeInitializeEvent((PRKEVENT)(Pool2 + 40), SynchronizationEvent, 0);
  if ( v9 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v13 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v11;
  if ( v13 )
  {
    if ( (v13[2] & 8) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_25:
    *(_DWORD *)(v11 + 8) = 8;
LABEL_26:
  *(_BYTE *)(a1 + 44) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(a1 + 56);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v13 )
    ExDereferenceHandleDebugInfo(a1, v13);
  return 0LL;
}
