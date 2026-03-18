/*
 * XREFs of TemperatureFromKelvinToCelsius @ 0x1C001B784
 * Callers:
 *     LogSenseTemperature @ 0x1C0014D70 (LogSenseTemperature.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015D90 (NVMeGetLogPageHealthInfoCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TemperatureFromKelvinToCelsius(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return 255LL;
  if ( a1 > 0x20Fu )
    return 254LL;
  if ( a1 <= 0x111u )
    return 0LL;
  return (unsigned __int16)(a1 - 273);
}
