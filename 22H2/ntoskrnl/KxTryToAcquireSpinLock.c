/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14020D904
 * Callers:
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KiProcessNMI @ 0x14020EA80 (KiProcessNMI.c)
 *     EtwpTraceStackKey @ 0x140468F10 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14046A088 (EtwpCovSampTryAcquireBufferLock.c)
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FFF34 (HalpDmaGetNextTranslatedDevice.c)
 *     HalpHandleMachineCheck @ 0x140502FF0 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140503C28 (HalpMceHandlerCore.c)
 *     PopFxComponentRelationsCleanup @ 0x1405899A4 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140589E68 (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x1405E6240 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x14045FE8C (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
