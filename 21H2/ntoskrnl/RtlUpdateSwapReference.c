/*
 * XREFs of RtlUpdateSwapReference @ 0x1407CACBC
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CAA94 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407CABF0 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228560 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x14022B670 (KeSubtractAffinityEx.c)
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 *     KeGenericProcessorCallback @ 0x1402EB178 (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x1402EC870 (PoCopyDeepIdleMask.c)
 *     KeRemoveProcessorAffinityEx @ 0x14033B4A0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // zf
  void *v8; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 v9[88]; // [rsp+40h] [rbp-C8h] BYREF

  result = memset(v9, 0, 0xA8uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    PoCopyDeepIdleMask(v9);
    KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v9, v9);
    KeRemoveProcessorAffinityEx(v9, KeGetPcr()->Prcb.Number);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v9) )
      KeGenericProcessorCallback(v9, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 0);
    v6 = _InterlockedExchangeAdd64(a1 + 1, v5);
    v7 = v5 + v6 == 0;
    result = (void *)(v5 + v6);
    v8 = result;
    if ( !v7 )
    {
      do
      {
        ExBlockOnAddressPushLock((__int64)(a1 + 2), (_QWORD *)a1 + 1, &v8, 8uLL, 0LL);
        result = (void *)*((_QWORD *)a1 + 1);
        v8 = result;
      }
      while ( result );
    }
  }
  return result;
}
