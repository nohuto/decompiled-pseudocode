/*
 * XREFs of HalpMiscInitSystem @ 0x140A8E290
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x140851B78 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x140851BC0 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitDiscard @ 0x140B67248 (HalpMiscInitDiscard.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
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
