/*
 * XREFs of EtwTraceTimedEvent @ 0x140338BB0
 * Callers:
 *     KiExpireTimer2 @ 0x140251960 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14031DED4 (KiFinalizeTimer2Disablement.c)
 *     PerfInfoLogInterrupt @ 0x140338B30 (PerfInfoLogInterrupt.c)
 *     HvcallFastExtended @ 0x1403CBB50 (HvcallFastExtended.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403CBC40 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     EtwpTraceFltTimedIo @ 0x140467AD0 (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogInterruptHv @ 0x140467CE0 (PerfInfoLogInterruptHv.c)
 *     IopTimerDispatch @ 0x140555D40 (IopTimerDispatch.c)
 *     EtwTraceCpuCacheFlush @ 0x1405FC95C (EtwTraceCpuCacheFlush.c)
 *     PerfInfoLogIpiReceive @ 0x1405FEAE0 (PerfInfoLogIpiReceive.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

void __fastcall EtwTraceTimedEvent(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int i; // [rsp+54h] [rbp-24h]

  v12[2] = a3;
  v7 = a2;
  v13 = a4;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v9 = !_BitScanForward((unsigned int *)&a3, v8);
  for ( i = 0; !v9; v9 = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    v10 = 32LL * (unsigned int)a3 + EtwpHostSiloState + 4284;
    if ( v10 )
    {
      if ( ((unsigned int)v7 & *(_DWORD *)(v10 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4233) - 1LL;
        v12[1] = 8LL;
        v12[0] = a6 + 8 * v11;
        EtwpLogKernelEvent(
          (__int64)v12,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232),
          2u,
          a1,
          a5);
      }
    }
  }
}
