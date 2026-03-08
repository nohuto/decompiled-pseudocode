/*
 * XREFs of KelvinToCelsius @ 0x1C0014AF4
 * Callers:
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019AE0 (QueryTemperatureThresholdCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KelvinToCelsius(__int16 a1)
{
  if ( a1 )
    return (unsigned __int16)(a1 - 273);
  else
    return 4294934528LL;
}
