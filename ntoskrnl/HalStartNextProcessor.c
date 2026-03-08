/*
 * XREFs of HalStartNextProcessor @ 0x140371EB0
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405185E4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
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
