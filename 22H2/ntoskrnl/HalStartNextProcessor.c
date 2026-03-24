/*
 * XREFs of HalStartNextProcessor @ 0x1403A0DA0
 * Callers:
 *     HalpInterruptReinitialize @ 0x140995D68 (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037ADC4 (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1C74 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1404D19FC (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140999F64 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartNextProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int started; // edi

  if ( (unsigned int)HalpInterruptModel() - 1 > 3 || a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount() )
    return 2LL;
  started = HalpInterruptStartProcessor(a2, a3, 0LL, a1);
  if ( HalpInterruptBlockedProcessors )
  {
    if ( started == 4 )
      HalpInterruptStartBlockedProcessors(a2);
  }
  return started;
}
