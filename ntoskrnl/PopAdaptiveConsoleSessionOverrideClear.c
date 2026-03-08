/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x140998780
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x14073C624 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x140998A20 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x14098959C (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( byte_140C398E0[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
    }
    byte_140C398E0[24 * a1] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
