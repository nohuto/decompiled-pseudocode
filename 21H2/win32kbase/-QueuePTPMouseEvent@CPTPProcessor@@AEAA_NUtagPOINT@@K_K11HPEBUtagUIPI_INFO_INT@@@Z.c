/*
 * XREFs of ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DF63C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DDDC4 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CPTPProcessor::QueuePTPMouseEvent(
        LARGE_INTEGER *this,
        struct tagPOINT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        const struct tagUIPI_INFO_INT *a8)
{
  LONG x; // ebx
  char v12; // di
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rdx
  LARGE_INTEGER v15; // r8
  char v16; // cl
  __int64 v17; // rcx
  char *v18; // rcx
  LARGE_INTEGER v19; // xmm1_8
  _BYTE v21[20]; // [rsp+20h] [rbp-28h]
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  RIMLockExclusive((__int64)&CPTPProcessor::s_queueLock);
  if ( CPTPProcessor::s_dwPTPMouseEvents < 0x40 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = CPTPProcessor::s_dwPTPQueueHead;
    this[304] = PerformanceCounter;
    v17 = (v16 + 1) & 0x3F;
    *(_DWORD *)v21 = 0x800000;
    CPTPProcessor::s_dwPTPQueueHead = v17;
    v18 = (char *)&CPTPProcessor::s_PTPMouseEventQueue + 128 * v17;
    *(LARGE_INTEGER *)v18 = this[64];
    *((_QWORD *)v18 + 5) = a5;
    *((_QWORD *)v18 + 6) = a6;
    *((_QWORD *)v18 + 4) = a4;
    *(_OWORD *)(v18 + 56) = *(_OWORD *)&this[300].LowPart;
    *(_OWORD *)(v18 + 72) = *(_OWORD *)&this[302].LowPart;
    *(_OWORD *)(v18 + 88) = *(_OWORD *)&this[304].LowPart;
    v19 = this[306];
    v12 = 1;
    *((_DWORD *)v18 + 28) = a7;
    *((LARGE_INTEGER *)v18 + 13) = v19;
    PerformanceCounter.LowPart = *((_DWORD *)a8 + 2);
    *(_QWORD *)(v18 + 116) = *(_QWORD *)a8;
    *((_DWORD *)v18 + 31) = PerformanceCounter.LowPart;
    *(_OWORD *)&v21[4] = 0LL;
    *(_OWORD *)(v18 + 8) = *(_OWORD *)v21;
    *((_QWORD *)v18 + 3) = 0LL;
    if ( (a3 & 2) != 0 )
    {
      *((_WORD *)v18 + 6) |= 1u;
    }
    else
    {
      v14.QuadPart = 4LL;
      switch ( a3 )
      {
        case 4:
          *((_WORD *)v18 + 6) |= 2u;
          goto LABEL_6;
        case 8:
          *((_WORD *)v18 + 6) |= 4u;
          goto LABEL_6;
        case 16:
          *((_WORD *)v18 + 6) |= 8u;
          goto LABEL_6;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      *((_DWORD *)v18 + 6) = y;
      *((_DWORD *)v18 + 5) = x;
LABEL_16:
      ++CPTPProcessor::s_dwPTPMouseEvents;
      goto LABEL_17;
    }
LABEL_6:
    if ( *((_DWORD *)v18 + 5) || *((_DWORD *)v18 + 6) )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
        v18,
        (LARGE_INTEGER)v14.QuadPart,
        (LARGE_INTEGER)v15.QuadPart);
    goto LABEL_16;
  }
  ++dword_1C029D8D8;
  InputTraceLogging::Mouse::DropInput();
  v12 = 0;
LABEL_17:
  qword_1C029A1D8 = 0LL;
  ExReleasePushLockExclusiveEx(&CPTPProcessor::s_queueLock, 0LL);
  KeLeaveCriticalRegion();
  return v12;
}
