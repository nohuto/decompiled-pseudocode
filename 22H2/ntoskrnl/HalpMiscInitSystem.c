/*
 * XREFs of HalpMiscInitSystem @ 0x1409A1190
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeKsr @ 0x1407C8B48 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8B90 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140A6D378 (HalpMiscInitDiscard.c)
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
