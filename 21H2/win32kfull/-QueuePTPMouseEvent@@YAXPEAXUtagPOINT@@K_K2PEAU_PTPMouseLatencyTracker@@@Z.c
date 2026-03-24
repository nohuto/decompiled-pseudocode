/*
 * XREFs of ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C02134E8
 * Callers:
 *     SendPTPAsMouse @ 0x1C0213E00 (SendPTPAsMouse.c)
 * Callees:
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C021347C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 */

void __fastcall QueuePTPMouseEvent(
        void *a1,
        struct tagPOINT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _PTPMouseLatencyTracker *a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    v13 = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    ++gdwPTPMouseEvents;
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    v14 = 6 * v13;
    *((_QWORD *)&gPTPMouseEventQueue + 6 * v13) = a1;
    *((_DWORD *)&gPTPMouseEventQueue + 2 * v14 + 4) = a3;
    *((struct tagPOINT *)&gPTPMouseEventQueue + v14 + 1) = a2;
    *((_QWORD *)&gPTPMouseEventQueue + v14 + 3) = a4;
    *((_QWORD *)&gPTPMouseEventQueue + v14 + 4) = a5;
    *((_QWORD *)&gPTPMouseEventQueue + v14 + 5) = a6;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    ++PTPTelemetry::Usage::gTPTelemState[22];
    InputTraceLogging::Mouse::DropInput(a4, v10, v11, v12);
  }
}
