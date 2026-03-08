/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x1403810E8
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403810B0 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405185E4 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProcessorStateByNtIndex(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 < (unsigned int)HalpInterruptProcessorCount )
    return *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8LL * a1);
  return result;
}
