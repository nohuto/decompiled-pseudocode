/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C000FCEC
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C000AA50 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00104D4 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C0010564 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiRewindPacket @ 0x1C0010730 (VidSchiRewindPacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1C00107E8 (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0010AD0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0010B0C (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0010B90 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0010C38 (VidSchiFinishMeasuringPreemptionTime.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER v5; // r13
  LARGE_INTEGER PerformanceCounter; // r15
  _QWORD *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // rcx
  struct _KEVENT *v15; // rcx
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  PerformanceCounter = v5;
  v7 = (_QWORD *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  memset(v7, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !v5.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7[1] = PerformanceCounter.QuadPart;
  *(_DWORD *)v7 = 5;
  v8 = *(unsigned int *)(v3 + 1560);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v8 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v4, v1);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, signed __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context running queue is inconsistant",
      v4,
      v1,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1560) = ((_BYTE)v8 + 1) & 0xF;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 88) + 168LL) = *(_QWORD *)(v9 + 112);
    v7[3] = *(_QWORD *)(v9 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 128), 1u);
    VidSchiRewindPacket(v9, 1LL, 0LL, 1LL);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 812));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 728));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2888));
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    v5.QuadPart,
    PerformanceFrequency.QuadPart);
  v10 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
  if ( v10 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v10 + 404), v5.QuadPart);
  if ( *(int *)(v3 + 2872) > 0 )
    RtlSetBitEx(v4 + 488, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~8u;
    if ( (*(_DWORD *)(v1 + 184) & 0x20) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x20u;
    if ( (*(_DWORD *)(v1 + 184) & 0x10) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x10u;
    if ( (*(_DWORD *)(v1 + 184) & 0x40) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x40u;
    *(_DWORD *)(v1 + 184) &= ~2u;
    v11 = VidSchiCompleteRewindPacket(v1, 1LL);
    LOBYTE(v12) = 1;
    v13 = v11;
    VidSchiSetTransferContextRunningTime(v1, 0LL, v12);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
    v14 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v14 + 1776) )
      *(_DWORD *)(v3 + 1772) &= ~(1 << v14);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  else
  {
    v13 = 0;
  }
  v7[2] = *(_QWORD *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, 0LL, 0LL, 0LL, a1, 0LL);
  v15 = *(struct _KEVENT **)(a1 + 200);
  if ( v15 )
    KeSetEvent(v15, 0, 0);
  VidSchiSignalRegisteredEvent(v4, v1 + 376);
  VidSchiSignalRegisteredEvent(v4, v3 + 408);
  VidSchiSignalRegisteredEvent(v4, v4 + 1640);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1448) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1416), 0, 0);
  if ( v13 )
  {
    *(_QWORD *)(v4 + 1224) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1192), 0, 0);
  }
  return result;
}
