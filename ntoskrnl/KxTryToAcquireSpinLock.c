/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14036B144
 * Callers:
 *     KiProcessNMI @ 0x140369160 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140462188 (EtwpCovSampTryAcquireBufferLock.c)
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FDE54 (HalpDmaGetNextTranslatedDevice.c)
 *     HalpHandleMachineCheck @ 0x140500F10 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140501B48 (HalpMceHandlerCore.c)
 *     PopFxComponentRelationsCleanup @ 0x140587474 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140587938 (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x1405E3D90 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140457EEC (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(a1);
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
