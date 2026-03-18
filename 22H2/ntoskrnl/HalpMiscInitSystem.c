/*
 * XREFs of HalpMiscInitSystem @ 0x140A91720
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x1408559A8 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x1408559F0 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitDiscard @ 0x140B6B0D8 (HalpMiscInitDiscard.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 */

__int64 __fastcall HalpMiscInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      HalpMiscInitDiscard();
    }
    else if ( a1 == 31 )
    {
      HalpMiscInitializeTelemetry();
      HalpMiscInitializeKsr();
    }
  }
  else
  {
    HalpMiscGetParameters(a3);
  }
  return 0LL;
}
