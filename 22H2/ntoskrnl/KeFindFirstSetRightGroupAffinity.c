/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140344540
 * Callers:
 *     MiReduceZeroingThreads @ 0x1403146D0 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x1403439C0 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x14035E380 (MiSetIdealProcessorThread.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140377A84 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A4EA0 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403AB330 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBBC0 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x1406C6A20 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
