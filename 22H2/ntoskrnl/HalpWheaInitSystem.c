/*
 * XREFs of HalpWheaInitSystem @ 0x14099FE50
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037ADC4 (HalpInterruptModel.c)
 *     HalpMcaInitializePcrContext @ 0x14099FEAC (HalpMcaInitializePcrContext.c)
 *     HalpWheaInitDiscard @ 0x140A63B9C (HalpWheaInitDiscard.c)
 */

__int64 HalpWheaInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 0LL;
  switch ( v0 )
  {
    case 19:
LABEL_7:
      HalpMcaInitializePcrContext();
      return 0LL;
    case 12:
      HalpWheaInitDiscard(v1);
      return 0LL;
    case 17:
      off_140C006C8[0] = (__int64 (__fastcall *)())HalpReadWheaPhysicalMemory;
      off_140C006D0[0] = (__int64 (__fastcall *)())HalpWriteWheaPhysicalMemory;
      goto LABEL_7;
  }
  return 0LL;
}
