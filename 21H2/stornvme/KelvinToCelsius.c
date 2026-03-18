/*
 * XREFs of KelvinToCelsius @ 0x1C001C6CC
 * Callers:
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0020390 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0020570 (QueryTemperatureThresholdCompletion.c)
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
