/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14099B830
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A65C8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x14099BAD0 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x14098C64C (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( byte_140C39CE0[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
    }
    byte_140C39CE0[24 * a1] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
