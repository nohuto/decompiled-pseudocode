/*
 * XREFs of RtlUpdateSwapReference @ 0x1407CAFDC
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CADB4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407CAF10 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x14029DBC0 (PoCopyDeepIdleMask.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
