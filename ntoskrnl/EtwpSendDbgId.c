/*
 * XREFs of EtwpSendDbgId @ 0x1409E9094
 * Callers:
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EtwpAddDebugInfoEvents @ 0x140772068 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140790E3C (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140790EB0 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1409E8F6C (EtwpSendBufferToDebugger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  int v6; // ebp
  __int128 *v7; // rdi
  __int64 Pool2; // rax

  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 824));
    v2 = *(_DWORD *)(a1 + 824);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 688);
      ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      v6 = MaxTrackingEventBufferSize;
      if ( MaxTrackingEventBufferSize )
      {
        Pool2 = ExAllocatePool2(64LL, MaxTrackingEventBufferSize, 1651995717LL);
        v7 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          EtwpInitializeProviderInfoBuffer(a1, Pool2, v6);
          EtwpAddDebugInfoEvents(a1, (__int64)v7, v6, 0LL, 0);
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      KeAbPostRelease((ULONG_PTR)v4);
      if ( v7 )
      {
        EtwpSendBufferToDebugger(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
