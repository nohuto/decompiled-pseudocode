/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403B1718
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403B06D8 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403B07C8 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403B174C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403B3240 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403B36BC (HalpHvDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  result = HalpTimerRegisterBuiltinPlugins();
  if ( (int)result >= 0 && a1 == 1 )
  {
    result = HalpHvDiscover();
    if ( (int)result >= 0 )
      return HalpWdatDiscover();
  }
  return result;
}
