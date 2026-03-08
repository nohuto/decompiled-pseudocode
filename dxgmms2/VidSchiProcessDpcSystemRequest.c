/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C00100E4
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C000AA50 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00104D4 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C0010564 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0010AD0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  __int64 v7; // r15
  unsigned __int64 QuadPart; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 **v16; // rax
  __int64 v17; // rdx
  __int64 **v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(unsigned int *)(v3 + 1560);
  QuadPart = v6.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v7 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v1);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, signed __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context running queue is inconsistant",
      v5,
      v1,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1560) = ((_BYTE)v7 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 728), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2888), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v9 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
  if ( v9 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v9 + 404), QuadPart);
  if ( *(int *)(v3 + 2872) > 0 )
    RtlSetBitEx(v5 + 488, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 184) & 1) != 0 )
      *(_DWORD *)(v1 + 184) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 12765);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
    v10 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v10 + 1776) )
      *(_DWORD *)(v3 + 1772) &= ~(1 << v10);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2900), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2896), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 732), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 724), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2884), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1580), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 784), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, 0LL, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 376);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1640);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1448) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1416), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1656);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1504) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1472), 0, 0);
  v11 = *(struct _KEVENT **)(a1 + 200);
  if ( v11 )
    KeSetEvent(v11, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v12 = *(_QWORD *)(v3 + 232);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 184) & 1) != 0 )
      {
        v14 = (__int64 *)(v12 + 8);
        v15 = *(__int64 **)(v12 + 8);
        if ( v15[1] != v12 + 8
          || (v16 = *(__int64 ***)(v12 + 16), *v16 != v14)
          || (*v16 = v15,
              v15[1] = (__int64)v16,
              v17 = 16LL * *(unsigned int *)(v12 + 404) + v3 + 2056,
              v18 = *(__int64 ***)(v17 + 8),
              *v18 != (__int64 *)v17) )
        {
          __fastfail(3u);
        }
        *v14 = v17;
        *(_QWORD *)(v12 + 16) = v18;
        *v18 = v14;
        *(_QWORD *)(v17 + 8) = v14;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v12);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 724) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1224LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1192LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
