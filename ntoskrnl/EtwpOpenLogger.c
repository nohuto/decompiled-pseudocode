/*
 * XREFs of EtwpOpenLogger @ 0x140205B30
 * Callers:
 *     EtwpTraceMessageVa @ 0x140205450 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403858B4 (EtwpCCSwapFlush.c)
 *     EtwTraceEvent @ 0x14045FE22 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x1405FCD90 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FCF28 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1403BC590 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || (unsigned __int8)ObGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = v4;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    LOBYTE(v9) = *a4;
    EtwpCloseLogger((unsigned int)v4, a2, v9);
    return 0LL;
  }
  return result;
}
