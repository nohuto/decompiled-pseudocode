/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A3BB8
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A38E4 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A39D4 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A3BEC (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHvDiscover @ 0x1403A3CCC (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4388 (HalpWdatDiscover.c)
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
