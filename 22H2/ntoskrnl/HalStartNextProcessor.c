/*
 * XREFs of HalStartNextProcessor @ 0x140377100
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A9550C (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051AB14 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140A895A0 (HalpInterruptStartProcessor.c)
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
