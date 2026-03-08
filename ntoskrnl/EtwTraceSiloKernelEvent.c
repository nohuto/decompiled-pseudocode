/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x14035EC20
 * Callers:
 *     EtwpTraceImageUnload @ 0x14035E3D0 (EtwpTraceImageUnload.c)
 *     EtwpTraceFileName @ 0x14035E5C0 (EtwpTraceFileName.c)
 *     EtwpTraceIo @ 0x14035E9C0 (EtwpTraceIo.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14045EA22 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14045EAC6 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14045EB78 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x14045EC72 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 *     EtwpTraceIoInit @ 0x14045FC10 (EtwpTraceIoInit.c)
 *     EtwpProfileInterrupt @ 0x1405FBC20 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x1405FC520 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FC7B0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FC840 (PerfInfoLogSysCallExit.c)
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x1407EBAB0 (EtwTraceThread.c)
 *     PerfLogImageLoad @ 0x1407EC064 (PerfLogImageLoad.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E3360 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E41C8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E42D4 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v9 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4284;
    if ( v13 && ((unsigned int)v9 & *(_DWORD *)(v13 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
      EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232), a3, a5, a6);
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 864LL);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4248);
      for ( i = !_BitScanForward(&v16, v15); !i; i = !_BitScanForward(&v16, v15) )
      {
        v17 = v16;
        v15 &= v15 - 1;
        v18 = 32LL * v16 + v14 + 4284;
        if ( v18 )
        {
          if ( ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
            EtwpLogKernelEvent(a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4232), a3, a5, a6);
        }
      }
    }
  }
}
